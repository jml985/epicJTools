#include "DIS.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <functions.h>
#include <vector>
#include <map>
#include <string>

#define IDX_DIS 0
#define IDX_ELECTRON 1
#define IDX_PROTON 2
#define IDX_SYNC 3
#define IDX_NOISE 4
#define IDX_TOTAL 5
#define N_TYPES 6

std::vector<std::string> datatypes = {"DIS", "Electron", "Proton", "Synchrotron", "noise", "total"};

std::vector<Double_t> base_rates = { 83e3,  3.177e6, 32.6e3, 0,0,0};  // 18x275,  e-10GeV@10kAhr p-275GeV@10kAhr
//std::vector<Double_t> base_rates = { 500e3, 3.415e7, 350.3e3, 0,0,0}; // 10x275,  e-10GeV@100Ahr p-275GeV@100Ahr   
std::vector<Double_t> number_of_events = { 1504405, 1992000 , 500000,0,0,0 };

std::vector<std::vector<std::string> *> detnames;
std::vector<std::vector<std::map<ULong_t, Int_t>> *> channel_hits;
std::vector<std::vector<std::map<ULong_t, Int_t>> *> asic_hits;
std::vector<std::vector<std::map<ULong_t, Int_t>> *> rdo_hits;



class DataVolumes {
private:
    functions fun;

public:
    static Double_t count2rate(Int_t type, Int_t hits) {
	Double_t rate = hits;
	rate *= base_rates[type];
	rate /= number_of_events[type];
	return rate;
    }

    static void insertOrAddRate(std::map<ULong_t, std::vector<Double_t>> &map, ULong_t cell, Int_t type, Double_t rate) {
	if(map.find(cell) == map.end()) {
	    std::vector<Double_t> rates(N_TYPES,0);
	    rates[type] = rate;
	    rates[IDX_TOTAL] = rate;
	    //printf("xxx   %zu == %lf\n", cell, rate);
	    map[cell] = rates;
	}
	else {
	    map[cell][type] += rate;
	    map[cell][IDX_TOTAL] += rate;
	}
    }

    void setMin(std::vector<Double_t> &vec, ULong_t idx, std::vector<Double_t> &ch_min, std::vector<ULong_t> &ch_min_idx) {
	for(int type=0;type<N_TYPES;type++) {
	    if((vec[type] != 0) && (vec[type] < ch_min[type])) {
		ch_min[type] = vec[type];
		ch_min_idx[type] = idx;
	    }
	}
    }
    void setMax(std::vector<Double_t> &vec, ULong_t idx, std::vector<Double_t> &ch_max, std::vector<ULong_t> &ch_max_idx) {
	for(int type=0;type<N_TYPES;type++) {
	    if(vec[type] > ch_max[type]) {
		ch_max[type] = vec[type];
		ch_max_idx[type] = idx;
	    }
	}
    }
    
    void setAdd(std::vector<Double_t> &vec, std::vector<Double_t> &avg) {
	for(int type=0;type<N_TYPES;type++) {
	    avg[type] += vec[type];
	}
    }

    std::vector<Double_t> getAverage(Long_t count, std::vector<Double_t> vec) {
	std::vector<Double_t> avg(vec.size(),0);
	if(count == 0) return avg;

	for(int i=0;i<vec.size();i++) {
	    avg[i] = vec[i] / count;
	}

	return avg;
    }
	    
    std::string pp(std::vector<ULong_t> &arr) {
	
	std::string xx;
	for(int i=0;i<N_TYPES;i++) {
	    char tmp[40];

	    ULong_t x = arr[i];
	    sprintf(tmp, "%016lx ", x);

	    xx += tmp;
	}
	return xx;
    }

    std::string pp(std::vector<Double_t> &arr) {
	std::string xx;
	for(int i=0;i<N_TYPES;i++) {
	    Double_t x = arr[i];
	    char tmp[40];
	    if((x == 1e15)||(x == 0)) {
		sprintf(tmp, "%16s ", " " );
	    }
	    else if(x > 1e9) {
		sprintf(tmp, "%12.1lf GHz ", x/1e9);
	    }
	    else if(x > 1e6) {
		sprintf(tmp, "%12.1lf MHz ", x/1e6);
	    }
	    else if(x > 1e3) {
		sprintf(tmp, "%12.1lf kHz ", x/1e3);
	    }
	    else if(x > 1) {
		sprintf(tmp, "%12.1lf  Hz ", x);
	    }
	    else {
		sprintf(tmp, "%12.3lf  Hz ", x);
	    }
	    xx += tmp;
	}
	return xx;
    }

    std::string ppThr(std::vector<Double_t> &arr) {
	std::string xx;
	for(int i=0;i<N_TYPES;i++) {
	    Double_t x = arr[i];
	    char tmp[40];
	    if((x == 1e15)||(x == 0)) {
		sprintf(tmp, "%16s ", " " );
	    }
	    else if(x > 1e9) {
		sprintf(tmp, "%11.1lf Gbps ", x/1e9);
	    }
	    else if(x > 1e6) {
		sprintf(tmp, "%11.1lf Mbps ", x/1e6);
	    }
	    else if(x > 1e3) {
		sprintf(tmp, "%11.1lf kbps ", x/1e3);
	    }
	    else if(x > 1) {
		sprintf(tmp, "%11.1lf  bps ", x);
	    }
	    else {
		sprintf(tmp, "%11.3lf  bps ", x);
	    }
	    xx += tmp;
	}
	return xx;
    }

		
	    
 
    void writeDetectorHeader(std::string detname) {
	printf("%-20s %16s %16s %16s %16s %16s %16s\n", detname.c_str(), "DIS", "Electron Beam", "Proton Beam Gas", "synchrotron", "Noise", "Total");
	printf("%-20s %16s %16s %16s %16s %16s %16s\n", "--------------------", "---", "--------------", "---------------", "----------", "-----", "-----");
    }

    void writeDetector(UInt_t nhits, 
		       std::string type,
		       std::vector<Double_t> &min, std::vector<ULong_t> &min_idx,
		       std::vector<Double_t> &max, std::vector<ULong_t> &max_idx,
		       std::vector<Double_t> &sum) {
	printf("%10s%10s %s\n", type.c_str(), "Min: ", pp(min).c_str());
	//printf("%30s %s\n", "Min IDX:", pp(min_idx).c_str());
	printf("%10s%10s %s\n", type.c_str(), "Max: ", pp(max).c_str());
	//printf("%30s %s\n", "Max IDX:", pp(max_idx).c_str());

	std::vector<Double_t> avg(N_TYPES, 0);
	for(int i=0;i<N_TYPES;i++) {
	    if(nhits == 0) 
		avg[i] = 0;
	    else 
		avg[i] = sum[i]/nhits;
	}
	printf("%10s%10s %s\n", type.c_str(), "Avg: ", pp(avg).c_str());
	//printf("%10s%10s %s\n", type.c_str(), "Sum: ", pp(sum).c_str());	
    }
    
    void writeDetectorLine(std::string type, std::string label, std::vector<Double_t> &x) {
	Double_t sum = 0;
	for(auto xx : x) sum += xx;
	if(sum == 0) return;
	printf("%10s%10s %s\n", type.c_str(), label.c_str(), pp(x).c_str());
    }
    
    void writeDetectorLine(std::string type, std::string label, std::vector<ULong_t> &x) {
	Double_t sum = 0;
	for(auto xx : x) sum += xx;
	if(sum == 0) return;
	printf("%10s%10s %s\n", type.c_str(), label.c_str(), pp(x).c_str());
    }
      
    void writeDetectorLineThr(std::string type, std::string label, std::vector<Double_t> &x) {
	Double_t sum = 0;
	for(auto xx : x) sum += xx;
	if(sum == 0) return;
	printf("%10s%10s %s\n", type.c_str(), label.c_str(), ppThr(x).c_str());
    }
    
    void run() {
	datatypes = {"DIS", "Electron", "Proton", "Synchrotron", "noise", "total"};
    
	for(int i=0;i<N_TYPES;i++) {
	    std::vector<std::string> *tmp0;
	    std::vector<std::map<ULong_t, Int_t>> *tmp;
	
	    detnames.push_back(tmp0);
	    channel_hits.push_back(tmp);
	    asic_hits.push_back(tmp);
	    rdo_hits.push_back(tmp);
	}
    
	TFile *f = TFile::Open("DIS_Data.root");
   
	f->GetObject("detnames", detnames[0]);
	f->GetObject("channel_hits", channel_hits[0]);
	f->GetObject("asic_hits", asic_hits[0]);
	f->GetObject("rdo_hits", rdo_hits[0]);
	f->Close();

	f = TFile::Open("electronBeam_Data.root"); 
	f->GetObject("detnames", detnames[1]);
	f->GetObject("channel_hits", channel_hits[1]);
	f->GetObject("asic_hits", asic_hits[1]);
	f->GetObject("rdo_hits", rdo_hits[1]);
	f->Close();
    
	f = TFile::Open("protonBeam_Data.root");  
	f->GetObject("detnames", detnames[2]);
	f->GetObject("channel_hits", channel_hits[2]);
	f->GetObject("asic_hits", asic_hits[2]);
	f->GetObject("rdo_hits", rdo_hits[2]);
	f->Close();


	printf("\n\nBase rates: %5.1fkHz DIS,  %5.1f kHz Protons,  %5.1f kHz Electron BeamGas\n\n", base_rates[0]/1000, base_rates[1]/1000, base_rates[2]/1000);

	printf("%27s %12s %12s %12s\n", "detector", "#channel", "#asic", "#rdo");
	printf("%27s %12s %12s %12s\n", "--------", "--------", "-----", "----");

	for(int det=0;det<detnames[0]->size();det++) {
	    int chcnt=0;
	    int asiccnt=0;
	    int rdocnt=0;
	    
	    for(int i=0;i<3;i++) {
		int tmp = (*channel_hits[i])[det].size();
		if(tmp > chcnt) chcnt = tmp;
		tmp = (*asic_hits[i])[det].size();
		if(tmp > asiccnt) asiccnt = tmp;
		tmp = (*rdo_hits[i])[det].size();
		if(tmp > rdocnt) rdocnt = tmp;
	    }
	    

	    printf("[%24s]: %12d %12d %12d\n", (*detnames[0])[det].c_str(),  chcnt, asiccnt, rdocnt);
	}
    
	
	printf("\n\n\n");


	for(int det=0;det<detnames[0]->size();det++) {
	    // Fill Channels
	    //printf("xxx Det %d\n", det);
	
	    // Build channel counts
	    std::map<ULong_t, std::vector<Double_t>> ch_hits_ps;
	    for(int type=0;type<3;type++) {                      // each type of background
		for(auto &[cell, count] : (*channel_hits[type])[det]) {
		    Double_t hits = count2rate(type, count);
		    insertOrAddRate(ch_hits_ps, cell, type, hits);
		}
	    }
	    for(auto &[cell, vec] : ch_hits_ps) {
		Double_t noise_hits = fun.detectorNoise(det, 0);
		vec[IDX_NOISE] = noise_hits;
		vec[IDX_TOTAL] += noise_hits;
	    }
    
	    //printf("a\n");

	    // Build ASIC counts
	    std::map<ULong_t, std::vector<Double_t>> asic_hits_ps;
	    std::map<ULong_t, std::vector<Double_t>> asic_bits_ps;
	    for(int type=0;type<3;type++) {                      // each type of background
		for(auto &[cell, count] : (*asic_hits[type])[det]) {
		    Double_t hits = count2rate(type, count);
		    Double_t bits = hits * fun.asicBits(det, 1); 
		    insertOrAddRate(asic_hits_ps, cell, type, hits);	
		    insertOrAddRate(asic_bits_ps, cell, type, bits);
		}
	    }
	    for(auto & [cell, vec]: asic_hits_ps) {
		Double_t noise_hits = fun.detectorNoise(det, 1);
		vec[IDX_NOISE] = noise_hits;
		vec[IDX_TOTAL] += noise_hits;
	    }
	    for(auto &[cell, vec]: asic_bits_ps) {
		Double_t noise_bits = fun.detectorNoise(det, 1) * fun.asicBits(det, 1);
		vec[IDX_NOISE] = noise_bits;
		vec[IDX_TOTAL] += noise_bits;
	    }

	    //printf("\b");

	    // Build RDO counts
	    std::map<ULong_t, std::vector<Double_t>> rdo_hits_ps;
	    std::map<ULong_t, std::vector<Double_t>> rdo_bits_ps;
	    std::map<ULong_t, std::vector<Double_t>> rdo_bits_post_trigger_ps;
	    for(int type=0;type<3;type++) {                      // each type of background
		for(auto &[cell, count] : (*rdo_hits[type])[det]) {
		    Double_t hits = count2rate(type, count);
		    Double_t noise = fun.detectorNoise(det,2);
		    Double_t noise_post_trigger = fun.detectorNoise(det, 3);
		    Double_t bits = hits * fun.asicBits(det, 1);
		    Double_t bits_post_trigger = hits * fun.asicBits(det, 2);

		    insertOrAddRate(rdo_hits_ps, cell, type, hits);
		    insertOrAddRate(rdo_bits_ps, cell, type, bits);
		    insertOrAddRate(rdo_bits_post_trigger_ps, cell, type, bits_post_trigger);
		}
	    }
	    for(auto & [cell, vec]: rdo_hits_ps) {
		Double_t noise_hits = fun.detectorNoise(det, 2);
		vec[IDX_NOISE] = noise_hits;
		vec[IDX_TOTAL] += noise_hits;
	    }
	    for(auto & [cell, vec]: rdo_bits_ps) {
		Double_t noise_bits = fun.detectorNoise(det, 2) * fun.asicBits(det,1);
		vec[IDX_NOISE] = noise_bits;
		vec[IDX_TOTAL] += noise_bits;
	    }   
	    for(auto & [cell, vec]: rdo_bits_post_trigger_ps) {
		Double_t noise_bits_post_trigger = fun.detectorNoise(det, 3) * fun.asicBits(det,1);
		vec[IDX_NOISE] = noise_bits_post_trigger;
		vec[IDX_TOTAL] += noise_bits_post_trigger;
	    }   


	    //printf("c\n");

	    if(rdo_hits_ps.size() == 0) continue;


	    writeDetectorHeader((*detnames[0])[det]);

	    // hit rate             // histo, avg, min, max
	    std::vector<Double_t> ch_min(N_TYPES,1e15);
	    std::vector<ULong_t> ch_min_idx(N_TYPES,0ll);
	    std::vector<Double_t> ch_sum(N_TYPES,0);
	    std::vector<Double_t> ch_max(N_TYPES,0);
	    std::vector<ULong_t> ch_max_idx(N_TYPES,0ll);
	    for(auto &[cell, vec] : ch_hits_ps) {
		setMin(vec, cell, ch_min, ch_min_idx);
		setMax(vec, cell, ch_max, ch_max_idx);
		setAdd(vec, ch_sum);
	    }
	    writeDetector(ch_hits_ps.size(), "channel", ch_min, ch_min_idx, ch_max, ch_max_idx, ch_sum);

	    // asic hit rate
	    std::vector<Double_t> asic_min(N_TYPES,1e15);
	    std::vector<ULong_t> asic_min_idx(N_TYPES,0);
	    std::vector<Double_t> asic_sum(N_TYPES,0);
	    std::vector<Double_t> asic_max(N_TYPES,0);
	    std::vector<ULong_t> asic_max_idx(N_TYPES,0);
	    for(auto &[cell, vec] : asic_hits_ps) {
		setMin(vec, cell, asic_min, asic_min_idx);
		setMax(vec, cell, asic_max, asic_max_idx);
		setAdd(vec, asic_sum);
	    }
	    writeDetector(asic_hits_ps.size(), "asic", asic_min, asic_min_idx, asic_max, asic_max_idx, asic_sum);

	    // rdo hit rate
	    std::vector<Double_t> rdo_min(N_TYPES,1e15);
	    std::vector<ULong_t> rdo_min_idx(N_TYPES,0);
	    std::vector<Double_t> rdo_sum(N_TYPES,0);
	    std::vector<Double_t> rdo_max(N_TYPES,0);
	    std::vector<ULong_t> rdo_max_idx(N_TYPES,0);
	    for(auto &[cell, vec] : rdo_hits_ps) {
		setMin(vec, cell, rdo_min, rdo_min_idx);
		setMax(vec, cell, rdo_max, rdo_max_idx);
		setAdd(vec, rdo_sum);
	    }
	    writeDetector(rdo_hits_ps.size(), "rdo", rdo_min, rdo_min_idx, rdo_max, rdo_max_idx, rdo_sum);

	    writeDetectorLine("channel", "Sum: ", ch_sum);
	    writeDetectorLine("asic", "Sum: ", asic_sum);
	    writeDetectorLine("rdo", "Sum: ", rdo_sum);

	    writeDetectorLine("channel", "MinIdx: ", ch_min_idx);
	    writeDetectorLine("channel", "MaxIdx: ", ch_max_idx);
	    writeDetectorLine("asic", "MinIdx: ", asic_min_idx);
	    writeDetectorLine("asic", "MaxIdx: ", asic_max_idx);
	    writeDetectorLine("rdo", "MinIdx: ", rdo_min_idx);
	    writeDetectorLine("rdo", "MaxIdx: ", rdo_max_idx);
	    
	    // data per asic
	    std::vector<Double_t> asic_data_min(N_TYPES,1e15);
	    std::vector<ULong_t> asic_data_min_idx(N_TYPES,0);
	    std::vector<Double_t> asic_data_sum(N_TYPES,0);
	    std::vector<Double_t> asic_data_max(N_TYPES,0);
	    std::vector<ULong_t> asic_data_max_idx(N_TYPES,0);
	    for(auto &[cell, vec] : asic_bits_ps) {
		setMin(vec, cell, asic_data_min, asic_data_min_idx);
		setMax(vec, cell, asic_data_max, asic_data_max_idx);
		setAdd(vec, asic_data_sum);
	    }
	    std::vector<Double_t> asic_data_avg = getAverage(asic_bits_ps.size(), asic_data_sum);
	    
	    writeDetectorLineThr("asic data", "min: ", asic_data_min);
	    writeDetectorLineThr("asic data", "max: ", asic_data_max);
	    writeDetectorLineThr("asic data", "avg: ", asic_data_avg);

	    // data per rdo
	    std::vector<Double_t> rdo_data_min(N_TYPES,1e15);
	    std::vector<ULong_t> rdo_data_min_idx(N_TYPES,0);
	    std::vector<Double_t> rdo_data_sum(N_TYPES,0);
	    std::vector<Double_t> rdo_data_max(N_TYPES,0);
	    std::vector<ULong_t> rdo_data_max_idx(N_TYPES,0);
	    for(auto &[cell, vec] : rdo_bits_ps) {
		setMin(vec, cell, rdo_data_min, rdo_data_min_idx);
		setMax(vec, cell, rdo_data_max, rdo_data_max_idx);
		setAdd(vec, rdo_data_sum);
	    }
	    std::vector<Double_t> rdo_data_avg = getAverage(rdo_bits_ps.size(), rdo_data_sum);
	    
	    writeDetectorLineThr("rdo data", "min: ", rdo_data_min);
	    writeDetectorLineThr("rdo data", "max: ", rdo_data_max);
	    writeDetectorLineThr("rdo data", "avg: ", rdo_data_avg);
	    
	    writeDetectorLineThr("rdo data", "sum: ", rdo_data_sum);

	    // data to tape	    
	    std::vector<Double_t> rdo_data_post_trigger_sum(N_TYPES,0);
	    for(auto &[cell, vec] : rdo_bits_post_trigger_ps) {
		setAdd(vec, rdo_data_post_trigger_sum);
	    }
	    
	    writeDetectorLineThr("to tape", "sum", rdo_data_post_trigger_sum);

	    //rdo_hits_ps[IDX_NOISE] = detectorNoise(det, 3);
	    //writeDetectorLine("rdo", "hitsToTape: ", rdo_hits_ps[
	    printf("\n\n\n");

	}
    }
};

void finalizeDataVolumes() {
    DataVolumes x;
    x.run();
}

#ifndef functions_h
#define functions_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

struct  JmlHit {
  ULong_t CellId;
  Float_t x;
  Float_t y;
  Float_t z;
};
  
class functions {
public:
    TCanvas *jmlcanvas;
    TFile *store;
    
    TH1D *hits_number_th;
    TH2D *RZ_alldet;
    TH2D *XY_alldet;

    std::vector<TH2D *> RZ_hist;
    std::vector<TH2D *> XY_hist;
    
    std::vector<std::string> detnames;
    std::vector<std::vector<Int_t>> detLocal;
    std::vector<Int_t> detids;
    std::vector<std::unordered_map<ULong_t, Int_t>> det_hitcells;

    Int_t DET_ZDCHcal;
    Int_t DET_LowQ2Tracker;
    Int_t DET_LowQ2Cal;
    Int_t DET_LumiPairSpecCal;
    Int_t DET_LumiPairSpecTrack;
    Int_t DET_LumiDirectPhoton;

    Int_t DET_B0ECal;
    Int_t DET_B0Tracker;
    Int_t DET_BackwardMPGDEndcap;
    Int_t DET_EcalBarrelImaging;
    Int_t DET_EcalBarrelScFi;
    Int_t DET_EcalEndcapN;
    Int_t DET_EcalEndcapPInsert;
    Int_t DET_EcalEndcapP;
    Int_t DET_EcalLumiSpec;
    Int_t DET_ForwardMPGDEndcap;
    Int_t DET_HcalBarrel;
    Int_t DET_HcalEndcapN;
    Int_t DET_HcalEndcapPInsert;
    Int_t DET_LFHCAL;
    Int_t DET_MPGDBarrel;
    Int_t DET_MPGDDIRC;
    Int_t DET_OuterMPGDBarrel;
    Int_t DET_SiBarrelTracker;
    Int_t DET_SiBarrelVertex;
    Int_t DET_SiEndcapTracker;
    Int_t DET_TOFEndcap;
    Int_t DET_ZDCEcal;

    Int_t DET_TOFBarrel;
    Int_t DET_RP;
    Int_t DET_OffM;
    Int_t DET_dRICH;
    Int_t DET_pfRICH ;
    Int_t DET_DIRC;

    Int_t DET_cnt;

public:
    functions() {
    	DET_cnt = 0;
	// Si Tracking
	detnames.push_back("SiBarrelTracker");  detLocal.push_back({8,2,3,4}); DET_SiBarrelTracker = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("SiBarrelVertex");  detLocal.push_back({8,2,3,4}); DET_SiBarrelVertex = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("SiEndcapTracker");  detLocal.push_back({8,2,3,4});  DET_SiEndcapTracker = DET_cnt; detids.push_back(DET_cnt++);
	// MPGD
	detnames.push_back("BackwardMPGDEndcap");  detLocal.push_back({8,2,3,4});  DET_BackwardMPGDEndcap = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("ForwardMPGDEndcap");  detLocal.push_back({8,2,3,4});  DET_ForwardMPGDEndcap = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("MPGDBarrel");  detLocal.push_back({8,2,3,4});  DET_MPGDBarrel = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("OuterMPGDBarrel");  detLocal.push_back({8,2,3,4});  DET_OuterMPGDBarrel = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("MPGDDIRC");  detLocal.push_back({8,2,3,4});  DET_MPGDDIRC = DET_cnt; detids.push_back(DET_cnt++);
	// Forward CAL
	detnames.push_back("LFHCAL");  detLocal.push_back({8,2,3,4});  DET_LFHCAL = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("HcalEndcapPInsert");  detLocal.push_back({8,2,3,4});  DET_HcalEndcapPInsert = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("EcalEndcapP");  detLocal.push_back({8,2,3,4});  DET_EcalEndcapP = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("EcalEndcapPInsert");  detLocal.push_back({8,2,3,4});  DET_EcalEndcapPInsert = DET_cnt; detids.push_back(DET_cnt++);
	// Backward CAL
	detnames.push_back("HcalEndcapN");  detLocal.push_back({8,2,3,4});  DET_HcalEndcapN = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("EcalEndcapN");  detLocal.push_back({8,2,3,4});  DET_EcalEndcapN = DET_cnt; detids.push_back(DET_cnt++);
	// Barrel CAL
	detnames.push_back("HcalBarrel");  detLocal.push_back({8,2,3,4});  DET_HcalBarrel = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("EcalBarrelImaging");  detLocal.push_back({8,2,3,4});  DET_EcalBarrelImaging = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("EcalBarrelScFi");  detLocal.push_back({8,2,3,4});  DET_EcalBarrelScFi = DET_cnt; detids.push_back(DET_cnt++);
	// PID TOF
	detnames.push_back("TOFBarrel");  detLocal.push_back({8,2,3,4});  DET_TOFBarrel = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("TOFEndcap");  detLocal.push_back({8,2,3,4});  DET_TOFEndcap = DET_cnt; detids.push_back(DET_cnt++);
	// PID Cherenkov
	detnames.push_back("dRICH");  detLocal.push_back({8,2,3,4});  DET_dRICH = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("pfRICH");  detLocal.push_back({8,2,3,4});  DET_pfRICH = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("DIRC");  detLocal.push_back({8,2,3,4});  DET_DIRC = DET_cnt; detids.push_back(DET_cnt++);
	// Far Forward
	detnames.push_back("B0ECal");  detLocal.push_back({8,2,3,4});  DET_B0ECal = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("B0Tracker");  detLocal.push_back({8,2,3,4});  DET_B0Tracker = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("RP");  detLocal.push_back({8,2,3,4});  DET_RP = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("OffM");  detLocal.push_back({8,2,3,4});  DET_OffM = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("ZDCHcal");  detLocal.push_back({8,2,3,4});  DET_ZDCHcal = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("ZDCEcal");  detLocal.push_back({8,2,3,4});  DET_ZDCEcal = DET_cnt; detids.push_back(DET_cnt++);
	// Far Backward
	detnames.push_back("LowQ2Tracker");  detLocal.push_back({8,2,3,4});  DET_LowQ2Tracker = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("LowQ2Cal");  detLocal.push_back({8,2,3,4});  DET_LowQ2Cal = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("LumiPairSpecCal");  detLocal.push_back({8,2,3,4});  DET_LumiPairSpecCal = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("LumiPairSpecTrack");  detLocal.push_back({8,2,3,4});  DET_LumiPairSpecTrack = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("LumiDirectPhoton");  detLocal.push_back({8,2,3,4});  DET_LumiDirectPhoton = DET_cnt; detids.push_back(DET_cnt++);

	// Don't know?
	detnames.push_back("EcalLumiSpec");  detLocal.push_back({8,2,3,4});  DET_EcalLumiSpec = DET_cnt; detids.push_back(DET_cnt++);


	for(int i=0;i<detids.size();i++) {
	    std::unordered_map<ULong_t, Int_t> x;
	    det_hitcells.push_back(x);
	}


	// Define Histograms
	defineHistograms();
    }

    void defineHistograms() {
	for(int i=0;i<detnames.size();i++) {
	    TH2D *RZ = new TH2D(("RZ_"+detnames[i]).c_str(), ("RZ_"+detnames[i]).c_str(), 1000,-6000,6000,1000,0,3000);
	    TH2D *XY = new TH2D(("XY_"+detnames[i]).c_str(), ("XY_"+detnames[i]).c_str(), 1000,-3000,3000,1000,-3000,3000);
	    RZ_hist.push_back(RZ);
	    XY_hist.push_back(XY);
	}
	    
	jmlcanvas = new TCanvas("jmlcanvas", "jmlcanvas", 1000, 700);
	jmlcanvas->SetBottomMargin(0.2);
	gStyle->SetOptStat(0);
	gStyle->SetOptDate(0);
	   
	store = new TFile("results.root","recreate");
	hits_number_th = new TH1D("hits_threshold","hits_threshold",detnames.size()+1,0,detnames.size()+1);
	RZ_alldet = new TH2D("RZ_alldet","RZ_alldet",1000,-6000,6000,1000,0,3000);
	XY_alldet = new TH2D("XY_alldet","XY_alldet",1000,-3000,3000,1000,-3000,3000);
    }

    

    // Utilities...
    void dump_detectors() {
	for(int i=0;i<detids.size();i++) {
	    cout << detids[i] << "  " << detnames[i] << endl;
	}
    }

    // Analysis...
    void addHitCell(int event, Int_t detector, ULong_t cell, Float_t x, Float_t y, Float_t z) {
	//printf("detector=%d\n",detector);
	const auto &[sys, module, layer, sensor] = cellToLocal(cell, detLocal[detector]);
	//printf("%d %d %d %d\n", sys, module,layer, sensor);
	
	// printf("addHitCell %d %lx\n",detector, cell);
	if(detector == DET_MPGDBarrel) {
	    UInt_t other =    (cell >> (32 + 2 + 12 + 4 + 8)) & 0x3f;
	    UInt_t system = (cell & 0xff);
	    UInt_t layer =  (cell >> 8) & 0xf;
	    UInt_t module = (cell >> (8+4)) & 0xfff;
	    UInt_t sensor = (cell >> (8+4+12)) & 0x3;
	    Int_t xx =     (cell >> 32) & 0x3fff;
	    Int_t yy =     cell & 0x3ffff;

	    //printf("fMPGDBarrel: %u %u %u %u %d %d\n", system, layer, module, sensor, xx,yy); 
	}
	//printf("ff: %s %lu\n",  detnames[detector].c_str(), (cell & 0xff));
	XY_alldet->Fill(x,y);
	RZ_alldet->Fill(z, sqrt(x*x+y*y));
	XY_hist[detector]->Fill(x,y);
	RZ_hist[detector]->Fill(z, sqrt(x*x+y*y));
	
	det_hitcells[detector][cell]++;
	// printf("added\n");
    }
   
    std::pair<ULong_t, Int_t> getMaxCell(Int_t detector) {
	UInt_t max_count = 0;
	ULong_t max_cell = 0;
	for(const auto& [cell, count] : det_hitcells[detector]) {
	    if(count > max_count) {
		max_count = count;
		max_cell = cell;
	    }
	}

	return std::make_pair(max_cell, max_count);
    }

    // Total hits, tot # distinct cells hit
    std::pair<ULong_t, ULong_t> getHits(Int_t detector) {
	ULong_t cnt=0;
	ULong_t hit_cells=0;
	for(const auto& [cell, count] : det_hitcells[detector]) {
	    cnt += count;
	    hit_cells++;
	}
	return std::make_pair(cnt, hit_cells);
    }

    // system, module, layer, sensor
    std::tuple<UInt_t, UInt_t, UInt_t, UInt_t> cellToLocal(ULong_t cell, const std::vector<Int_t> &bits) {
	UInt_t local[4];
	//printf("a\n");
	//printf("sizeof(cell) = %lu   [%d %d %d %d]\n", sizeof(cell), bits[0], bits[1], bits[2], bits[3]);
	for(int i=0;i<4;i++) {
	    local[i] = 0;
	    UInt_t mask=0;
	    for(int j=0;j<bits[i];j++) {
		mask |= 1<<j;
	    }
	    local[i] = cell & mask;
	    cell = cell >> bits[i];
	}
	    
	return std::make_tuple(local[0], local[1], local[2], local[3]);
    }
    
    // Get minimum/maximum cell id for detector
    std::pair<ULong_t, ULong_t> getMinMaxCellId(Int_t detector) {
	ULong_t minCell=0;
	ULong_t maxCell=0;
	for(const auto& [cell, count] : det_hitcells[detector]) {
	    if(minCell == 0) minCell = cell;
	    if(cell < minCell) minCell = cell;
	    if(cell > maxCell) maxCell = cell;
	}
	return std::make_pair(minCell, maxCell);
    }


    void writeHistos(Float_t rate_ratio) {
	int ndets = det_hitcells.size();
	for(int i=0;i<ndets;i++) {
	    int hits=0;
	    for(const auto & [cell, count] : det_hitcells[i]) hits += count;
	    hits_number_th->SetBinContent(i+1, hits * rate_ratio);
	    hits_number_th->GetXaxis()->SetBinLabel(i+1, detnames[i].c_str());
	}
	
	hits_number_th->SetBarWidth(0.55);
	hits_number_th->SetBarOffset(0.25);
	hits_number_th->GetYaxis()->SetTitle("#hits per second");
	hits_number_th->SetFillColor(32);
	hits_number_th->GetXaxis()->LabelsOption("v");

	store->cd();
	hits_number_th->Write();
	for(int i=0;i<ndets;i++) {
	    XY_hist[i]->Write();
	    RZ_hist[i]->Write();
	}
	XY_alldet->Write();
	RZ_alldet->Write();
    }
    
};

#endif

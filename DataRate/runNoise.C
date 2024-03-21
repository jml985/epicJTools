#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "functions.h"

//const char *filenameHistograms = "output/DIS_Histo.root";
//const char *filenameOutput = "output/DIS_Data.root";

Double_t outside_sigma[] = { 0, 
			     3.173e-1/2,       // 1 sigma
			     4.550e-2/2,       // 2 sigma
			     2.700e-3/2,       // 3 sigma
			     6.334e-5/2,       // 4 sigma
			     5.733e-7/2,       // 5 sigma
			     1.973e-9/2,       // 6 sigma
			     2.560e-12/2,      // 7 sigma
			     1.244e-14 };      // 8 sigma  

std::string pp(Double_t x) {
    char tmp[40];
    if((x == 1e15)||(x == 0)) {
	sprintf(tmp, "%10s ", " " );
    }
    else if(x > 1e12) {
	sprintf(tmp, "%6.1lf THz ", x/1e12);
    }
    else if(x > 1e9) {
	sprintf(tmp, "%6.1lf GHz ", x/1e9);
    }
    else if(x > 1e6) {
	sprintf(tmp, "%6.1lf MHz ", x/1e6);
    }
    else if(x > 1e3) {
	sprintf(tmp, "%6.1lf kHz ", x/1e3);
    }
    else if(x > 1) {
	sprintf(tmp, "%6.1lf  Hz ", x);
    }
    else {
	sprintf(tmp, "%6.1lf  Hz ", x);
    }
	std::string xx(tmp);
	return xx;
}

std::string ppThr(Double_t x) {
    char tmp[40];
    if((x == 1e15)||(x == 0)) {
	sprintf(tmp, "%10s ", " " );
    }
    else if(x > 1e12) {
	sprintf(tmp, "%10s ", ">>>");
    }
    else if(x > 1e9) {
	sprintf(tmp, "%5.1lf Gbps ", x/1e9);
    }
    else if(x > 1e6) {
	sprintf(tmp, "%5.1lf Mbps ", x/1e6);
    }
    else if(x > 1e3) {
	sprintf(tmp, "%5.1lf kbps ", x/1e3);
    }
    else if(x > 1) {
	sprintf(tmp, "%5.1lf  bps ", x);
    }
    else {
	sprintf(tmp, "%5.3lf  bps ", x);
    }

    std::string xx(tmp);
    return xx;
}

void runNoise() {
    functions fun;
    fun.setup_storage();
    
    // Channel Rates
    for(int sig = 3;sig<=8;sig++) {
	printf("Channel rate @ %d sigma=%f hz\n", sig, outside_sigma[sig]*9.85e6);
    }

    // Hit rates
    for(int sig = 3;sig<8;sig +=3) {
	printf("%30s %14s %d %s %24s %d %s %24s %d %s\n", "Hit Rates:", " ", sig, "sigma", " ", sig+1, "sigma", " ", sig+2, "sigma"); 
	printf("%30s %10s %10s %10s %10s %10s %10s %10s %10s %10s \n", "Detector", "full", "asic", "rdo","full", "asic", "rdo","full", "asic", "rdo");
	for(int i=0;i<fun.detnames.size();i++) {
	    printf("%30s ", fun.detnames[i].c_str());
	    
	    for(int j=0;j<3;j++) {
		int sigma = sig+j;
		//printf("(%f)   ", (Double_t)fun.nominalChannels[i] / (Double_t)fun.nominalASIC[i]);
		
		printf("%10s %10s %10s ", 
		       pp(outside_sigma[sigma] * 98.5e6 * fun.nominalChannels[i]).c_str(),
		       pp(outside_sigma[sigma] * 98.5e6 * (Double_t)fun.nominalChannels[i] / (Double_t)fun.nominalASIC[i]).c_str(),
		       pp(outside_sigma[sigma] * 98.5e6 * (Double_t)fun.nominalChannels[i] / (Double_t)fun.nominalRDO[i]).c_str());
	    }
	    printf("\n");
	}
    printf("\n\n\n");
    }

    // Data rates
    for(int sig = 3;sig<8;sig +=3) {
	printf("%30s %14s %d %s %24s %d %s %24s %d %s\n", "Data Rates:  ", " ", sig, "sigma", " ", sig+1, "sigma", " ", sig+2, "sigma"); 
	printf("%30s %10s %10s %10s %10s %10s %10s %10s %10s %10s \n", "Detector", "full", "asic", "rdo","full", "asic", "rdo","full", "asic", "rdo");
	for(int i=0;i<fun.detnames.size();i++) {
	    printf("%30s ", fun.detnames[i].c_str());
	    
	    for(int j=0;j<3;j++) {
		int sigma = sig+j;
		//printf("(%f)   ", (Double_t)fun.nominalChannels[i] / (Double_t)fun.nominalASIC[i]);
		
		printf("%10s %10s %10s ", 
		       ppThr(outside_sigma[sigma] * 98.5e6 * fun.nominalChannels[i] * fun.noiseHitBits(i,2)).c_str(),
		       ppThr(outside_sigma[sigma] * 98.5e6 * ((Double_t)fun.nominalChannels[i] / (Double_t)fun.nominalASIC[i]) * fun.noiseHitBits(i,1)).c_str(),
		       ppThr(outside_sigma[sigma] * 98.5e6 * ((Double_t)fun.nominalChannels[i] / (Double_t)fun.nominalRDO[i]) * fun.noiseHitBits(i,1)).c_str());
	    }
	    printf("\n");
	}
    printf("\n\n\n");
    }

}

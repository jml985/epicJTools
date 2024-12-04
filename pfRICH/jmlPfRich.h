// 264, -264, 264

void jmlRun(TH2D *hist) {
    printf("Analyzing...\n");
    TAxis *Xaxis = hist->GetXaxis();
    TAxis *Yaxis = hist->GetYaxis();
    
    double in2 = 9.5*9.5;
    double out2 = 65*65;

    double integratedHitsPerSecond = 0;
    double highHRPPDHitsPerSecond = 0;
    double lowHRPPDHitsPerSecond = 0;

    for(int i=0;i<264;i++) {
	for(int j=0;j<264;j++) {
	    double x = Xaxis->GetBinCenter(i);
	    double y = Yaxis->GetBinCenter(j);
	    double r2 = x*x + y*y;
	    
	    // Inside region?
	    if(r2 < in2) continue;
	    if(r2 > out2) continue;

	    int bin = hist->GetBin(i,j);
	    double val = hist->GetBinContent(bin);

	    // Val is Photons/ 1.57e7 seconds
	    // 2x2cm bins
	    double photonHitRate = val * 2 * 2 / 1.57e7;
	    integratedHitsPerSecond += photonHitRate;

	    // 12x12 cm HRPPD (68 of them)
	    if((x > 9.5) && (x < 21.5) && (y > -6) && (y < 6)) {
		highHRPPDHitsPerSecond += photonHitRate;
	    }

	    if((x > 53) && (x < 65) && (y > -6) && (y < 6)) {
		lowHRPPDHitsPerSecond += photonHitRate;
	    }
	}	       
    }

    // Assume 3x64 bits / hit
    printf("TOTAL Det    Hits:   %6.2f MHz       digitized: %6.2f Gb/s       Tape: %6.2f Gb/s\n", 
	   integratedHitsPerSecond/1e6, 
	   integratedHitsPerSecond*9*64/1e9,
	   integratedHitsPerSecond*64/1e9);
    printf("MAX HRPPD:   Hits:   %6.2f MHz       digitized: %6.2f Gb/s       Tape: %6.2f Gb/s\n", 
	   highHRPPDHitsPerSecond/1e6, 
	   highHRPPDHitsPerSecond*9*64/1e9,
	   highHRPPDHitsPerSecond*64/1e9);
    printf("MIN HRPPD:   Hits:   %6.2f kHz       digitized: %6.2f Mb/s       Tape: %6.2f Mb/s\n", 
	   lowHRPPDHitsPerSecond/1e3, 
	   lowHRPPDHitsPerSecond*9*64/1e6,
	   lowHRPPDHitsPerSecond*64/1e6);
}      

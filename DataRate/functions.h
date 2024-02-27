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

    std::vector<TH1F *> asicHistos;
    std::vector<TH1F *> rdoHistos;
    std::vector<TH2D *> debug_hist;
    std::vector<TH2D *> RZ_hist;
    std::vector<TH2D *> XY_hist;
    std::vector<TH2D *> ZPhi_hist;

    std::vector<std::string> detnames;
    std::vector<Int_t> detids;
    std::vector<std::unordered_map<ULong_t, Int_t>> det_hitcells;    // cellId
    std::vector<std::map<ULong_t, Int_t>> asic_hits;    // ASIC:18, FEB:15, RDO:11, DAM:8
                                                        // 262k,    32k,    2048    256
    std::vector<std::map<ULong_t, Int_t>> rdo_hits;
    std::vector<std::map<ULong_t, Int_t>> channel_hits;

    std::vector<std::vector<Float_t>> dbgR;

    Float_t tmp_max_phi=0;
    Float_t tmp_min_phi=0;
    Float_t tmp_max_r=0;
    Float_t tmp_min_r=0;
    Float_t tmp_max_z=0;
    Float_t tmp_min_z=0;
    Float_t tmp_max_x=0;
    Float_t tmp_min_x=0;
    Float_t tmp_max_y=0;
    Float_t tmp_min_y=0;

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

      //printf("getPhi %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f\n", getPhi(1,0), getPhi(1,1), getPhi(0,1), getPhi(-1,1), getPhi(-1,0), getPhi(-1,-1), getPhi(0,-1), getPhi(1,-1));

    	DET_cnt = 0;
	// Si Tracking
	detnames.push_back("SiBarrelTracker");  DET_SiBarrelTracker = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("SiBarrelVertex");  DET_SiBarrelVertex = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("SiEndcapTracker");  DET_SiEndcapTracker = DET_cnt; detids.push_back(DET_cnt++);
	// MPGD
	detnames.push_back("BackwardMPGDEndcap");  DET_BackwardMPGDEndcap = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("ForwardMPGDEndcap");  DET_ForwardMPGDEndcap = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("MPGDBarrel");    DET_MPGDBarrel = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("OuterMPGDBarrel");  DET_OuterMPGDBarrel = DET_cnt; detids.push_back(DET_cnt++);
	//detnames.push_back("MPGDDIRC");  DET_MPGDDIRC = DET_cnt; detids.push_back(DET_cnt++);
	// Forward CAL
	detnames.push_back("LFHCAL");  DET_LFHCAL = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("HcalEndcapPInsert");   DET_HcalEndcapPInsert = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("EcalEndcapP");  DET_EcalEndcapP = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("EcalEndcapPInsert");  DET_EcalEndcapPInsert = DET_cnt; detids.push_back(DET_cnt++);
	// Backward CAL
	detnames.push_back("HcalEndcapN");  DET_HcalEndcapN = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("EcalEndcapN");  DET_EcalEndcapN = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("HcalBarrel");   DET_HcalBarrel = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("EcalBarrelImaging");  DET_EcalBarrelImaging = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("EcalBarrelScFi");  DET_EcalBarrelScFi = DET_cnt; detids.push_back(DET_cnt++);
	// PID TOF
	detnames.push_back("TOFBarrel");   DET_TOFBarrel = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("TOFEndcap");   DET_TOFEndcap = DET_cnt; detids.push_back(DET_cnt++);
	// PID Cherenkov
	detnames.push_back("dRICH");  DET_dRICH = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("pfRICH");  DET_pfRICH = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("DIRC");  DET_DIRC = DET_cnt; detids.push_back(DET_cnt++);
	// Far Forward
	detnames.push_back("B0ECal"); DET_B0ECal = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("B0Tracker");   DET_B0Tracker = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("RP");  DET_RP = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("OffM");   DET_OffM = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("ZDCHcal");  DET_ZDCHcal = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("ZDCEcal");   DET_ZDCEcal = DET_cnt; detids.push_back(DET_cnt++);
	// Far Backward
	detnames.push_back("LowQ2Tracker");  DET_LowQ2Tracker = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("LowQ2Cal");  DET_LowQ2Cal = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("LumiPairSpecCal");  DET_LumiPairSpecCal = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("LumiPairSpecTrack");  DET_LumiPairSpecTrack = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("LumiDirectPhoton");  DET_LumiDirectPhoton = DET_cnt; detids.push_back(DET_cnt++);

	// Don't know?
	detnames.push_back("EcalLumiSpec");  DET_EcalLumiSpec = DET_cnt; detids.push_back(DET_cnt++);


	// Set Ranges for debug plots
	for(int i=0;i<detids.size();i++) {
	  std::vector<Float_t> range = { 100, -3000, 3000, 100, -3000, 3000 };
	  dbgR.push_back(range);
	}
	dbgR[DET_SiBarrelTracker] = { 100, -150, 150, 100, 0, 2*3.14159 };    // Z,phi
	dbgR[DET_SiBarrelVertex] = { 100, -150, 150, 100, 0, 2*3.14159 };     // Z,phi
	dbgR[DET_SiEndcapTracker] = { 100, -450, 450, 100, -450, 450 };       // X,Y
	dbgR[DET_BackwardMPGDEndcap] = { 100, -550, 550, 100, -550, 550};     // X,Y
	dbgR[DET_ForwardMPGDEndcap] = { 100, -550, 550, 100, -550, 550};     // X,Y
	dbgR[DET_MPGDBarrel] =        { 100, -1500, 1500, 100, 0, 2*3.14159 };      // X,phi
	dbgR[DET_OuterMPGDBarrel] =   { 100, -2000, 2000, 100, 0, 2*3.14159 };      // X,phi
	dbgR[DET_LFHCAL] =            { 54, -3000, 3000, 54, -3000, 3000 };      // X,Y
	//dbgR[DET_HcalEndcapPInsert] = { 100, -500, 250, 100, -350, 350 };        // X,Y
	//dbgR[DET_HcalEndcapPInsert] = { 200, 3500,5000, 200, 0,500 };      // z,r
	dbgR[DET_HcalEndcapPInsert] = { 46, -25.5, 20.5, 46 , -25.5, 20.5 };    // xx,yy
	dbgR[DET_EcalEndcapP] = { 161, -80.5, 80.5, 161 , -80.5, 80.5 };    // xx, yy
	dbgR[DET_EcalEndcapPInsert] =  { 31, -15.5, 15.5, 31 , -15.5, 15.5 };    // xx, yy
	dbgR[DET_HcalEndcapN] =  { 161, -80.5, 80.5, 161 , -80.5, 80.5 };    // xx, yy
	dbgR[DET_EcalEndcapN] =  { 150, -650, 650, 150 , -650, 650 };    // X,Y
	dbgR[DET_TOFBarrel] = { 200, -1200,1800, 200, 0,3.14159*2 };   // Z,Phi
	dbgR[DET_TOFEndcap] = { 200, -640, 640, 200, -640, 640 };   // X,Y



	// Setup hit storage for each detector
	for(int i=0;i<detids.size();i++) {
	    std::unordered_map<ULong_t, Int_t> x;
	    det_hitcells.push_back(x);
	    std::map<ULong_t, Int_t> y;
	    asic_hits.push_back(y);
	    std::map<ULong_t, Int_t> yy;
	    rdo_hits.push_back(y);
	    std::map<ULong_t, Int_t> yyy;
	    channel_hits.push_back(y);
	}

	// Define Histograms
	defineHistograms();

	//const auto &[a,b,c,d] = tup4(rVec({1,5,3,4}));
	//printf("tup test: %d %d %d %d\n", a,b,c,d);
    }

    void defineHistograms() {
	for(int i=0;i<detnames.size();i++) {
	  TH2D *debug =  new TH2D((detnames[i] + "_debug").c_str(), (detnames[i] + "_debug").c_str(), dbgR[i][0], dbgR[i][1], dbgR[i][2], dbgR[i][3],dbgR[i][4], dbgR[i][5]);

	    TH2D *RZ = new TH2D((detnames[i] +"_RZ").c_str(), (detnames[i]+ "_RZ").c_str(), 1000,-6000,6000,1000,0,3000);
	    TH2D *XY = new TH2D((detnames[i] + "_XY").c_str(), (detnames[i] + "_XY").c_str(), 1000,-3000,3000,1000,-3000,3000);	
	    TH2D *ZPhi = new TH2D((detnames[i]+ "_ZPhi").c_str(), (detnames[i] + "_ZPhi").c_str(), 1000, -6000, 6000, 1000, 0, 2*3.14159);

	    debug_hist.push_back(debug);
	    RZ_hist.push_back(RZ);
	    XY_hist.push_back(XY);
	    ZPhi_hist.push_back(ZPhi);

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

    void buildLimits(Float_t x, Float_t y, Float_t z)
    {      
      Float_t r = getR(x,y);
      Float_t phi = getPhi(x,y);

      if(tmp_min_x == 0) { tmp_min_x = x; }
      if(tmp_max_x == 0) { tmp_max_x = x; }
      if(tmp_min_y == 0) { tmp_min_y = y; }
      if(tmp_max_y == 0) { tmp_max_y = y; }
      if(tmp_min_z == 0) { tmp_min_z = z; }
      if(tmp_max_z == 0) { tmp_max_z = z; }
      if(tmp_min_r == 0) { tmp_min_r = r; }
      if(tmp_max_r == 0) { tmp_max_r = r; }
      if(tmp_min_phi == 0) { tmp_min_phi = phi; }
      if(tmp_max_phi == 0) { tmp_max_phi = phi; }


      if(tmp_min_x > x) { tmp_min_x = x; }
      if(tmp_max_x < x) { tmp_max_x = x; }
      if(tmp_min_y > y) { tmp_min_y = y; }
      if(tmp_max_y < y) { tmp_max_y = y; }
      if(tmp_min_z > z) { tmp_min_z = z; }
      if(tmp_max_z < z) { tmp_max_z = z; }
      if(tmp_min_r > r) { tmp_min_r = r; }
      if(tmp_max_r < r) { tmp_max_r = r; }
      if(tmp_min_phi > phi) { tmp_min_phi = phi; }
      if(tmp_max_phi < phi) { tmp_max_phi = phi; }
    }

    void printLimits() {
      printf("Limits:  x=[%.2f-%.2f] y=[%.2f-%.2f] z=[%.2f-%.2f] r=[%.2f-%.2f] phi=[%.2f-%.2f]\n", 
	     tmp_min_x, tmp_max_x, tmp_min_y, tmp_max_y, tmp_min_z, tmp_max_z, tmp_min_r, tmp_max_r, tmp_min_phi, tmp_max_phi);
    }

    // Analysis...

    void addHitCell(int event, Int_t detector, ULong_t cell, Float_t x, Float_t y, Float_t z) {
      ULong_t asic=0xffffffffff;
      ULong_t rdo =0xffffffffff;
      ULong_t channel = 0xffffffffff;

      ULong_t bAsic = 0;
      //printf("yup %d\n",detector);

      if(detector==DET_SiBarrelTracker) {  //  unit currently 44 staves for inner layer,   69 staves for outer layer
	const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,4,12,2}));
	
	//printf("a\n");
	if(sys == 59) {
	  asic = distributeEven(z, 36, -261, 261) + ((module-1)*36);
	}
	bAsic += 44*36;
	if(sys == 60) {
	  asic = distributeEven(z, 58, -420, 420) + bAsic + ((module-1)*58);
	  fillDebugHist(detector, z, getPhi(x,y), asic);
	}

	//printf("Sys %ld %d %d %d %d %f %f\n",asic, sys,layer,module,sensor,getPhi(x,y),z);
	cell = cell & maskBits(26);
      }
      
      else if(detector==DET_SiBarrelVertex) {   // unit currently 128 something x 3 layers
	const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,4,12,2}));
	
	//printf("mod %d\n",module);
	if(layer == 1) asic = distributeEven(z,1,-135,135) + 1*(module-1);
	bAsic = 1*128;
	if(layer == 2) asic = distributeEven(z,1,-135,135)  + bAsic + 1 * (module-1);
	bAsic += 1*128;
	if(layer == 4) asic = distributeEven(z,3,-135,135)  + bAsic + 3 * (module-1);

	if(layer == 4) {
	  fillDebugHist(detector, z, getPhi(x,y), asic);
	}
	
	cell = cell & maskBits(26); 
      }
      
      else if(detector==DET_SiEndcapTracker) {
	const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,4,12,2}));	
	//printf("Sys %d %d %d %d\n", sys, module, layer, sensor);

	//printf("hi\n");
	cell = cell & maskBits(26);
	
	if(sys == 68) 
	  asic = distributeCircle(getR(x,y), 9,37,240) + 9*(module-1);
	bAsic = 9*36;
	if(sys == 69) 
	  asic = distributeCircle(getR(x,y), 26, 37,415) + bAsic + 26*(module-1);
	bAsic += 26*36;
	if((sys == 70) && (layer==2)) 
	  asic = distributeCircle(getR(x,y), 27, 37,415) + bAsic + 27*(module-1);
	bAsic += 27*36;
	if((sys == 70) && (layer==3))
	  asic = distributeCircle(getR(x,y), 27, 40,421) + bAsic + 27*(module-1);
	bAsic += 27*36;
	if((sys == 70) && (layer==4))
	  asic = distributeCircle(getR(x,y), 27, 46,421) + bAsic + 27*(module-1);
	bAsic += 27*36;
	
	if(sys == 77) 
	  asic = distributeCircle(getR(x,y), 9,37,240)   + bAsic + 9*(module-1);
	bAsic += 9*36;
	if(sys == 78) 
	  asic = distributeCircle(getR(x,y), 26, 37,415) + bAsic + 26*(module-1);
	bAsic += 26*36;
	if((sys == 79) && (layer==2)) 
	  asic = distributeCircle(getR(x,y), 27, 38,421) + bAsic + 27*(module-1);
	bAsic += 27*36;
	if((sys == 79) && (layer==3))
	  asic = distributeCircle(getR(x,y), 27, 53,421) + bAsic + 27*(module-1);
	bAsic += 27*36;
	if((sys == 79) && (layer==4))
	  asic = distributeCircle(getR(x,y), 27, 70,421) + bAsic + 27*(module-1);
	//bAsic += 27*36;

	if((sys == 79)  && (layer==4)) {
	    fillDebugHist(detector, x,y, asic-bAsic);
	}

	//printf("SiEndcapTracker: %ld %d %d %d %d\n", asic, sys, module, layer, sensor);
      }
      
      else if(detector==DET_BackwardMPGDEndcap) {
	const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,2,6,12}));
	//printf("Sys %d %d %d %d\n", sys,layer,module,sensor);
	
	if(layer == 2) {
	  fillDebugHist(detector, x, y, module);
	}

	// 16k channels
	// 2 layers (1-2)
	// 8k ch = 128 asic = 32 feb = 8 rdo / layer
	if(layer == 1) {
	  asic = distributeCircle(getR(x,y), 128, 47, 500);
	  rdo = distributeCircle(getR(x,y), 8, 47, 500);
	}
	if(layer == 2) {
	  asic = distributeCircle(getR(x,y), 128, 47, 500) + 128;
	  rdo = distributeCircle(getR(x,y), 8, 47, 500) + 8;
	}
	
	cell = cell & maskBits(8+2+6+12);
      }
      
      else if(detector==DET_ForwardMPGDEndcap) {
	const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,2,6,12}));
	//printf("Sys %d %d %d %d\n", sys,layer,module,sensor);
	  
	if(layer == 1) {
	  fillDebugHist(detector, x, y, module);
	}

	// 16k channels
	// 2 layers (1-2)
	// 8k ch = 128 asic = 32 feb = 8 rdo / layer
	if(layer == 1) {
	  asic = distributeCircle(getR(x,y), 128, 70, 500);
	  rdo = distributeCircle(getR(x,y), 8, 70, 500);
	}
	if(layer == 2) {
	  asic = distributeCircle(getR(x,y), 128, 70, 500) + 128;
	  rdo = distributeCircle(getR(x,y), 8, 70, 500) + 8;
	}
	
	
	cell = cell & maskBits(8+2+6+12);
      }
      
      else if(detector==DET_MPGDBarrel) {
	const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,4,12,2}));
	//printf("Sys %d %d %d %d\n", sys,layer,module,sensor);
	
	fillDebugHist(detector, z, getPhi(x,y), module);

	// 30k channels = 512 asic = 32 RDO
	asic = distributeEven(z, 512, -1050, 1350);
	rdo = distributeEven(z, 32, -1050, 1350);
       
	cell = cell & maskBits(8+4+12+2);
      }
      
      else if(detector==DET_OuterMPGDBarrel) {
	const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,4,12,2}));
	//printf("Sys %d %d %d %d\n", sys,layer,module,sensor);
	if((module %2) == 0) {
	  fillDebugHist(detector, z, getPhi(x,y), module);
	}
	else {
	  fillDebugHist(detector, z, getPhi(x,y), module + 30);  
	  // buildLimits(x,y,z);
	}

	// 140k channels
	// 2188 asic
	// 1094 asic = 69 RDO / side
	// 
	// both modules same length, but overlap
	if((module % 2) == 0) {
	  asic = distributeEven(z, 1094, -1624, 60);
	  rdo = distributeEven(z, 69, -1624, 60);
	}
	else {
	  asic = distributeEven(z, 1094, 40, 1724) + 1094;
	  rdo = distributeEven(z, 69, 40, 1724) + 69;
	}

	cell = cell & maskBits(8+4+12+2);
      }
      
      else if(detector==DET_LFHCAL) {
	const auto &[sys,moduleIDx,moduleIDy,moduletype,passive,towerx,towery,rlayerz,layerz] = tup9(cellToLocal(cell, {8,6,6,1,1,2,1,4,4}));

	//printf("LFHCAL- %d %d %d %d %d %d %d %d %d\n", sys, moduleIDx, moduleIDy, moduletype, passive, towerx, towery,rlayerz,layerz);
	
	//UInt_t ID = moduletype+1;
	//fillDebugHist(detector, x, y, ID);
	addDebugHist(detector,x,y);
	cell = cell & maskBits(8+6+6+1+1+2+1+4);

	// Assume moduleIDx,moduleIDy, rlayerz 53*53 -> 1150  defines asic  (54 channels)
	//
	// channel = moduleIDx, moduleIDy, towerx, towery, rlayerz
	channel = cell;
	//asic = moduleIdx + 53*moduleIdy;           // 4x2x7 = 56 ch/asic
	//rdo = (int)moduleIdx/2+ 53*((int)moduleIdy/2);   // poor mans divide by 4!
      }

      else if(detector==DET_HcalEndcapPInsert) {
	const auto &[sys,layer,slice] = tup3(cellToLocal(cell, {8,8,8}));
	Short_t xx = (cell >>32) & 0xffff;
	Short_t yy = (cell >>48) & 0xffff;
	addDebugHist(detector,xx, yy);

	cell = cell & 0xffffffff00000000;   // only take integerized xx,yy
	cell += (int)((layer-1)/5);

	// ~526 hexagonal layers by xx,yy
	// readout layer = 65/5 = 13 layers
	// channel = xx,yy,readout layer

	channel = cell;
      }

      else if(detector==DET_EcalEndcapP) {
	const auto &[sys, barrel, module, layer, slice, fiber_x, fiber_y] = tup7(cellToLocal(cell, {8,3,4,8,5,1,1}));
	Short_t xx = (cell >>32) & 0xffff;
	Short_t yy = (cell >>48) & 0xffff;
	//printf("Sys %d %d %d %d %d %d %d %d %d\n", sys, barrel, module, layer, slice, fiber_x, fiber_y, xx, yy);
	addDebugHist(detector, xx, yy);

	//channel = xx,yy
	
	channel = cell;
      }

      else if(detector==DET_EcalEndcapPInsert) {
	const auto &[sys, barrel, module, layer, slice] = tup5(cellToLocal(cell, {8,3,4,8,5}));
	Short_t xx = (cell >>32) & 0xffff;
	Short_t yy = (cell >>48) & 0xffff;
	addDebugHist(detector, xx, yy);
	//printf("Sys %d %d %d %d %d %d %d\n", sys, barrel, module, layer, slice, xx, yy);

	//channel = xx,yy
	channel = cell;
      }

      else if(detector==DET_HcalEndcapN) {
	const auto &[sys, barrel, module, layer, slice] = tup5(cellToLocal(cell, {8,3,4,8,5}));
	
	Short_t xx = (cell >>32) & 0xffff;
	Short_t yy = (cell >>48) & 0xffff;
	addDebugHist(detector, xx, yy);
	//printf("Sys %d %d %d %d %d %d %d\n", sys, barrel, module, layer, slice, xx, yy);

	cell = cell & 0xffffffff00000000;

	// channel = xx,yy     -> 2334 channels
	//         layers/grouping to make 3256?
	channel = cell;
      }
      
      else if(detector==DET_EcalEndcapN) {
	const auto &[sys, sector, module] = tup3(cellToLocal(cell, {8,4,20}));
	
	Short_t xx = (cell >>32) & 0xffff;
	Short_t yy = (cell >>48) & 0xffff;
	fillDebugHist(detector, x,y, module);
	
	cell = cell & maskBits(8+4+20);
	// channel = sys,sector,module
	channel = cell;
      }

      else if(detector==DET_HcalBarrel) {
	const auto &[sys, sector, tower, tile] = tup4(cellToLocal(cell, {8,5,6,3}));
	
	Short_t xx = (cell >>32) & 0xffff;
	Short_t yy = (cell >>48) & 0xffff;
	fillDebugHist(detector, x,y, tower);

	//printf("Sys %d %d %d %d %d %d\n", sys,sector,tower,tile,xx,yy);
	
	cell = cell & maskBits(8+5+6+3);
	// channel = sys,sector,module
	channel = cell;
      }

      else if(detector==DET_EcalBarrelImaging) {
	const auto &[sys,sector,layer,slice,grid,fiber,u_zz] = tup7(cellToLocal(cell, {8,6,6,4,10,16,14}));
	Short_t zz = u_zz & ~0x2000;
	if(u_zz & 0x2000) {    // sign bit!
	  zz = -zz;
	}

	int bRdo = 0;

	if(getR(x,y) <900) {
	  asic = distributeEven(z, 14537, -2579, 1804);
	  rdo = distributeEven(z, 52, -2579, 1804);
	}
	bAsic = 14537;
	bRdo = 52;
	if((getR(x,y) >900) && (getR(x,y) < 930)) {
	  asic = distributeEven(z, 15827, -2579, 1804) + bAsic;
	  rdo = distributeEven(z, 57, -2579, 1804) + bRdo;
	}
	bAsic += 15827;
	bRdo += 57;
	if((getR(x,y) >930) && (getR(x,y) < 970)) {
	  asic = distributeEven(z, 16429, -2579, 1804) + bAsic;
	  rdo = distributeEven(z, 59, -2579, 1804) + bRdo;
	}
	bAsic += 16429;
	bRdo += 59;
	if(getR(x,y) > 970) {
	  asic = distributeEven(z, 17719, -2579, 1804) + bAsic;
	  rdo = distributeEven(z, 63, -2579, 1804) + bRdo;
	}

	//printf("Sys %d %d %d %d %d %d %d %f\n", sys,sector,layer,slice,grid,fiber,zz, z);
	//buildLimits(x,y,z);
      }
	
      else if(detector==DET_EcalBarrelScFi) {
	const auto &[sys,sector,row,tower] = tup4(cellToLocal(cell, {8,8,8,8}));
	Short_t xx = (cell >>32) & 0xffff;
	Short_t yy = (cell >>48) & 0xffff;
	//printf("Sys %d %d %d %d %d %d\n", sys, sector,row,tower,xx,yy);

	cell = cell & maskBits(8+8+8+8);
	ULong_t ncell = cell + 0x10000000000;    // always hit both sides!
	det_hitcells[detector][ncell]++;         // add second hit!

	channel = cell;
	//buildLimits(x,y,z);
      }

      else if(detector==DET_TOFBarrel) {
	const auto &[sys,layer,module,sensor] = tup4(cellToLocal(cell, {8,4,12,2}));
	Short_t xx = (cell >>32) & 0xffff;
	Short_t yy = (cell >>48) & 0xffff;
	//	printf("Sys %d %d %d %d %d %d\n", sys, layer,module,sensor,xx,yy);

	cell = cell & maskBits(8+4+12+2);

	fillDebugHist(detector, z, getPhi(x,y), module);

	// asic = 2,359,296/128 -> 18,432 ASIC/64 -> 288 RDO
	asic = distributeEven(z,18432, -1120, 1737);
	rdo = distributeEven(z, 288, -1120, 1737);
	
	// channel = sys,layer,module,sensor   {add z/100}
      }  

      else if(detector==DET_TOFEndcap) {
	const auto &[sys,layer,module,idx,idy] = tup5(cellToLocal(cell, {8,4,8,7,5}));
	Short_t xx = (cell >>32) & 0xffff;
	Short_t yy = (cell >>48) & 0xffff;
	//printf("Sys %d %d %d %d %d %d %d %f\n", sys, layer,module,idx,idy,xx,yy,z);

	cell = cell & maskBits(8+4+8+7+5);

	fillDebugHist(detector, x,y, idy);
	// pixel=3719168 -> 3632 asic -> 212 RDO
	//                  1816 asic -> 106 RDO / layer

	if((idy%2) == 0) {
	  asic = distributeCircle(getR(x,y), 1816, 96, 493);
	  rdo = distributeCircle(getR(x,y), 106, 96, 493);
	}
	else {
	  asic = distributeCircle(getR(x,y), 1816, 96, 493) + 1816;	
	  rdo = distributeCircle(getR(x,y), 106, 96, 493) + 106;
	}
      }  		
      
      else {
	return;
      }
  
      
      XY_alldet->Fill(x,y);
      RZ_alldet->Fill(z, sqrt(x*x+y*y));
      ZPhi_hist[detector]->Fill(z, getPhi(x,y));
      
      
      XY_hist[detector]->Fill(x,y);
      RZ_hist[detector]->Fill(z, sqrt(x*x+y*y));
      

      if(asic != 0xffffffffff) {
	//printf("daq 0x%lx\n",asic);
	asic_hits[detector][asic]++;
      }

      if(rdo != 0xffffffffff) {
	rdo_hits[detector][rdo]++;
      }
      
      if(channel != 0xffffffffff) {
	channel_hits[detector][rdo]++;
      }

      //printf("det\n");
      det_hitcells[detector][cell]++;
      // printf("added\n");
    }
   
    Float_t getR(Float_t x, Float_t y) {
      return sqrt(x*x+y*y);
    }

    Float_t getPhi(Float_t x, Float_t y) {
      	Float_t phi = atan(y/x);
	if(x < 0) phi += 3.14159;
	if(phi < 0) phi += 2*3.14159;
	return phi;
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
    
    UInt_t maskBits(UInt_t bits) {
      UInt_t x = 0;
      for(int i=0;i<bits;i++) {
	x = (x<<1) | 1;
      }
      return x;
    }
   
    std::tuple<UInt_t, UInt_t, UInt_t> tup3(const std::vector<Int_t> &v) {
	return std::make_tuple(v[0], v[1], v[2]);
    }
    std::tuple<UInt_t, UInt_t, UInt_t, UInt_t> tup4(const std::vector<Int_t> &v) {
      return std::make_tuple(v[0], v[1], v[2], v[3]);
    }
    std::tuple<UInt_t, UInt_t, UInt_t, UInt_t, UInt_t> tup5(const std::vector<Int_t> &v) {
      return std::make_tuple(v[0], v[1], v[2], v[3], v[4]);
    }
    std::tuple<UInt_t, UInt_t, UInt_t, UInt_t, UInt_t, UInt_t, UInt_t> tup7(const std::vector<Int_t> &v) {
      return std::make_tuple(v[0], v[1], v[2], v[3], v[4], v[5], v[6]);
    }
    std::tuple<UInt_t, UInt_t, UInt_t, UInt_t, UInt_t, UInt_t, UInt_t, UInt_t, UInt_t> tup9(const std::vector<Int_t> &v) {
      return std::make_tuple(v[0], v[1], v[2], v[3], v[4], v[5], v[6], v[7], v[8]);
    }


    const std::vector<Int_t> rVec(const std::vector<Int_t> &bits) {
      std::vector<Int_t> local = bits;
      return local;
    }

    const std::vector<Int_t> cellToLocal(ULong_t cell, const std::vector<Int_t> &bits) {
      std::vector<Int_t> local;
      for(int i=0;i<bits.size();i++) {
	UInt_t mask=0;
	for(int j=0;j<bits[i];j++) {
	  mask |= 1<<j;
	}
	Int_t loc = cell & mask;
	local.push_back(loc);
	cell = cell >> bits[i];
      }
      return local;
    }

    // system, module, layer, sensor
    std::tuple<UInt_t, UInt_t, UInt_t, UInt_t> cellToLocal_old(ULong_t cell, const std::vector<Int_t> &bits) {
	UInt_t local[4];
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

    void addDebugHist(Int_t det, Float_t axis1, Float_t axis2) {
      debug_hist[det]->Fill(axis1, axis2);
    }

    void fillDebugHist(Int_t det, Float_t axis1, Float_t axis2, Int_t weight) {
      UInt_t binx = debug_hist[det]->GetXaxis()->FindBin(axis1);
      UInt_t biny = debug_hist[det]->GetYaxis()->FindBin(axis2);
      UInt_t bin = debug_hist[det]->GetBin(binx,biny);
      debug_hist[det]->SetBinContent(bin, weight);
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
	  asicHistos[i]->Write();
	  rdoHistos[i]->Write();
	  debug_hist[i]->Write();	    
	  XY_hist[i]->Write();
	  RZ_hist[i]->Write();
	  ZPhi_hist[i]->Write();
	}

	XY_alldet->Write();
	RZ_alldet->Write();
    }

    Int_t distributeEven(Float_t x, Int_t n, Float_t min, Float_t max) {
      Float_t delta = (max-min)/((Float_t)n);
      Float_t pos = x - min;
      Int_t idx = (Int_t)(pos/delta);
      if(idx<0) idx = 0;
      if(idx>=n) idx = n-1;
      return idx;
    }

    Int_t distributeCircle(Float_t x, Int_t n, Float_t rmin, Float_t rmax) {
      Float_t Tarea = 3.14159*(rmax*rmax - rmin*rmin);   
      Float_t delta_area = Tarea/n;
      Float_t Xarea = 3.14159*(x*x - rmin*rmin);
      Int_t idx = (Int_t)(Xarea/delta_area);
      if(idx < 0) idx = 0;
      if(idx >= n) idx = n-1;
      return idx;
    }


    void buildRdoHistos() {   
      int ndets = rdo_hits.size();
      for(int i=0;i<ndets;i++) {
	int max = 1;
	if(rdo_hits[i].size() != 0) {
	  max = rdo_hits[i].rbegin()->first;
	}

	TH1F *rdoHisto = new TH1F((detnames[i] + "_rdo").c_str(),(detnames[i] + "_rdo").c_str(), max+1, -0.5, max+.5);
	
	for(const auto& [rdo, count] : rdo_hits[i]) {
	  UInt_t binx = rdoHisto->GetXaxis()->FindBin(rdo);
	  UInt_t bin = rdoHisto->GetBin(binx);
	  rdoHisto->SetBinContent(bin, count);
	}

	rdoHistos.push_back(rdoHisto);
      }	
    }

    void buildAsicHistos() {
      int ndets = asic_hits.size();
      for(int i=0;i<ndets;i++) {
	int max = 1;
	if(asic_hits[i].size() != 0) {
	  max = asic_hits[i].rbegin()->first;
	}

	TH1F *asicHisto = new TH1F((detnames[i] + "_asic").c_str(),(detnames[i] + "_asic").c_str(), max+1, -0.5, max+.5);
	
	for(const auto& [asic, count] : asic_hits[i]) {
	  UInt_t binx = asicHisto->GetXaxis()->FindBin(asic);
	  UInt_t bin = asicHisto->GetBin(binx);
	  asicHisto->SetBinContent(bin, count);
	}

	asicHistos.push_back(asicHisto);
      }	
    }
};
    

#endif

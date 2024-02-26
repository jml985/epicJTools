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

    std::vector<TH2D *> debug_hist;
    std::vector<TH2D *> RZ_hist;
    std::vector<TH2D *> XY_hist;
    std::vector<TH2D *> ZPhi_hist;

    std::vector<std::string> detnames;
    std::vector<std::vector<Int_t>> detLocal;
    std::vector<Int_t> detids;
    std::vector<std::unordered_map<ULong_t, Int_t>> det_hitcells;
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
	//     {system:8,layer:4,module:12,sensor:2}
	detnames.push_back("SiBarrelTracker");  detLocal.push_back({8,4,12,2}); DET_SiBarrelTracker = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("SiBarrelVertex");  detLocal.push_back({8,4,12,2}); DET_SiBarrelVertex = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("SiEndcapTracker");  detLocal.push_back({8,4,12,2});  DET_SiEndcapTracker = DET_cnt; detids.push_back(DET_cnt++);
	// MPGD
	//     {system:8,layer:2,module:6,sensor:16}
	detnames.push_back("BackwardMPGDEndcap");  detLocal.push_back({8,2,6,16});  DET_BackwardMPGDEndcap = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("ForwardMPGDEndcap");  detLocal.push_back({8,2,6,16});  DET_ForwardMPGDEndcap = DET_cnt; detids.push_back(DET_cnt++);
	//     {system:8,layer:4,module:12,sensor:2}
	detnames.push_back("MPGDBarrel");  detLocal.push_back({8,4,12,2});  DET_MPGDBarrel = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("OuterMPGDBarrel");  detLocal.push_back({8,4,12,2});  DET_OuterMPGDBarrel = DET_cnt; detids.push_back(DET_cnt++);
	//detnames.push_back("MPGDDIRC");  detLocal.push_back({8,4,12,2});  DET_MPGDDIRC = DET_cnt; detids.push_back(DET_cnt++);
	// Forward CAL
	//     {system:8,moduleIDx:6,moduleIDy:6,moduletype:1,passive:1,towerx:2,towery:1,rlayerz:4,layerz:4}
	detnames.push_back("LFHCAL");  detLocal.push_back({8,6,6,1,1,2,1,4,4});  DET_LFHCAL = DET_cnt; detids.push_back(DET_cnt++);
	//     {system:8,layer:8,slice:8}
	detnames.push_back("HcalEndcapPInsert");  detLocal.push_back({8,8,8,0});  DET_HcalEndcapPInsert = DET_cnt; detids.push_back(DET_cnt++);
	//     {system:8,barrel:3,module:4,layer:8,slice:5,fiber_x:1,fiber_y:1
	detnames.push_back("EcalEndcapP");  detLocal.push_back({8,3,4,8,5,1,1});  DET_EcalEndcapP = DET_cnt; detids.push_back(DET_cnt++);
	//     {system:8,barrel:3,module:4,layer:8,slice:5}
	detnames.push_back("EcalEndcapPInsert");  detLocal.push_back({8,3,4,8,5});  DET_EcalEndcapPInsert = DET_cnt; detids.push_back(DET_cnt++);
	// Backward CAL
	//     {system:8,barrel:3,module:4,layer:8,slice:5
	detnames.push_back("HcalEndcapN");  detLocal.push_back({8,3,4,8,5});  DET_HcalEndcapN = DET_cnt; detids.push_back(DET_cnt++);
	//     {system:8,sector:4,row:8,column:8}
	detnames.push_back("EcalEndcapN");  detLocal.push_back({8,4,8,8});  DET_EcalEndcapN = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("HcalBarrel");  detLocal.push_back({8,2,3,4});  DET_HcalBarrel = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("EcalBarrelImaging");  detLocal.push_back({8,2,3,4});  DET_EcalBarrelImaging = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("EcalBarrelScFi");  detLocal.push_back({8,2,3,4});  DET_EcalBarrelScFi = DET_cnt; detids.push_back(DET_cnt++);
	// PID TOF
	detnames.push_back("TOFBarrel");  detLocal.push_back({8,4,12,2});  DET_TOFBarrel = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("TOFEndcap");  detLocal.push_back({8,4,8,7,5});  DET_TOFEndcap = DET_cnt; detids.push_back(DET_cnt++);
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
	}

	// Define Histograms
	defineHistograms();

	//const auto &[a,b,c,d] = tup4(rVec({1,5,3,4}));
	//printf("tup test: %d %d %d %d\n", a,b,c,d);
    }

    void defineHistograms() {
	for(int i=0;i<detnames.size();i++) {
	  TH2D *debug =  new TH2D((detnames[i] + "_debug").c_str(), (detnames[i] + "_debug").c_str(), dbgR[i][0], dbgR[i][1], dbgR[i][2], dbgR[i][3],dbgR[i][4], dbgR[i][5]);

	    TH2D *RZ = new TH2D(("RZ_"+detnames[i]).c_str(), ("RZ_"+detnames[i]).c_str(), 1000,-6000,6000,1000,0,3000);
	    TH2D *XY = new TH2D(("XY_"+detnames[i]).c_str(), ("XY_"+detnames[i]).c_str(), 1000,-3000,3000,1000,-3000,3000);	
	    TH2D *ZPhi = new TH2D(("ZPhi_"+detnames[i]).c_str(), ("ZPhi_"+detnames[i]).c_str(), 1000, -6000, 6000, 1000, 0, 2*3.14159);

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

      if(detector==DET_SiBarrelTracker) {  //  unit currently 44 staves for inner layer,   69 staves for outer layer
	const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,4,12,2}));

	  if(sys == 59) {	
       	    fillDebugHist(detector, z, getPhi(x,y), module);
	  }
	  
	  cell = cell & maskBits(26);
	}
      
      else if(detector==DET_SiBarrelVertex) {   // unit currently 128 something x 3 layers
	const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,4,12,2}));
	
	if(layer == 4) {
	  fillDebugHist(detector, z, getPhi(x,y), module);
	}
	
	cell = cell & maskBits(26); 
      }
      
      else if(detector==DET_SiEndcapTracker) {
	const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,4,12,2}));	
	//printf("Sys %d %d %d %d\n", sys, module, layer, sensor);
	cell = cell & maskBits(26);
	
	if((sys == 79)  && (layer==4)) {
	    fillDebugHist(detector, x,y, module);
	}
      }
      
      else if(detector==DET_BackwardMPGDEndcap) {
	const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,2,6,12}));
	//printf("Sys %d %d %d %d\n", sys,layer,module,sensor);
	
	if(layer == 2) {
	  fillDebugHist(detector, x, y, module);
	}
	
	cell = cell & maskBits(8+2+6+12);
      }
      
      else if(detector==DET_ForwardMPGDEndcap) {
	const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,2,6,12}));
	//printf("Sys %d %d %d %d\n", sys,layer,module,sensor);
	  
	if(layer == 1) {
	  fillDebugHist(detector, x, y, module);
	}
	
	cell = cell & maskBits(8+2+6+12);
      }
      
      else if(detector==DET_MPGDBarrel) {
	const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,4,12,2}));
	//printf("Sys %d %d %d %d\n", sys,layer,module,sensor);
	
	fillDebugHist(detector, z, getPhi(x,y), module);
       
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
	cell = cell & maskBits(8+4+12+2);
      }
      
      else if(detector==DET_LFHCAL) {
	const auto &[sys,moduleIDx,moduleIDy,moduletype,passive,towerx,towery,rlayerz,layerz] = tup9(cellToLocal(cell, {8,6,6,1,1,2,1,4,4}));

	//printf("Sys %d %d %d %d %d %d %d %d %d\n", sys, moduleIDx, moduleIDy, moduletype, passive, towerx, towery,rlayerz,layerz);
	
	//UInt_t ID = moduletype+1;
	//fillDebugHist(detector, x, y, ID);
	addDebugHist(detector,x,y);
	cell = cell & maskBits(8+6+6+1+1+2+1+4);

	// channel = moduleIDx, moduleIDy, towerx, towery, rlayerz
      }

      else if(detector==DET_HcalEndcapPInsert) {
	const auto &[sys,layer,slice] = tup3(cellToLocal(cell, {8,8,8}));
	Short_t xx = (cell >>32) & 0xffff;
	Short_t yy = (cell >>48) & 0xffff;
	addDebugHist(detector,xx, yy);

	cell = cell & 0xffffffff00000000;   // only take integerized xx,yy
	cell += (int)((layer-1)/5);

	// ~526 hexagonal layers by xx,yy
	// readout layer = 13 layers
	// channel = xx,yy,readout layer
      }

      else if(detector==DET_EcalEndcapP) {
	const auto &[sys, barrel, module, layer, slice, fiber_x, fiber_y] = tup7(cellToLocal(cell, {8,3,4,8,5,1,1}));
	Short_t xx = (cell >>32) & 0xffff;
	Short_t yy = (cell >>48) & 0xffff;
	//printf("Sys %d %d %d %d %d %d %d %d %d\n", sys, barrel, module, layer, slice, fiber_x, fiber_y, xx, yy);
	addDebugHist(detector, xx, yy);

	//channel = xx,yy
      }

      else if(detector==DET_EcalEndcapPInsert) {
	const auto &[sys, barrel, module, layer, slice] = tup5(cellToLocal(cell, {8,3,4,8,5}));
	Short_t xx = (cell >>32) & 0xffff;
	Short_t yy = (cell >>48) & 0xffff;
	addDebugHist(detector, xx, yy);
	//printf("Sys %d %d %d %d %d %d %d\n", sys, barrel, module, layer, slice, xx, yy);

	//channel = xx,yy
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
      }
      
      else if(detector==DET_EcalEndcapN) {
	const auto &[sys, sector, module] = tup3(cellToLocal(cell, {8,4,20}));
	
	Short_t xx = (cell >>32) & 0xffff;
	Short_t yy = (cell >>48) & 0xffff;
	fillDebugHist(detector, x,y, module);
	
	cell = cell & maskBits(8+4+20);
	// channel = sys,sector,module
      }

      else if(detector==DET_HcalBarrel) {
	const auto &[sys, sector, tower, tile] = tup4(cellToLocal(cell, {8,5,6,3}));
	
	Short_t xx = (cell >>32) & 0xffff;
	Short_t yy = (cell >>48) & 0xffff;
	fillDebugHist(detector, x,y, tower);

	//printf("Sys %d %d %d %d %d %d\n", sys,sector,tower,tile,xx,yy);
	
	cell = cell & maskBits(8+4+20);
	// channel = sys,sector,module
      }

      else if(detector==DET_EcalBarrelImaging) {
	const auto &[sys,sector,layer,slice,grid,fiber,u_zz] = tup7(cellToLocal(cell, {8,6,6,4,10,16,14}));
	Short_t zz = u_zz & ~0x2000;
	if(u_zz & 0x2000) {    // sign bit!
	  zz = -zz;
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

	//buildLimits(x,y,z);
      }

      else if(detector==DET_TOFBarrel) {
	const auto &[sys,layer,module,sensor] = tup4(cellToLocal(cell, {8,4,12,2}));
	Short_t xx = (cell >>32) & 0xffff;
	Short_t yy = (cell >>48) & 0xffff;
	//	printf("Sys %d %d %d %d %d %d\n", sys, layer,module,sensor,xx,yy);

	cell = cell & maskBits(8+4+12+2);

	fillDebugHist(detector, z, getPhi(x,y), module);

	// channel = sys,layer,module,sensor   {add z/100}
      }  

      else if(detector==DET_TOFEndcap) {
	const auto &[sys,layer,module,idx,idy] = tup5(cellToLocal(cell, {8,4,8,7,5}));
	Short_t xx = (cell >>32) & 0xffff;
	Short_t yy = (cell >>48) & 0xffff;
	//printf("Sys %d %d %d %d %d %d %d %f\n", sys, layer,module,idx,idy,xx,yy,z);

	cell = cell & maskBits(8+4+8+7+5);

	fillDebugHist(detector, x,y, idy);
	//buildLimits(x,y,z);
	// CELL = sys,layer,module,sensor   {add z/100}
	// ASIC 7.5/CELL      
	// pixel 1024/ASIC
	// 212 RDO/detector
      }  		
      
      else {
	return;
      }
  
      
      XY_alldet->Fill(x,y);
      RZ_alldet->Fill(z, sqrt(x*x+y*y));
      ZPhi_hist[detector]->Fill(z, getPhi(x,y));
      
      
      XY_hist[detector]->Fill(x,y);
      RZ_hist[detector]->Fill(z, sqrt(x*x+y*y));
      
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
	for(int i=0;i<ndets;i++) {
	  debug_hist[i]->Write();
	}
	hits_number_th->Write();
	for(int i=0;i<ndets;i++) {
	    XY_hist[i]->Write();
	    RZ_hist[i]->Write();
	    ZPhi_hist[i]->Write();
	}
	XY_alldet->Write();
	RZ_alldet->Write();
    }
};

#endif

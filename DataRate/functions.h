#ifndef DetectorDefintions_h
#define DetectorDefintions_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH1F.h>
#include <TH2D.h>
#include <TCanvas.h>
#include <TStyle.h>


#include <DD4hep/Detector.h>
#include <DD4hep/IDDescriptor.h>
#include <DD4hep/DetElement.h>
//#include <DD4hep/DetectorInterna.h>

using namespace dd4hep;

struct  JmlHit {
    ULong_t CellId;
    Float_t x;
    Float_t y;
    Float_t z;
};
  
class functions {
 public:
    TCanvas *jmlcanvas;
    //TFile *store;
    
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

    std::vector<Long_t> nominalChannels;
    std::vector<Int_t> nominalRDO;
    std::vector<Int_t> nominalFEB;
    std::vector<Int_t> nominalASIC;
  
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
    //Int_t DET_EcalEndcapPInsert;
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
	
	
	// Surfaces...
	//
	// SiBarrelTracker   sys=59
	// SiBarrelTracker   sys=60
	// SiBarrelVertex    sys=31  layer=1
	// SiBarrelVertex    sys=31  layer=2
	// SiBarrelVertex    sys=31  layer=3
	// SiEndcapTracker   sys=68 
	// SiEndcapTracker   sys=69 
	// SiEndcapTracker   sys=70  layer=1 
	// SiEndcapTracker   sys=70  layer=2
	// SiEndcapTracker   sys=70  layer=3
	// SiEndcapTracker   sys=77 
	// SiEndcapTracker   sys=78 
	// SiEndcapTracker   sys=79  layer=1 
	// SiEndcapTracker   sys=79  layer=2
	// SiEndcapTracker   sys=79  layer=3
	// BackwardMPGDEndcap  sys=72   layer=1
	// BackwardMPGDEndcap  sys=72   layer=2
	// ForwardMPGDEndcap   sys=82   layer=1
	// ForwardMPGDEndcap   sys=82   layer=2
	// MPGDBarrel          sys=61   
	// OuterMPGDBarrel     sys=64 
	// LFHCAL              sys=116  rlayer=0     { for ASIC perspective group... }
	// LFHCAL              sys=116  rlayer=1
	// LFHCAL              sys=116  rlayer=2
	// LFHCAL              sys=116  rlayer=3
	// LFHCAL              sys=116  rlayer=4
	// LFHCAL              sys=116  rlayer=5
      	// LFHCAL              sys=116  rlayer=6
	// HCcalEndcapPInsert  sys=115  int(layer/5)=0
	// HCcalEndcapPInsert  sys=115  int(layer/5)=1
	// HCcalEndcapPInsert  sys=115  int(layer/5)=2
	// HCcalEndcapPInsert  sys=115  int(layer/5)=3
	// HCcalEndcapPInsert  sys=115  int(layer/5)=4
	// HCcalEndcapPInsert  sys=115  int(layer/5)=5
	// HCcalEndcapPInsert  sys=115  int(layer/5)=6
	// HCcalEndcapPInsert  sys=115  int(layer/5)=7
	// HCcalEndcapPInsert  sys=115  int(layer/5)=8
	// HCcalEndcapPInsert  sys=115  int(layer/5)=9
	// HCcalEndcapPInsert  sys=115  int(layer/5)=10
	// HCcalEndcapPInsert  sys=115  int(layer/5)=11
	// HCcalEndcapPInsert  sys=115  int(layer/5)=12
	// EcalEndcapP         sys=102
	// EcalEndcapPInsert   sys=106
	// HcalEndcapN         sys=113
	// EcalEndcapN         sys=103
	// HCalBarrel          sys=111
	// EcalBarrelImaging   sys=101  rpos0
	// EcalBarrelImaging   sys=101  rpos1
	// EcalBarrelImaging   sys=101  rpos2
	// EcalBarrelImaging   sys=101  rpos3
	// EcalBarrelSiFi      sys=105  zpos0       
	// EcalBarrelSiFi      sys=105  zpos1             phi
	// TOFBarrel           sys=92                     phi
	// TOFEndcap           sys=122  idxy=odd          xy
	// TOFEndcap           sys=122  idxy=even         xy
	// dRICH
	// pfRICH
	// DIRC
        // B0ECal
	// B0Tracker
	// RP
	// OffM
	// ZDCHcal
	// ZDCEcal
	// LowQ2Tracker
	// LowQ2Cal
	// LumiPairSpecCal
	// LumiPairSpecTrack
	// EcalLumiSpec

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
	// Forward CAL
	detnames.push_back("LFHCAL");  DET_LFHCAL = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("HcalEndcapPInsert");   DET_HcalEndcapPInsert = DET_cnt; detids.push_back(DET_cnt++);
	detnames.push_back("EcalEndcapP");  DET_EcalEndcapP = DET_cnt; detids.push_back(DET_cnt++);
	//detnames.push_back("EcalEndcapPInsert");  DET_EcalEndcapPInsert = DET_cnt; detids.push_back(DET_cnt++);
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
	detnames.push_back("EcalLumiSpec");  DET_EcalLumiSpec = DET_cnt; detids.push_back(DET_cnt++);     // Direct Photon


	for(int i=0;i<detnames.size();i++) {  
	    nominalChannels.push_back(0);
	    nominalASIC.push_back(0);
	    nominalFEB.push_back(0);
	    nominalRDO.push_back(0);

	    detectorSetup(i);
	}
    }

    void setup_storage() {
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
	//dbgR[DET_EcalEndcapPInsert] =  { 31, -15.5, 15.5, 31 , -15.5, 15.5 };    // xx, yy
	dbgR[DET_HcalEndcapN] =  { 161, -80.5, 80.5, 161 , -80.5, 80.5 };    // xx, yy
	dbgR[DET_EcalBarrelScFi] = { 600, -1500,1500, 600, -1500, 1500 };     // X,Y
	dbgR[DET_EcalEndcapN] =  { 150, -650, 650, 150 , -650, 650 };    // X,Y
	dbgR[DET_TOFBarrel] = { 200, -1200,1800, 200, 0,3.14159*2 };   // Z,Phi
	dbgR[DET_TOFEndcap] = { 200, -640, 640, 200, -640, 640 };   // X,Y


	// Setup hit storage for each detector
	for(int i=0;i<detids.size();i++) {
	    std::unordered_map<ULong_t, Int_t> x;
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
	   
	//store = new TFile("ARESULTS.root","recreate");
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
    // step 1 = out of rdo
    // step 2 = to tape
    Float_t asicBits(Int_t detector,Int_t stage) {
     
	// ITS-3
	if((detector == DET_SiBarrelVertex) ||
	   (detector == DET_SiBarrelTracker) ||
	   (detector == DET_SiEndcapTracker)) {
	    return 2*64;    // 64 bits / pixel + same hit likely in adjoining readouts
	}
	
	else if ((detector == DET_BackwardMPGDEndcap) ||
		 (detector == DET_ForwardMPGDEndcap) ||
		 (detector == DET_MPGDBarrel) ||
		 (detector == DET_OuterMPGDBarrel)) {
	    if(stage == 1)
		return 5*64;    // 64 bits / hit        Charge sharing estimated at 3-5 pixels
	    else 
		return 64;      // assume cluster finding reduction
	}

	else if((detector == DET_EcalEndcapP) ||
		(detector == DET_EcalEndcapN))   {
	    if(stage == 1) 
		return 64*6;   // 4 time bins sampled?
	    else 
		return 64;
	}

	else if((detector == DET_LFHCAL) ||
		(detector == DET_HcalEndcapPInsert) ||
		(detector == DET_HcalEndcapN) ||
		(detector == DET_HcalBarrel) ||
		(detector == DET_EcalBarrelScFi)) {
	    if(stage == 1) 
		return 18*64*6;  // assume 1/4 asic segmentation AND need for 4 samples 
	    else
		return 64;       // can reduce to single channel hit
	}
	
	else if(detector == DET_EcalBarrelImaging) {
	    return 64;
	}

	else if(detector == DET_TOFBarrel) {
	    return 64;           // FCFD?
	}

	else if (detector == DET_TOFEndcap) {
	    if(stage == 1) 
		return 9*64;     // 3x3 segmentation
	    else
		return 64;       // can reduce to single channel hit
	}
	else {
	    return 64;
	}
    }

    // stage = 0 -> per channel
    // stage = 1 -> per asic
    // stage = 2 -> per rdo
    // stage = 3 -> per rdo after software triggering

    Float_t detectorNoise(Int_t detector, int stage) {
	Float_t noise_per_channel=0;

	
	    // ITS-3
	if((detector == DET_SiBarrelVertex) ||
	   (detector == DET_SiBarrelTracker) ||
	   (detector == DET_SiEndcapTracker)) {
	    noise_per_channel = 1e-3;                
	}
	
	else if((detector == DET_BackwardMPGDEndcap) ||
		(detector == DET_ForwardMPGDEndcap) ||
		(detector == DET_MPGDBarrel) ||
		(detector == DET_OuterMPGDBarrel)) {
	    noise_per_channel = 30;                  //guess
	    if(stage >= 3) noise_per_channel = 0;                 // assume cluster finding eliminates noise!
	}
	
	else if((detector == DET_EcalEndcapP) ||
		(detector == DET_EcalEndcapN)) {
	    noise_per_channel = 1000;
	    if(stage >= 3) {
		noise_per_channel = 0;
	    }
	}

	else if((detector == DET_LFHCAL) ||
		(detector == DET_HcalEndcapPInsert) ||
		(detector == DET_HcalEndcapN) ||
		(detector == DET_HcalBarrel) ||
		(detector == DET_EcalBarrelScFi)) {
	    noise_per_channel = 1000;
	    if(stage>=3) {
		noise_per_channel = 0;
	    }
	}
	
	else if(detector == DET_EcalBarrelImaging) {
	    return 0;                 // no quote?
	}
	 
	else if(detector == DET_TOFBarrel) {
	    noise_per_channel = 30;
	    if(stage >= 3) {
		noise_per_channel = 0;
	    }
	}

	else if	(detector == DET_TOFEndcap) {
	    noise_per_channel = 30;     
	    if(stage >= 3) noise_per_channel = 0;                // cluster finding eliminates noise
	}   

	else if(detector == DET_dRICH) {
	    noise_per_channel = 320000.0/5;         // timing window
	    if(stage >= 3) {
		noise_per_channel /= 200;           // should be fraction of events hitting dRICH, including backgrounds
	    }
	}
	else {
	    //noise_per_channel = 2.7e-3 * 100e6 / 2;             // 3 sigma   135kHz
	    //noise_per_channel = 6.3e-5 * 100e6 / 2;             // 4 sigma   3.1kHz
	    noise_per_channel = 5.7e-7 * 100e6 / 2;               // 5 sigma   30hz
	    //noise_per_channel = 2.0e-9 * 100e6 / 2;             // 6 sigma   .1hz
	}

	// for simple detectors/no software trigger or clustering
	// if noise reductions exist, do full calculations in case statements
	if(stage == 0) return noise_per_channel;
	if(stage == 1) return noise_per_channel * nominalChannels[detector]/nominalASIC[detector];
	return noise_per_channel * nominalChannels[detector]/nominalRDO[detector];
    }


    void detectorSetup(Int_t detector) {
	if(detector==DET_SiBarrelTracker) {  
	    //  unit currently 44 staves for inner layer,   69 staves for outer layer
	    // 892111 mm^2   .02mmx.02mm channel 
	    // 1578 reticules  
	    // 50 RDO
	    nominalChannels[detector] = (Long_t)(892111.0/(.02*.02));
	    nominalASIC[detector] = 1578 + 2294;
	    nominalFEB[detector] = 1578 + 2294;
	    nominalRDO[detector] = 50 + 72;
	}
	else if(detector==DET_SiBarrelVertex) {   // unit currently 128 something x 3 layers
	    // A=61041 mm^2
	    // 108 ASIC
	    // 4 RDO
	    nominalChannels[detector] = (Long_t)(61041.0/(.02*.02));
	    nominalASIC[detector] = (108 + 144 + 359);
	    nominalFEB[detector] = (108 + 144 + 359);
	    nominalRDO[detector] = (4 + 5 + 12);

	}	
	else if(detector==DET_SiEndcapTracker) {
	    // sys=68:              A=176565,   ASIC=313,   RDO=10
	    // sys=69               A=536488,   ASIC=949,   RDO=30
	    // sys=70, layer=2:     A=552238,   ASIC=977,   RDO=31
	    // sys=70  layer=3:     A=551513,   ASIC=976,   RDO=31
	    // sys=70, layer=4:     A=549892,   ASIC=972,   RDO=31
	    // sys=77               A=176565,   ASIC=313,   RDO=10
	    // sys=78               A=536488,   ASIC=949,   RDO=30
	    // sys=79, layer=2      A=552002,   ASIC=977,   RDO=31
	    // sys=79, layer=3      A=547716,   ASIC=969,   RDO=31
	    // sys=79, layer=4      A=541150,   ASIC=957,   RDO=31
	    nominalChannels[detector] = (Long_t)((176565.0/(.02*.02))+
						 (536488.0/(.02*.02))+
						 (552238.0/(.02*.02))+
						 (551513.0/(.02*.02))+
						 (549892.0/(.02*.02))+
						 (176565.0/(.02*.02))+
						 (536488.0/(.02*.02))+
						 (552002.0/(.02*.02))+
						 (547716.0/(.02*.02))+
						 (541150.0/(.02*.02)));
	    nominalASIC[detector] = (313+949+977+976+972+
				     313+949+977+969+957);
	    nominalFEB[detector] = nominalASIC[detector];
	    nominalRDO[detector] = (10+30+31+31+31+
				    10+30+31+31+31);
	}
	else if(detector==DET_BackwardMPGDEndcap) {
	    // 16k channels
	    // 2 layers (1-2)
	    // 8k ch = 128 asic = 32 feb = 8 rdo / layer
	    nominalChannels[detector] = 8000*2;
	    nominalASIC[detector] = 128*2;
	    nominalFEB[detector] = 32*2;
	    nominalRDO[detector] = 8*2;
	}
	else if(detector==DET_ForwardMPGDEndcap) {
	    // 16k channels
	    // 2 layers (1-2)
	    // 8k ch = 128 asic = 32 feb = 8 rdo / layer
	    nominalChannels[detector] = 8000*2;
	    nominalASIC[detector] = 128*2;
	    nominalFEB[detector] = 32*2;
	    nominalRDO[detector] = 8*2;
	}
      	else if(detector==DET_MPGDBarrel) {
	    // 30k channels = 512 asic = 32 RDO
	    nominalChannels[detector] = 30000;
	    nominalASIC[detector] = 512;
	    nominalFEB[detector] = 128;
	    nominalRDO[detector] = 32;
	}
	else if(detector==DET_OuterMPGDBarrel) {
	    // 140k channels
	    // 2188 asic
	    // 1094 asic = 69 RDO / side
	    nominalChannels[detector] = 140000;
	    nominalASIC[detector] = 2188;
	    nominalFEB[detector] = 547;
	    nominalRDO[detector] = 137;
	}
	else if(detector==DET_LFHCAL) {
	    // Total asics = 1000
	    // 
	    // Assume moduleIDx,moduleIDy, rlayerz 53*53 -> 1150  defines asic  (54 channels)
	    //
	    // channel = moduleIDx, moduleIDy, towerx, towery, rlayerz
	    //asic = moduleIdx + 53*moduleIdy;           // 4x2x7 = 56 ch/asic
	    //rdo = (int)moduleIdx/2+ 53*((int)moduleIdy/2);   // poor mans divide by 4!
	    nominalChannels[detector] = 63280;
	    nominalASIC[detector] = 1130;           // assume 7 layers x 8 towers
	    nominalFEB[detector] = 1130;
	    nominalRDO[detector] = 74;              // 16 FEB/RDO?
	}
	else if(detector==DET_HcalEndcapPInsert) {
	    // 8k nominal channels
	    // ~562 hexagonal layers by xx,yy
	    // readout layer = 65/5 = 13 layers
	    // channel = xx,yy,readout layer
	    nominalChannels[detector] = 8000;
	    nominalASIC[detector] = 154;           // assume 13 layers x 4 towers
	    nominalFEB[detector] = 154;
	    nominalRDO[detector] = 10;             // 16 FEB/RDO?
	}
	else if(detector==DET_EcalEndcapP) {
	    // 19k channels
	    // r = 199 - 1965
	    // 24 ch/feb   16 ch/RDO
	    // ASIC = 790   RDO = 50
	    nominalChannels[detector] = 14592;
	    nominalASIC[detector] = 456;          
	    nominalFEB[detector] = 456;
	    nominalRDO[detector] = 29;           
	}
	/*
	else if(detector==DET_EcalEndcapPInsert) {
	    // 536 channels
	    nominalChannels[detector] = 536;
	    nominalASIC[detector] = 23;              
	    nominalFEB[detector] = 23;
	    nominalRDO[detector] = 2;               
	    }
	*/
	else if(detector==DET_HcalEndcapN) {
	    // 2334 x,y positions
	    // 10 layers
	    //    Go for now with "2334 channels"
	    //    2 RDO
	    //    64 ASIC  (only 37 channels / asic)
	    nominalChannels[detector] = 3256;          // Completely unknown structure
	    nominalASIC[detector] = 64;              
	    nominalFEB[detector] = 64;
	    nominalRDO[detector] = 2;               
	}
	else if(detector==DET_EcalEndcapN) {
	    // 2998 channels distributed in ring
	    // 24 channels/feb = 125 FEB
	    // 8 RDO
	    nominalChannels[detector] = 2998;
	    nominalASIC[detector] = 125;              // 24 ch/feb
	    nominalFEB[detector] = 125;
	    nominalRDO[detector] = 8;                 // 16 FEB/RDO?
	}
	else if(detector==DET_HcalBarrel) {
	    // sector=0-31, tower=0-47, tile=0-4
	    // 1 asic/tile, 5 asic/sector
	    // 30 asic/rdo -> 6 sectors/rdo
	    nominalChannels[detector] = 7680;
	    nominalASIC[detector] = 160;            // 48 ch/feb
	    nominalFEB[detector] = 160;
	    nominalRDO[detector] = 10;              // 16 FEB/RDO
	}
	else if(detector==DET_EcalBarrelImaging) {

	    // Layer 1: if(getR(x,y) <900) {
	    //	asic = distributeEven(z, 14537, -2579, 1804);
	    //	rdo = distributeEven(z, 52, -2579, 1804);
	    // Layer 2: if((getR(x,y) >900) && (getR(x,y) < 930)) {
	    //  asic = distributeEven(z, 15827, -2579, 1804) + bAsic;
	    //  rdo = distributeEven(z, 57, -2579, 1804) + bRdo;
	    // Layer 3: if((getR(x,y) >930) && (getR(x,y) < 970)) {
	    //  asic = distributeEven(z, 16429, -2579, 1804) + bAsic;
	    //  rdo = distributeEven(z, 59, -2579, 1804) + bRdo;
	    // Layer3: if(getR(x,y) > 970) {
	    //  asic = distributeEven(z, 17719, -2579, 1804) + bAsic;
	    //	rdo = distributeEven(z, 63, -2579, 1804) + bRdo;
	    nominalChannels[detector] = (14537 + 15827 + 16429 + 17719) * 5320;
	    nominalASIC[detector] = (14537 + 15827 + 16429 + 17719);      
	    nominalFEB[detector] = (14537 + 15827 + 16429 + 17719); 
	    nominalRDO[detector] = (52+57+59+63);
	}
	else if(detector==DET_EcalBarrelScFi) {
	    // 48 sectors
	    // 12 rowsx
	    // 60 towers/sector (5 towers/row-sector)
	    // 60 channels/sector,  1 asic/sector
	    // NASIC=48 / side,  NRDO=2/side
	    nominalChannels[detector] = 2880 * 2;
	    nominalASIC[detector] = 48 * 2;            
	    nominalFEB[detector] = 48 * 2;
	    nominalRDO[detector] = 3 * 2;              
	}

	else if(detector==DET_TOFBarrel) {
	    // asic = 2,359,296/128 -> 18,432 ASIC/64 -> 288 RDO
	    nominalChannels[detector] = 2359296;
	    nominalASIC[detector] = 18432;              
	    nominalFEB[detector] = 2304;
	    nominalRDO[detector] = 288;               
	}  

	else if(detector==DET_TOFEndcap) {
	    // pixel=3719168 -> 3632 asic -> 212 RDO
	    //                  1816 asic -> 106 RDO / layer
	    nominalChannels[detector] = 3719168;
	    nominalASIC[detector] = 3632;              // 1024 ch/asic
	    nominalFEB[detector] = 3632;
	    nominalRDO[detector] = 212;                  
	}  		
      	else {
	    return;
	}
  
    }

    void addHitCell(int event, Int_t detector, ULong_t cell, Float_t x, Float_t y, Float_t z) {
	ULong_t asic=0xffffffffff;
	ULong_t rdo =0xffffffffff;
	ULong_t channel = 0xffffffffff;

	ULong_t bAsic = 0;
	ULong_t bRdo = 0;

	if(detector==DET_SiBarrelTracker) {  //  unit currently 44 staves for inner layer,   69 staves for outer layer
	    const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,4,12,2}));
	    // 892111 mm^2
	    // 1578 reticules
	    // 50 RDO
	    if(sys == 59) {
		asic = distributeEven(z, 1578, -261, 261);
		rdo = distributeEven(z, 50, -261, 261);
		
	    }
	    // 1296848 mm^2
	    // 2294 reticules
	    // 72 RDO
	    if(sys == 60) {
		asic = distributeEven(z, 2294, -420, 420) + 1578;
		rdo = distributeEven(z, 72, -420, 420) + 50;
		
		fillDebugHist(detector, z, getPhi(x,y), asic);
	    }
	    
	    //printf("Sys %ld %d %d %d %d %f %f\n",asic, sys,layer,module,sensor,getPhi(x,y),z);
	    //cell = cell & maskBits(26);
	}
	
	else if(detector==DET_SiBarrelVertex) {   // unit currently 128 something x 3 layers
	    const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,4,12,2}));
	    
	    // A=61041 mm^2
	    // 108 ASIC
	    // 4 RDO
	    if(layer == 1) {
		asic = distributeEven(z,108,-135,135);
		rdo = distributeEven(z,4,-135,135);
	    }
	    bAsic = 108;
	    bRdo = 4;
	    // A=81389 mm^2
	    // 144 ASIC
	    // 5 RDO
	    if(layer == 2) {
		asic = distributeEven(z,144,-135,135)  + bAsic;
		rdo = distributeEven(z,5,-135,135)  + bRdo;
	    }
	    bAsic += 144;
	    bRdo += 5;
	    
	    // A=203472 mm^2
	    // 360 ASIC
	    // 12 RDO
	    if(layer == 4) {
		asic = distributeEven(z,359,-135,135)  + bAsic;
		rdo = distributeEven(z,12,-135,135)  + bRdo;
	    }
	    
	    if(layer == 4) {
		fillDebugHist(detector, z, getPhi(x,y), asic);
	    }
	    
	    cell = cell & maskBits(26); 
	}
	
	else if(detector==DET_SiEndcapTracker) {
	    const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,4,12,2}));	
	    
	    cell = cell & maskBits(26);
	    
	    // A=176565,   ASIC=313,   RDO=10
	    if(sys == 68) {
		asic = distributeCircle(getR(x,y), 313, 37, 240);
		rdo = distributeCircle(getR(x,y), 10, 37, 240);
	    }
	    bAsic = 313;
	    bRdo = 10;
	    
	    // A=536488,   ASIC=949,   RDO=30
	    if(sys == 69) {
		asic = distributeCircle(getR(x,y), 949, 37,415) + bAsic;
		rdo = distributeCircle(getR(x,y), 30, 37,415) + bRdo;
	    }
	    bAsic += 313;
	    bRdo += 30;
	    
	    // A=552238,   ASIC=977,   RDO=31
	    if((sys == 70) && (layer==2)) {
		asic = distributeCircle(getR(x,y), 977, 37,415) + bAsic;
		rdo = distributeCircle(getR(x,y), 31, 37,415) + bRdo;
	    }
	    bAsic += 977;
	    bRdo += 31;
	    
	    // A=551513,   ASIC=976,   RDO=31
	    if((sys == 70) && (layer==3)) {
		asic = distributeCircle(getR(x,y), 976, 40,421) + bAsic;
		rdo = distributeCircle(getR(x,y), 31, 40, 421) + bRdo;
	    }
	    bAsic += 976;
	    bRdo += 31;
	    
	    // A=549892,   ASIC=972,   RDO=31
	    if((sys == 70) && (layer==4)) {
		asic = distributeCircle(getR(x,y), 972, 46,421) + bAsic;
		rdo = distributeCircle(getR(x,y), 31, 46,421) + bRdo;
	    }
	    bAsic += 972;
	    bRdo += 31;
	    
	    // A=176565,   ASIC=313,   RDO=10
	    if(sys == 77) {
		asic = distributeCircle(getR(x,y), 313 ,37,240)   + bAsic;
		rdo = distributeCircle(getR(x,y), 10 ,37,240)   + bRdo;
	    }
	    bAsic += 313;
	    bRdo += 10;
	    
	    // A=536488,   ASIC=949,   RDO=30
	    if(sys == 78) {
		asic = distributeCircle(getR(x,y), 949, 37,415) + bAsic;
		rdo = distributeCircle(getR(x,y), 30, 37,415) + bRdo;
	    }
	    bAsic += 949;
	    bRdo += 30;
	    
	    // A=552002,   ASIC=977,   RDO=31
	    if((sys == 79) && (layer==2)) {
		asic = distributeCircle(getR(x,y), 977, 38,421) + bAsic;
		rdo = distributeCircle(getR(x,y), 31, 38,421) + bRdo;
	    }
	    bAsic += 977;
	    bRdo += 31;
	    
	    // A=547716,   ASIC=969,   RDO=31
	    if((sys == 79) && (layer==3)) {
		asic = distributeCircle(getR(x,y), 969, 53,421) + bAsic;
		rdo = distributeCircle(getR(x,y), 31, 53,421) + bRdo;
	    }
	    bAsic += 969;
	    bRdo += 31;
	    
	    // A=541150,   ASIC=957,   RDO=31
	    if((sys == 79) && (layer==4)) {
		asic = distributeCircle(getR(x,y), 957, 70,421) + bAsic;
		rdo = distributeCircle(getR(x,y), 31, 70,421) + bRdo;
	    }
	    
	    if((sys == 79)  && (layer==4)) {
		fillDebugHist(detector, x,y, asic-bAsic);
	    }
	    
	    //printf("SiEndcapTracker: %ld %d %d %d %d\n", asic, sys, module, layer, sensor);
	}
	
	else if(detector==DET_BackwardMPGDEndcap) {
	    const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,2,6,12}));
	    Short_t xx = (cell >>32) & 0xffff;
	    Short_t yy = (cell >>48) & 0xffff;
	    //printf("Backward MPGDEndcap %d %d %d %d %d %d\n", sys,layer,module,sensor, xx, yy);
	
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
	    Short_t xx = (cell >>32) & 0xffff;
	    Short_t yy = (cell >>48) & 0xffff;

	    // 16k channels
	    // 2 layers (1-2)
	    // 8k ch = 128 asic = 32 feb = 8 rdo / layer
	    if(layer == 1) {
		asic = distributeCircle(getR(x,y), 128, 70, 500);
		rdo = distributeCircle(getR(x,y), 8, 70, 500);
       
		fillDebugHist(detector, x, y, rdo);
	    }
	    if(layer == 2) {
		asic = distributeCircle(getR(x,y), 128, 70, 500) + 128;
		rdo = distributeCircle(getR(x,y), 8, 70, 500) + 8;
	    }
       	
	    cell = cell & maskBits(8+2+6+12);
	    //channel = cell;
	}
      
	else if(detector==DET_MPGDBarrel) {
	    const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,4,12,2}));
	    fillDebugHist(detector, z, getPhi(x,y), module);

	    // 30k channels = 512 asic = 32 RDO
	    asic = distributeEven(z, 512, -1050, 1350);
	    rdo = distributeEven(z, 32, -1050, 1350);
       
	    cell = cell & maskBits(8+4+12+2);
	    //channel = cell;
	}
      
	else if(detector==DET_OuterMPGDBarrel) {
	    const auto &[sys, layer, module, sensor] = tup4(cellToLocal(cell, {8,4,12,2}));

	    if((module %2) == 0) {
		fillDebugHist(detector, z, getPhi(x,y), module);
	    }
	    else {
		fillDebugHist(detector, z, getPhi(x,y), module + 30);  
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
	    //channel = cell;
	}
      
	else if(detector==DET_LFHCAL) {
	    const auto &[sys,moduleIDx,moduleIDy,moduletype,passive,towerx,towery,rlayerz,layerz] = tup9(cellToLocal(cell, {8,6,6,1,1,2,1,4,4}));

	    Short_t xx = (cell >>32) & 0xffff;
	    Short_t yy = (cell >>48) & 0xffff;

	    //printf("DET_LFHCAL- %d %d %f %f %d %d %d %d %d %d %d %d %d\n", xx, yy, x,y, getR(x,y), getPhi(x,y), sys, moduleIDx, moduleIDy, moduletype, passive, towerx, towery,rlayerz,layerz);
	
	    //UInt_t ID = moduletype+1;
	    //fillDebugHist(detector, x, y, ID);
	    addDebugHist(detector,x,y);
	    cell = cell & maskBits(8+6+6+1+1+2+1+4);

	    // Total asics = 1000
	    // 
	    asic = moduleIDx + 1000*moduleIDy;            // 8 towers x 7 layers
	    rdo = (int)(moduleIDx/8) + (int)(moduleIDy/4) * 1000;   //16 asic/RDO

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
	    //printf("DET_HcalEndcapPInsert- %d %d %f %f %d %d %d\n", xx, yy, x, y, getR(x,y), getPhi(x,y), sys, layer, slice);

	    addDebugHist(detector,xx, yy);

	    cell = cell & 0xffffffff00000000;   // only take integerized xx,yy
	    cell += (int)((layer-1)/5);

	    //asic = distributeGrid(xx,yy,3,2,100,100);  // 2x2x13 layers = 52 ch/asic
	    //rdo = distributeGrid(xx,yy,6,4,100,100);   // 16 asics/rdo
	    
	    asic = distributeRect(x,y,154/7,-500,250,-350,350,130, 1);  //130
	    asic += 1000000 * (int)((layer-1)/10);    // 7 layers
	    rdo = distributeRect(x,y,10,-500,250,-350, 350,130, 1);

	    // 8k nominal channels
	    // ~562 hexagonal layers by xx,yy
	    // readout layer = 65/5 = 13 layers
	    // channel = xx,yy,readout layer

	    channel = cell;
	}
	
	else if(detector==DET_EcalEndcapP) {
	    const auto &[sys, barrel, module, layer, slice, fiber_x, fiber_y] = tup7(cellToLocal(cell, {8,3,4,8,5,1,1}));
	    Short_t xx = (cell >>32) & 0xffff;
	    Short_t yy = (cell >>48) & 0xffff;
	    
	    // EcalEndcapPInsert is shifted because gap around beampipe is not centered
	    if(sys == 106) {
		xx = xx-4;
	    }
	    
	    //printf("DET_EcalEndcapP- %d %d %d %d %d %d %d %d %d\n", xx,yy, sys, barrel, module, layer, slice, fiber_x, fiber_y);
	    
	    // 19k channels
	    // r = 199 - 1965
	    // 24 ch/feb   16 ch/RDO
	    //
	    // ASIC = 790   RDO = 50
	    channel = distributeGrid(x,y,25,25,500);
	    asic = distributeGrid(x, y, 8*25, 4*25, 500);           // towers are 2.5cm x 2.5cm
	    rdo = distributeGrid(x, y, 4*8*25, 4*4*25, 500);
	    //printf("x=%f y=%f asic=%d rdo = %d\n",x,y,(int)asic, (int)rdo);

	    addDebugHist(detector, xx, yy);
	    //buildLimits(x,y,z);
	    //channel = xx,yy
	    
	    channel = cell;
	}
	
	/*  No such detector.  The hits are processed by EcalEndcapP
	    else if(detector==DET_EcalEndcapPInsert) {
	    const auto &[sys, barrel, module, layer, slice] = tup5(cellToLocal(cell, {8,3,4,8,5}));
	    Short_t xx = (cell >>32) & 0xffff;
	    Short_t yy = (cell >>48) & 0xffff;
	    addDebugHist(detector, xx, yy);
	    asic = distributeRect(x,y,24,-400,200, -300,300, 125);
	    rdo = (y>0) ? 0 : 1;
	    channel = cell;
	    }
	*/
  
	else if(detector==DET_HcalEndcapN) {
	    const auto &[sys, barrel, module, layer, slice] = tup5(cellToLocal(cell, {8,3,4,8,5}));
	
	    Short_t xx = (cell >>32) & 0xffff;
	    Short_t yy = (cell >>48) & 0xffff;
	    //printf("DET_HcalEndcapN- %f %f %f %d %d %d %d %d %d %d\n", x,y,z,xx,yy,sys, barrel, module, layer, slice);

	    fillDebugHist(detector, xx, yy, xx);
	    cell = cell & 0xffffffff00000000;

	    // 2334 x,y positions
	    // 10 layers
	    //    Go for now with "2334 channels"
	    //    2 RDO
	    //    64 ASIC  (only 37 channels / asic)

	    asic=distributeCircle(getR(x,y), 64, 100, 2551);
	    rdo = distributeCircle(getR(x,y), 2, 100, 2551);
	    // buildLimits(x,y,z);

	    // channel = xx,yy     -> 2334 channels
	    //         layers/grouping to make 3256?
	    channel = cell;
	}
      
	else if(detector==DET_EcalEndcapN) {
	    const auto &[sys, sector, module] = tup3(cellToLocal(cell, {8,4,20}));
	
	    Short_t xx = (cell >>32) & 0xffff;
	    Short_t yy = (cell >>48) & 0xffff;	
	    //printf("DET_EcalEndcapN- %d %d %d %d %d\n", xx,yy,sys,sector,module);
	    
	    // 2998 channels distributed in ring
	    // 24 channels/feb = 125 FEB
	    // 8 RDO
	    asic = distributeCircle(getR(x,y), 125, 72, 643);
	    rdo = distributeCircle(getR(x,y), 8, 72,643);

	    fillDebugHist(detector, x,y, module);
	
	    cell = cell & maskBits(8+4+20);
	    // channel = sys,sector,module
	    channel = cell;
	}

	else if(detector==DET_HcalBarrel) {
	    const auto &[sys, sector, tower, tile] = tup4(cellToLocal(cell, {8,5,6,3}));
	
	    Short_t xx = (cell >>32) & 0xffff;
	    Short_t yy = (cell >>48) & 0xffff;
	    //printf("DET_HcalBarrel- %d %d %d %d %d %d\n", xx,yy,sys, sector, tower,tile

	    // sector=0-32, tower=0-47, tile=0-4
	    // 1 asic/tile, 5 asic/sector
	    // 30 asic/rdo -> 6 sectors/rdo
	    // 
	    asic = sector*5 + tile;
	    rdo = (int)(sector/4);


	    fillDebugHist(detector, x,y, tower);
	
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

	    if(getR(x,y) <900) {
		asic = distributeRect(z, getPhi(x,y), 14537, -2579, 1804,0,2*3.14159,0,697);
		rdo = distributeRect(z, getPhi(x,y),  52,    -2579, 1804,0,2*3.14159,0,697);
	    }
	    bAsic = 14537;
	    bRdo = 52;
	    if((getR(x,y) >900) && (getR(x,y) < 930)) {
		asic = distributeRect(z,getPhi(x,y), 15827, -2579, 1804,0,2*3.14159,0,697) + bAsic;
		rdo = distributeRect(z, getPhi(x,y), 57, -2579, 1804,0,2*3.14159,0,697) + bRdo;
	    }
	    bAsic += 15827;
	    bRdo += 57;
	    if((getR(x,y) >930) && (getR(x,y) < 970)) {
		asic = distributeRect(z, getPhi(x,y), 16429, -2579, 1804,0,2*3.14159,0,697) + bAsic;
		rdo = distributeRect(z, getPhi(x,y),  59, -2579, 1804,0,2*3.14159,0,697) + bRdo;
	    }
	    bAsic += 16429;
	    bRdo += 59;
	    if(getR(x,y) > 970) {
		asic = distributeRect(z, getPhi(x,y), 17719, -2579, 1804,0,2*3.14159,0,697) + bAsic;
		rdo = distributeRect(z, getPhi(x,y), 63, -2579, 1804,0,2*3.14159,0,697) + bRdo;
	    }

	    //printf("Astropix %d %d %f %f %d %d %d %d %d %f\n", sys,sector,layer,slice,grid,fiber,zz, z);
	    //buildLimits(x,y,z);
	}
	
	else if(detector==DET_EcalBarrelScFi) {
	    //const auto &[sys,sector,row,tower] = tup4(cellToLocal(cell, {8,8,8,8}));
	    const auto &[sys,sector,row,zzz,tower] = tup5(cellToLocal(cell, {8,6,6,4,8}));
	    Short_t xx = (cell >>32) & 0xffff;
	    Short_t yy = (cell >>48) & 0xffff;
	    //printf("DET_EcalBarrelScFi- %d %d %f %f %f %f %d %d %d %d\n", xx,yy, x, y, getR(x,y), getPhi(x,y), sys, sector,row,tower);
	    {
		fillDebugHist(detector, x, y,row);
	    }

	    // 60 channels/sector,  1 asic/sector
	    // NASIC=48 / side,  NRDO=2/side
	    asic = sector-1;
	    rdo = (int)((sector-1)/24);
	    if(z > 0) {
		asic += 48;
		rdo += 2;
	    }

	    cell = cell & maskBits(8+8+8+8);
	    ULong_t ncell = cell + 0x10000000000;    // always hit both sides!
	    //det_[detector][ncell]++;         // add second hit!

	    channel = cell;
	    int nchannel = ncell;
	    int nasic = asic + 10000;
	    int nrdo = rdo + 10000;
	    asic_hits[detector][nasic]++;
	    rdo_hits[detector][nrdo]++;
	    channel_hits[detector][nchannel]++;
       


	}

	else if(detector==DET_TOFBarrel) {
	    const auto &[sys,layer,module,sensor] = tup4(cellToLocal(cell, {8,4,12,2}));
	    Short_t xx = (cell >>32) & 0xffff;
	    Short_t yy = (cell >>48) & 0xffff;
	    //	printf("Sys %d %d %d %d %d %d\n", sys, layer,module,sensor,xx,yy);

	    cell = cell & maskBits(8+4+12+2);

	    fillDebugHist(detector, z, getPhi(x,y), module);

	    // asic = 2,359,296/128 -> 18,432 ASIC/64 -> 288 RDO
	    asic = distributeRect(z, getPhi(x,y), 18432, -1120, 1737, 0, 2*3.14159,0,454);
	    rdo = distributeRect(z, getPhi(x,y),  288,   -1120, 1737, 0, 2*3.14159,0,454);
	
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
	    channel_hits[detector][channel]++;
	}

	//printf("det\n");
	//det_hitcells[detector][cell]++;
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

    /*
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
    */
    
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

    /*    
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
    */

    void addDebugHist(Int_t det, Float_t axis1, Float_t axis2) {
	debug_hist[det]->Fill(axis1, axis2);
    }

    void fillDebugHist(Int_t det, Float_t axis1, Float_t axis2, Int_t weight) {
	UInt_t binx = debug_hist[det]->GetXaxis()->FindBin(axis1);
	UInt_t biny = debug_hist[det]->GetYaxis()->FindBin(axis2);
	UInt_t bin = debug_hist[det]->GetBin(binx,biny);
	debug_hist[det]->SetBinContent(bin, weight);
    }

    void writeData(const char *fn, Int_t actual_events) {
	TFile f1(fn, "RECREATE");
	
	std::vector<Int_t> events_processed;
	events_processed.push_back(actual_events);
	f1.WriteObject(&events_processed, "events_processed");
	f1.WriteObject(&detnames, "detnames");
	f1.WriteObject(&asic_hits, "asic_hits");
	f1.WriteObject(&rdo_hits, "rdo_hits");
	f1.WriteObject(&channel_hits, "channel_hits");

	f1.Close();

	
	//std::vector<std::string> detnames;
	//std::vector<Int_t> detids;

	//std::vector<Long_t> nominalChannels;
	//std::vector<Int_t> nominalRDO;
	//std::vector<Int_t> nominalFEB;
	//std::vector<Int_t> nominalASIC;
  
	//std::vector<std::map<ULong_t, Int_t>> asic_hits;    // ASIC:18, FEB:15, RDO:11, DAM:8
	// 262k,    32k,    2048    256
	//std::vector<std::map<ULong_t, Int_t>> rdo_hits;
	//std::vector<std::map<ULong_t, Int_t>> channel_hits;
    }

    void readData(const char *fn) {
	TFile f1(fn);

	std::vector<std::string> *tstr;
	std::vector<std::map<ULong_t, Int_t>> *tmp;
	f1.GetObject("detnames", tstr);
	detnames = *tstr;
	f1.GetObject("asic_hits", tmp);
	asic_hits = *tmp;
	f1.GetObject("rdo_hits", tmp);
	rdo_hits = *tmp;
	f1.GetObject("channel_hits", tmp);
	channel_hits = *tmp;
	f1.Close();
    }
    
    

    void writeHistos(const char *fn, Double_t actual_events) {

	TFile *store = new TFile(fn,"recreate");
	
	int ndets = detnames.size();
	printf("Writing histograms:  ndets=%d\n", ndets);

	for(int i=0;i<ndets;i++) {
	    int hits=0;
	    for(const auto & [cell, count] : asic_hits[i]) hits += count;
	  
	    Double_t v = hits;
	    v /= actual_events;

	    hits_number_th->SetBinContent(i+1, v);
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

	store->Close();
	delete store;
    }

    Int_t distributeRect(Float_t x, Float_t y, Int_t n, Float_t min_x, Float_t max_x, Float_t min_y, Float_t max_y, Float_t R_hole=0, Float_t xratio=1) {
	Float_t area_square = (max_x-min_x)*(max_y-min_y);
	Float_t area_hole = 3.14 * R_hole * R_hole;
	Float_t n_eff = (Float_t)n * area_square / (area_square - area_hole); 
	Float_t a_ch = area_square / n_eff;
	Float_t delta_x = sqrt(a_ch);
	Float_t delta_y = delta_x / sqrt(xratio);
	delta_x = delta_x * sqrt(xratio);
	
	Float_t pos_x = x-min_x;
	Int_t x_idx = (Int_t)(pos_x/delta_x);
	Float_t pos_y = y-min_y;
	Int_t y_idx = (Int_t)(pos_y/delta_y);
	if(x_idx < 0) x_idx = 0;
	if(y_idx < 0) y_idx = 0;
	if(x > max_x) x_idx = (Int_t)((max_x - min_x)/delta_x);
	if(y > max_y) y_idx = (Int_t)((max_y - min_y)/delta_y);
	
	return x_idx + y_idx * 1000;
    }

    // If x, y can be negative, make sure that gridMax is the max number of elements in the grid, not the maximum value!
    Int_t distributeGrid(Double_t x, Double_t y, Double_t dx, Double_t dy, Int_t gridMax) {
	Int_t xx = floor(x / dx);
	Int_t yy = floor(y / dy);
	
	return xx + yy * gridMax;
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

    void printNElectronicTypes() {
	int ndets = detnames.size();

	for(int i=0;i<ndets;i++) {
	    ULong_t tot_ch_hits = 0;
	    ULong_t tot_asic_hits = 0;
	    ULong_t tot_rdo_hits=0;
	    for(auto [key, x] : channel_hits[i]) { tot_ch_hits += x; }
	    for(auto [key, x] : asic_hits[i]) { tot_asic_hits += x; }
	    for(auto [key, x] : rdo_hits[i]) { tot_rdo_hits += x; }

	    printf("%20s: CH/ASIC/RDO [%12ld/%-12ld %12ld/%-12d %12ld/%-12d]   hits [%12ld %12ld %12ld]\n", detnames[i].c_str(), channel_hits[i].size(), nominalChannels[i], asic_hits[i].size(), nominalASIC[i],  rdo_hits[i].size(), nominalRDO[i], tot_ch_hits, tot_asic_hits, tot_rdo_hits);
	}


	int nch=0;
	int nasic=0;
	int nrdo=0;
	for(int i=0;i<ndets;i++) {
	    nch += channel_hits[i].size();
	    nasic += asic_hits[i].size();
	    nrdo += rdo_hits[i].size();
	}
	
	printf("%20s:              [%12d %12s %12d %12s %12d %12s]\n", "total", nch," ", nasic," ", nrdo, " ");
    }

    
    
};
    



#endif

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
  std::vector<std::string> detnames;
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
    detnames.push_back("SiBarrelTracker");  DET_SiBarrelTracker = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("SiBarrelVertex");  DET_SiBarrelVertex = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("SiEndcapTracker");  DET_SiEndcapTracker = DET_cnt; detids.push_back(DET_cnt++);
    // MPGD
    detnames.push_back("BackwardMPGDEndcap");  DET_BackwardMPGDEndcap = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("ForwardMPGDEndcap");  DET_ForwardMPGDEndcap = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("MPGDBarrel");  DET_MPGDBarrel = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("OuterMPGDBarrel");  DET_OuterMPGDBarrel = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("MPGDDIRC");  DET_MPGDDIRC = DET_cnt; detids.push_back(DET_cnt++);
    // Forward CAL
    detnames.push_back("LFHCAL");  DET_LFHCAL = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("HcalEndcapPInsert");  DET_HcalEndcapPInsert = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("EcalEndcapP");  DET_EcalEndcapP = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("EcalEndcapPInsert");  DET_EcalEndcapPInsert = DET_cnt; detids.push_back(DET_cnt++);
    // Backward CAL
    detnames.push_back("HcalEndcapN");  DET_HcalEndcapN = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("EcalEndcapN");  DET_EcalEndcapN = DET_cnt; detids.push_back(DET_cnt++);
    // Barrel CAL
    detnames.push_back("HcalBarrel");  DET_HcalBarrel = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("EcalBarrelImaging");  DET_EcalBarrelImaging = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("EcalBarrelScFi");  DET_EcalBarrelScFi = DET_cnt; detids.push_back(DET_cnt++);
    // PID TOF
    detnames.push_back("TOFBarrel");  DET_TOFBarrel = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("TOFEndcap");  DET_TOFEndcap = DET_cnt; detids.push_back(DET_cnt++);
    // PID Cherenkov
    detnames.push_back("dRICH");  DET_dRICH = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("pfRICH");  DET_pfRICH = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("DIRC");  DET_DIRC = DET_cnt; detids.push_back(DET_cnt++);
    // Far Forward
    detnames.push_back("B0ECal");  DET_B0ECal = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("B0Tracker");  DET_B0Tracker = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("RP");  DET_RP = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("OffM");  DET_OffM = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("ZDCHcal");  DET_ZDCHcal = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("ZDCEcal");  DET_ZDCEcal = DET_cnt; detids.push_back(DET_cnt++);
    // Far Backward
    detnames.push_back("LowQ2Tracker");  DET_LowQ2Tracker = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("LowQ2Cal");  DET_LowQ2Cal = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("LumiPairSpecCal");  DET_LumiPairSpecCal = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("LumiPairSpecTrack");  DET_LumiPairSpecTrack = DET_cnt; detids.push_back(DET_cnt++);
    detnames.push_back("LumiDirectPhoton");  DET_LumiDirectPhoton = DET_cnt; detids.push_back(DET_cnt++);

    // Don't know?
    detnames.push_back("EcalLumiSpec");  DET_EcalLumiSpec = DET_cnt; detids.push_back(DET_cnt++);


    for(int i=0;i<detids.size();i++) {
      std::unordered_map<ULong_t, Int_t> x;
      det_hitcells.push_back(x);
    } 
  }

  void dump_detectors() {
    for(int i=0;i<detids.size();i++) {
      cout << detids[i] << "  " << detnames[i] << endl;
    }
  }

  void addHitCell(Int_t detector, ULong_t cell) {
    // printf("addHitCell %d %lx\n",detector, cell);
    if(detector == DET_MPGDBarrel) {
      UInt_t other =    (cell >> (32 + 2 + 12 + 4 + 8)) & 0x3f;
      UInt_t system = (cell & 0xff);
      UInt_t layer =  (cell >> 8) & 0xf;
      UInt_t module = (cell >> (8+4)) & 0xfff;
      UInt_t sensor = (cell >> (8+4+12)) & 0x3;
      Int_t xx =     (cell >> 32) & 0x3fff;
      Int_t yy =     cell & 0x3ffff;

      printf("fMPGDBarrel: %u %u %u %u %d %d\n", system, layer, module, sensor, xx,yy); 
    }
    printf("ff: %s %lu\n",  detnames[detector].c_str(), (cell & 0xff));
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
};

#endif

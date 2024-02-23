#define DIS_cxx
#include "DIS.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "functions.h"

void DIS::Loop()
{
  //   In a ROOT session, you can do:
  //      root> .L DIS.C
  //      root> DIS t
  //      root> t.GetEntry(12); // Fill t data members with entry number 12
  //      root> t.Show();       // Show values of entry 12
  //      root> t.Show(16);     // Read and show values of entry 16
  //      root> t.Loop();       // Loop on all entries
  //

  //     This is the loop skeleton where:
  //    jentry is the global entry number in the chain
  //    ientry is the entry number in the current Tree
  //  Note that the argument to GetEntry must be:
  //    jentry for TChain::GetEntry
  //    ientry for TTree::GetEntry and TBranch::GetEntry
  //
  //       To read only selected branches, Insert statements like:
  // METHOD1:
  //    fChain->SetBranchStatus("*",0);  // disable all branches
  //    fChain->SetBranchStatus("branchname",1);  // activate branchname
  // METHOD2: replace line
  //    fChain->GetEntry(jentry);       //read all branches
  //by  b_branchname->GetEntry(ientry); //read only this branch


  auto c = new TCanvas("c", "c", 1000, 700);
  c->SetBottomMargin(0.2);
  gStyle->SetOptStat(0);
  gStyle->SetOptDate(0);

  TFile *store = new TFile("results.root","recreate");

  std::unordered_map<ULong_t, Int_t> counter;


  functions fun;

  if (fChain == 0) return;

  Long64_t nentries_file = fChain->GetEntriesFast();
  Long64_t nentries = 1000;
  //Long64_t nentries = 200000;

  std::cout << "N entries: "<< nentries_file << "  Only processing " << nentries << " events" << std::endl;
  //return;

 

  TH1D *hits_number_th = new TH1D("hits_threshold","hits_threshold",21,0,21);

  TH2D *Tracker_xy = new TH2D("Tracker_xy","Tracker_xy",1000,-500,500,1000,-500,500);
  TH2D *Tracker_zr = new TH2D("Tracker_zr","Tracker_zr",1000,-2000,2000,1000,0,500);

  TH2D *Ecal_xy = new TH2D("Ecal_xy","Ecal_xy",1000,-3000,3000,1000,-3000,3000);
  TH2D *Ecal_zr = new TH2D("Ecal_zr","Ecal_zr",1000,-4000,4000,1000,0,3000);

  TH2D *Hcal_xy = new TH2D("Hcal_xy","Hcal_xy",1000,-3000,3000,1000,-3000,3000);
  TH2D *Hcal_zr = new TH2D("Hcal_zr","Hcal_zr",1000,-4000,4000,1000,0,3000);

  TH2D *VertexBarrel_xy = new TH2D("VertexBarrel_xy","VertexBarrel_xy",1000,-500,500,1000,-500,500);
  TH2D *VertexBarrel_zr = new TH2D("VertexBarrel_zr","VertexBarrel_zr",1000,-2000,2000,1000,0,500);


  TH2D *RZ_alldet = new TH2D("RZ_alldet","RZ_alldet",1000,-6000,6000,1000,0,3000);

  TH2D *XY_alldet = new TH2D("XY_alldet","XY_alldet",1000,-3000,3000,1000,-3000,3000);


  int B0ECalRecHits_no = 0;
  int B0TrackerRecHits_no = 0;
  int BackwardMPGDEndcapRecHits_no = 0;
  int DIRCRawHits_no = 0;
  int DRICHRawHits_no = 0;
  int EcalBarrelImagingRecHits_no = 0;
  int EcalBarrelScFiRecHits_no = 0;
  int EcalEndcapNRecHits_no = 0;
  int EcalEndcapPInsertRecHits_no = 0;
  int EcalEndcapPRecHits_no = 0;
  int EcalLumiSpecRecHits_no = 0;
  int ForwardMPGDEndcapRecHits_no = 0;
  int HcalBarrelRecHits_no = 0;
  int HcalEndcapNRecHits_no = 0;
  int HcalEndcapPInsertRecHits_no = 0;
  int LFHCALRecHits_no = 0;
  int MPGDBarrelRecHits_no = 0;
  int MPGDDIRCRecHits_no = 0;
  int OuterMPGDBarrelRecHits_no = 0;
  int SiBarrelTrackerRecHits_no = 0;
  int SiBarrelVertexRecHits_no = 0;
  int SiEndcapTrackerRecHits_no = 0;
  int TOFEndcapRecHits_no = 0;
  int ZDCEcalRecHits_no = 0;

  Long64_t nbytes = 0, nb = 0;
  cout<<"total events = "<<nentries<<endl;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    if(jentry > nentries) break;

    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;

 

    //if(jentry>100000)break;

    //printf("a\n");

    B0ECalRecHits_no+=B0ECalRecHits_;
    B0TrackerRecHits_no+=B0TrackerRecHits_;
    BackwardMPGDEndcapRecHits_no+=BackwardMPGDEndcapRecHits_;
    //DIRCRawHits_no+=DIRCRawHits_;
    //DRICHRawHits_no+=DRICHRawHits_;
    EcalBarrelImagingRecHits_no+=EcalBarrelImagingRecHits_;
    EcalBarrelScFiRecHits_no+=EcalBarrelScFiRecHits_;
    EcalEndcapNRecHits_no+=EcalEndcapNRecHits_;
    EcalEndcapPInsertRecHits_no+=EcalEndcapPInsertRecHits_;
    EcalEndcapPRecHits_no+=EcalEndcapPRecHits_;
    EcalLumiSpecRecHits_no+=EcalLumiSpecRecHits_;
    ForwardMPGDEndcapRecHits_no+=ForwardMPGDEndcapRecHits_;
    HcalBarrelRecHits_no+=HcalBarrelRecHits_;
    HcalEndcapNRecHits_no+=HcalEndcapNRecHits_;
    HcalEndcapPInsertRecHits_no+=HcalEndcapPInsertRecHits_;
    LFHCALRecHits_no+=LFHCALRecHits_;
    MPGDBarrelRecHits_no+=MPGDBarrelRecHits_;
    MPGDDIRCRecHits_no+=MPGDDIRCRecHits_;
    OuterMPGDBarrelRecHits_no+=OuterMPGDBarrelRecHits_;
    SiBarrelTrackerRecHits_no+=SiBarrelTrackerRecHits_;
    SiBarrelVertexRecHits_no+=SiBarrelVertexRecHits_;
    SiEndcapTrackerRecHits_no+=SiEndcapTrackerRecHits_;
    TOFEndcapRecHits_no+=TOFEndcapRecHits_;
    ZDCEcalRecHits_no+=ZDCEcalRecHits_;

    //printf("b\n");
    for(int i = 0;i<B0ECalRecHits_;i++){
      //counter_B0ECal[B0ECalRecHits_cellID[i]]++;
      //printf("fun.DET_B0ECal=%d cel=0x%lx\n", fun.DET_B0ECal, B0ECalRecHits_cellID[i]);
      fun.addHitCell(fun.DET_B0ECal, B0ECalRecHits_cellID[i]);
    }
    //printf("c\n");
    for(int i = 0;i<B0TrackerRecHits_;i++){
      //counter_B0Tracker[B0TrackerRecHits_cellID[i]]++;
      fun.addHitCell(fun.DET_B0Tracker, B0TrackerRecHits_cellID[i]);
    }
    for(int i = 0;i<BackwardMPGDEndcapRecHits_;i++){
      //counter_BackwardMPGDEndcap[BackwardMPGDEndcapRecHits_cellID[i]]++;
      fun.addHitCell(fun.DET_BackwardMPGDEndcap, BackwardMPGDEndcapRecHits_cellID[i]);
    }
    for(int i = 0;i<EcalBarrelImagingRecHits_;i++){
      fun.addHitCell(fun.DET_EcalBarrelImaging, EcalBarrelImagingRecHits_cellID[i]);
    }
    for(int i = 0;i<EcalBarrelScFiRecHits_;i++){
      fun.addHitCell(fun.DET_EcalBarrelScFi, EcalBarrelScFiRecHits_cellID[i]);
    }
    for(int i = 0;i<EcalEndcapNRecHits_;i++){
      fun.addHitCell(fun.DET_EcalEndcapN, EcalEndcapNRecHits_cellID[i]);
    }
    for(int i = 0;i<EcalEndcapPInsertRecHits_;i++){
      fun.addHitCell(fun.DET_EcalEndcapPInsert, EcalEndcapPInsertRecHits_cellID[i]);
    }
    for(int i = 0;i<EcalEndcapPRecHits_;i++){
      fun.addHitCell(fun.DET_EcalEndcapP, EcalEndcapPRecHits_cellID[i]);
    }
    for(int i = 0;i<EcalLumiSpecRecHits_;i++){
      fun.addHitCell(fun.DET_EcalLumiSpec, EcalLumiSpecRecHits_cellID[i]);
    }
    for(int i = 0;i<ForwardMPGDEndcapRecHits_;i++){
      fun.addHitCell(fun.DET_ForwardMPGDEndcap, ForwardMPGDEndcapRecHits_cellID[i]);
    }
    for(int i = 0;i<HcalBarrelRecHits_;i++){
      fun.addHitCell(fun.DET_HcalBarrel, HcalBarrelRecHits_cellID[i]);
    }
    for(int i = 0;i<HcalEndcapNRecHits_;i++){
      fun.addHitCell(fun.DET_HcalEndcapN, HcalEndcapNRecHits_cellID[i]);
    }
    for(int i = 0;i<HcalEndcapPInsertRecHits_;i++){
      fun.addHitCell(fun.DET_HcalEndcapPInsert, HcalEndcapPInsertRecHits_cellID[i]);
    }
    for(int i = 0;i<LFHCALRecHits_;i++){
      fun.addHitCell(fun.DET_LFHCAL, LFHCALRecHits_cellID[i]);
    }
    for(int i = 0;i<MPGDBarrelRecHits_;i++){
      printf("fMPGD %f %f\n",MPGDBarrelRecHits_position_x[i],MPGDBarrelRecHits_position_y[i]);
      
      fun.addHitCell(fun.DET_MPGDBarrel, MPGDBarrelRecHits_cellID[i]);
    }
    for(int i = 0;i<MPGDDIRCRecHits_;i++){
      fun.addHitCell(fun.DET_MPGDDIRC, MPGDDIRCRecHits_cellID[i]);
    }
    for(int i = 0;i<OuterMPGDBarrelRecHits_;i++){
      fun.addHitCell(fun.DET_OuterMPGDBarrel, OuterMPGDBarrelRecHits_cellID[i]);
    }
    for(int i = 0;i<SiBarrelTrackerRecHits_;i++){
      fun.addHitCell(fun.DET_SiBarrelTracker, SiBarrelTrackerRecHits_cellID[i]);
    }
    for(int i = 0;i<SiBarrelVertexRecHits_;i++){
      fun.addHitCell(fun.DET_SiBarrelVertex, SiBarrelVertexRecHits_cellID[i]);
    }
    for(int i = 0;i<SiEndcapTrackerRecHits_;i++){
      fun.addHitCell(fun.DET_SiEndcapTracker, SiEndcapTrackerRecHits_cellID[i]);
    }
    for(int i = 0;i<TOFEndcapRecHits_;i++){
      fun.addHitCell(fun.DET_TOFEndcap, TOFEndcapRecHits_cellID[i]);
    }
    for(int i = 0;i<ZDCEcalRecHits_;i++){
      fun.addHitCell(fun.DET_ZDCEcal, ZDCEcalRecHits_cellID[i]);
    }

    for(int i =0;i<HcalBarrelRecHits_;i++)
      {
	//cout<<HcalBarrelRecHits_energy[i]<<endl;
      }

    for(int i =0;i<EcalBarrelImagingRecHits_;i++)
      {
	fun.addHitCell(fun.DET_EcalBarrelImaging, EcalBarrelImagingRecHits_cellID[i]);



	Ecal_xy->Fill(EcalBarrelImagingRecHits_position_x[i],EcalBarrelImagingRecHits_position_y[i]);
	Ecal_zr->Fill(EcalBarrelImagingRecHits_position_z[i],sqrt(EcalBarrelImagingRecHits_position_x[i]*EcalBarrelImagingRecHits_position_x[i]+EcalBarrelImagingRecHits_position_y[i]*EcalBarrelImagingRecHits_position_y[i]));
      }
    for(int i =0;i<EcalBarrelScFiRecHits_;i++)
      {
	Ecal_xy->Fill(EcalBarrelScFiRecHits_position_x[i],EcalBarrelScFiRecHits_position_y[i]);
	Ecal_zr->Fill(EcalBarrelScFiRecHits_position_z[i],sqrt(EcalBarrelScFiRecHits_position_x[i]*EcalBarrelScFiRecHits_position_x[i]+EcalBarrelScFiRecHits_position_y[i]*EcalBarrelScFiRecHits_position_y[i]));
      }
    for(int i =0;i<EcalEndcapNRecHits_;i++)
      {
	Ecal_xy->Fill(EcalEndcapNRecHits_position_x[i],EcalEndcapNRecHits_position_y[i]);
	Ecal_zr->Fill(EcalEndcapNRecHits_position_z[i],sqrt(EcalEndcapNRecHits_position_x[i]*EcalEndcapNRecHits_position_x[i]+EcalEndcapNRecHits_position_y[i]*EcalEndcapNRecHits_position_y[i]));
      }
    for(int i =0;i<EcalEndcapPInsertRecHits_;i++)
      {
	Ecal_xy->Fill(EcalEndcapPInsertRecHits_position_x[i],EcalEndcapPInsertRecHits_position_y[i]);
	Ecal_zr->Fill(EcalEndcapPInsertRecHits_position_z[i],sqrt(EcalEndcapPInsertRecHits_position_x[i]*EcalEndcapPInsertRecHits_position_x[i]+EcalEndcapPInsertRecHits_position_y[i]*EcalEndcapPInsertRecHits_position_y[i]));
      }
    for(int i =0;i<EcalEndcapPRecHits_;i++)
      {
	Ecal_xy->Fill(EcalEndcapPRecHits_position_x[i],EcalEndcapPRecHits_position_y[i]);
	Ecal_zr->Fill(EcalEndcapPRecHits_position_z[i],sqrt(EcalEndcapPRecHits_position_x[i]*EcalEndcapPRecHits_position_x[i]+EcalEndcapPRecHits_position_y[i]*EcalEndcapPRecHits_position_y[i]));
      }


    for(int i =0;i<SiBarrelVertexRecHits_;i++)
      {
	VertexBarrel_xy->Fill(SiBarrelVertexRecHits_position_x[i],SiBarrelVertexRecHits_position_y[i]);
	VertexBarrel_zr->Fill(SiBarrelVertexRecHits_position_z[i],sqrt(SiBarrelVertexRecHits_position_x[i]*SiBarrelVertexRecHits_position_x[i]+SiBarrelVertexRecHits_position_y[i]*SiBarrelVertexRecHits_position_y[i]));

      }



    for(int i =0;i<HcalBarrelRecHits_;i++)
      {
	Hcal_xy->Fill(HcalBarrelRecHits_position_x[i],HcalBarrelRecHits_position_y[i]);
	Hcal_zr->Fill(HcalBarrelRecHits_position_z[i],sqrt(HcalBarrelRecHits_position_x[i]*HcalBarrelRecHits_position_x[i]+HcalBarrelRecHits_position_y[i]*HcalBarrelRecHits_position_y[i]));
      }
    for(int i =0;i<HcalEndcapNRecHits_;i++)
      {
	Hcal_xy->Fill(HcalEndcapNRecHits_position_x[i],HcalEndcapNRecHits_position_y[i]);
	Hcal_zr->Fill(HcalEndcapNRecHits_position_z[i],sqrt(HcalEndcapNRecHits_position_x[i]*HcalEndcapNRecHits_position_x[i]+HcalEndcapNRecHits_position_y[i]*HcalEndcapNRecHits_position_y[i]));
      }
    for(int i =0;i<HcalEndcapPInsertRecHits_;i++)
      {
	Hcal_xy->Fill(HcalEndcapPInsertRecHits_position_x[i],HcalEndcapPInsertRecHits_position_y[i]);
	Hcal_zr->Fill(HcalEndcapPInsertRecHits_position_z[i],sqrt(HcalEndcapPInsertRecHits_position_x[i]*HcalEndcapPInsertRecHits_position_x[i]+HcalEndcapPInsertRecHits_position_y[i]*HcalEndcapPInsertRecHits_position_y[i]));
      }
    for(int i =0;i<LFHCALRecHits_;i++)
      {
	Hcal_xy->Fill(LFHCALRecHits_position_x[i],LFHCALRecHits_position_y[i]);
	Hcal_zr->Fill(LFHCALRecHits_position_z[i],sqrt(LFHCALRecHits_position_x[i]*LFHCALRecHits_position_x[i]+LFHCALRecHits_position_y[i]*LFHCALRecHits_position_y[i]));
      }

    int B0ECal_maxPerCh = 0;
    int B0Tracker_maxPerCh = 0;
    int BackwardMPGDEndcap_maxPerCh = 0;
    int DIRCRawHits_maxPerCh = 0;
    int DRICHRawHits_maxPerCh = 0;
    int EcalBarrelImaging_maxPerCh = 0;
    int EcalBarrelScFi_maxPerCh = 0;
    int EcalEndcapN_maxPerCh = 0;
    int EcalEndcapPInsert_maxPerCh = 0;
    int EcalEndcapP_maxPerCh = 0;
    int EcalLumiSpec_maxPerCh = 0;
    int ForwardMPGDEndcap_maxPerCh = 0;
    int HcalBarrel_maxPerCh = 0;
    int HcalEndcapN_maxPerCh = 0;
    int HcalEndcapPInsert_maxPerCh = 0;
    int LFHCAL_maxPerCh = 0;
    int MPGDBarrel_maxPerCh = 0;
    int MPGDDIRC_maxPerCh = 0;
    int OuterMPGDBarrel_maxPerCh = 0;
    int SiBarrelTracker_maxPerCh = 0;
    int SiBarrelVertex_maxPerCh = 0;
    int SiEndcapTracker_maxPerCh = 0;
    int TOFEndcap_maxPerCh = 0;
    int ZDCEcal_maxPerCh = 0;

    for(int i =0;i<B0ECalRecHits_;i++){
      XY_alldet->Fill(B0ECalRecHits_position_x[i],B0ECalRecHits_position_y[i]);
      RZ_alldet->Fill(B0ECalRecHits_position_z[i],sqrt(B0ECalRecHits_position_x[i]*B0ECalRecHits_position_x[i]+B0ECalRecHits_position_y[i]*B0ECalRecHits_position_y[i]));
    }

    for(int i =0;i<B0TrackerRecHits_;i++){
      XY_alldet->Fill(B0TrackerRecHits_position_x[i],B0TrackerRecHits_position_y[i]);
      RZ_alldet->Fill(B0TrackerRecHits_position_z[i],sqrt(B0TrackerRecHits_position_x[i]*B0TrackerRecHits_position_x[i]+B0TrackerRecHits_position_y[i]*B0TrackerRecHits_position_y[i]));
    }

    for(int i =0;i<BackwardMPGDEndcapRecHits_;i++){
      XY_alldet->Fill(BackwardMPGDEndcapRecHits_position_x[i],BackwardMPGDEndcapRecHits_position_y[i]);
      RZ_alldet->Fill(BackwardMPGDEndcapRecHits_position_z[i],sqrt(BackwardMPGDEndcapRecHits_position_x[i]*BackwardMPGDEndcapRecHits_position_x[i]+BackwardMPGDEndcapRecHits_position_y[i]*BackwardMPGDEndcapRecHits_position_y[i]));
    }


    for(int i =0;i<EcalBarrelImagingRecHits_;i++){
      XY_alldet->Fill(EcalBarrelImagingRecHits_position_x[i],EcalBarrelImagingRecHits_position_y[i]);
      RZ_alldet->Fill(EcalBarrelImagingRecHits_position_z[i],sqrt(EcalBarrelImagingRecHits_position_x[i]*EcalBarrelImagingRecHits_position_x[i]+EcalBarrelImagingRecHits_position_y[i]*EcalBarrelImagingRecHits_position_y[i]));
    }

    for(int i =0;i<EcalBarrelScFiRecHits_;i++){
      XY_alldet->Fill(EcalBarrelScFiRecHits_position_x[i],EcalBarrelScFiRecHits_position_y[i]);
      RZ_alldet->Fill(EcalBarrelScFiRecHits_position_z[i],sqrt(EcalBarrelScFiRecHits_position_x[i]*EcalBarrelScFiRecHits_position_x[i]+EcalBarrelScFiRecHits_position_y[i]*EcalBarrelScFiRecHits_position_y[i]));
    }

    for(int i =0;i<EcalEndcapNRecHits_;i++){
      XY_alldet->Fill(EcalEndcapNRecHits_position_x[i],EcalEndcapNRecHits_position_y[i]);
      RZ_alldet->Fill(EcalEndcapNRecHits_position_z[i],sqrt(EcalEndcapNRecHits_position_x[i]*EcalEndcapNRecHits_position_x[i]+EcalEndcapNRecHits_position_y[i]*EcalEndcapNRecHits_position_y[i]));
    }

    for(int i =0;i<EcalEndcapPInsertRecHits_;i++){
      XY_alldet->Fill(EcalEndcapPInsertRecHits_position_x[i],EcalEndcapPInsertRecHits_position_y[i]);
      RZ_alldet->Fill(EcalEndcapPInsertRecHits_position_z[i],sqrt(EcalEndcapPInsertRecHits_position_x[i]*EcalEndcapPInsertRecHits_position_x[i]+EcalEndcapPInsertRecHits_position_y[i]*EcalEndcapPInsertRecHits_position_y[i]));
    }

    for(int i =0;i<EcalEndcapPRecHits_;i++){
      XY_alldet->Fill(EcalEndcapPRecHits_position_x[i],EcalEndcapPRecHits_position_y[i]);
      RZ_alldet->Fill(EcalEndcapPRecHits_position_z[i],sqrt(EcalEndcapPRecHits_position_x[i]*EcalEndcapPRecHits_position_x[i]+EcalEndcapPRecHits_position_y[i]*EcalEndcapPRecHits_position_y[i]));
    }

    for(int i =0;i<EcalLumiSpecRecHits_;i++){
      XY_alldet->Fill(EcalLumiSpecRecHits_position_x[i],EcalLumiSpecRecHits_position_y[i]);
      RZ_alldet->Fill(EcalLumiSpecRecHits_position_z[i],sqrt(EcalLumiSpecRecHits_position_x[i]*EcalLumiSpecRecHits_position_x[i]+EcalLumiSpecRecHits_position_y[i]*EcalLumiSpecRecHits_position_y[i]));
    }

    for(int i =0;i<ForwardMPGDEndcapRecHits_;i++){
      XY_alldet->Fill(ForwardMPGDEndcapRecHits_position_x[i],ForwardMPGDEndcapRecHits_position_y[i]);
      RZ_alldet->Fill(ForwardMPGDEndcapRecHits_position_z[i],sqrt(ForwardMPGDEndcapRecHits_position_x[i]*ForwardMPGDEndcapRecHits_position_x[i]+ForwardMPGDEndcapRecHits_position_y[i]*ForwardMPGDEndcapRecHits_position_y[i]));
    }

    for(int i =0;i<HcalBarrelRecHits_;i++){
      XY_alldet->Fill(HcalBarrelRecHits_position_x[i],HcalBarrelRecHits_position_y[i]);
      RZ_alldet->Fill(HcalBarrelRecHits_position_z[i],sqrt(HcalBarrelRecHits_position_x[i]*HcalBarrelRecHits_position_x[i]+HcalBarrelRecHits_position_y[i]*HcalBarrelRecHits_position_y[i]));

      //cout<<HcalBarrelRecHits_position_x[i]<<" "<<HcalBarrelRecHits_position_y[i]<<" "<<HcalBarrelRecHits_position_z[i]<<" "<<sqrt(HcalBarrelRecHits_position_x[i]*HcalBarrelRecHits_position_x[i]+HcalBarrelRecHits_position_y[i]*HcalBarrelRecHits_position_y[i])<<endl;
    }

    for(int i =0;i<HcalEndcapNRecHits_;i++){
      XY_alldet->Fill(HcalEndcapNRecHits_position_x[i],HcalEndcapNRecHits_position_y[i]);
      RZ_alldet->Fill(HcalEndcapNRecHits_position_z[i],sqrt(HcalEndcapNRecHits_position_x[i]*HcalEndcapNRecHits_position_x[i]+HcalEndcapNRecHits_position_y[i]*HcalEndcapNRecHits_position_y[i]));
    }

    for(int i =0;i<HcalEndcapPInsertRecHits_;i++){
      XY_alldet->Fill(HcalEndcapPInsertRecHits_position_x[i],HcalEndcapPInsertRecHits_position_y[i]);
      RZ_alldet->Fill(HcalEndcapPInsertRecHits_position_z[i],sqrt(HcalEndcapPInsertRecHits_position_x[i]*HcalEndcapPInsertRecHits_position_x[i]+HcalEndcapPInsertRecHits_position_y[i]*HcalEndcapPInsertRecHits_position_y[i]));
    }

    for(int i =0;i<LFHCALRecHits_;i++){
      XY_alldet->Fill(LFHCALRecHits_position_x[i],LFHCALRecHits_position_y[i]);
      RZ_alldet->Fill(LFHCALRecHits_position_z[i],sqrt(LFHCALRecHits_position_x[i]*LFHCALRecHits_position_x[i]+LFHCALRecHits_position_y[i]*LFHCALRecHits_position_y[i]));
    }

    for(int i =0;i<MPGDBarrelRecHits_;i++){
      XY_alldet->Fill(MPGDBarrelRecHits_position_x[i],MPGDBarrelRecHits_position_y[i]);
      RZ_alldet->Fill(MPGDBarrelRecHits_position_z[i],sqrt(MPGDBarrelRecHits_position_x[i]*MPGDBarrelRecHits_position_x[i]+MPGDBarrelRecHits_position_y[i]*MPGDBarrelRecHits_position_y[i]));
    }

    for(int i =0;i<MPGDDIRCRecHits_;i++){
      XY_alldet->Fill(MPGDDIRCRecHits_position_x[i],MPGDDIRCRecHits_position_y[i]);
      RZ_alldet->Fill(MPGDDIRCRecHits_position_z[i],sqrt(MPGDDIRCRecHits_position_x[i]*MPGDDIRCRecHits_position_x[i]+MPGDDIRCRecHits_position_y[i]*MPGDDIRCRecHits_position_y[i]));
    }

    for(int i =0;i<OuterMPGDBarrelRecHits_;i++){
      XY_alldet->Fill(OuterMPGDBarrelRecHits_position_x[i],OuterMPGDBarrelRecHits_position_y[i]);
      RZ_alldet->Fill(OuterMPGDBarrelRecHits_position_z[i],sqrt(OuterMPGDBarrelRecHits_position_x[i]*OuterMPGDBarrelRecHits_position_x[i]+OuterMPGDBarrelRecHits_position_y[i]*OuterMPGDBarrelRecHits_position_y[i]));
    }

    for(int i =0;i<SiBarrelTrackerRecHits_;i++){
      XY_alldet->Fill(SiBarrelTrackerRecHits_position_x[i],SiBarrelTrackerRecHits_position_y[i]);
      RZ_alldet->Fill(SiBarrelTrackerRecHits_position_z[i],sqrt(SiBarrelTrackerRecHits_position_x[i]*SiBarrelTrackerRecHits_position_x[i]+SiBarrelTrackerRecHits_position_y[i]*SiBarrelTrackerRecHits_position_y[i]));
    }

    for(int i =0;i<SiBarrelVertexRecHits_;i++){
      XY_alldet->Fill(SiBarrelVertexRecHits_position_x[i],SiBarrelVertexRecHits_position_y[i]);
      RZ_alldet->Fill(SiBarrelVertexRecHits_position_z[i],sqrt(SiBarrelVertexRecHits_position_x[i]*SiBarrelVertexRecHits_position_x[i]+SiBarrelVertexRecHits_position_y[i]*SiBarrelVertexRecHits_position_y[i]));
    }

    for(int i =0;i<SiEndcapTrackerRecHits_;i++){
      XY_alldet->Fill(SiEndcapTrackerRecHits_position_x[i],SiEndcapTrackerRecHits_position_y[i]);
      RZ_alldet->Fill(SiEndcapTrackerRecHits_position_z[i],sqrt(SiEndcapTrackerRecHits_position_x[i]*SiEndcapTrackerRecHits_position_x[i]+SiEndcapTrackerRecHits_position_y[i]*SiEndcapTrackerRecHits_position_y[i]));
    }

    for(int i =0;i<TOFEndcapRecHits_;i++){
      XY_alldet->Fill(TOFEndcapRecHits_position_x[i],TOFEndcapRecHits_position_y[i]);
      RZ_alldet->Fill(TOFEndcapRecHits_position_z[i],sqrt(TOFEndcapRecHits_position_x[i]*TOFEndcapRecHits_position_x[i]+TOFEndcapRecHits_position_y[i]*TOFEndcapRecHits_position_y[i]));
    }

    for(int i =0;i<ZDCEcalRecHits_;i++){
      XY_alldet->Fill(ZDCEcalRecHits_position_x[i],ZDCEcalRecHits_position_y[i]);
      RZ_alldet->Fill(ZDCEcalRecHits_position_z[i],sqrt(ZDCEcalRecHits_position_x[i]*ZDCEcalRecHits_position_x[i]+ZDCEcalRecHits_position_y[i]*ZDCEcalRecHits_position_y[i]));
    }

    /*
      if((jentry+1)%10000==0) {
      cout<<"Entries Processed: " << jentry<<endl;
      double rate_ratio = 8.3e4/jentry;

      for(int i=0;i<fun.DET_cnt;i++) {
      // ULong_t cell;
      //UInt_t count;
      auto [cell, count] = fun.getMaxCell(i);
      
      printf("(Max Channel Rate)  %40s:  rate=%10.1f   cell=0x%16lx   %lu\n", fun.detnames[i].c_str(), rate_ratio * (Float_t)count, cell, cell);
      }
    
      for(int i=0;i<fun.DET_cnt;i++) {
      // ULong_t cell;
      //UInt_t count;
      auto [cnt, num_hit_cells] = fun.getHits(i);
      
      printf("        (detector)  %40s:  rate=%10.1f   distinct channels=%lu  hits/channel=%8.2f\n", fun.detnames[i].c_str(), rate_ratio * (Float_t)cnt, num_hit_cells,   ((Float_t)cnt)/((Float_t)num_hit_cells));
      }
      }
    */
  }

  double rate_ratio = 8.3e4/nentries;

  // Print out rates and cell information 
  for(int i=0;i<fun.DET_cnt;i++) {
    // ULong_t cell;
    //UInt_t count;
    auto [cell, count] = fun.getMaxCell(i);
    
    printf("(Max Channel Rate)  %40s:  rate=%10.1f   cell=0x%16lx   %lu\n", fun.detnames[i].c_str(), rate_ratio * (Float_t)count, cell, cell);
  }
    
  for(int i=0;i<fun.DET_cnt;i++) {
    // ULong_t cell;
    //UInt_t count;
    auto [cnt, num_hit_cells] = fun.getHits(i);
    auto [mincell, maxcell] = fun.getMinMaxCellId(i);

    printf("        (detector)  %40s:  rate=%10.1f   distinct channels=%lu  hits/channel=%8.2f    [0x%16lx-0x%16lx]\n", fun.detnames[i].c_str(), rate_ratio * (Float_t)cnt, num_hit_cells,   ((Float_t)cnt)/((Float_t)num_hit_cells), mincell, maxcell);
  }


  hits_number_th->SetBinContent(1,B0ECalRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(2,B0TrackerRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(3,BackwardMPGDEndcapRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(4,EcalBarrelImagingRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(5,EcalBarrelScFiRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(6,EcalEndcapNRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(7,EcalEndcapPInsertRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(8,EcalEndcapPRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(9,EcalLumiSpecRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(10,ForwardMPGDEndcapRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(11,HcalBarrelRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(12,HcalEndcapNRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(13,HcalEndcapPInsertRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(14,LFHCALRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(15,MPGDBarrelRecHits_no*rate_ratio);
  //hits_number_th->SetBinContent(16,MPGDDIRCRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(16,OuterMPGDBarrelRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(17,SiBarrelTrackerRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(18,SiBarrelVertexRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(19,SiEndcapTrackerRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(20,TOFEndcapRecHits_no*rate_ratio);
  hits_number_th->SetBinContent(21,ZDCEcalRecHits_no*rate_ratio);


  hits_number_th->SetBarWidth(0.55);
  hits_number_th->SetBarOffset(0.25);
  hits_number_th->GetYaxis()->SetTitle("#hits per second");
  hits_number_th->SetFillColor(32);
  hits_number_th->GetXaxis()->SetBinLabel(1,"B0ECa");
  hits_number_th->GetXaxis()->SetBinLabel(2,"B0Tracker");
  hits_number_th->GetXaxis()->SetBinLabel(3,"BackwardMPGDEndcap");
  hits_number_th->GetXaxis()->SetBinLabel(4,"EcalBarrelImaging");
  hits_number_th->GetXaxis()->SetBinLabel(5,"EcalBarrelScFi");
  hits_number_th->GetXaxis()->SetBinLabel(6,"EcalEndcapN");
  hits_number_th->GetXaxis()->SetBinLabel(7,"EcalEndcapPInsert");
  hits_number_th->GetXaxis()->SetBinLabel(8,"EcalEndcapP");
  hits_number_th->GetXaxis()->SetBinLabel(9,"EcalLumiSpec");
  hits_number_th->GetXaxis()->SetBinLabel(10,"ForwardMPGDEndcap");
  hits_number_th->GetXaxis()->SetBinLabel(11,"HcalBarrel");
  hits_number_th->GetXaxis()->SetBinLabel(12,"HcalEndcapN");
  hits_number_th->GetXaxis()->SetBinLabel(13,"HcalEndcapPInsert");
  hits_number_th->GetXaxis()->SetBinLabel(14,"LFHCAL");
  hits_number_th->GetXaxis()->SetBinLabel(15,"MPGDBarrel");
  //hits_number_th->GetXaxis()->SetBinLabel(16,"MPGDDIRC");
  hits_number_th->GetXaxis()->SetBinLabel(16,"OuterMPGDBarrel");
  hits_number_th->GetXaxis()->SetBinLabel(17,"SiBarrelTracker");
  hits_number_th->GetXaxis()->SetBinLabel(18,"SiBarrelVertex");
  hits_number_th->GetXaxis()->SetBinLabel(19,"SiEndcapTracker");
  hits_number_th->GetXaxis()->SetBinLabel(20,"TOFEndcap");
  hits_number_th->GetXaxis()->SetBinLabel(21,"ZDCEcal");
  hits_number_th->GetXaxis()->LabelsOption("v");

  VertexBarrel_xy->Scale(1.0/nentries);
  VertexBarrel_zr->Scale(1.0/nentries);
  Ecal_xy->Scale(1.0/nentries);
  Ecal_zr->Scale(1.0/nentries);
  Hcal_xy->Scale(1.0/nentries);
  Hcal_zr->Scale(1.0/nentries);

  store->cd();
  hits_number_th->Write();
  VertexBarrel_xy->Write();
  VertexBarrel_zr->Write();
  Ecal_xy->Write();
  Ecal_zr->Write();
  Hcal_xy->Write();
  Hcal_zr->Write();
  XY_alldet->Write();
  RZ_alldet->Write();
  



  
  
}

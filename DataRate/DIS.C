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


 

    std::unordered_map<ULong_t, Int_t> counter;


    functions fun;

    if (fChain == 0) return;

    Long64_t nentries_file = fChain->GetEntriesFast();
    Long64_t nentries = 1000;
    //Long64_t nentries = 200000;
    if(nentries > nentries_file) nentries = nentries_file;

    Long64_t actual_events = 0;
    std::cout << "N entries: "<< nentries_file << "  Only processing " << nentries << " events" << std::endl;

    Long64_t nbytes = 0, nb = 0;
    cout<<"total events = "<<nentries<<endl;
    for (Long64_t jentry=0; jentry<nentries;jentry++) {
	if(jentry > nentries) break;

	Long64_t ientry = LoadTree(jentry);
	if (ientry < 0) break;
	nb = fChain->GetEntry(jentry);   nbytes += nb;

	actual_events++;
	
	for(int i = 0;i<B0ECalRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_B0ECal, B0ECalRecHits_cellID[i], B0ECalRecHits_position_x[i], B0ECalRecHits_position_y[i], B0ECalRecHits_position_z[i]);
	}
	for(int i = 0;i<B0TrackerRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_B0Tracker, B0TrackerRecHits_cellID[i], B0TrackerRecHits_position_x[i], B0TrackerRecHits_position_y[i], B0TrackerRecHits_position_z[i]);
	}
	for(int i = 0;i<BackwardMPGDEndcapRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_BackwardMPGDEndcap, BackwardMPGDEndcapRecHits_cellID[i], BackwardMPGDEndcapRecHits_position_x[i], BackwardMPGDEndcapRecHits_position_y[i], BackwardMPGDEndcapRecHits_position_z[i]);
	}
	for(int i = 0;i<EcalBarrelImagingRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_EcalBarrelImaging, EcalBarrelImagingRecHits_cellID[i], EcalBarrelImagingRecHits_position_x[i], EcalBarrelImagingRecHits_position_y[i], EcalBarrelImagingRecHits_position_z[i]);
	}
	for(int i = 0;i<EcalBarrelScFiRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_EcalBarrelScFi, EcalBarrelScFiRecHits_cellID[i], EcalBarrelScFiRecHits_position_x[i], EcalBarrelScFiRecHits_position_y[i], EcalBarrelScFiRecHits_position_z[i]);
	}
	for(int i = 0;i<EcalEndcapNRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_EcalEndcapN, EcalEndcapNRecHits_cellID[i], EcalEndcapNRecHits_position_x[i], EcalEndcapNRecHits_position_y[i], EcalEndcapNRecHits_position_z[i]);
	}
	for(int i = 0;i<EcalEndcapPInsertRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_EcalEndcapPInsert, EcalEndcapPInsertRecHits_cellID[i], EcalEndcapPInsertRecHits_position_x[i], EcalEndcapPInsertRecHits_position_y[i], EcalEndcapPInsertRecHits_position_z[i]);
	}
	for(int i = 0;i<EcalEndcapPRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_EcalEndcapP, EcalEndcapPRecHits_cellID[i], EcalEndcapPRecHits_position_x[i], EcalEndcapPRecHits_position_y[i], EcalEndcapPRecHits_position_z[i]);
	}
	for(int i = 0;i<EcalLumiSpecRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_EcalLumiSpec, EcalLumiSpecRecHits_cellID[i], EcalLumiSpecRecHits_position_x[i], EcalLumiSpecRecHits_position_y[i], EcalLumiSpecRecHits_position_z[i]);
	}
	for(int i = 0;i<ForwardMPGDEndcapRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_ForwardMPGDEndcap, ForwardMPGDEndcapRecHits_cellID[i], ForwardMPGDEndcapRecHits_position_x[i], ForwardMPGDEndcapRecHits_position_y[i], ForwardMPGDEndcapRecHits_position_z[i]);
	}
	for(int i = 0;i<HcalBarrelRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_HcalBarrel, HcalBarrelRecHits_cellID[i], HcalBarrelRecHits_position_x[i], HcalBarrelRecHits_position_y[i], HcalBarrelRecHits_position_z[i]);
	}
	for(int i = 0;i<HcalEndcapNRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_HcalEndcapN, HcalEndcapNRecHits_cellID[i], HcalEndcapNRecHits_position_x[i], HcalEndcapNRecHits_position_y[i], HcalEndcapNRecHits_position_z[i]);
	}
	for(int i = 0;i<HcalEndcapPInsertRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_HcalEndcapPInsert, HcalEndcapPInsertRecHits_cellID[i], HcalEndcapPInsertRecHits_position_x[i], HcalEndcapPInsertRecHits_position_y[i], HcalEndcapPInsertRecHits_position_z[i]);
	}
	for(int i = 0;i<LFHCALRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_LFHCAL, LFHCALRecHits_cellID[i], LFHCALRecHits_position_x[i], LFHCALRecHits_position_y[i], LFHCALRecHits_position_z[i]);
	}
	for(int i = 0;i<MPGDBarrelRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_MPGDBarrel, MPGDBarrelRecHits_cellID[i], MPGDBarrelRecHits_position_x[i], MPGDBarrelRecHits_position_y[i], MPGDBarrelRecHits_position_z[i]);
	}
	for(int i = 0;i<MPGDDIRCRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_MPGDDIRC, MPGDDIRCRecHits_cellID[i], MPGDDIRCRecHits_position_x[i], MPGDDIRCRecHits_position_y[i], MPGDDIRCRecHits_position_z[i]);
	}
	for(int i = 0;i<OuterMPGDBarrelRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_OuterMPGDBarrel, OuterMPGDBarrelRecHits_cellID[i], OuterMPGDBarrelRecHits_position_x[i], OuterMPGDBarrelRecHits_position_y[i], OuterMPGDBarrelRecHits_position_z[i]);
	}
	for(int i = 0;i<SiBarrelTrackerRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_SiBarrelTracker, SiBarrelTrackerRecHits_cellID[i], SiBarrelTrackerRecHits_position_x[i], SiBarrelTrackerRecHits_position_y[i], SiBarrelTrackerRecHits_position_z[i]);
	}
	for(int i = 0;i<SiBarrelVertexRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_SiBarrelVertex, SiBarrelVertexRecHits_cellID[i], SiBarrelVertexRecHits_position_x[i], SiBarrelVertexRecHits_position_y[i], SiBarrelVertexRecHits_position_z[i]);
	}
	for(int i = 0;i<SiEndcapTrackerRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_SiEndcapTracker, SiEndcapTrackerRecHits_cellID[i], SiEndcapTrackerRecHits_position_x[i], SiEndcapTrackerRecHits_position_y[i], SiEndcapTrackerRecHits_position_z[i]);
	}
	for(int i = 0;i<TOFEndcapRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_TOFEndcap, TOFEndcapRecHits_cellID[i], TOFEndcapRecHits_position_x[i], TOFEndcapRecHits_position_y[i], TOFEndcapRecHits_position_z[i]);
	}
	for(int i = 0;i<ZDCEcalRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_ZDCEcal, ZDCEcalRecHits_cellID[i], ZDCEcalRecHits_position_x[i], ZDCEcalRecHits_position_y[i], ZDCEcalRecHits_position_z[i]);
	}
    }

    double rate_ratio = 8.3e4/actual_events;
    
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


    fun.writeHistos(rate_ratio);
 
}

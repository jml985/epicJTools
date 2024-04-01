//void XXX::Loop()
{
    functions fun;
    fun.setup_storage();

    if (fChain == 0) return;

    Long64_t nentries_file = fChain->GetEntriesFast();
    //Long64_t nentries = 10;
    Long64_t nentries = n_events_to_process;
    //Long64_t nentries = 200000;
    if(nentries > nentries_file) nentries = nentries_file;

    Long64_t actual_events = 0;
    std::cout << "N entries: "<< nentries_file << "  Only processing " << nentries << " events" << std::endl;

    Long64_t nbytes = 0, nb = 0;
    cout<<"total events = "<<nentries<<endl;
    for (Long64_t jentry=0; jentry<nentries;jentry++) {
	if(jentry > nentries) break;

	if((jentry % 50000) == 0) {
	    printf("%lld events processed\n", jentry);
	}

	Long64_t ientry = LoadTree(jentry);
	if (ientry < 0) break;
	nb = fChain->GetEntry(jentry);   nbytes += nb;

	actual_events++;

	fun.startEvent(jentry);
	
	for(int i = 0;i<B0ECalRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_B0ECal, B0ECalRecHits_cellID[i], B0ECalRecHits_position_x[i], B0ECalRecHits_position_y[i], B0ECalRecHits_position_z[i],  B0ECalRecHits_time[i], B0ECalRecHits_timeError[i]);
	}
	for(int i = 0;i<B0TrackerRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_B0Tracker, B0TrackerRecHits_cellID[i], B0TrackerRecHits_position_x[i], B0TrackerRecHits_position_y[i], B0TrackerRecHits_position_z[i], B0TrackerRecHits_time[i], B0TrackerRecHits_timeError[i]);
	}
	for(int i = 0;i<BackwardMPGDEndcapRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_BackwardMPGDEndcap, BackwardMPGDEndcapRecHits_cellID[i], BackwardMPGDEndcapRecHits_position_x[i], BackwardMPGDEndcapRecHits_position_y[i], BackwardMPGDEndcapRecHits_position_z[i], BackwardMPGDEndcapRecHits_time[i], BackwardMPGDEndcapRecHits_timeError[i]);
	}
	for(int i = 0;i<EcalBarrelImagingRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_EcalBarrelImaging, EcalBarrelImagingRecHits_cellID[i], EcalBarrelImagingRecHits_position_x[i], EcalBarrelImagingRecHits_position_y[i], EcalBarrelImagingRecHits_position_z[i], EcalBarrelImagingRecHits_time[i], EcalBarrelImagingRecHits_timeError[i]);
	}
	if(0) { 
	    for(int i = 0;i<EcalBarrelScFiRecHits_;i++){
		fun.addHitCell(jentry, fun.DET_EcalBarrelScFi, EcalBarrelScFiRecHits_cellID[i], EcalBarrelScFiRecHits_position_x[i], EcalBarrelScFiRecHits_position_y[i], EcalBarrelScFiRecHits_position_z[i],  EcalBarrelScFiRecHits_time[i], EcalBarrelScFiRecHits_timeError[i]);
	    }
	}
	else {
	    std::unordered_map<ULong_t, Int_t> ecal_cells_hit;
	    for(int i = 0;i<EcalBarrelScFiRecHits_;i++){
		ULong_t cell = EcalBarrelScFiRecHits_cellID[i];
		const auto &[sys,sec,row,zzz,tower] = fun.tup5(fun.cellToLocal(cell, {8,6,6,4,8}));
		int zidx = (EcalBarrelScFiRecHits_position_z[i] > 0) ? 0 : 1;
		int ridx = (int)(row-1)/4;
		ULong_t asic = (sec-1) + 48*zidx + 96*ridx;   // Full asic... for initial test.
		if(ecal_cells_hit.find(asic) == ecal_cells_hit.end()) {
		    // add
		    fun.addHitCell(jentry, fun.DET_EcalBarrelScFi, EcalBarrelScFiRecHits_cellID[i], EcalBarrelScFiRecHits_position_x[i], EcalBarrelScFiRecHits_position_y[i], EcalBarrelScFiRecHits_position_z[i],  EcalBarrelScFiRecHits_time[i], EcalBarrelScFiRecHits_timeError[i]);
		    ecal_cells_hit[asic] = 1;
		}
	    }
	}
	
	for(int i = 0;i<EcalEndcapNRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_EcalEndcapN, EcalEndcapNRecHits_cellID[i], EcalEndcapNRecHits_position_x[i], EcalEndcapNRecHits_position_y[i], EcalEndcapNRecHits_position_z[i], EcalEndcapNRecHits_time[i], EcalEndcapNRecHits_timeError[i]);
	}
	for(int i = 0;i<EcalEndcapPInsertRecHits_;i++){
	    // Note the detector used is EcalEndcapP
	    // EcalEndcapPInsert is not an actual separate detector
	    // it is simply part of the EcalEndcapP
	    fun.addHitCell(jentry, fun.DET_EcalEndcapP, EcalEndcapPInsertRecHits_cellID[i], EcalEndcapPInsertRecHits_position_x[i], EcalEndcapPInsertRecHits_position_y[i], EcalEndcapPInsertRecHits_position_z[i], EcalEndcapPInsertRecHits_time[i], EcalEndcapPInsertRecHits_timeError[i]);
	}
	for(int i = 0;i<EcalEndcapPRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_EcalEndcapP, EcalEndcapPRecHits_cellID[i], EcalEndcapPRecHits_position_x[i], EcalEndcapPRecHits_position_y[i], EcalEndcapPRecHits_position_z[i], EcalEndcapPRecHits_time[i], EcalEndcapPRecHits_timeError[i]);
	}
	for(int i = 0;i<EcalLumiSpecRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_EcalLumiSpec, EcalLumiSpecRecHits_cellID[i], EcalLumiSpecRecHits_position_x[i], EcalLumiSpecRecHits_position_y[i], EcalLumiSpecRecHits_position_z[i], EcalLumiSpecRecHits_time[i], EcalLumiSpecRecHits_timeError[i]);
	}
	for(int i = 0;i<ForwardMPGDEndcapRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_ForwardMPGDEndcap, ForwardMPGDEndcapRecHits_cellID[i], ForwardMPGDEndcapRecHits_position_x[i], ForwardMPGDEndcapRecHits_position_y[i], ForwardMPGDEndcapRecHits_position_z[i], ForwardMPGDEndcapRecHits_time[i], ForwardMPGDEndcapRecHits_timeError[i]);
	}
	for(int i = 0;i<HcalBarrelRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_HcalBarrel, HcalBarrelRecHits_cellID[i], HcalBarrelRecHits_position_x[i], HcalBarrelRecHits_position_y[i], HcalBarrelRecHits_position_z[i], HcalBarrelRecHits_time[i], HcalBarrelRecHits_timeError[i]);
	}
	for(int i = 0;i<HcalEndcapNRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_HcalEndcapN, HcalEndcapNRecHits_cellID[i], HcalEndcapNRecHits_position_x[i], HcalEndcapNRecHits_position_y[i], HcalEndcapNRecHits_position_z[i], HcalEndcapNRecHits_time[i], HcalEndcapNRecHits_timeError[i]);
	}
	for(int i = 0;i<HcalEndcapPInsertRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_HcalEndcapPInsert, HcalEndcapPInsertRecHits_cellID[i], HcalEndcapPInsertRecHits_position_x[i], HcalEndcapPInsertRecHits_position_y[i], HcalEndcapPInsertRecHits_position_z[i], HcalEndcapPInsertRecHits_time[i], HcalEndcapPInsertRecHits_timeError[i]);
	}

	// Hit one and only one lfhcal cell per event!
	if(1) {
	  for(int i = 0;i<LFHCALRecHits_;i++) {
	      fun.addHitCell(jentry, fun.DET_LFHCAL, LFHCALRecHits_cellID[i], LFHCALRecHits_position_x[i], LFHCALRecHits_position_y[i], LFHCALRecHits_position_z[i], LFHCALRecHits_time[i], LFHCALRecHits_timeError[i]);
	  }
	}
	else {
	    /*
	      std::unordered_map<ULong_t, vector<Float_t>> lfhcal_cells_hit;
	      for(int i = 0;i<LFHCALRecHits_;i++){
	      //const auto &[sys,moduleIDx,moduleIDy,moduletype,passive,towerx,towery,rlayerz,layerz] = tup9(cellToLocal(cell, {8,6,6,1,1,2,1,4,4}));
	      ULong_t cell = LFHCALRecHits_cellID[i];
	      cell = cell & fun.maskBits(8+6+6+1+1+2+1+4);   // mask out rlayerz & layerz
	      std::vector<Float_t>  hit = {LFHCALRecHits_position_x[i], LFHCALRecHits_position_y[i], LFHCALRecHits_position_z[i]};
	      // get one and only 1 hit from all layers hit with same tower hit!
	      if(lfhcal_cells_hit.find(cell) == lfhcal_cells_hit.end()) {
	      lfhcal_cells_hit[cell] = hit;
	      //printf("LFHCAL cell %8lx added   %lld\n", cell, jentry);
	      }
	      else {
	      if(lfhcal_cells_hit[cell][2] > hit[2])  {
	      lfhcal_cells_hit[cell] = hit;
	      //printf("LFHCAL cell %8lx updated %lld\n", cell, jentry);
	      }
	      else {
	      //printf("LFHCAL cell %8lx skipped %lld\n", cell, jentry);
	      }
	      }
	      
	      }
	      for(const auto& [cell, hit] : lfhcal_cells_hit) {
	      fun.addHitCell(jentry, fun.DET_LFHCAL, cell, hit[0], hit[1], hit[2]);
	      }
	    */
	}


	for(int i = 0;i<MPGDBarrelRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_MPGDBarrel, MPGDBarrelRecHits_cellID[i], MPGDBarrelRecHits_position_x[i], MPGDBarrelRecHits_position_y[i], MPGDBarrelRecHits_position_z[i], MPGDBarrelRecHits_time[i], MPGDBarrelRecHits_timeError[i]);
	}
	for(int i = 0;i<MPGDDIRCRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_MPGDDIRC, MPGDDIRCRecHits_cellID[i], MPGDDIRCRecHits_position_x[i], MPGDDIRCRecHits_position_y[i], MPGDDIRCRecHits_position_z[i], MPGDDIRCRecHits_time[i], MPGDDIRCRecHits_timeError[i]);
	}
	for(int i = 0;i<OuterMPGDBarrelRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_OuterMPGDBarrel, OuterMPGDBarrelRecHits_cellID[i], OuterMPGDBarrelRecHits_position_x[i], OuterMPGDBarrelRecHits_position_y[i], OuterMPGDBarrelRecHits_position_z[i], OuterMPGDBarrelRecHits_time[i], OuterMPGDBarrelRecHits_timeError[i]);
	}
	for(int i = 0;i<SiBarrelTrackerRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_SiBarrelTracker, SiBarrelTrackerRecHits_cellID[i], SiBarrelTrackerRecHits_position_x[i], SiBarrelTrackerRecHits_position_y[i], SiBarrelTrackerRecHits_position_z[i], SiBarrelTrackerRecHits_time[i], SiBarrelTrackerRecHits_timeError[i]);
	}
	for(int i = 0;i<SiBarrelVertexRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_SiBarrelVertex, SiBarrelVertexRecHits_cellID[i], SiBarrelVertexRecHits_position_x[i], SiBarrelVertexRecHits_position_y[i], SiBarrelVertexRecHits_position_z[i], SiBarrelVertexRecHits_time[i], SiBarrelVertexRecHits_timeError[i]);
	}
	for(int i = 0;i<SiEndcapTrackerRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_SiEndcapTracker, SiEndcapTrackerRecHits_cellID[i], SiEndcapTrackerRecHits_position_x[i], SiEndcapTrackerRecHits_position_y[i], SiEndcapTrackerRecHits_position_z[i], SiEndcapTrackerRecHits_time[i], SiEndcapTrackerRecHits_timeError[i]);
	}
	for(int i = 0;i<TOFBarrelRecHit_;i++) {
	    fun.addHitCell(jentry, fun.DET_TOFBarrel, TOFBarrelRecHit_cellID[i], TOFBarrelRecHit_position_x[i], TOFBarrelRecHit_position_y[i], TOFBarrelRecHit_position_z[i], TOFBarrelRecHit_time[i], TOFBarrelRecHit_timeError[i]);
	}
	for(int i = 0;i<TOFEndcapRecHits_;i++){
	    fun.addHitCell(jentry, fun.DET_TOFEndcap, TOFEndcapRecHits_cellID[i], TOFEndcapRecHits_position_x[i], TOFEndcapRecHits_position_y[i], TOFEndcapRecHits_position_z[i], TOFEndcapRecHits_time[i], TOFEndcapRecHits_timeError[i]);
	}
	/*
	  for(int i = 0;i<ZDCEcalRecHits_;i++){
	  fun.addHitCell(jentry, fun.DET_ZDCEcal, ZDCEcalRecHits_cellID[i], ZDCEcalRecHits_position_x[i], ZDCEcalRecHits_position_y[i], ZDCEcalRecHits_position_z[i]);
	  }
	*/
	fun.endEvent(jentry);
    }
    
    //double rate_ratio = base_event_rate/actual_events;
    
    /*
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
    
    printf("        (detector)  %40s:  rate=%10.1f   distinct channels=%lu  hits/channel=%8.2f\n", fun.detnames[i].c_str(), rate_ratio * (Float_t)cnt, num_hit_cells,   ((Float_t)cnt)/((Float_t)num_hit_cells));
    }
    */

    fun.writeData(filenameOutput, actual_events);
    fun.buildAsicHistos();
    fun.buildRdoHistos();
    fun.writeHistos(filenameHistograms, actual_events);
 
    fun.printNElectronicTypes();
    fun.printLimits();

    printf("max_hits = %d    max_t = %f, max_terr = %f, min_t = %f\n",
	   fun.max_hits_per_event, fun.max_t, fun.max_terror, fun.min_t);
}



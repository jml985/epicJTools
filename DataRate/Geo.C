#ifndef functions_h
#define functions_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>


#include <DD4hep/Detector.h>
#include <DD4hep/IDDescriptor.h>
#include <DD4hep/DetElement.h>
//#include <DD4hep/DetectorInterna.h>

using namespace dd4hep;

class Geo {
public:



 
	
    /*
    ULong_t parseDetElement(const DetElement &det) {
	ULong_t sum_cells = 0;
	for(const auto & [child_name, child] : det.children()) {
	    std::cout << "child:  " << child_name << " (" << child.id() << ")"<<std::endl;
	    sum_cells += parseDetElement(child);
	}
	
	Readout readout = det.sensitiveDetectors().readout();
	IDDescriptor idSpec = readout.idSpec();
	Segmentation segment = readout.segmentation();
	return sum_cells;
    }
	
	
	

    void run_new() {
	auto detector = dd4hep::Detector::make_unique("");
	detector->fromCompact(Form("%s/epic_craterlake.xml", gSystem->Getenv("DETECTOR_PATH")));

	VolumeManager vm = getVolumeManager(detector);
	VolumeManager inner_vtx = vm.subdetector(59);
	DetElement top = inner_vtx.detector();
	sum_cells = parseDetElement(top);

	printf("sum_cells=%lu\n", sum_cells);
    }
    */
	


     ULong_t iterate(const PlacedVolume &pv, std::vector<VolumeID> *result) {
	ULong_t ret = 0;
	if(pv.volume().isSensitive()) {	
	    ret++;

	    /*
	    // VolIDs contains the cellid names minus segmentation   
	    auto ids = pv.volIDs();
	    int z=0;
	    for(auto &[str, itt] : ids) {
		z++;
		std::cout << "ids: ["<<z<<"]  "<< str << ":" <<itt << std::endl;
	    }

	    // Lots of info about segmentations but no iterator!
	    const SensitiveDetector sd = pv.volume().sensitiveDetector();
	    const Readout readout = sd.readout();
	    const Segmentation segmentation = readout.segmentation();
	    for(auto zv : segmentation.parameters()) {
		std::cout <<  "  type: "<<segmentation.type()<< " name: " << segmentation.name() << " param:  "<< zv->name() << "="<< zv->value() << std::endl;    
	    } 
	    */
	    


	    // printf("ids: %ld\n", ids.size());
	 
	    //ret += nids;

	    //printf("pv GET ID count: %d\n", pv.GetIdCount());
	    //SensitiveDetector sd = pv.volume().sensitiveDetector();
	    //IDDescriptor dsc = sd.idSpec();
	    //printf("desc: 0x%lx\n",dsc.Field.FieldId());
	    // printf("desc: 0x%lx\n", dsc.encode());
	    //std::cout << "pushing back something: " << std::endl;
	}

	auto &b = *pv.volume();
	if(b.CountNodes() == 1) return ret;

	for(TObject *node : *pv.volume()->GetNodes()) {
	    
	    TGeoNode *gnode = dynamic_cast<TGeoNode *>(node);
	    //std::cout << "gnode->volumeId: " << gnode->volumeID() << std::endl;
	    PlacedVolume pv(gnode);
	    ret += iterate(pv, result);
	}

	return ret;
    }

    void runx() {
	auto detector = dd4hep::Detector::make_unique("");
	detector->fromCompact(Form("%s/epic_craterlake.xml", gSystem->Getenv("DETECTOR_PATH")));

	auto SiBarrelTracker1_len = detector->constant<double>("SiBarrelMod1_length") / dd4hep::mm;
	auto SiBarrelTracker1_width = detector->constant<double>("SiBarrelStave1_width") / dd4hep::mm;
	auto SiBarrelTracker1_count = detector->constant<double>("SiBarrelStave1_count") / dd4hep::mm;
	auto SiBarrelTracker2_len = detector->constant<double>("SiBarrelMod2_length") / dd4hep::mm;
	auto SiBarrelTracker2_width = detector->constant<double>("SiBarrelStave2_width") / dd4hep::mm;
	auto SiBarrelTracker2_count = detector->constant<double>("SiBarrelStave2_count") / dd4hep::mm;
	printf("[%f %f %f]\n", SiBarrelTracker1_len, SiBarrelTracker1_width, SiBarrelTracker1_count);
	printf("[%f %f %f]\n", SiBarrelTracker2_len, SiBarrelTracker2_width, SiBarrelTracker2_count);
	
	    

    }
    void run() {

	auto detector = dd4hep::Detector::make_unique("");
	detector->fromCompact(Form("%s/epic_craterlake.xml", gSystem->Getenv("DETECTOR_PATH")));
	auto ZDC_r_pos = detector->constant<double>("ZDC_r_pos") / dd4hep::mm;
	printf("ZDC_r_pos = %f\n", ZDC_r_pos);
	

	//for(const std::pair<std::string, DetElement> &[name, det] : detector->detectors()) {
	for(const auto & [name, _det] : detector->detectors()) {
	    // std::cout << p.first << "\t" << p.second.id() << "\t" <<  p.second.volumeID() << std::endl;
	    
	    DetElement & det = (DetElement &)_det;
	    ULong_t cells=0;
	    //std::cout << "NAME: " <<name<<std::endl;
	    
	    //char *ss = (char *)"LFHCAL";
	    // char *ss = (char *)"VertexBarrel";
	    //if(name == ss) {
	    if(1) {
		//printf("Found %s  %d\n", ss, det.id());
		
	       
		//for(const auto & [child_name, child] : det.children()) {
		//  std::cout << child_name << " <- " << child.id() << std::endl;
		//}
		
	   
		//for (const auto & [vol_name, systemId] : det.placement().volIDs()) {
		//  std::cout << "vol_name: "<< vol_name << "\t" << systemId << "\t" <<det.id() << std::endl;	 
		//}

		

		std::vector<VolumeID> ids;
		cells = iterate( det.placement(), &ids);
		//printf("volume ids: %ld\n", ids.size());
	    }
	    
	    if(cells > 0) {
		std::cout << "[" <<det.id()<<"]  " <<name<< ": " << cells << std::endl;
	    }	
	}
	
    }
};



    

#endif


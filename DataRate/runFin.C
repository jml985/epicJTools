void runFin(std::string datadir)
{
    gROOT->ProcessLine(".L functionsDict.cc");
    gROOT->ProcessLine(".L finalizeDataVolumes.C");
    //std::string x = "finalizeDataVolumes("+to_string(base_rate)+")";
    //std::cout << x << std::endl;
    std::string x = "finalizeDataVolumes(\"" + datadir + "\")";
    std::cout << "executing: " << x << endl;
    gROOT->ProcessLine(x.c_str());
}



//#pragma link C++ class std::map<unsigned long, int>+;
//#pragma link C++ class std::vector<std::map<unsigned long, int>>+;




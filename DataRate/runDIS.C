void runDIS()
{
    gROOT->ProcessLine(".L functionsDict.cc");
    gROOT->ProcessLine(".L DIS.C");
    gROOT->ProcessLine("DIS aa");
    gROOT->ProcessLine("aa.Loop()");
}



//#pragma link C++ class std::map<unsigned long, int>+;
//#pragma link C++ class std::vector<std::map<unsigned long, int>>+;



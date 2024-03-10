void runElectronBeam()
{
    gROOT->ProcessLine(".L functionsDict.cc");
    gROOT->ProcessLine(".L electronBeam.C");
    gROOT->ProcessLine("electronBeam aa");
    gROOT->ProcessLine("aa.Loop()");
}

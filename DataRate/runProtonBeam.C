void runProtonBeam()
{
    gROOT->ProcessLine(".L functionsDict.cc");
    gROOT->ProcessLine(".L protonBeam.C");
    gROOT->ProcessLine("protonBeam aa");
    gROOT->ProcessLine("aa.Loop()");
}

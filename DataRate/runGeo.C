void runGeo()
{
    //gROOT->ProcessLine("gSystem->AddLinkedLibs(\"-L /opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/dd4hep-1.27-tmttxcanrsmgbwnewizsvuscfgt5yx2b/lib/ -lDDCore -lDDG4\"");
    gROOT->ProcessLine(".L Geo.C");
    gROOT->ProcessLine("Geo aa");
    gROOT->ProcessLine("aa.run()");
}

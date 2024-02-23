void run()
{
gROOT->ProcessLine(".L DIS.C");
gROOT->ProcessLine("DIS aa");
gROOT->ProcessLine("aa.Loop()");
}

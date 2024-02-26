void runProton()
{
  gROOT->ProcessLine(".L protonBeam.C");
  gROOT->ProcessLine("protonBeam aa");
  gROOT->ProcessLine("aa.Loop()");
}

#define electronBeam_cxx
#include "electronBeam.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "functions.h"

const char *filenameHistograms = "output/electronBeam_Histo.root";
const char *filenameOutput = "output/electronBeam_Data.root";

//double base_event_rate = 3.177e6;
//int n_events_to_process = 500000;
int n_events_to_process = 5000000;
//int n_events_to_process = 100000;

void electronBeam::Loop()
#include "AnalysisShell.C"

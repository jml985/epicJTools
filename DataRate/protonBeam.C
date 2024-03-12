#define protonBeam_cxx
#include "protonBeam.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "functions.h"

const char *filenameHistograms = "protonBeam_Histo.root";
const char *filenameOutput = "protonBeam_Data.root";

double base_event_rate = 3.26e4;
int n_events_to_process = 750000;
//int n_events_to_process = 100000;
//int n_events_to_process = 10000;
void protonBeam::Loop()
#include "AnalysisShell.C"

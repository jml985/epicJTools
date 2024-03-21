#define DIS_cxx
#include "DIS.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "functions.h"

const char *filenameHistograms = "output/DIS_Histo.root";
const char *filenameOutput = "output/DIS_Data.root";

//double base_event_rate = 8.3e4;      // This assumes 
Int_t n_events_to_process = 15000;
//Int_t n_events_to_process = 2000000;

void DIS::Loop()
#include "AnalysisShell.C"


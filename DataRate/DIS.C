#define DIS_cxx
#include "DIS.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "functions.h"

const char *filenameHistograms = "DIS_Histo.root";
const char *filenameOutput = "tmp_DIS_Data.root";

double base_event_rate = 8.3e4;      // This assumes 
int n_events_to_process = 10000;

void DIS::Loop()
#include "AnalysisShell.C"


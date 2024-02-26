//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jan 10 15:29:34 2024 by ROOT version 6.28/06
// from TTree events/events data tree
// found on file: all.tree.edm4eic.root
//////////////////////////////////////////////////////////

#ifndef DIS_h
#define DIS_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "edm4eic/MCRecoClusterParticleAssociationData.h"
#include "vector"
#include "podio/ObjectID.h"
#include "edm4eic/ClusterData.h"
#include "vector"
#include "edm4hep/RawCalorimeterHitData.h"
#include "edm4eic/CalorimeterHitData.h"
#include "edm4eic/TrackerHitData.h"
#include "edm4eic/TrackSegmentData.h"
#include "edm4eic/TrackParametersData.h"
#include "edm4eic/TrajectoryData.h"
#include "edm4eic/Measurement2DData.h"
#include "edm4eic/VertexData.h"
#include "edm4eic/RawTrackerHitData.h"
#include "edm4eic/CherenkovParticleIDData.h"
#include "edm4eic/MCRecoTrackerHitAssociationData.h"
#include "edm4hep/EventHeaderData.h"
#include "edm4eic/ReconstructedParticleData.h"
#include "edm4eic/InclusiveKinematicsData.h"
#include "edm4hep/MCParticleData.h"
#include "edm4eic/MCRecoParticleAssociationData.h"
#include "edm4hep/ParticleIDData.h"
#include "podio/GenericParameters.h"

class DIS {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxB0ECalClusterAssociations = 7;
   static constexpr Int_t kMax_B0ECalClusterAssociations_rec = 7;
   static constexpr Int_t kMax_B0ECalClusterAssociations_sim = 7;
   static constexpr Int_t kMaxB0ECalClusters = 7;
   static constexpr Int_t kMax_B0ECalClusters_clusters = 1;
   static constexpr Int_t kMax_B0ECalClusters_hits = 1;
   static constexpr Int_t kMax_B0ECalClusters_particleIDs = 1;
   static constexpr Int_t kMaxB0ECalRawHits = 131;
   static constexpr Int_t kMaxB0ECalRecHits = 131;
   static constexpr Int_t kMaxB0TrackerRecHits = 821;
   static constexpr Int_t kMaxBackwardMPGDEndcapRecHits = 172;
   static constexpr Int_t kMaxCalorimeterTrackProjections = 53;
   static constexpr Int_t kMax_CalorimeterTrackProjections_track = 53;
   static constexpr Int_t kMax_CalorimeterTrackProjections_points = 184;
   static constexpr Int_t kMaxCentralCKFSeededTrackParameters = 82;
   static constexpr Int_t kMax_CentralCKFSeededTrackParameters_trajectory = 82;
   static constexpr Int_t kMaxCentralCKFSeededTrajectories = 82;
   static constexpr Int_t kMax_CentralCKFSeededTrajectories_trackParameters = 82;
   static constexpr Int_t kMax_CentralCKFSeededTrajectories_measurementHits = 296;
   static constexpr Int_t kMax_CentralCKFSeededTrajectories_outlierHits = 121;
   static constexpr Int_t kMaxCentralCKFTrackParameters = 53;
   static constexpr Int_t kMax_CentralCKFTrackParameters_trajectory = 53;
   static constexpr Int_t kMaxCentralCKFTrajectories = 53;
   static constexpr Int_t kMax_CentralCKFTrajectories_trackParameters = 53;
   static constexpr Int_t kMax_CentralCKFTrajectories_measurementHits = 170;
   static constexpr Int_t kMax_CentralCKFTrajectories_outlierHits = 62;
   static constexpr Int_t kMaxCentralTrackerMeasurements = 1083;
   static constexpr Int_t kMax_CentralTrackerMeasurements_hits = 1083;
   static constexpr Int_t kMaxCentralTrackingRecHits_objIdx = 1083;
   static constexpr Int_t kMaxCentralTrackSeedingResults = 82;
   static constexpr Int_t kMax_CentralTrackSeedingResults_trajectory = 82;
   static constexpr Int_t kMaxCentralTrackSegments = 53;
   static constexpr Int_t kMax_CentralTrackSegments_track = 53;
   static constexpr Int_t kMax_CentralTrackSegments_points = 357;
   static constexpr Int_t kMaxCentralTrackVertices = 5;
   static constexpr Int_t kMax_CentralTrackVertices_associatedParticle = 5;
   static constexpr Int_t kMaxDIRCRawHits = 1;
   static constexpr Int_t kMaxDRICHAerogelIrtCherenkovParticleID = 30;
   static constexpr Int_t kMax_DRICHAerogelIrtCherenkovParticleID_rawHitAssociations = 27882;
   static constexpr Int_t kMax_DRICHAerogelIrtCherenkovParticleID_chargedParticle = 30;
   static constexpr Int_t kMax_DRICHAerogelIrtCherenkovParticleID_hypotheses = 120;
   static constexpr Int_t kMax_DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons = 2773;
   static constexpr Int_t kMaxDRICHAerogelTracks = 30;
   static constexpr Int_t kMax_DRICHAerogelTracks_track = 30;
   static constexpr Int_t kMax_DRICHAerogelTracks_points = 150;
   static constexpr Int_t kMaxDRICHGasIrtCherenkovParticleID = 30;
   static constexpr Int_t kMax_DRICHGasIrtCherenkovParticleID_rawHitAssociations = 27882;
   static constexpr Int_t kMax_DRICHGasIrtCherenkovParticleID_chargedParticle = 30;
   static constexpr Int_t kMax_DRICHGasIrtCherenkovParticleID_hypotheses = 120;
   static constexpr Int_t kMax_DRICHGasIrtCherenkovParticleID_thetaPhiPhotons = 17500;
   static constexpr Int_t kMaxDRICHGasTracks = 30;
   static constexpr Int_t kMax_DRICHGasTracks_track = 30;
   static constexpr Int_t kMax_DRICHGasTracks_points = 278;
   static constexpr Int_t kMaxDRICHRawHits = 1966;
   static constexpr Int_t kMaxDRICHRawHitsAssociations = 1966;
   static constexpr Int_t kMax_DRICHRawHitsAssociations_simHits = 2021;
   static constexpr Int_t kMax_DRICHRawHitsAssociations_rawHit = 1966;
   static constexpr Int_t kMaxEcalBarrelClusterAssociations = 7;
   static constexpr Int_t kMax_EcalBarrelClusterAssociations_rec = 7;
   static constexpr Int_t kMax_EcalBarrelClusterAssociations_sim = 7;
   static constexpr Int_t kMaxEcalBarrelClusters = 6;
   static constexpr Int_t kMax_EcalBarrelClusters_clusters = 12;
   static constexpr Int_t kMax_EcalBarrelClusters_hits = 1;
   static constexpr Int_t kMax_EcalBarrelClusters_particleIDs = 1;
   static constexpr Int_t kMaxEcalBarrelImagingClusterAssociations = 10;
   static constexpr Int_t kMax_EcalBarrelImagingClusterAssociations_rec = 10;
   static constexpr Int_t kMax_EcalBarrelImagingClusterAssociations_sim = 10;
   static constexpr Int_t kMaxEcalBarrelImagingClusters = 10;
   static constexpr Int_t kMax_EcalBarrelImagingClusters_clusters = 29;
   static constexpr Int_t kMax_EcalBarrelImagingClusters_hits = 336;
   static constexpr Int_t kMax_EcalBarrelImagingClusters_particleIDs = 1;
   static constexpr Int_t kMaxEcalBarrelImagingRawHits = 758;
   static constexpr Int_t kMaxEcalBarrelImagingRecHits = 729;
   static constexpr Int_t kMaxEcalBarrelScFiClusterAssociations = 34;
   static constexpr Int_t kMax_EcalBarrelScFiClusterAssociations_rec = 34;
   static constexpr Int_t kMax_EcalBarrelScFiClusterAssociations_sim = 34;
   static constexpr Int_t kMaxEcalBarrelScFiClusters = 34;
   static constexpr Int_t kMax_EcalBarrelScFiClusters_clusters = 1;
   static constexpr Int_t kMax_EcalBarrelScFiClusters_hits = 1;
   static constexpr Int_t kMax_EcalBarrelScFiClusters_particleIDs = 1;
   static constexpr Int_t kMaxEcalBarrelScFiRawHits = 1611;
   static constexpr Int_t kMaxEcalBarrelScFiRecHits = 747;
   static constexpr Int_t kMaxEcalBarrelTruthClusterAssociations = 24;
   static constexpr Int_t kMax_EcalBarrelTruthClusterAssociations_rec = 24;
   static constexpr Int_t kMax_EcalBarrelTruthClusterAssociations_sim = 24;
   static constexpr Int_t kMaxEcalBarrelTruthClusters = 24;
   static constexpr Int_t kMax_EcalBarrelTruthClusters_clusters = 35;
   static constexpr Int_t kMax_EcalBarrelTruthClusters_hits = 336;
   static constexpr Int_t kMax_EcalBarrelTruthClusters_particleIDs = 1;
   static constexpr Int_t kMaxEcalEndcapNClusterAssociations = 39;
   static constexpr Int_t kMax_EcalEndcapNClusterAssociations_rec = 39;
   static constexpr Int_t kMax_EcalEndcapNClusterAssociations_sim = 39;
   static constexpr Int_t kMaxEcalEndcapNClusters = 39;
   static constexpr Int_t kMax_EcalEndcapNClusters_clusters = 1;
   static constexpr Int_t kMax_EcalEndcapNClusters_hits = 1;
   static constexpr Int_t kMax_EcalEndcapNClusters_particleIDs = 1;
   static constexpr Int_t kMaxEcalEndcapNRawHits = 1560;
   static constexpr Int_t kMaxEcalEndcapNRecHits = 205;
   static constexpr Int_t kMaxEcalEndcapNTruthClusterAssociations = 16;
   static constexpr Int_t kMax_EcalEndcapNTruthClusterAssociations_rec = 16;
   static constexpr Int_t kMax_EcalEndcapNTruthClusterAssociations_sim = 16;
   static constexpr Int_t kMaxEcalEndcapNTruthClusters = 16;
   static constexpr Int_t kMax_EcalEndcapNTruthClusters_clusters = 1;
   static constexpr Int_t kMax_EcalEndcapNTruthClusters_hits = 1;
   static constexpr Int_t kMax_EcalEndcapNTruthClusters_particleIDs = 1;
   static constexpr Int_t kMaxEcalEndcapPClusterAssociations = 736;
   static constexpr Int_t kMax_EcalEndcapPClusterAssociations_rec = 736;
   static constexpr Int_t kMax_EcalEndcapPClusterAssociations_sim = 736;
   static constexpr Int_t kMaxEcalEndcapPClusters = 736;
   static constexpr Int_t kMax_EcalEndcapPClusters_clusters = 1;
   static constexpr Int_t kMax_EcalEndcapPClusters_hits = 1;
   static constexpr Int_t kMax_EcalEndcapPClusters_particleIDs = 1;
   static constexpr Int_t kMaxEcalEndcapPInsertClusterAssociations = 45;
   static constexpr Int_t kMax_EcalEndcapPInsertClusterAssociations_rec = 45;
   static constexpr Int_t kMax_EcalEndcapPInsertClusterAssociations_sim = 45;
   static constexpr Int_t kMaxEcalEndcapPInsertClusters = 45;
   static constexpr Int_t kMax_EcalEndcapPInsertClusters_clusters = 1;
   static constexpr Int_t kMax_EcalEndcapPInsertClusters_hits = 1;
   static constexpr Int_t kMax_EcalEndcapPInsertClusters_particleIDs = 1;
   static constexpr Int_t kMaxEcalEndcapPInsertRawHits = 517;
   static constexpr Int_t kMaxEcalEndcapPInsertRecHits = 360;
   static constexpr Int_t kMaxEcalEndcapPInsertTruthClusterAssociations = 16;
   static constexpr Int_t kMax_EcalEndcapPInsertTruthClusterAssociations_rec = 16;
   static constexpr Int_t kMax_EcalEndcapPInsertTruthClusterAssociations_sim = 16;
   static constexpr Int_t kMaxEcalEndcapPInsertTruthClusters = 16;
   static constexpr Int_t kMax_EcalEndcapPInsertTruthClusters_clusters = 1;
   static constexpr Int_t kMax_EcalEndcapPInsertTruthClusters_hits = 1;
   static constexpr Int_t kMax_EcalEndcapPInsertTruthClusters_particleIDs = 1;
   static constexpr Int_t kMaxEcalEndcapPRawHits = 3166;
   static constexpr Int_t kMaxEcalEndcapPRecHits = 1265;
   static constexpr Int_t kMaxEcalEndcapPTruthClusterAssociations = 30;
   static constexpr Int_t kMax_EcalEndcapPTruthClusterAssociations_rec = 30;
   static constexpr Int_t kMax_EcalEndcapPTruthClusterAssociations_sim = 30;
   static constexpr Int_t kMaxEcalEndcapPTruthClusters = 30;
   static constexpr Int_t kMax_EcalEndcapPTruthClusters_clusters = 1;
   static constexpr Int_t kMax_EcalEndcapPTruthClusters_hits = 1;
   static constexpr Int_t kMax_EcalEndcapPTruthClusters_particleIDs = 1;
   static constexpr Int_t kMaxEcalLumiSpecClusterAssociations = 3;
   static constexpr Int_t kMax_EcalLumiSpecClusterAssociations_rec = 3;
   static constexpr Int_t kMax_EcalLumiSpecClusterAssociations_sim = 3;
   static constexpr Int_t kMaxEcalLumiSpecClusters = 3;
   static constexpr Int_t kMax_EcalLumiSpecClusters_clusters = 1;
   static constexpr Int_t kMax_EcalLumiSpecClusters_hits = 1;
   static constexpr Int_t kMax_EcalLumiSpecClusters_particleIDs = 1;
   static constexpr Int_t kMaxEcalLumiSpecRawHits = 61;
   static constexpr Int_t kMaxEcalLumiSpecRecHits = 48;
   static constexpr Int_t kMaxEcalLumiSpecTruthClusterAssociations = 2;
   static constexpr Int_t kMax_EcalLumiSpecTruthClusterAssociations_rec = 2;
   static constexpr Int_t kMax_EcalLumiSpecTruthClusterAssociations_sim = 2;
   static constexpr Int_t kMaxEcalLumiSpecTruthClusters = 2;
   static constexpr Int_t kMax_EcalLumiSpecTruthClusters_clusters = 1;
   static constexpr Int_t kMax_EcalLumiSpecTruthClusters_hits = 1;
   static constexpr Int_t kMax_EcalLumiSpecTruthClusters_particleIDs = 1;
   static constexpr Int_t kMaxEventHeader = 1;
   static constexpr Int_t kMaxForwardMPGDEndcapRecHits = 407;
   static constexpr Int_t kMaxForwardOffMRecParticles = 1;
   static constexpr Int_t kMax_ForwardOffMRecParticles_clusters = 1;
   static constexpr Int_t kMax_ForwardOffMRecParticles_tracks = 1;
   static constexpr Int_t kMax_ForwardOffMRecParticles_particles = 1;
   static constexpr Int_t kMax_ForwardOffMRecParticles_particleIDs = 1;
   static constexpr Int_t kMax_ForwardOffMRecParticles_startVertex = 1;
   static constexpr Int_t kMax_ForwardOffMRecParticles_particleIDUsed = 1;
   static constexpr Int_t kMaxForwardRomanPotRecParticles = 1;
   static constexpr Int_t kMax_ForwardRomanPotRecParticles_clusters = 1;
   static constexpr Int_t kMax_ForwardRomanPotRecParticles_tracks = 1;
   static constexpr Int_t kMax_ForwardRomanPotRecParticles_particles = 1;
   static constexpr Int_t kMax_ForwardRomanPotRecParticles_particleIDs = 1;
   static constexpr Int_t kMax_ForwardRomanPotRecParticles_startVertex = 1;
   static constexpr Int_t kMax_ForwardRomanPotRecParticles_particleIDUsed = 1;
   static constexpr Int_t kMaxGeneratedChargedJets = 36;
   static constexpr Int_t kMax_GeneratedChargedJets_clusters = 1;
   static constexpr Int_t kMax_GeneratedChargedJets_tracks = 1;
   static constexpr Int_t kMax_GeneratedChargedJets_particles = 1;
   static constexpr Int_t kMax_GeneratedChargedJets_particleIDs = 1;
   static constexpr Int_t kMax_GeneratedChargedJets_startVertex = 36;
   static constexpr Int_t kMax_GeneratedChargedJets_particleIDUsed = 36;
   static constexpr Int_t kMaxGeneratedJets = 57;
   static constexpr Int_t kMax_GeneratedJets_clusters = 1;
   static constexpr Int_t kMax_GeneratedJets_tracks = 1;
   static constexpr Int_t kMax_GeneratedJets_particles = 1;
   static constexpr Int_t kMax_GeneratedJets_particleIDs = 1;
   static constexpr Int_t kMax_GeneratedJets_startVertex = 57;
   static constexpr Int_t kMax_GeneratedJets_particleIDUsed = 57;
   static constexpr Int_t kMaxGeneratedParticles = 101;
   static constexpr Int_t kMax_GeneratedParticles_clusters = 1;
   static constexpr Int_t kMax_GeneratedParticles_tracks = 1;
   static constexpr Int_t kMax_GeneratedParticles_particles = 1;
   static constexpr Int_t kMax_GeneratedParticles_particleIDs = 1;
   static constexpr Int_t kMax_GeneratedParticles_startVertex = 101;
   static constexpr Int_t kMax_GeneratedParticles_particleIDUsed = 101;
   static constexpr Int_t kMaxHcalBarrelClusterAssociations = 28;
   static constexpr Int_t kMax_HcalBarrelClusterAssociations_rec = 28;
   static constexpr Int_t kMax_HcalBarrelClusterAssociations_sim = 28;
   static constexpr Int_t kMaxHcalBarrelClusters = 28;
   static constexpr Int_t kMax_HcalBarrelClusters_clusters = 1;
   static constexpr Int_t kMax_HcalBarrelClusters_hits = 1;
   static constexpr Int_t kMax_HcalBarrelClusters_particleIDs = 1;
   static constexpr Int_t kMaxHcalBarrelRawHits = 337;
   static constexpr Int_t kMaxHcalBarrelRecHits = 69;
   static constexpr Int_t kMaxHcalBarrelTruthClusterAssociations = 11;
   static constexpr Int_t kMax_HcalBarrelTruthClusterAssociations_rec = 11;
   static constexpr Int_t kMax_HcalBarrelTruthClusterAssociations_sim = 11;
   static constexpr Int_t kMaxHcalBarrelTruthClusters = 11;
   static constexpr Int_t kMax_HcalBarrelTruthClusters_clusters = 1;
   static constexpr Int_t kMax_HcalBarrelTruthClusters_hits = 1;
   static constexpr Int_t kMax_HcalBarrelTruthClusters_particleIDs = 1;
   static constexpr Int_t kMaxHcalEndcapNClusterAssociations = 24;
   static constexpr Int_t kMax_HcalEndcapNClusterAssociations_rec = 24;
   static constexpr Int_t kMax_HcalEndcapNClusterAssociations_sim = 24;
   static constexpr Int_t kMaxHcalEndcapNClusters = 24;
   static constexpr Int_t kMax_HcalEndcapNClusters_clusters = 1;
   static constexpr Int_t kMax_HcalEndcapNClusters_hits = 1;
   static constexpr Int_t kMax_HcalEndcapNClusters_particleIDs = 1;
   static constexpr Int_t kMaxHcalEndcapNMergedHits = 209;
   static constexpr Int_t kMaxHcalEndcapNRawHits = 432;
   static constexpr Int_t kMaxHcalEndcapNRecHits = 402;
   static constexpr Int_t kMaxHcalEndcapNTruthClusterAssociations = 14;
   static constexpr Int_t kMax_HcalEndcapNTruthClusterAssociations_rec = 14;
   static constexpr Int_t kMax_HcalEndcapNTruthClusterAssociations_sim = 14;
   static constexpr Int_t kMaxHcalEndcapNTruthClusters = 14;
   static constexpr Int_t kMax_HcalEndcapNTruthClusters_clusters = 1;
   static constexpr Int_t kMax_HcalEndcapNTruthClusters_hits = 1;
   static constexpr Int_t kMax_HcalEndcapNTruthClusters_particleIDs = 1;
   static constexpr Int_t kMaxHcalEndcapPInsertClusterAssociations = 3;
   static constexpr Int_t kMax_HcalEndcapPInsertClusterAssociations_rec = 3;
   static constexpr Int_t kMax_HcalEndcapPInsertClusterAssociations_sim = 3;
   static constexpr Int_t kMaxHcalEndcapPInsertClusters = 3;
   static constexpr Int_t kMax_HcalEndcapPInsertClusters_clusters = 1;
   static constexpr Int_t kMax_HcalEndcapPInsertClusters_hits = 1;
   static constexpr Int_t kMax_HcalEndcapPInsertClusters_particleIDs = 1;
   static constexpr Int_t kMaxHcalEndcapPInsertMergedHits = 223;
   static constexpr Int_t kMaxHcalEndcapPInsertRawHits = 3723;
   static constexpr Int_t kMaxHcalEndcapPInsertRecHits = 965;
   static constexpr Int_t kMaxInclusiveKinematicsDA = 1;
   static constexpr Int_t kMax_InclusiveKinematicsDA_scat = 1;
   static constexpr Int_t kMaxInclusiveKinematicsElectron = 1;
   static constexpr Int_t kMax_InclusiveKinematicsElectron_scat = 1;
   static constexpr Int_t kMaxInclusiveKinematicseSigma = 1;
   static constexpr Int_t kMax_InclusiveKinematicseSigma_scat = 1;
   static constexpr Int_t kMaxInclusiveKinematicsJB = 1;
   static constexpr Int_t kMax_InclusiveKinematicsJB_scat = 1;
   static constexpr Int_t kMaxInclusiveKinematicsSigma = 1;
   static constexpr Int_t kMax_InclusiveKinematicsSigma_scat = 1;
   static constexpr Int_t kMaxInclusiveKinematicsTruth = 1;
   static constexpr Int_t kMax_InclusiveKinematicsTruth_scat = 1;
   static constexpr Int_t kMaxLFHCALClusterAssociations = 38;
   static constexpr Int_t kMax_LFHCALClusterAssociations_rec = 38;
   static constexpr Int_t kMax_LFHCALClusterAssociations_sim = 38;
   static constexpr Int_t kMaxLFHCALClusters = 38;
   static constexpr Int_t kMax_LFHCALClusters_clusters = 1;
   static constexpr Int_t kMax_LFHCALClusters_hits = 1;
   static constexpr Int_t kMax_LFHCALClusters_particleIDs = 1;
   static constexpr Int_t kMaxLFHCALRawHits = 1954;
   static constexpr Int_t kMaxLFHCALRecHits = 536;
   static constexpr Int_t kMaxMCParticles = 194;
   static constexpr Int_t kMax_MCParticles_parents = 192;
   static constexpr Int_t kMax_MCParticles_daughters = 192;
   static constexpr Int_t kMaxMPGDBarrelRecHits = 170;
   static constexpr Int_t kMaxMPGDDIRCRecHits = 1;
   static constexpr Int_t kMaxOuterMPGDBarrelRecHits = 345;
   static constexpr Int_t kMaxReconstructedChargedJets = 39;
   static constexpr Int_t kMax_ReconstructedChargedJets_clusters = 1;
   static constexpr Int_t kMax_ReconstructedChargedJets_tracks = 1;
   static constexpr Int_t kMax_ReconstructedChargedJets_particles = 1;
   static constexpr Int_t kMax_ReconstructedChargedJets_particleIDs = 1;
   static constexpr Int_t kMax_ReconstructedChargedJets_startVertex = 39;
   static constexpr Int_t kMax_ReconstructedChargedJets_particleIDUsed = 39;
   static constexpr Int_t kMaxReconstructedChargedParticleAssociations = 41;
   static constexpr Int_t kMax_ReconstructedChargedParticleAssociations_rec = 41;
   static constexpr Int_t kMax_ReconstructedChargedParticleAssociations_sim = 41;
   static constexpr Int_t kMaxReconstructedChargedParticleIDs = 64;
   static constexpr Int_t kMaxReconstructedChargedParticles = 53;
   static constexpr Int_t kMax_ReconstructedChargedParticles_clusters = 1;
   static constexpr Int_t kMax_ReconstructedChargedParticles_tracks = 1;
   static constexpr Int_t kMax_ReconstructedChargedParticles_particles = 1;
   static constexpr Int_t kMax_ReconstructedChargedParticles_particleIDs = 64;
   static constexpr Int_t kMax_ReconstructedChargedParticles_startVertex = 53;
   static constexpr Int_t kMax_ReconstructedChargedParticles_particleIDUsed = 53;
   static constexpr Int_t kMaxReconstructedElectrons = 6;
   static constexpr Int_t kMax_ReconstructedElectrons_clusters = 1;
   static constexpr Int_t kMax_ReconstructedElectrons_tracks = 1;
   static constexpr Int_t kMax_ReconstructedElectrons_particles = 1;
   static constexpr Int_t kMax_ReconstructedElectrons_particleIDs = 12;
   static constexpr Int_t kMax_ReconstructedElectrons_startVertex = 6;
   static constexpr Int_t kMax_ReconstructedElectrons_particleIDUsed = 6;
   static constexpr Int_t kMaxReconstructedJets = 54;
   static constexpr Int_t kMax_ReconstructedJets_clusters = 1;
   static constexpr Int_t kMax_ReconstructedJets_tracks = 1;
   static constexpr Int_t kMax_ReconstructedJets_particles = 1;
   static constexpr Int_t kMax_ReconstructedJets_particleIDs = 1;
   static constexpr Int_t kMax_ReconstructedJets_startVertex = 54;
   static constexpr Int_t kMax_ReconstructedJets_particleIDUsed = 54;
   static constexpr Int_t kMaxReconstructedParticleAssociations = 71;
   static constexpr Int_t kMax_ReconstructedParticleAssociations_rec = 71;
   static constexpr Int_t kMax_ReconstructedParticleAssociations_sim = 71;
   static constexpr Int_t kMaxReconstructedParticles = 82;
   static constexpr Int_t kMax_ReconstructedParticles_clusters = 61;
   static constexpr Int_t kMax_ReconstructedParticles_tracks = 1;
   static constexpr Int_t kMax_ReconstructedParticles_particles = 1;
   static constexpr Int_t kMax_ReconstructedParticles_particleIDs = 64;
   static constexpr Int_t kMax_ReconstructedParticles_startVertex = 82;
   static constexpr Int_t kMax_ReconstructedParticles_particleIDUsed = 82;
   static constexpr Int_t kMaxReconstructedSeededChargedParticleAssociations = 28;
   static constexpr Int_t kMax_ReconstructedSeededChargedParticleAssociations_rec = 28;
   static constexpr Int_t kMax_ReconstructedSeededChargedParticleAssociations_sim = 28;
   static constexpr Int_t kMaxReconstructedSeededChargedParticles = 82;
   static constexpr Int_t kMax_ReconstructedSeededChargedParticles_clusters = 1;
   static constexpr Int_t kMax_ReconstructedSeededChargedParticles_tracks = 1;
   static constexpr Int_t kMax_ReconstructedSeededChargedParticles_particles = 1;
   static constexpr Int_t kMax_ReconstructedSeededChargedParticles_particleIDs = 136;
   static constexpr Int_t kMax_ReconstructedSeededChargedParticles_startVertex = 82;
   static constexpr Int_t kMax_ReconstructedSeededChargedParticles_particleIDUsed = 82;
   static constexpr Int_t kMaxSiBarrelTrackerRecHits = 183;
   static constexpr Int_t kMaxSiBarrelVertexRecHits = 307;
   static constexpr Int_t kMaxSiEndcapTrackerRecHits = 190;
   static constexpr Int_t kMaxTaggerTrackerRawHits = 576;
   static constexpr Int_t kMaxTOFBarrelRecHit = 127;
   static constexpr Int_t kMaxTOFEndcapRecHits = 128;
   static constexpr Int_t kMaxZDCEcalClusterAssociations = 58;
   static constexpr Int_t kMax_ZDCEcalClusterAssociations_rec = 58;
   static constexpr Int_t kMax_ZDCEcalClusterAssociations_sim = 58;
   static constexpr Int_t kMaxZDCEcalClusters = 58;
   static constexpr Int_t kMax_ZDCEcalClusters_clusters = 1;
   static constexpr Int_t kMax_ZDCEcalClusters_hits = 1;
   static constexpr Int_t kMax_ZDCEcalClusters_particleIDs = 1;
   static constexpr Int_t kMaxZDCEcalRawHits = 252;
   static constexpr Int_t kMaxZDCEcalRecHits = 252;
   static constexpr Int_t kMaxZDCEcalTruthClusterAssociations = 7;
   static constexpr Int_t kMax_ZDCEcalTruthClusterAssociations_rec = 7;
   static constexpr Int_t kMax_ZDCEcalTruthClusterAssociations_sim = 7;
   static constexpr Int_t kMaxZDCEcalTruthClusters = 7;
   static constexpr Int_t kMax_ZDCEcalTruthClusters_clusters = 1;
   static constexpr Int_t kMax_ZDCEcalTruthClusters_hits = 1;
   static constexpr Int_t kMax_ZDCEcalTruthClusters_particleIDs = 1;
   static constexpr Int_t kMax_intMap = 1;
   static constexpr Int_t kMax_floatMap = 1;
   static constexpr Int_t kMax_stringMap = 2;
   static constexpr Int_t kMax_doubleMap = 1;

   // Declaration of leaf types
   Int_t           B0ECalClusterAssociations_;
   UInt_t          B0ECalClusterAssociations_simID[kMaxB0ECalClusterAssociations];   //[B0ECalClusterAssociations_]
   UInt_t          B0ECalClusterAssociations_recID[kMaxB0ECalClusterAssociations];   //[B0ECalClusterAssociations_]
   Float_t         B0ECalClusterAssociations_weight[kMaxB0ECalClusterAssociations];   //[B0ECalClusterAssociations_]
   Int_t           _B0ECalClusterAssociations_rec_;
   Int_t           _B0ECalClusterAssociations_rec_index[kMax_B0ECalClusterAssociations_rec];   //[_B0ECalClusterAssociations_rec_]
   UInt_t          _B0ECalClusterAssociations_rec_collectionID[kMax_B0ECalClusterAssociations_rec];   //[_B0ECalClusterAssociations_rec_]
   Int_t           _B0ECalClusterAssociations_sim_;
   Int_t           _B0ECalClusterAssociations_sim_index[kMax_B0ECalClusterAssociations_sim];   //[_B0ECalClusterAssociations_sim_]
   UInt_t          _B0ECalClusterAssociations_sim_collectionID[kMax_B0ECalClusterAssociations_sim];   //[_B0ECalClusterAssociations_sim_]
   Int_t           B0ECalClusters_;
   Int_t           B0ECalClusters_type[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Float_t         B0ECalClusters_energy[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Float_t         B0ECalClusters_energyError[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Float_t         B0ECalClusters_time[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Float_t         B0ECalClusters_timeError[kMaxB0ECalClusters];   //[B0ECalClusters_]
   UInt_t          B0ECalClusters_nhits[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Float_t         B0ECalClusters_position_x[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Float_t         B0ECalClusters_position_y[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Float_t         B0ECalClusters_position_z[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Float_t         B0ECalClusters_positionError_xx[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Float_t         B0ECalClusters_positionError_yy[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Float_t         B0ECalClusters_positionError_zz[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Float_t         B0ECalClusters_positionError_xy[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Float_t         B0ECalClusters_positionError_xz[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Float_t         B0ECalClusters_positionError_yz[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Float_t         B0ECalClusters_intrinsicTheta[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Float_t         B0ECalClusters_intrinsicPhi[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Float_t         B0ECalClusters_intrinsicDirectionError_xx[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Float_t         B0ECalClusters_intrinsicDirectionError_yy[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Float_t         B0ECalClusters_intrinsicDirectionError_xy[kMaxB0ECalClusters];   //[B0ECalClusters_]
   UInt_t          B0ECalClusters_shapeParameters_begin[kMaxB0ECalClusters];   //[B0ECalClusters_]
   UInt_t          B0ECalClusters_shapeParameters_end[kMaxB0ECalClusters];   //[B0ECalClusters_]
   UInt_t          B0ECalClusters_hitContributions_begin[kMaxB0ECalClusters];   //[B0ECalClusters_]
   UInt_t          B0ECalClusters_hitContributions_end[kMaxB0ECalClusters];   //[B0ECalClusters_]
   UInt_t          B0ECalClusters_subdetectorEnergies_begin[kMaxB0ECalClusters];   //[B0ECalClusters_]
   UInt_t          B0ECalClusters_subdetectorEnergies_end[kMaxB0ECalClusters];   //[B0ECalClusters_]
   UInt_t          B0ECalClusters_clusters_begin[kMaxB0ECalClusters];   //[B0ECalClusters_]
   UInt_t          B0ECalClusters_clusters_end[kMaxB0ECalClusters];   //[B0ECalClusters_]
   UInt_t          B0ECalClusters_hits_begin[kMaxB0ECalClusters];   //[B0ECalClusters_]
   UInt_t          B0ECalClusters_hits_end[kMaxB0ECalClusters];   //[B0ECalClusters_]
   UInt_t          B0ECalClusters_particleIDs_begin[kMaxB0ECalClusters];   //[B0ECalClusters_]
   UInt_t          B0ECalClusters_particleIDs_end[kMaxB0ECalClusters];   //[B0ECalClusters_]
   Int_t           _B0ECalClusters_clusters_;
   Int_t           _B0ECalClusters_clusters_index[kMax_B0ECalClusters_clusters];   //[_B0ECalClusters_clusters_]
   UInt_t          _B0ECalClusters_clusters_collectionID[kMax_B0ECalClusters_clusters];   //[_B0ECalClusters_clusters_]
   Int_t           _B0ECalClusters_hits_;
   Int_t           _B0ECalClusters_hits_index[kMax_B0ECalClusters_hits];   //[_B0ECalClusters_hits_]
   UInt_t          _B0ECalClusters_hits_collectionID[kMax_B0ECalClusters_hits];   //[_B0ECalClusters_hits_]
   Int_t           _B0ECalClusters_particleIDs_;
   Int_t           _B0ECalClusters_particleIDs_index[kMax_B0ECalClusters_particleIDs];   //[_B0ECalClusters_particleIDs_]
   UInt_t          _B0ECalClusters_particleIDs_collectionID[kMax_B0ECalClusters_particleIDs];   //[_B0ECalClusters_particleIDs_]
   vector<float>   *_B0ECalClusters_shapeParameters;
   vector<float>   *_B0ECalClusters_hitContributions;
   vector<float>   *_B0ECalClusters_subdetectorEnergies;
   Int_t           B0ECalRawHits_;
   ULong_t         B0ECalRawHits_cellID[kMaxB0ECalRawHits];   //[B0ECalRawHits_]
   Int_t           B0ECalRawHits_amplitude[kMaxB0ECalRawHits];   //[B0ECalRawHits_]
   Int_t           B0ECalRawHits_timeStamp[kMaxB0ECalRawHits];   //[B0ECalRawHits_]
   Int_t           B0ECalRecHits_;
   ULong_t         B0ECalRecHits_cellID[kMaxB0ECalRecHits];   //[B0ECalRecHits_]
   Float_t         B0ECalRecHits_energy[kMaxB0ECalRecHits];   //[B0ECalRecHits_]
   Float_t         B0ECalRecHits_energyError[kMaxB0ECalRecHits];   //[B0ECalRecHits_]
   Float_t         B0ECalRecHits_time[kMaxB0ECalRecHits];   //[B0ECalRecHits_]
   Float_t         B0ECalRecHits_timeError[kMaxB0ECalRecHits];   //[B0ECalRecHits_]
   Float_t         B0ECalRecHits_position_x[kMaxB0ECalRecHits];   //[B0ECalRecHits_]
   Float_t         B0ECalRecHits_position_y[kMaxB0ECalRecHits];   //[B0ECalRecHits_]
   Float_t         B0ECalRecHits_position_z[kMaxB0ECalRecHits];   //[B0ECalRecHits_]
   Float_t         B0ECalRecHits_dimension_x[kMaxB0ECalRecHits];   //[B0ECalRecHits_]
   Float_t         B0ECalRecHits_dimension_y[kMaxB0ECalRecHits];   //[B0ECalRecHits_]
   Float_t         B0ECalRecHits_dimension_z[kMaxB0ECalRecHits];   //[B0ECalRecHits_]
   Int_t           B0ECalRecHits_sector[kMaxB0ECalRecHits];   //[B0ECalRecHits_]
   Int_t           B0ECalRecHits_layer[kMaxB0ECalRecHits];   //[B0ECalRecHits_]
   Float_t         B0ECalRecHits_local_x[kMaxB0ECalRecHits];   //[B0ECalRecHits_]
   Float_t         B0ECalRecHits_local_y[kMaxB0ECalRecHits];   //[B0ECalRecHits_]
   Float_t         B0ECalRecHits_local_z[kMaxB0ECalRecHits];   //[B0ECalRecHits_]
   Int_t           B0TrackerRecHits_;
   ULong_t         B0TrackerRecHits_cellID[kMaxB0TrackerRecHits];   //[B0TrackerRecHits_]
   Float_t         B0TrackerRecHits_position_x[kMaxB0TrackerRecHits];   //[B0TrackerRecHits_]
   Float_t         B0TrackerRecHits_position_y[kMaxB0TrackerRecHits];   //[B0TrackerRecHits_]
   Float_t         B0TrackerRecHits_position_z[kMaxB0TrackerRecHits];   //[B0TrackerRecHits_]
   Float_t         B0TrackerRecHits_positionError_xx[kMaxB0TrackerRecHits];   //[B0TrackerRecHits_]
   Float_t         B0TrackerRecHits_positionError_yy[kMaxB0TrackerRecHits];   //[B0TrackerRecHits_]
   Float_t         B0TrackerRecHits_positionError_zz[kMaxB0TrackerRecHits];   //[B0TrackerRecHits_]
   Float_t         B0TrackerRecHits_time[kMaxB0TrackerRecHits];   //[B0TrackerRecHits_]
   Float_t         B0TrackerRecHits_timeError[kMaxB0TrackerRecHits];   //[B0TrackerRecHits_]
   Float_t         B0TrackerRecHits_edep[kMaxB0TrackerRecHits];   //[B0TrackerRecHits_]
   Float_t         B0TrackerRecHits_edepError[kMaxB0TrackerRecHits];   //[B0TrackerRecHits_]
   Int_t           BackwardMPGDEndcapRecHits_;
   ULong_t         BackwardMPGDEndcapRecHits_cellID[kMaxBackwardMPGDEndcapRecHits];   //[BackwardMPGDEndcapRecHits_]
   Float_t         BackwardMPGDEndcapRecHits_position_x[kMaxBackwardMPGDEndcapRecHits];   //[BackwardMPGDEndcapRecHits_]
   Float_t         BackwardMPGDEndcapRecHits_position_y[kMaxBackwardMPGDEndcapRecHits];   //[BackwardMPGDEndcapRecHits_]
   Float_t         BackwardMPGDEndcapRecHits_position_z[kMaxBackwardMPGDEndcapRecHits];   //[BackwardMPGDEndcapRecHits_]
   Float_t         BackwardMPGDEndcapRecHits_positionError_xx[kMaxBackwardMPGDEndcapRecHits];   //[BackwardMPGDEndcapRecHits_]
   Float_t         BackwardMPGDEndcapRecHits_positionError_yy[kMaxBackwardMPGDEndcapRecHits];   //[BackwardMPGDEndcapRecHits_]
   Float_t         BackwardMPGDEndcapRecHits_positionError_zz[kMaxBackwardMPGDEndcapRecHits];   //[BackwardMPGDEndcapRecHits_]
   Float_t         BackwardMPGDEndcapRecHits_time[kMaxBackwardMPGDEndcapRecHits];   //[BackwardMPGDEndcapRecHits_]
   Float_t         BackwardMPGDEndcapRecHits_timeError[kMaxBackwardMPGDEndcapRecHits];   //[BackwardMPGDEndcapRecHits_]
   Float_t         BackwardMPGDEndcapRecHits_edep[kMaxBackwardMPGDEndcapRecHits];   //[BackwardMPGDEndcapRecHits_]
   Float_t         BackwardMPGDEndcapRecHits_edepError[kMaxBackwardMPGDEndcapRecHits];   //[BackwardMPGDEndcapRecHits_]
   Int_t           CalorimeterTrackProjections_;
   Float_t         CalorimeterTrackProjections_length[kMaxCalorimeterTrackProjections];   //[CalorimeterTrackProjections_]
   Float_t         CalorimeterTrackProjections_lengthError[kMaxCalorimeterTrackProjections];   //[CalorimeterTrackProjections_]
   UInt_t          CalorimeterTrackProjections_points_begin[kMaxCalorimeterTrackProjections];   //[CalorimeterTrackProjections_]
   UInt_t          CalorimeterTrackProjections_points_end[kMaxCalorimeterTrackProjections];   //[CalorimeterTrackProjections_]
   Int_t           _CalorimeterTrackProjections_track_;
   Int_t           _CalorimeterTrackProjections_track_index[kMax_CalorimeterTrackProjections_track];   //[_CalorimeterTrackProjections_track_]
   UInt_t          _CalorimeterTrackProjections_track_collectionID[kMax_CalorimeterTrackProjections_track];   //[_CalorimeterTrackProjections_track_]
   Int_t           _CalorimeterTrackProjections_points_;
   ULong_t         _CalorimeterTrackProjections_points_surface[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   UInt_t          _CalorimeterTrackProjections_points_system[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_position_x[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_position_y[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_position_z[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_positionError_xx[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_positionError_yy[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_positionError_zz[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_positionError_xy[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_positionError_xz[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_positionError_yz[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_momentum_x[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_momentum_y[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_momentum_z[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_momentumError_xx[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_momentumError_yy[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_momentumError_zz[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_momentumError_xy[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_momentumError_xz[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_momentumError_yz[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_time[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_timeError[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_theta[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_phi[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_directionError_xx[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_directionError_yy[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_directionError_xy[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_pathlength[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Float_t         _CalorimeterTrackProjections_points_pathlengthError[kMax_CalorimeterTrackProjections_points];   //[_CalorimeterTrackProjections_points_]
   Int_t           CentralCKFSeededTrackParameters_;
   Int_t           CentralCKFSeededTrackParameters_type[kMaxCentralCKFSeededTrackParameters];   //[CentralCKFSeededTrackParameters_]
   Float_t         CentralCKFSeededTrackParameters_loc_a[kMaxCentralCKFSeededTrackParameters];   //[CentralCKFSeededTrackParameters_]
   Float_t         CentralCKFSeededTrackParameters_loc_b[kMaxCentralCKFSeededTrackParameters];   //[CentralCKFSeededTrackParameters_]
   Float_t         CentralCKFSeededTrackParameters_locError_xx[kMaxCentralCKFSeededTrackParameters];   //[CentralCKFSeededTrackParameters_]
   Float_t         CentralCKFSeededTrackParameters_locError_yy[kMaxCentralCKFSeededTrackParameters];   //[CentralCKFSeededTrackParameters_]
   Float_t         CentralCKFSeededTrackParameters_locError_xy[kMaxCentralCKFSeededTrackParameters];   //[CentralCKFSeededTrackParameters_]
   Float_t         CentralCKFSeededTrackParameters_theta[kMaxCentralCKFSeededTrackParameters];   //[CentralCKFSeededTrackParameters_]
   Float_t         CentralCKFSeededTrackParameters_phi[kMaxCentralCKFSeededTrackParameters];   //[CentralCKFSeededTrackParameters_]
   Float_t         CentralCKFSeededTrackParameters_qOverP[kMaxCentralCKFSeededTrackParameters];   //[CentralCKFSeededTrackParameters_]
   Float_t         CentralCKFSeededTrackParameters_momentumError_xx[kMaxCentralCKFSeededTrackParameters];   //[CentralCKFSeededTrackParameters_]
   Float_t         CentralCKFSeededTrackParameters_momentumError_yy[kMaxCentralCKFSeededTrackParameters];   //[CentralCKFSeededTrackParameters_]
   Float_t         CentralCKFSeededTrackParameters_momentumError_zz[kMaxCentralCKFSeededTrackParameters];   //[CentralCKFSeededTrackParameters_]
   Float_t         CentralCKFSeededTrackParameters_momentumError_xy[kMaxCentralCKFSeededTrackParameters];   //[CentralCKFSeededTrackParameters_]
   Float_t         CentralCKFSeededTrackParameters_momentumError_xz[kMaxCentralCKFSeededTrackParameters];   //[CentralCKFSeededTrackParameters_]
   Float_t         CentralCKFSeededTrackParameters_momentumError_yz[kMaxCentralCKFSeededTrackParameters];   //[CentralCKFSeededTrackParameters_]
   Float_t         CentralCKFSeededTrackParameters_time[kMaxCentralCKFSeededTrackParameters];   //[CentralCKFSeededTrackParameters_]
   Float_t         CentralCKFSeededTrackParameters_timeError[kMaxCentralCKFSeededTrackParameters];   //[CentralCKFSeededTrackParameters_]
   Float_t         CentralCKFSeededTrackParameters_charge[kMaxCentralCKFSeededTrackParameters];   //[CentralCKFSeededTrackParameters_]
   Int_t           _CentralCKFSeededTrackParameters_trajectory_;
   Int_t           _CentralCKFSeededTrackParameters_trajectory_index[kMax_CentralCKFSeededTrackParameters_trajectory];   //[_CentralCKFSeededTrackParameters_trajectory_]
   UInt_t          _CentralCKFSeededTrackParameters_trajectory_collectionID[kMax_CentralCKFSeededTrackParameters_trajectory];   //[_CentralCKFSeededTrackParameters_trajectory_]
   Int_t           CentralCKFSeededTrajectories_;
   UInt_t          CentralCKFSeededTrajectories_type[kMaxCentralCKFSeededTrajectories];   //[CentralCKFSeededTrajectories_]
   UInt_t          CentralCKFSeededTrajectories_nStates[kMaxCentralCKFSeededTrajectories];   //[CentralCKFSeededTrajectories_]
   UInt_t          CentralCKFSeededTrajectories_nMeasurements[kMaxCentralCKFSeededTrajectories];   //[CentralCKFSeededTrajectories_]
   UInt_t          CentralCKFSeededTrajectories_nOutliers[kMaxCentralCKFSeededTrajectories];   //[CentralCKFSeededTrajectories_]
   UInt_t          CentralCKFSeededTrajectories_nHoles[kMaxCentralCKFSeededTrajectories];   //[CentralCKFSeededTrajectories_]
   Float_t         CentralCKFSeededTrajectories_chi2[kMaxCentralCKFSeededTrajectories];   //[CentralCKFSeededTrajectories_]
   UInt_t          CentralCKFSeededTrajectories_ndf[kMaxCentralCKFSeededTrajectories];   //[CentralCKFSeededTrajectories_]
   UInt_t          CentralCKFSeededTrajectories_nSharedHits[kMaxCentralCKFSeededTrajectories];   //[CentralCKFSeededTrajectories_]
   UInt_t          CentralCKFSeededTrajectories_measurementChi2_begin[kMaxCentralCKFSeededTrajectories];   //[CentralCKFSeededTrajectories_]
   UInt_t          CentralCKFSeededTrajectories_measurementChi2_end[kMaxCentralCKFSeededTrajectories];   //[CentralCKFSeededTrajectories_]
   UInt_t          CentralCKFSeededTrajectories_outlierChi2_begin[kMaxCentralCKFSeededTrajectories];   //[CentralCKFSeededTrajectories_]
   UInt_t          CentralCKFSeededTrajectories_outlierChi2_end[kMaxCentralCKFSeededTrajectories];   //[CentralCKFSeededTrajectories_]
   UInt_t          CentralCKFSeededTrajectories_trackParameters_begin[kMaxCentralCKFSeededTrajectories];   //[CentralCKFSeededTrajectories_]
   UInt_t          CentralCKFSeededTrajectories_trackParameters_end[kMaxCentralCKFSeededTrajectories];   //[CentralCKFSeededTrajectories_]
   UInt_t          CentralCKFSeededTrajectories_measurementHits_begin[kMaxCentralCKFSeededTrajectories];   //[CentralCKFSeededTrajectories_]
   UInt_t          CentralCKFSeededTrajectories_measurementHits_end[kMaxCentralCKFSeededTrajectories];   //[CentralCKFSeededTrajectories_]
   UInt_t          CentralCKFSeededTrajectories_outlierHits_begin[kMaxCentralCKFSeededTrajectories];   //[CentralCKFSeededTrajectories_]
   UInt_t          CentralCKFSeededTrajectories_outlierHits_end[kMaxCentralCKFSeededTrajectories];   //[CentralCKFSeededTrajectories_]
   Int_t           _CentralCKFSeededTrajectories_trackParameters_;
   Int_t           _CentralCKFSeededTrajectories_trackParameters_index[kMax_CentralCKFSeededTrajectories_trackParameters];   //[_CentralCKFSeededTrajectories_trackParameters_]
   UInt_t          _CentralCKFSeededTrajectories_trackParameters_collectionID[kMax_CentralCKFSeededTrajectories_trackParameters];   //[_CentralCKFSeededTrajectories_trackParameters_]
   Int_t           _CentralCKFSeededTrajectories_measurementHits_;
   Int_t           _CentralCKFSeededTrajectories_measurementHits_index[kMax_CentralCKFSeededTrajectories_measurementHits];   //[_CentralCKFSeededTrajectories_measurementHits_]
   UInt_t          _CentralCKFSeededTrajectories_measurementHits_collectionID[kMax_CentralCKFSeededTrajectories_measurementHits];   //[_CentralCKFSeededTrajectories_measurementHits_]
   Int_t           _CentralCKFSeededTrajectories_outlierHits_;
   Int_t           _CentralCKFSeededTrajectories_outlierHits_index[kMax_CentralCKFSeededTrajectories_outlierHits];   //[_CentralCKFSeededTrajectories_outlierHits_]
   UInt_t          _CentralCKFSeededTrajectories_outlierHits_collectionID[kMax_CentralCKFSeededTrajectories_outlierHits];   //[_CentralCKFSeededTrajectories_outlierHits_]
   vector<float>   *_CentralCKFSeededTrajectories_measurementChi2;
   vector<float>   *_CentralCKFSeededTrajectories_outlierChi2;
   Int_t           CentralCKFTrackParameters_;
   Int_t           CentralCKFTrackParameters_type[kMaxCentralCKFTrackParameters];   //[CentralCKFTrackParameters_]
   Float_t         CentralCKFTrackParameters_loc_a[kMaxCentralCKFTrackParameters];   //[CentralCKFTrackParameters_]
   Float_t         CentralCKFTrackParameters_loc_b[kMaxCentralCKFTrackParameters];   //[CentralCKFTrackParameters_]
   Float_t         CentralCKFTrackParameters_locError_xx[kMaxCentralCKFTrackParameters];   //[CentralCKFTrackParameters_]
   Float_t         CentralCKFTrackParameters_locError_yy[kMaxCentralCKFTrackParameters];   //[CentralCKFTrackParameters_]
   Float_t         CentralCKFTrackParameters_locError_xy[kMaxCentralCKFTrackParameters];   //[CentralCKFTrackParameters_]
   Float_t         CentralCKFTrackParameters_theta[kMaxCentralCKFTrackParameters];   //[CentralCKFTrackParameters_]
   Float_t         CentralCKFTrackParameters_phi[kMaxCentralCKFTrackParameters];   //[CentralCKFTrackParameters_]
   Float_t         CentralCKFTrackParameters_qOverP[kMaxCentralCKFTrackParameters];   //[CentralCKFTrackParameters_]
   Float_t         CentralCKFTrackParameters_momentumError_xx[kMaxCentralCKFTrackParameters];   //[CentralCKFTrackParameters_]
   Float_t         CentralCKFTrackParameters_momentumError_yy[kMaxCentralCKFTrackParameters];   //[CentralCKFTrackParameters_]
   Float_t         CentralCKFTrackParameters_momentumError_zz[kMaxCentralCKFTrackParameters];   //[CentralCKFTrackParameters_]
   Float_t         CentralCKFTrackParameters_momentumError_xy[kMaxCentralCKFTrackParameters];   //[CentralCKFTrackParameters_]
   Float_t         CentralCKFTrackParameters_momentumError_xz[kMaxCentralCKFTrackParameters];   //[CentralCKFTrackParameters_]
   Float_t         CentralCKFTrackParameters_momentumError_yz[kMaxCentralCKFTrackParameters];   //[CentralCKFTrackParameters_]
   Float_t         CentralCKFTrackParameters_time[kMaxCentralCKFTrackParameters];   //[CentralCKFTrackParameters_]
   Float_t         CentralCKFTrackParameters_timeError[kMaxCentralCKFTrackParameters];   //[CentralCKFTrackParameters_]
   Float_t         CentralCKFTrackParameters_charge[kMaxCentralCKFTrackParameters];   //[CentralCKFTrackParameters_]
   Int_t           _CentralCKFTrackParameters_trajectory_;
   Int_t           _CentralCKFTrackParameters_trajectory_index[kMax_CentralCKFTrackParameters_trajectory];   //[_CentralCKFTrackParameters_trajectory_]
   UInt_t          _CentralCKFTrackParameters_trajectory_collectionID[kMax_CentralCKFTrackParameters_trajectory];   //[_CentralCKFTrackParameters_trajectory_]
   Int_t           CentralCKFTrajectories_;
   UInt_t          CentralCKFTrajectories_type[kMaxCentralCKFTrajectories];   //[CentralCKFTrajectories_]
   UInt_t          CentralCKFTrajectories_nStates[kMaxCentralCKFTrajectories];   //[CentralCKFTrajectories_]
   UInt_t          CentralCKFTrajectories_nMeasurements[kMaxCentralCKFTrajectories];   //[CentralCKFTrajectories_]
   UInt_t          CentralCKFTrajectories_nOutliers[kMaxCentralCKFTrajectories];   //[CentralCKFTrajectories_]
   UInt_t          CentralCKFTrajectories_nHoles[kMaxCentralCKFTrajectories];   //[CentralCKFTrajectories_]
   Float_t         CentralCKFTrajectories_chi2[kMaxCentralCKFTrajectories];   //[CentralCKFTrajectories_]
   UInt_t          CentralCKFTrajectories_ndf[kMaxCentralCKFTrajectories];   //[CentralCKFTrajectories_]
   UInt_t          CentralCKFTrajectories_nSharedHits[kMaxCentralCKFTrajectories];   //[CentralCKFTrajectories_]
   UInt_t          CentralCKFTrajectories_measurementChi2_begin[kMaxCentralCKFTrajectories];   //[CentralCKFTrajectories_]
   UInt_t          CentralCKFTrajectories_measurementChi2_end[kMaxCentralCKFTrajectories];   //[CentralCKFTrajectories_]
   UInt_t          CentralCKFTrajectories_outlierChi2_begin[kMaxCentralCKFTrajectories];   //[CentralCKFTrajectories_]
   UInt_t          CentralCKFTrajectories_outlierChi2_end[kMaxCentralCKFTrajectories];   //[CentralCKFTrajectories_]
   UInt_t          CentralCKFTrajectories_trackParameters_begin[kMaxCentralCKFTrajectories];   //[CentralCKFTrajectories_]
   UInt_t          CentralCKFTrajectories_trackParameters_end[kMaxCentralCKFTrajectories];   //[CentralCKFTrajectories_]
   UInt_t          CentralCKFTrajectories_measurementHits_begin[kMaxCentralCKFTrajectories];   //[CentralCKFTrajectories_]
   UInt_t          CentralCKFTrajectories_measurementHits_end[kMaxCentralCKFTrajectories];   //[CentralCKFTrajectories_]
   UInt_t          CentralCKFTrajectories_outlierHits_begin[kMaxCentralCKFTrajectories];   //[CentralCKFTrajectories_]
   UInt_t          CentralCKFTrajectories_outlierHits_end[kMaxCentralCKFTrajectories];   //[CentralCKFTrajectories_]
   Int_t           _CentralCKFTrajectories_trackParameters_;
   Int_t           _CentralCKFTrajectories_trackParameters_index[kMax_CentralCKFTrajectories_trackParameters];   //[_CentralCKFTrajectories_trackParameters_]
   UInt_t          _CentralCKFTrajectories_trackParameters_collectionID[kMax_CentralCKFTrajectories_trackParameters];   //[_CentralCKFTrajectories_trackParameters_]
   Int_t           _CentralCKFTrajectories_measurementHits_;
   Int_t           _CentralCKFTrajectories_measurementHits_index[kMax_CentralCKFTrajectories_measurementHits];   //[_CentralCKFTrajectories_measurementHits_]
   UInt_t          _CentralCKFTrajectories_measurementHits_collectionID[kMax_CentralCKFTrajectories_measurementHits];   //[_CentralCKFTrajectories_measurementHits_]
   Int_t           _CentralCKFTrajectories_outlierHits_;
   Int_t           _CentralCKFTrajectories_outlierHits_index[kMax_CentralCKFTrajectories_outlierHits];   //[_CentralCKFTrajectories_outlierHits_]
   UInt_t          _CentralCKFTrajectories_outlierHits_collectionID[kMax_CentralCKFTrajectories_outlierHits];   //[_CentralCKFTrajectories_outlierHits_]
   vector<float>   *_CentralCKFTrajectories_measurementChi2;
   vector<float>   *_CentralCKFTrajectories_outlierChi2;
   Int_t           CentralTrackerMeasurements_;
   ULong_t         CentralTrackerMeasurements_surface[kMaxCentralTrackerMeasurements];   //[CentralTrackerMeasurements_]
   Float_t         CentralTrackerMeasurements_loc_a[kMaxCentralTrackerMeasurements];   //[CentralTrackerMeasurements_]
   Float_t         CentralTrackerMeasurements_loc_b[kMaxCentralTrackerMeasurements];   //[CentralTrackerMeasurements_]
   Float_t         CentralTrackerMeasurements_time[kMaxCentralTrackerMeasurements];   //[CentralTrackerMeasurements_]
   Float_t         CentralTrackerMeasurements_covariance_xx[kMaxCentralTrackerMeasurements];   //[CentralTrackerMeasurements_]
   Float_t         CentralTrackerMeasurements_covariance_yy[kMaxCentralTrackerMeasurements];   //[CentralTrackerMeasurements_]
   Float_t         CentralTrackerMeasurements_covariance_zz[kMaxCentralTrackerMeasurements];   //[CentralTrackerMeasurements_]
   Float_t         CentralTrackerMeasurements_covariance_xy[kMaxCentralTrackerMeasurements];   //[CentralTrackerMeasurements_]
   Float_t         CentralTrackerMeasurements_covariance_xz[kMaxCentralTrackerMeasurements];   //[CentralTrackerMeasurements_]
   Float_t         CentralTrackerMeasurements_covariance_yz[kMaxCentralTrackerMeasurements];   //[CentralTrackerMeasurements_]
   UInt_t          CentralTrackerMeasurements_weights_begin[kMaxCentralTrackerMeasurements];   //[CentralTrackerMeasurements_]
   UInt_t          CentralTrackerMeasurements_weights_end[kMaxCentralTrackerMeasurements];   //[CentralTrackerMeasurements_]
   UInt_t          CentralTrackerMeasurements_hits_begin[kMaxCentralTrackerMeasurements];   //[CentralTrackerMeasurements_]
   UInt_t          CentralTrackerMeasurements_hits_end[kMaxCentralTrackerMeasurements];   //[CentralTrackerMeasurements_]
   Int_t           _CentralTrackerMeasurements_hits_;
   Int_t           _CentralTrackerMeasurements_hits_index[kMax_CentralTrackerMeasurements_hits];   //[_CentralTrackerMeasurements_hits_]
   UInt_t          _CentralTrackerMeasurements_hits_collectionID[kMax_CentralTrackerMeasurements_hits];   //[_CentralTrackerMeasurements_hits_]
   vector<float>   *_CentralTrackerMeasurements_weights;
   Int_t           CentralTrackingRecHits_objIdx_;
   Int_t           CentralTrackingRecHits_objIdx_index[kMaxCentralTrackingRecHits_objIdx];   //[CentralTrackingRecHits_objIdx_]
   UInt_t          CentralTrackingRecHits_objIdx_collectionID[kMaxCentralTrackingRecHits_objIdx];   //[CentralTrackingRecHits_objIdx_]
   Int_t           CentralTrackSeedingResults_;
   Int_t           CentralTrackSeedingResults_type[kMaxCentralTrackSeedingResults];   //[CentralTrackSeedingResults_]
   Float_t         CentralTrackSeedingResults_loc_a[kMaxCentralTrackSeedingResults];   //[CentralTrackSeedingResults_]
   Float_t         CentralTrackSeedingResults_loc_b[kMaxCentralTrackSeedingResults];   //[CentralTrackSeedingResults_]
   Float_t         CentralTrackSeedingResults_locError_xx[kMaxCentralTrackSeedingResults];   //[CentralTrackSeedingResults_]
   Float_t         CentralTrackSeedingResults_locError_yy[kMaxCentralTrackSeedingResults];   //[CentralTrackSeedingResults_]
   Float_t         CentralTrackSeedingResults_locError_xy[kMaxCentralTrackSeedingResults];   //[CentralTrackSeedingResults_]
   Float_t         CentralTrackSeedingResults_theta[kMaxCentralTrackSeedingResults];   //[CentralTrackSeedingResults_]
   Float_t         CentralTrackSeedingResults_phi[kMaxCentralTrackSeedingResults];   //[CentralTrackSeedingResults_]
   Float_t         CentralTrackSeedingResults_qOverP[kMaxCentralTrackSeedingResults];   //[CentralTrackSeedingResults_]
   Float_t         CentralTrackSeedingResults_momentumError_xx[kMaxCentralTrackSeedingResults];   //[CentralTrackSeedingResults_]
   Float_t         CentralTrackSeedingResults_momentumError_yy[kMaxCentralTrackSeedingResults];   //[CentralTrackSeedingResults_]
   Float_t         CentralTrackSeedingResults_momentumError_zz[kMaxCentralTrackSeedingResults];   //[CentralTrackSeedingResults_]
   Float_t         CentralTrackSeedingResults_momentumError_xy[kMaxCentralTrackSeedingResults];   //[CentralTrackSeedingResults_]
   Float_t         CentralTrackSeedingResults_momentumError_xz[kMaxCentralTrackSeedingResults];   //[CentralTrackSeedingResults_]
   Float_t         CentralTrackSeedingResults_momentumError_yz[kMaxCentralTrackSeedingResults];   //[CentralTrackSeedingResults_]
   Float_t         CentralTrackSeedingResults_time[kMaxCentralTrackSeedingResults];   //[CentralTrackSeedingResults_]
   Float_t         CentralTrackSeedingResults_timeError[kMaxCentralTrackSeedingResults];   //[CentralTrackSeedingResults_]
   Float_t         CentralTrackSeedingResults_charge[kMaxCentralTrackSeedingResults];   //[CentralTrackSeedingResults_]
   Int_t           _CentralTrackSeedingResults_trajectory_;
   Int_t           _CentralTrackSeedingResults_trajectory_index[kMax_CentralTrackSeedingResults_trajectory];   //[_CentralTrackSeedingResults_trajectory_]
   UInt_t          _CentralTrackSeedingResults_trajectory_collectionID[kMax_CentralTrackSeedingResults_trajectory];   //[_CentralTrackSeedingResults_trajectory_]
   Int_t           CentralTrackSegments_;
   Float_t         CentralTrackSegments_length[kMaxCentralTrackSegments];   //[CentralTrackSegments_]
   Float_t         CentralTrackSegments_lengthError[kMaxCentralTrackSegments];   //[CentralTrackSegments_]
   UInt_t          CentralTrackSegments_points_begin[kMaxCentralTrackSegments];   //[CentralTrackSegments_]
   UInt_t          CentralTrackSegments_points_end[kMaxCentralTrackSegments];   //[CentralTrackSegments_]
   Int_t           _CentralTrackSegments_track_;
   Int_t           _CentralTrackSegments_track_index[kMax_CentralTrackSegments_track];   //[_CentralTrackSegments_track_]
   UInt_t          _CentralTrackSegments_track_collectionID[kMax_CentralTrackSegments_track];   //[_CentralTrackSegments_track_]
   Int_t           _CentralTrackSegments_points_;
   ULong_t         _CentralTrackSegments_points_surface[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   UInt_t          _CentralTrackSegments_points_system[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_position_x[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_position_y[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_position_z[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_positionError_xx[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_positionError_yy[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_positionError_zz[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_positionError_xy[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_positionError_xz[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_positionError_yz[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_momentum_x[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_momentum_y[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_momentum_z[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_momentumError_xx[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_momentumError_yy[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_momentumError_zz[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_momentumError_xy[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_momentumError_xz[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_momentumError_yz[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_time[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_timeError[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_theta[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_phi[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_directionError_xx[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_directionError_yy[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_directionError_xy[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_pathlength[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Float_t         _CentralTrackSegments_points_pathlengthError[kMax_CentralTrackSegments_points];   //[_CentralTrackSegments_points_]
   Int_t           CentralTrackVertices_;
   Int_t           CentralTrackVertices_primary[kMaxCentralTrackVertices];   //[CentralTrackVertices_]
   Float_t         CentralTrackVertices_chi2[kMaxCentralTrackVertices];   //[CentralTrackVertices_]
   Float_t         CentralTrackVertices_probability[kMaxCentralTrackVertices];   //[CentralTrackVertices_]
   Float_t         CentralTrackVertices_position_x[kMaxCentralTrackVertices];   //[CentralTrackVertices_]
   Float_t         CentralTrackVertices_position_y[kMaxCentralTrackVertices];   //[CentralTrackVertices_]
   Float_t         CentralTrackVertices_position_z[kMaxCentralTrackVertices];   //[CentralTrackVertices_]
   Float_t         CentralTrackVertices_positionError_xx[kMaxCentralTrackVertices];   //[CentralTrackVertices_]
   Float_t         CentralTrackVertices_positionError_yy[kMaxCentralTrackVertices];   //[CentralTrackVertices_]
   Float_t         CentralTrackVertices_positionError_zz[kMaxCentralTrackVertices];   //[CentralTrackVertices_]
   Float_t         CentralTrackVertices_positionError_xy[kMaxCentralTrackVertices];   //[CentralTrackVertices_]
   Float_t         CentralTrackVertices_positionError_xz[kMaxCentralTrackVertices];   //[CentralTrackVertices_]
   Float_t         CentralTrackVertices_positionError_yz[kMaxCentralTrackVertices];   //[CentralTrackVertices_]
   Int_t           CentralTrackVertices_algorithmType[kMaxCentralTrackVertices];   //[CentralTrackVertices_]
   Float_t         CentralTrackVertices_time[kMaxCentralTrackVertices];   //[CentralTrackVertices_]
   UInt_t          CentralTrackVertices_parameters_begin[kMaxCentralTrackVertices];   //[CentralTrackVertices_]
   UInt_t          CentralTrackVertices_parameters_end[kMaxCentralTrackVertices];   //[CentralTrackVertices_]
   Int_t           _CentralTrackVertices_associatedParticle_;
   Int_t           _CentralTrackVertices_associatedParticle_index[kMax_CentralTrackVertices_associatedParticle];   //[_CentralTrackVertices_associatedParticle_]
   UInt_t          _CentralTrackVertices_associatedParticle_collectionID[kMax_CentralTrackVertices_associatedParticle];   //[_CentralTrackVertices_associatedParticle_]
   vector<float>   *_CentralTrackVertices_parameters;
   Int_t           DIRCRawHits_;
   ULong_t         DIRCRawHits_cellID[kMaxDIRCRawHits];   //[DIRCRawHits_]
   Int_t           DIRCRawHits_charge[kMaxDIRCRawHits];   //[DIRCRawHits_]
   Int_t           DIRCRawHits_timeStamp[kMaxDIRCRawHits];   //[DIRCRawHits_]
   Int_t           DRICHAerogelIrtCherenkovParticleID_;
   Float_t         DRICHAerogelIrtCherenkovParticleID_npe[kMaxDRICHAerogelIrtCherenkovParticleID];   //[DRICHAerogelIrtCherenkovParticleID_]
   Float_t         DRICHAerogelIrtCherenkovParticleID_refractiveIndex[kMaxDRICHAerogelIrtCherenkovParticleID];   //[DRICHAerogelIrtCherenkovParticleID_]
   Float_t         DRICHAerogelIrtCherenkovParticleID_photonEnergy[kMaxDRICHAerogelIrtCherenkovParticleID];   //[DRICHAerogelIrtCherenkovParticleID_]
   UInt_t          DRICHAerogelIrtCherenkovParticleID_hypotheses_begin[kMaxDRICHAerogelIrtCherenkovParticleID];   //[DRICHAerogelIrtCherenkovParticleID_]
   UInt_t          DRICHAerogelIrtCherenkovParticleID_hypotheses_end[kMaxDRICHAerogelIrtCherenkovParticleID];   //[DRICHAerogelIrtCherenkovParticleID_]
   UInt_t          DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_begin[kMaxDRICHAerogelIrtCherenkovParticleID];   //[DRICHAerogelIrtCherenkovParticleID_]
   UInt_t          DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_end[kMaxDRICHAerogelIrtCherenkovParticleID];   //[DRICHAerogelIrtCherenkovParticleID_]
   UInt_t          DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_begin[kMaxDRICHAerogelIrtCherenkovParticleID];   //[DRICHAerogelIrtCherenkovParticleID_]
   UInt_t          DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_end[kMaxDRICHAerogelIrtCherenkovParticleID];   //[DRICHAerogelIrtCherenkovParticleID_]
   Int_t           _DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_;
   Int_t           _DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_index[kMax_DRICHAerogelIrtCherenkovParticleID_rawHitAssociations];   //[_DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_]
   UInt_t          _DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_collectionID[kMax_DRICHAerogelIrtCherenkovParticleID_rawHitAssociations];   //[_DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_]
   Int_t           _DRICHAerogelIrtCherenkovParticleID_chargedParticle_;
   Int_t           _DRICHAerogelIrtCherenkovParticleID_chargedParticle_index[kMax_DRICHAerogelIrtCherenkovParticleID_chargedParticle];   //[_DRICHAerogelIrtCherenkovParticleID_chargedParticle_]
   UInt_t          _DRICHAerogelIrtCherenkovParticleID_chargedParticle_collectionID[kMax_DRICHAerogelIrtCherenkovParticleID_chargedParticle];   //[_DRICHAerogelIrtCherenkovParticleID_chargedParticle_]
   Int_t           _DRICHAerogelIrtCherenkovParticleID_hypotheses_;
   Int_t           _DRICHAerogelIrtCherenkovParticleID_hypotheses_PDG[kMax_DRICHAerogelIrtCherenkovParticleID_hypotheses];   //[_DRICHAerogelIrtCherenkovParticleID_hypotheses_]
   Float_t         _DRICHAerogelIrtCherenkovParticleID_hypotheses_npe[kMax_DRICHAerogelIrtCherenkovParticleID_hypotheses];   //[_DRICHAerogelIrtCherenkovParticleID_hypotheses_]
   Float_t         _DRICHAerogelIrtCherenkovParticleID_hypotheses_weight[kMax_DRICHAerogelIrtCherenkovParticleID_hypotheses];   //[_DRICHAerogelIrtCherenkovParticleID_hypotheses_]
   Int_t           _DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_;
   Float_t         _DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_a[kMax_DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons];   //[_DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_]
   Float_t         _DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_b[kMax_DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons];   //[_DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_]
   Int_t           DRICHAerogelTracks_;
   Float_t         DRICHAerogelTracks_length[kMaxDRICHAerogelTracks];   //[DRICHAerogelTracks_]
   Float_t         DRICHAerogelTracks_lengthError[kMaxDRICHAerogelTracks];   //[DRICHAerogelTracks_]
   UInt_t          DRICHAerogelTracks_points_begin[kMaxDRICHAerogelTracks];   //[DRICHAerogelTracks_]
   UInt_t          DRICHAerogelTracks_points_end[kMaxDRICHAerogelTracks];   //[DRICHAerogelTracks_]
   Int_t           _DRICHAerogelTracks_track_;
   Int_t           _DRICHAerogelTracks_track_index[kMax_DRICHAerogelTracks_track];   //[_DRICHAerogelTracks_track_]
   UInt_t          _DRICHAerogelTracks_track_collectionID[kMax_DRICHAerogelTracks_track];   //[_DRICHAerogelTracks_track_]
   Int_t           _DRICHAerogelTracks_points_;
   ULong_t         _DRICHAerogelTracks_points_surface[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   UInt_t          _DRICHAerogelTracks_points_system[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_position_x[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_position_y[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_position_z[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_positionError_xx[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_positionError_yy[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_positionError_zz[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_positionError_xy[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_positionError_xz[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_positionError_yz[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_momentum_x[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_momentum_y[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_momentum_z[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_momentumError_xx[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_momentumError_yy[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_momentumError_zz[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_momentumError_xy[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_momentumError_xz[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_momentumError_yz[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_time[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_timeError[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_theta[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_phi[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_directionError_xx[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_directionError_yy[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_directionError_xy[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_pathlength[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Float_t         _DRICHAerogelTracks_points_pathlengthError[kMax_DRICHAerogelTracks_points];   //[_DRICHAerogelTracks_points_]
   Int_t           DRICHGasIrtCherenkovParticleID_;
   Float_t         DRICHGasIrtCherenkovParticleID_npe[kMaxDRICHGasIrtCherenkovParticleID];   //[DRICHGasIrtCherenkovParticleID_]
   Float_t         DRICHGasIrtCherenkovParticleID_refractiveIndex[kMaxDRICHGasIrtCherenkovParticleID];   //[DRICHGasIrtCherenkovParticleID_]
   Float_t         DRICHGasIrtCherenkovParticleID_photonEnergy[kMaxDRICHGasIrtCherenkovParticleID];   //[DRICHGasIrtCherenkovParticleID_]
   UInt_t          DRICHGasIrtCherenkovParticleID_hypotheses_begin[kMaxDRICHGasIrtCherenkovParticleID];   //[DRICHGasIrtCherenkovParticleID_]
   UInt_t          DRICHGasIrtCherenkovParticleID_hypotheses_end[kMaxDRICHGasIrtCherenkovParticleID];   //[DRICHGasIrtCherenkovParticleID_]
   UInt_t          DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_begin[kMaxDRICHGasIrtCherenkovParticleID];   //[DRICHGasIrtCherenkovParticleID_]
   UInt_t          DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_end[kMaxDRICHGasIrtCherenkovParticleID];   //[DRICHGasIrtCherenkovParticleID_]
   UInt_t          DRICHGasIrtCherenkovParticleID_rawHitAssociations_begin[kMaxDRICHGasIrtCherenkovParticleID];   //[DRICHGasIrtCherenkovParticleID_]
   UInt_t          DRICHGasIrtCherenkovParticleID_rawHitAssociations_end[kMaxDRICHGasIrtCherenkovParticleID];   //[DRICHGasIrtCherenkovParticleID_]
   Int_t           _DRICHGasIrtCherenkovParticleID_rawHitAssociations_;
   Int_t           _DRICHGasIrtCherenkovParticleID_rawHitAssociations_index[kMax_DRICHGasIrtCherenkovParticleID_rawHitAssociations];   //[_DRICHGasIrtCherenkovParticleID_rawHitAssociations_]
   UInt_t          _DRICHGasIrtCherenkovParticleID_rawHitAssociations_collectionID[kMax_DRICHGasIrtCherenkovParticleID_rawHitAssociations];   //[_DRICHGasIrtCherenkovParticleID_rawHitAssociations_]
   Int_t           _DRICHGasIrtCherenkovParticleID_chargedParticle_;
   Int_t           _DRICHGasIrtCherenkovParticleID_chargedParticle_index[kMax_DRICHGasIrtCherenkovParticleID_chargedParticle];   //[_DRICHGasIrtCherenkovParticleID_chargedParticle_]
   UInt_t          _DRICHGasIrtCherenkovParticleID_chargedParticle_collectionID[kMax_DRICHGasIrtCherenkovParticleID_chargedParticle];   //[_DRICHGasIrtCherenkovParticleID_chargedParticle_]
   Int_t           _DRICHGasIrtCherenkovParticleID_hypotheses_;
   Int_t           _DRICHGasIrtCherenkovParticleID_hypotheses_PDG[kMax_DRICHGasIrtCherenkovParticleID_hypotheses];   //[_DRICHGasIrtCherenkovParticleID_hypotheses_]
   Float_t         _DRICHGasIrtCherenkovParticleID_hypotheses_npe[kMax_DRICHGasIrtCherenkovParticleID_hypotheses];   //[_DRICHGasIrtCherenkovParticleID_hypotheses_]
   Float_t         _DRICHGasIrtCherenkovParticleID_hypotheses_weight[kMax_DRICHGasIrtCherenkovParticleID_hypotheses];   //[_DRICHGasIrtCherenkovParticleID_hypotheses_]
   Int_t           _DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_;
   Float_t         _DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_a[kMax_DRICHGasIrtCherenkovParticleID_thetaPhiPhotons];   //[_DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_]
   Float_t         _DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_b[kMax_DRICHGasIrtCherenkovParticleID_thetaPhiPhotons];   //[_DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_]
   Int_t           DRICHGasTracks_;
   Float_t         DRICHGasTracks_length[kMaxDRICHGasTracks];   //[DRICHGasTracks_]
   Float_t         DRICHGasTracks_lengthError[kMaxDRICHGasTracks];   //[DRICHGasTracks_]
   UInt_t          DRICHGasTracks_points_begin[kMaxDRICHGasTracks];   //[DRICHGasTracks_]
   UInt_t          DRICHGasTracks_points_end[kMaxDRICHGasTracks];   //[DRICHGasTracks_]
   Int_t           _DRICHGasTracks_track_;
   Int_t           _DRICHGasTracks_track_index[kMax_DRICHGasTracks_track];   //[_DRICHGasTracks_track_]
   UInt_t          _DRICHGasTracks_track_collectionID[kMax_DRICHGasTracks_track];   //[_DRICHGasTracks_track_]
   Int_t           _DRICHGasTracks_points_;
   ULong_t         _DRICHGasTracks_points_surface[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   UInt_t          _DRICHGasTracks_points_system[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_position_x[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_position_y[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_position_z[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_positionError_xx[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_positionError_yy[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_positionError_zz[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_positionError_xy[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_positionError_xz[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_positionError_yz[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_momentum_x[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_momentum_y[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_momentum_z[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_momentumError_xx[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_momentumError_yy[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_momentumError_zz[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_momentumError_xy[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_momentumError_xz[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_momentumError_yz[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_time[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_timeError[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_theta[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_phi[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_directionError_xx[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_directionError_yy[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_directionError_xy[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_pathlength[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Float_t         _DRICHGasTracks_points_pathlengthError[kMax_DRICHGasTracks_points];   //[_DRICHGasTracks_points_]
   Int_t           DRICHRawHits_;
   ULong_t         DRICHRawHits_cellID[kMaxDRICHRawHits];   //[DRICHRawHits_]
   Int_t           DRICHRawHits_charge[kMaxDRICHRawHits];   //[DRICHRawHits_]
   Int_t           DRICHRawHits_timeStamp[kMaxDRICHRawHits];   //[DRICHRawHits_]
   Int_t           DRICHRawHitsAssociations_;
   Float_t         DRICHRawHitsAssociations_weight[kMaxDRICHRawHitsAssociations];   //[DRICHRawHitsAssociations_]
   UInt_t          DRICHRawHitsAssociations_simHits_begin[kMaxDRICHRawHitsAssociations];   //[DRICHRawHitsAssociations_]
   UInt_t          DRICHRawHitsAssociations_simHits_end[kMaxDRICHRawHitsAssociations];   //[DRICHRawHitsAssociations_]
   Int_t           _DRICHRawHitsAssociations_simHits_;
   Int_t           _DRICHRawHitsAssociations_simHits_index[kMax_DRICHRawHitsAssociations_simHits];   //[_DRICHRawHitsAssociations_simHits_]
   UInt_t          _DRICHRawHitsAssociations_simHits_collectionID[kMax_DRICHRawHitsAssociations_simHits];   //[_DRICHRawHitsAssociations_simHits_]
   Int_t           _DRICHRawHitsAssociations_rawHit_;
   Int_t           _DRICHRawHitsAssociations_rawHit_index[kMax_DRICHRawHitsAssociations_rawHit];   //[_DRICHRawHitsAssociations_rawHit_]
   UInt_t          _DRICHRawHitsAssociations_rawHit_collectionID[kMax_DRICHRawHitsAssociations_rawHit];   //[_DRICHRawHitsAssociations_rawHit_]
   Int_t           EcalBarrelClusterAssociations_;
   UInt_t          EcalBarrelClusterAssociations_simID[kMaxEcalBarrelClusterAssociations];   //[EcalBarrelClusterAssociations_]
   UInt_t          EcalBarrelClusterAssociations_recID[kMaxEcalBarrelClusterAssociations];   //[EcalBarrelClusterAssociations_]
   Float_t         EcalBarrelClusterAssociations_weight[kMaxEcalBarrelClusterAssociations];   //[EcalBarrelClusterAssociations_]
   Int_t           _EcalBarrelClusterAssociations_rec_;
   Int_t           _EcalBarrelClusterAssociations_rec_index[kMax_EcalBarrelClusterAssociations_rec];   //[_EcalBarrelClusterAssociations_rec_]
   UInt_t          _EcalBarrelClusterAssociations_rec_collectionID[kMax_EcalBarrelClusterAssociations_rec];   //[_EcalBarrelClusterAssociations_rec_]
   Int_t           _EcalBarrelClusterAssociations_sim_;
   Int_t           _EcalBarrelClusterAssociations_sim_index[kMax_EcalBarrelClusterAssociations_sim];   //[_EcalBarrelClusterAssociations_sim_]
   UInt_t          _EcalBarrelClusterAssociations_sim_collectionID[kMax_EcalBarrelClusterAssociations_sim];   //[_EcalBarrelClusterAssociations_sim_]
   Int_t           EcalBarrelClusters_;
   Int_t           EcalBarrelClusters_type[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Float_t         EcalBarrelClusters_energy[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Float_t         EcalBarrelClusters_energyError[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Float_t         EcalBarrelClusters_time[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Float_t         EcalBarrelClusters_timeError[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   UInt_t          EcalBarrelClusters_nhits[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Float_t         EcalBarrelClusters_position_x[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Float_t         EcalBarrelClusters_position_y[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Float_t         EcalBarrelClusters_position_z[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Float_t         EcalBarrelClusters_positionError_xx[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Float_t         EcalBarrelClusters_positionError_yy[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Float_t         EcalBarrelClusters_positionError_zz[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Float_t         EcalBarrelClusters_positionError_xy[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Float_t         EcalBarrelClusters_positionError_xz[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Float_t         EcalBarrelClusters_positionError_yz[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Float_t         EcalBarrelClusters_intrinsicTheta[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Float_t         EcalBarrelClusters_intrinsicPhi[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Float_t         EcalBarrelClusters_intrinsicDirectionError_xx[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Float_t         EcalBarrelClusters_intrinsicDirectionError_yy[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Float_t         EcalBarrelClusters_intrinsicDirectionError_xy[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   UInt_t          EcalBarrelClusters_shapeParameters_begin[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   UInt_t          EcalBarrelClusters_shapeParameters_end[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   UInt_t          EcalBarrelClusters_hitContributions_begin[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   UInt_t          EcalBarrelClusters_hitContributions_end[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   UInt_t          EcalBarrelClusters_subdetectorEnergies_begin[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   UInt_t          EcalBarrelClusters_subdetectorEnergies_end[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   UInt_t          EcalBarrelClusters_clusters_begin[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   UInt_t          EcalBarrelClusters_clusters_end[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   UInt_t          EcalBarrelClusters_hits_begin[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   UInt_t          EcalBarrelClusters_hits_end[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   UInt_t          EcalBarrelClusters_particleIDs_begin[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   UInt_t          EcalBarrelClusters_particleIDs_end[kMaxEcalBarrelClusters];   //[EcalBarrelClusters_]
   Int_t           _EcalBarrelClusters_clusters_;
   Int_t           _EcalBarrelClusters_clusters_index[kMax_EcalBarrelClusters_clusters];   //[_EcalBarrelClusters_clusters_]
   UInt_t          _EcalBarrelClusters_clusters_collectionID[kMax_EcalBarrelClusters_clusters];   //[_EcalBarrelClusters_clusters_]
   Int_t           _EcalBarrelClusters_hits_;
   Int_t           _EcalBarrelClusters_hits_index[kMax_EcalBarrelClusters_hits];   //[_EcalBarrelClusters_hits_]
   UInt_t          _EcalBarrelClusters_hits_collectionID[kMax_EcalBarrelClusters_hits];   //[_EcalBarrelClusters_hits_]
   Int_t           _EcalBarrelClusters_particleIDs_;
   Int_t           _EcalBarrelClusters_particleIDs_index[kMax_EcalBarrelClusters_particleIDs];   //[_EcalBarrelClusters_particleIDs_]
   UInt_t          _EcalBarrelClusters_particleIDs_collectionID[kMax_EcalBarrelClusters_particleIDs];   //[_EcalBarrelClusters_particleIDs_]
   vector<float>   *_EcalBarrelClusters_shapeParameters;
   vector<float>   *_EcalBarrelClusters_hitContributions;
   vector<float>   *_EcalBarrelClusters_subdetectorEnergies;
   Int_t           EcalBarrelImagingClusterAssociations_;
   UInt_t          EcalBarrelImagingClusterAssociations_simID[kMaxEcalBarrelImagingClusterAssociations];   //[EcalBarrelImagingClusterAssociations_]
   UInt_t          EcalBarrelImagingClusterAssociations_recID[kMaxEcalBarrelImagingClusterAssociations];   //[EcalBarrelImagingClusterAssociations_]
   Float_t         EcalBarrelImagingClusterAssociations_weight[kMaxEcalBarrelImagingClusterAssociations];   //[EcalBarrelImagingClusterAssociations_]
   Int_t           _EcalBarrelImagingClusterAssociations_rec_;
   Int_t           _EcalBarrelImagingClusterAssociations_rec_index[kMax_EcalBarrelImagingClusterAssociations_rec];   //[_EcalBarrelImagingClusterAssociations_rec_]
   UInt_t          _EcalBarrelImagingClusterAssociations_rec_collectionID[kMax_EcalBarrelImagingClusterAssociations_rec];   //[_EcalBarrelImagingClusterAssociations_rec_]
   Int_t           _EcalBarrelImagingClusterAssociations_sim_;
   Int_t           _EcalBarrelImagingClusterAssociations_sim_index[kMax_EcalBarrelImagingClusterAssociations_sim];   //[_EcalBarrelImagingClusterAssociations_sim_]
   UInt_t          _EcalBarrelImagingClusterAssociations_sim_collectionID[kMax_EcalBarrelImagingClusterAssociations_sim];   //[_EcalBarrelImagingClusterAssociations_sim_]
   Int_t           EcalBarrelImagingClusters_;
   Int_t           EcalBarrelImagingClusters_type[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Float_t         EcalBarrelImagingClusters_energy[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Float_t         EcalBarrelImagingClusters_energyError[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Float_t         EcalBarrelImagingClusters_time[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Float_t         EcalBarrelImagingClusters_timeError[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   UInt_t          EcalBarrelImagingClusters_nhits[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Float_t         EcalBarrelImagingClusters_position_x[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Float_t         EcalBarrelImagingClusters_position_y[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Float_t         EcalBarrelImagingClusters_position_z[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Float_t         EcalBarrelImagingClusters_positionError_xx[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Float_t         EcalBarrelImagingClusters_positionError_yy[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Float_t         EcalBarrelImagingClusters_positionError_zz[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Float_t         EcalBarrelImagingClusters_positionError_xy[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Float_t         EcalBarrelImagingClusters_positionError_xz[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Float_t         EcalBarrelImagingClusters_positionError_yz[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Float_t         EcalBarrelImagingClusters_intrinsicTheta[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Float_t         EcalBarrelImagingClusters_intrinsicPhi[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Float_t         EcalBarrelImagingClusters_intrinsicDirectionError_xx[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Float_t         EcalBarrelImagingClusters_intrinsicDirectionError_yy[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Float_t         EcalBarrelImagingClusters_intrinsicDirectionError_xy[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   UInt_t          EcalBarrelImagingClusters_shapeParameters_begin[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   UInt_t          EcalBarrelImagingClusters_shapeParameters_end[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   UInt_t          EcalBarrelImagingClusters_hitContributions_begin[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   UInt_t          EcalBarrelImagingClusters_hitContributions_end[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   UInt_t          EcalBarrelImagingClusters_subdetectorEnergies_begin[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   UInt_t          EcalBarrelImagingClusters_subdetectorEnergies_end[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   UInt_t          EcalBarrelImagingClusters_clusters_begin[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   UInt_t          EcalBarrelImagingClusters_clusters_end[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   UInt_t          EcalBarrelImagingClusters_hits_begin[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   UInt_t          EcalBarrelImagingClusters_hits_end[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   UInt_t          EcalBarrelImagingClusters_particleIDs_begin[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   UInt_t          EcalBarrelImagingClusters_particleIDs_end[kMaxEcalBarrelImagingClusters];   //[EcalBarrelImagingClusters_]
   Int_t           _EcalBarrelImagingClusters_clusters_;
   Int_t           _EcalBarrelImagingClusters_clusters_index[kMax_EcalBarrelImagingClusters_clusters];   //[_EcalBarrelImagingClusters_clusters_]
   UInt_t          _EcalBarrelImagingClusters_clusters_collectionID[kMax_EcalBarrelImagingClusters_clusters];   //[_EcalBarrelImagingClusters_clusters_]
   Int_t           _EcalBarrelImagingClusters_hits_;
   Int_t           _EcalBarrelImagingClusters_hits_index[kMax_EcalBarrelImagingClusters_hits];   //[_EcalBarrelImagingClusters_hits_]
   UInt_t          _EcalBarrelImagingClusters_hits_collectionID[kMax_EcalBarrelImagingClusters_hits];   //[_EcalBarrelImagingClusters_hits_]
   Int_t           _EcalBarrelImagingClusters_particleIDs_;
   Int_t           _EcalBarrelImagingClusters_particleIDs_index[kMax_EcalBarrelImagingClusters_particleIDs];   //[_EcalBarrelImagingClusters_particleIDs_]
   UInt_t          _EcalBarrelImagingClusters_particleIDs_collectionID[kMax_EcalBarrelImagingClusters_particleIDs];   //[_EcalBarrelImagingClusters_particleIDs_]
   vector<float>   *_EcalBarrelImagingClusters_shapeParameters;
   vector<float>   *_EcalBarrelImagingClusters_hitContributions;
   vector<float>   *_EcalBarrelImagingClusters_subdetectorEnergies;
   Int_t           EcalBarrelImagingRawHits_;
   ULong_t         EcalBarrelImagingRawHits_cellID[kMaxEcalBarrelImagingRawHits];   //[EcalBarrelImagingRawHits_]
   Int_t           EcalBarrelImagingRawHits_amplitude[kMaxEcalBarrelImagingRawHits];   //[EcalBarrelImagingRawHits_]
   Int_t           EcalBarrelImagingRawHits_timeStamp[kMaxEcalBarrelImagingRawHits];   //[EcalBarrelImagingRawHits_]
   Int_t           EcalBarrelImagingRecHits_;
   ULong_t         EcalBarrelImagingRecHits_cellID[kMaxEcalBarrelImagingRecHits];   //[EcalBarrelImagingRecHits_]
   Float_t         EcalBarrelImagingRecHits_energy[kMaxEcalBarrelImagingRecHits];   //[EcalBarrelImagingRecHits_]
   Float_t         EcalBarrelImagingRecHits_energyError[kMaxEcalBarrelImagingRecHits];   //[EcalBarrelImagingRecHits_]
   Float_t         EcalBarrelImagingRecHits_time[kMaxEcalBarrelImagingRecHits];   //[EcalBarrelImagingRecHits_]
   Float_t         EcalBarrelImagingRecHits_timeError[kMaxEcalBarrelImagingRecHits];   //[EcalBarrelImagingRecHits_]
   Float_t         EcalBarrelImagingRecHits_position_x[kMaxEcalBarrelImagingRecHits];   //[EcalBarrelImagingRecHits_]
   Float_t         EcalBarrelImagingRecHits_position_y[kMaxEcalBarrelImagingRecHits];   //[EcalBarrelImagingRecHits_]
   Float_t         EcalBarrelImagingRecHits_position_z[kMaxEcalBarrelImagingRecHits];   //[EcalBarrelImagingRecHits_]
   Float_t         EcalBarrelImagingRecHits_dimension_x[kMaxEcalBarrelImagingRecHits];   //[EcalBarrelImagingRecHits_]
   Float_t         EcalBarrelImagingRecHits_dimension_y[kMaxEcalBarrelImagingRecHits];   //[EcalBarrelImagingRecHits_]
   Float_t         EcalBarrelImagingRecHits_dimension_z[kMaxEcalBarrelImagingRecHits];   //[EcalBarrelImagingRecHits_]
   Int_t           EcalBarrelImagingRecHits_sector[kMaxEcalBarrelImagingRecHits];   //[EcalBarrelImagingRecHits_]
   Int_t           EcalBarrelImagingRecHits_layer[kMaxEcalBarrelImagingRecHits];   //[EcalBarrelImagingRecHits_]
   Float_t         EcalBarrelImagingRecHits_local_x[kMaxEcalBarrelImagingRecHits];   //[EcalBarrelImagingRecHits_]
   Float_t         EcalBarrelImagingRecHits_local_y[kMaxEcalBarrelImagingRecHits];   //[EcalBarrelImagingRecHits_]
   Float_t         EcalBarrelImagingRecHits_local_z[kMaxEcalBarrelImagingRecHits];   //[EcalBarrelImagingRecHits_]
   Int_t           EcalBarrelScFiClusterAssociations_;
   UInt_t          EcalBarrelScFiClusterAssociations_simID[kMaxEcalBarrelScFiClusterAssociations];   //[EcalBarrelScFiClusterAssociations_]
   UInt_t          EcalBarrelScFiClusterAssociations_recID[kMaxEcalBarrelScFiClusterAssociations];   //[EcalBarrelScFiClusterAssociations_]
   Float_t         EcalBarrelScFiClusterAssociations_weight[kMaxEcalBarrelScFiClusterAssociations];   //[EcalBarrelScFiClusterAssociations_]
   Int_t           _EcalBarrelScFiClusterAssociations_rec_;
   Int_t           _EcalBarrelScFiClusterAssociations_rec_index[kMax_EcalBarrelScFiClusterAssociations_rec];   //[_EcalBarrelScFiClusterAssociations_rec_]
   UInt_t          _EcalBarrelScFiClusterAssociations_rec_collectionID[kMax_EcalBarrelScFiClusterAssociations_rec];   //[_EcalBarrelScFiClusterAssociations_rec_]
   Int_t           _EcalBarrelScFiClusterAssociations_sim_;
   Int_t           _EcalBarrelScFiClusterAssociations_sim_index[kMax_EcalBarrelScFiClusterAssociations_sim];   //[_EcalBarrelScFiClusterAssociations_sim_]
   UInt_t          _EcalBarrelScFiClusterAssociations_sim_collectionID[kMax_EcalBarrelScFiClusterAssociations_sim];   //[_EcalBarrelScFiClusterAssociations_sim_]
   Int_t           EcalBarrelScFiClusters_;
   Int_t           EcalBarrelScFiClusters_type[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Float_t         EcalBarrelScFiClusters_energy[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Float_t         EcalBarrelScFiClusters_energyError[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Float_t         EcalBarrelScFiClusters_time[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Float_t         EcalBarrelScFiClusters_timeError[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   UInt_t          EcalBarrelScFiClusters_nhits[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Float_t         EcalBarrelScFiClusters_position_x[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Float_t         EcalBarrelScFiClusters_position_y[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Float_t         EcalBarrelScFiClusters_position_z[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Float_t         EcalBarrelScFiClusters_positionError_xx[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Float_t         EcalBarrelScFiClusters_positionError_yy[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Float_t         EcalBarrelScFiClusters_positionError_zz[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Float_t         EcalBarrelScFiClusters_positionError_xy[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Float_t         EcalBarrelScFiClusters_positionError_xz[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Float_t         EcalBarrelScFiClusters_positionError_yz[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Float_t         EcalBarrelScFiClusters_intrinsicTheta[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Float_t         EcalBarrelScFiClusters_intrinsicPhi[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Float_t         EcalBarrelScFiClusters_intrinsicDirectionError_xx[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Float_t         EcalBarrelScFiClusters_intrinsicDirectionError_yy[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Float_t         EcalBarrelScFiClusters_intrinsicDirectionError_xy[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   UInt_t          EcalBarrelScFiClusters_shapeParameters_begin[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   UInt_t          EcalBarrelScFiClusters_shapeParameters_end[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   UInt_t          EcalBarrelScFiClusters_hitContributions_begin[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   UInt_t          EcalBarrelScFiClusters_hitContributions_end[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   UInt_t          EcalBarrelScFiClusters_subdetectorEnergies_begin[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   UInt_t          EcalBarrelScFiClusters_subdetectorEnergies_end[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   UInt_t          EcalBarrelScFiClusters_clusters_begin[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   UInt_t          EcalBarrelScFiClusters_clusters_end[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   UInt_t          EcalBarrelScFiClusters_hits_begin[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   UInt_t          EcalBarrelScFiClusters_hits_end[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   UInt_t          EcalBarrelScFiClusters_particleIDs_begin[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   UInt_t          EcalBarrelScFiClusters_particleIDs_end[kMaxEcalBarrelScFiClusters];   //[EcalBarrelScFiClusters_]
   Int_t           _EcalBarrelScFiClusters_clusters_;
   Int_t           _EcalBarrelScFiClusters_clusters_index[kMax_EcalBarrelScFiClusters_clusters];   //[_EcalBarrelScFiClusters_clusters_]
   UInt_t          _EcalBarrelScFiClusters_clusters_collectionID[kMax_EcalBarrelScFiClusters_clusters];   //[_EcalBarrelScFiClusters_clusters_]
   Int_t           _EcalBarrelScFiClusters_hits_;
   Int_t           _EcalBarrelScFiClusters_hits_index[kMax_EcalBarrelScFiClusters_hits];   //[_EcalBarrelScFiClusters_hits_]
   UInt_t          _EcalBarrelScFiClusters_hits_collectionID[kMax_EcalBarrelScFiClusters_hits];   //[_EcalBarrelScFiClusters_hits_]
   Int_t           _EcalBarrelScFiClusters_particleIDs_;
   Int_t           _EcalBarrelScFiClusters_particleIDs_index[kMax_EcalBarrelScFiClusters_particleIDs];   //[_EcalBarrelScFiClusters_particleIDs_]
   UInt_t          _EcalBarrelScFiClusters_particleIDs_collectionID[kMax_EcalBarrelScFiClusters_particleIDs];   //[_EcalBarrelScFiClusters_particleIDs_]
   vector<float>   *_EcalBarrelScFiClusters_shapeParameters;
   vector<float>   *_EcalBarrelScFiClusters_hitContributions;
   vector<float>   *_EcalBarrelScFiClusters_subdetectorEnergies;
   Int_t           EcalBarrelScFiRawHits_;
   ULong_t         EcalBarrelScFiRawHits_cellID[kMaxEcalBarrelScFiRawHits];   //[EcalBarrelScFiRawHits_]
   Int_t           EcalBarrelScFiRawHits_amplitude[kMaxEcalBarrelScFiRawHits];   //[EcalBarrelScFiRawHits_]
   Int_t           EcalBarrelScFiRawHits_timeStamp[kMaxEcalBarrelScFiRawHits];   //[EcalBarrelScFiRawHits_]
   Int_t           EcalBarrelScFiRecHits_;
   ULong_t         EcalBarrelScFiRecHits_cellID[kMaxEcalBarrelScFiRecHits];   //[EcalBarrelScFiRecHits_]
   Float_t         EcalBarrelScFiRecHits_energy[kMaxEcalBarrelScFiRecHits];   //[EcalBarrelScFiRecHits_]
   Float_t         EcalBarrelScFiRecHits_energyError[kMaxEcalBarrelScFiRecHits];   //[EcalBarrelScFiRecHits_]
   Float_t         EcalBarrelScFiRecHits_time[kMaxEcalBarrelScFiRecHits];   //[EcalBarrelScFiRecHits_]
   Float_t         EcalBarrelScFiRecHits_timeError[kMaxEcalBarrelScFiRecHits];   //[EcalBarrelScFiRecHits_]
   Float_t         EcalBarrelScFiRecHits_position_x[kMaxEcalBarrelScFiRecHits];   //[EcalBarrelScFiRecHits_]
   Float_t         EcalBarrelScFiRecHits_position_y[kMaxEcalBarrelScFiRecHits];   //[EcalBarrelScFiRecHits_]
   Float_t         EcalBarrelScFiRecHits_position_z[kMaxEcalBarrelScFiRecHits];   //[EcalBarrelScFiRecHits_]
   Float_t         EcalBarrelScFiRecHits_dimension_x[kMaxEcalBarrelScFiRecHits];   //[EcalBarrelScFiRecHits_]
   Float_t         EcalBarrelScFiRecHits_dimension_y[kMaxEcalBarrelScFiRecHits];   //[EcalBarrelScFiRecHits_]
   Float_t         EcalBarrelScFiRecHits_dimension_z[kMaxEcalBarrelScFiRecHits];   //[EcalBarrelScFiRecHits_]
   Int_t           EcalBarrelScFiRecHits_sector[kMaxEcalBarrelScFiRecHits];   //[EcalBarrelScFiRecHits_]
   Int_t           EcalBarrelScFiRecHits_layer[kMaxEcalBarrelScFiRecHits];   //[EcalBarrelScFiRecHits_]
   Float_t         EcalBarrelScFiRecHits_local_x[kMaxEcalBarrelScFiRecHits];   //[EcalBarrelScFiRecHits_]
   Float_t         EcalBarrelScFiRecHits_local_y[kMaxEcalBarrelScFiRecHits];   //[EcalBarrelScFiRecHits_]
   Float_t         EcalBarrelScFiRecHits_local_z[kMaxEcalBarrelScFiRecHits];   //[EcalBarrelScFiRecHits_]
   Int_t           EcalBarrelTruthClusterAssociations_;
   UInt_t          EcalBarrelTruthClusterAssociations_simID[kMaxEcalBarrelTruthClusterAssociations];   //[EcalBarrelTruthClusterAssociations_]
   UInt_t          EcalBarrelTruthClusterAssociations_recID[kMaxEcalBarrelTruthClusterAssociations];   //[EcalBarrelTruthClusterAssociations_]
   Float_t         EcalBarrelTruthClusterAssociations_weight[kMaxEcalBarrelTruthClusterAssociations];   //[EcalBarrelTruthClusterAssociations_]
   Int_t           _EcalBarrelTruthClusterAssociations_rec_;
   Int_t           _EcalBarrelTruthClusterAssociations_rec_index[kMax_EcalBarrelTruthClusterAssociations_rec];   //[_EcalBarrelTruthClusterAssociations_rec_]
   UInt_t          _EcalBarrelTruthClusterAssociations_rec_collectionID[kMax_EcalBarrelTruthClusterAssociations_rec];   //[_EcalBarrelTruthClusterAssociations_rec_]
   Int_t           _EcalBarrelTruthClusterAssociations_sim_;
   Int_t           _EcalBarrelTruthClusterAssociations_sim_index[kMax_EcalBarrelTruthClusterAssociations_sim];   //[_EcalBarrelTruthClusterAssociations_sim_]
   UInt_t          _EcalBarrelTruthClusterAssociations_sim_collectionID[kMax_EcalBarrelTruthClusterAssociations_sim];   //[_EcalBarrelTruthClusterAssociations_sim_]
   Int_t           EcalBarrelTruthClusters_;
   Int_t           EcalBarrelTruthClusters_type[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Float_t         EcalBarrelTruthClusters_energy[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Float_t         EcalBarrelTruthClusters_energyError[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Float_t         EcalBarrelTruthClusters_time[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Float_t         EcalBarrelTruthClusters_timeError[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   UInt_t          EcalBarrelTruthClusters_nhits[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Float_t         EcalBarrelTruthClusters_position_x[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Float_t         EcalBarrelTruthClusters_position_y[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Float_t         EcalBarrelTruthClusters_position_z[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Float_t         EcalBarrelTruthClusters_positionError_xx[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Float_t         EcalBarrelTruthClusters_positionError_yy[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Float_t         EcalBarrelTruthClusters_positionError_zz[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Float_t         EcalBarrelTruthClusters_positionError_xy[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Float_t         EcalBarrelTruthClusters_positionError_xz[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Float_t         EcalBarrelTruthClusters_positionError_yz[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Float_t         EcalBarrelTruthClusters_intrinsicTheta[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Float_t         EcalBarrelTruthClusters_intrinsicPhi[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Float_t         EcalBarrelTruthClusters_intrinsicDirectionError_xx[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Float_t         EcalBarrelTruthClusters_intrinsicDirectionError_yy[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Float_t         EcalBarrelTruthClusters_intrinsicDirectionError_xy[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   UInt_t          EcalBarrelTruthClusters_shapeParameters_begin[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   UInt_t          EcalBarrelTruthClusters_shapeParameters_end[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   UInt_t          EcalBarrelTruthClusters_hitContributions_begin[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   UInt_t          EcalBarrelTruthClusters_hitContributions_end[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   UInt_t          EcalBarrelTruthClusters_subdetectorEnergies_begin[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   UInt_t          EcalBarrelTruthClusters_subdetectorEnergies_end[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   UInt_t          EcalBarrelTruthClusters_clusters_begin[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   UInt_t          EcalBarrelTruthClusters_clusters_end[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   UInt_t          EcalBarrelTruthClusters_hits_begin[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   UInt_t          EcalBarrelTruthClusters_hits_end[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   UInt_t          EcalBarrelTruthClusters_particleIDs_begin[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   UInt_t          EcalBarrelTruthClusters_particleIDs_end[kMaxEcalBarrelTruthClusters];   //[EcalBarrelTruthClusters_]
   Int_t           _EcalBarrelTruthClusters_clusters_;
   Int_t           _EcalBarrelTruthClusters_clusters_index[kMax_EcalBarrelTruthClusters_clusters];   //[_EcalBarrelTruthClusters_clusters_]
   UInt_t          _EcalBarrelTruthClusters_clusters_collectionID[kMax_EcalBarrelTruthClusters_clusters];   //[_EcalBarrelTruthClusters_clusters_]
   Int_t           _EcalBarrelTruthClusters_hits_;
   Int_t           _EcalBarrelTruthClusters_hits_index[kMax_EcalBarrelTruthClusters_hits];   //[_EcalBarrelTruthClusters_hits_]
   UInt_t          _EcalBarrelTruthClusters_hits_collectionID[kMax_EcalBarrelTruthClusters_hits];   //[_EcalBarrelTruthClusters_hits_]
   Int_t           _EcalBarrelTruthClusters_particleIDs_;
   Int_t           _EcalBarrelTruthClusters_particleIDs_index[kMax_EcalBarrelTruthClusters_particleIDs];   //[_EcalBarrelTruthClusters_particleIDs_]
   UInt_t          _EcalBarrelTruthClusters_particleIDs_collectionID[kMax_EcalBarrelTruthClusters_particleIDs];   //[_EcalBarrelTruthClusters_particleIDs_]
   vector<float>   *_EcalBarrelTruthClusters_shapeParameters;
   vector<float>   *_EcalBarrelTruthClusters_hitContributions;
   vector<float>   *_EcalBarrelTruthClusters_subdetectorEnergies;
   Int_t           EcalEndcapNClusterAssociations_;
   UInt_t          EcalEndcapNClusterAssociations_simID[kMaxEcalEndcapNClusterAssociations];   //[EcalEndcapNClusterAssociations_]
   UInt_t          EcalEndcapNClusterAssociations_recID[kMaxEcalEndcapNClusterAssociations];   //[EcalEndcapNClusterAssociations_]
   Float_t         EcalEndcapNClusterAssociations_weight[kMaxEcalEndcapNClusterAssociations];   //[EcalEndcapNClusterAssociations_]
   Int_t           _EcalEndcapNClusterAssociations_rec_;
   Int_t           _EcalEndcapNClusterAssociations_rec_index[kMax_EcalEndcapNClusterAssociations_rec];   //[_EcalEndcapNClusterAssociations_rec_]
   UInt_t          _EcalEndcapNClusterAssociations_rec_collectionID[kMax_EcalEndcapNClusterAssociations_rec];   //[_EcalEndcapNClusterAssociations_rec_]
   Int_t           _EcalEndcapNClusterAssociations_sim_;
   Int_t           _EcalEndcapNClusterAssociations_sim_index[kMax_EcalEndcapNClusterAssociations_sim];   //[_EcalEndcapNClusterAssociations_sim_]
   UInt_t          _EcalEndcapNClusterAssociations_sim_collectionID[kMax_EcalEndcapNClusterAssociations_sim];   //[_EcalEndcapNClusterAssociations_sim_]
   Int_t           EcalEndcapNClusters_;
   Int_t           EcalEndcapNClusters_type[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Float_t         EcalEndcapNClusters_energy[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Float_t         EcalEndcapNClusters_energyError[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Float_t         EcalEndcapNClusters_time[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Float_t         EcalEndcapNClusters_timeError[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   UInt_t          EcalEndcapNClusters_nhits[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Float_t         EcalEndcapNClusters_position_x[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Float_t         EcalEndcapNClusters_position_y[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Float_t         EcalEndcapNClusters_position_z[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Float_t         EcalEndcapNClusters_positionError_xx[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Float_t         EcalEndcapNClusters_positionError_yy[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Float_t         EcalEndcapNClusters_positionError_zz[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Float_t         EcalEndcapNClusters_positionError_xy[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Float_t         EcalEndcapNClusters_positionError_xz[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Float_t         EcalEndcapNClusters_positionError_yz[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Float_t         EcalEndcapNClusters_intrinsicTheta[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Float_t         EcalEndcapNClusters_intrinsicPhi[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Float_t         EcalEndcapNClusters_intrinsicDirectionError_xx[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Float_t         EcalEndcapNClusters_intrinsicDirectionError_yy[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Float_t         EcalEndcapNClusters_intrinsicDirectionError_xy[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   UInt_t          EcalEndcapNClusters_shapeParameters_begin[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   UInt_t          EcalEndcapNClusters_shapeParameters_end[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   UInt_t          EcalEndcapNClusters_hitContributions_begin[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   UInt_t          EcalEndcapNClusters_hitContributions_end[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   UInt_t          EcalEndcapNClusters_subdetectorEnergies_begin[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   UInt_t          EcalEndcapNClusters_subdetectorEnergies_end[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   UInt_t          EcalEndcapNClusters_clusters_begin[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   UInt_t          EcalEndcapNClusters_clusters_end[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   UInt_t          EcalEndcapNClusters_hits_begin[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   UInt_t          EcalEndcapNClusters_hits_end[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   UInt_t          EcalEndcapNClusters_particleIDs_begin[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   UInt_t          EcalEndcapNClusters_particleIDs_end[kMaxEcalEndcapNClusters];   //[EcalEndcapNClusters_]
   Int_t           _EcalEndcapNClusters_clusters_;
   Int_t           _EcalEndcapNClusters_clusters_index[kMax_EcalEndcapNClusters_clusters];   //[_EcalEndcapNClusters_clusters_]
   UInt_t          _EcalEndcapNClusters_clusters_collectionID[kMax_EcalEndcapNClusters_clusters];   //[_EcalEndcapNClusters_clusters_]
   Int_t           _EcalEndcapNClusters_hits_;
   Int_t           _EcalEndcapNClusters_hits_index[kMax_EcalEndcapNClusters_hits];   //[_EcalEndcapNClusters_hits_]
   UInt_t          _EcalEndcapNClusters_hits_collectionID[kMax_EcalEndcapNClusters_hits];   //[_EcalEndcapNClusters_hits_]
   Int_t           _EcalEndcapNClusters_particleIDs_;
   Int_t           _EcalEndcapNClusters_particleIDs_index[kMax_EcalEndcapNClusters_particleIDs];   //[_EcalEndcapNClusters_particleIDs_]
   UInt_t          _EcalEndcapNClusters_particleIDs_collectionID[kMax_EcalEndcapNClusters_particleIDs];   //[_EcalEndcapNClusters_particleIDs_]
   vector<float>   *_EcalEndcapNClusters_shapeParameters;
   vector<float>   *_EcalEndcapNClusters_hitContributions;
   vector<float>   *_EcalEndcapNClusters_subdetectorEnergies;
   Int_t           EcalEndcapNRawHits_;
   ULong_t         EcalEndcapNRawHits_cellID[kMaxEcalEndcapNRawHits];   //[EcalEndcapNRawHits_]
   Int_t           EcalEndcapNRawHits_amplitude[kMaxEcalEndcapNRawHits];   //[EcalEndcapNRawHits_]
   Int_t           EcalEndcapNRawHits_timeStamp[kMaxEcalEndcapNRawHits];   //[EcalEndcapNRawHits_]
   Int_t           EcalEndcapNRecHits_;
   ULong_t         EcalEndcapNRecHits_cellID[kMaxEcalEndcapNRecHits];   //[EcalEndcapNRecHits_]
   Float_t         EcalEndcapNRecHits_energy[kMaxEcalEndcapNRecHits];   //[EcalEndcapNRecHits_]
   Float_t         EcalEndcapNRecHits_energyError[kMaxEcalEndcapNRecHits];   //[EcalEndcapNRecHits_]
   Float_t         EcalEndcapNRecHits_time[kMaxEcalEndcapNRecHits];   //[EcalEndcapNRecHits_]
   Float_t         EcalEndcapNRecHits_timeError[kMaxEcalEndcapNRecHits];   //[EcalEndcapNRecHits_]
   Float_t         EcalEndcapNRecHits_position_x[kMaxEcalEndcapNRecHits];   //[EcalEndcapNRecHits_]
   Float_t         EcalEndcapNRecHits_position_y[kMaxEcalEndcapNRecHits];   //[EcalEndcapNRecHits_]
   Float_t         EcalEndcapNRecHits_position_z[kMaxEcalEndcapNRecHits];   //[EcalEndcapNRecHits_]
   Float_t         EcalEndcapNRecHits_dimension_x[kMaxEcalEndcapNRecHits];   //[EcalEndcapNRecHits_]
   Float_t         EcalEndcapNRecHits_dimension_y[kMaxEcalEndcapNRecHits];   //[EcalEndcapNRecHits_]
   Float_t         EcalEndcapNRecHits_dimension_z[kMaxEcalEndcapNRecHits];   //[EcalEndcapNRecHits_]
   Int_t           EcalEndcapNRecHits_sector[kMaxEcalEndcapNRecHits];   //[EcalEndcapNRecHits_]
   Int_t           EcalEndcapNRecHits_layer[kMaxEcalEndcapNRecHits];   //[EcalEndcapNRecHits_]
   Float_t         EcalEndcapNRecHits_local_x[kMaxEcalEndcapNRecHits];   //[EcalEndcapNRecHits_]
   Float_t         EcalEndcapNRecHits_local_y[kMaxEcalEndcapNRecHits];   //[EcalEndcapNRecHits_]
   Float_t         EcalEndcapNRecHits_local_z[kMaxEcalEndcapNRecHits];   //[EcalEndcapNRecHits_]
   Int_t           EcalEndcapNTruthClusterAssociations_;
   UInt_t          EcalEndcapNTruthClusterAssociations_simID[kMaxEcalEndcapNTruthClusterAssociations];   //[EcalEndcapNTruthClusterAssociations_]
   UInt_t          EcalEndcapNTruthClusterAssociations_recID[kMaxEcalEndcapNTruthClusterAssociations];   //[EcalEndcapNTruthClusterAssociations_]
   Float_t         EcalEndcapNTruthClusterAssociations_weight[kMaxEcalEndcapNTruthClusterAssociations];   //[EcalEndcapNTruthClusterAssociations_]
   Int_t           _EcalEndcapNTruthClusterAssociations_rec_;
   Int_t           _EcalEndcapNTruthClusterAssociations_rec_index[kMax_EcalEndcapNTruthClusterAssociations_rec];   //[_EcalEndcapNTruthClusterAssociations_rec_]
   UInt_t          _EcalEndcapNTruthClusterAssociations_rec_collectionID[kMax_EcalEndcapNTruthClusterAssociations_rec];   //[_EcalEndcapNTruthClusterAssociations_rec_]
   Int_t           _EcalEndcapNTruthClusterAssociations_sim_;
   Int_t           _EcalEndcapNTruthClusterAssociations_sim_index[kMax_EcalEndcapNTruthClusterAssociations_sim];   //[_EcalEndcapNTruthClusterAssociations_sim_]
   UInt_t          _EcalEndcapNTruthClusterAssociations_sim_collectionID[kMax_EcalEndcapNTruthClusterAssociations_sim];   //[_EcalEndcapNTruthClusterAssociations_sim_]
   Int_t           EcalEndcapNTruthClusters_;
   Int_t           EcalEndcapNTruthClusters_type[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Float_t         EcalEndcapNTruthClusters_energy[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Float_t         EcalEndcapNTruthClusters_energyError[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Float_t         EcalEndcapNTruthClusters_time[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Float_t         EcalEndcapNTruthClusters_timeError[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   UInt_t          EcalEndcapNTruthClusters_nhits[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Float_t         EcalEndcapNTruthClusters_position_x[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Float_t         EcalEndcapNTruthClusters_position_y[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Float_t         EcalEndcapNTruthClusters_position_z[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Float_t         EcalEndcapNTruthClusters_positionError_xx[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Float_t         EcalEndcapNTruthClusters_positionError_yy[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Float_t         EcalEndcapNTruthClusters_positionError_zz[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Float_t         EcalEndcapNTruthClusters_positionError_xy[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Float_t         EcalEndcapNTruthClusters_positionError_xz[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Float_t         EcalEndcapNTruthClusters_positionError_yz[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Float_t         EcalEndcapNTruthClusters_intrinsicTheta[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Float_t         EcalEndcapNTruthClusters_intrinsicPhi[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Float_t         EcalEndcapNTruthClusters_intrinsicDirectionError_xx[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Float_t         EcalEndcapNTruthClusters_intrinsicDirectionError_yy[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Float_t         EcalEndcapNTruthClusters_intrinsicDirectionError_xy[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   UInt_t          EcalEndcapNTruthClusters_shapeParameters_begin[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   UInt_t          EcalEndcapNTruthClusters_shapeParameters_end[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   UInt_t          EcalEndcapNTruthClusters_hitContributions_begin[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   UInt_t          EcalEndcapNTruthClusters_hitContributions_end[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   UInt_t          EcalEndcapNTruthClusters_subdetectorEnergies_begin[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   UInt_t          EcalEndcapNTruthClusters_subdetectorEnergies_end[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   UInt_t          EcalEndcapNTruthClusters_clusters_begin[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   UInt_t          EcalEndcapNTruthClusters_clusters_end[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   UInt_t          EcalEndcapNTruthClusters_hits_begin[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   UInt_t          EcalEndcapNTruthClusters_hits_end[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   UInt_t          EcalEndcapNTruthClusters_particleIDs_begin[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   UInt_t          EcalEndcapNTruthClusters_particleIDs_end[kMaxEcalEndcapNTruthClusters];   //[EcalEndcapNTruthClusters_]
   Int_t           _EcalEndcapNTruthClusters_clusters_;
   Int_t           _EcalEndcapNTruthClusters_clusters_index[kMax_EcalEndcapNTruthClusters_clusters];   //[_EcalEndcapNTruthClusters_clusters_]
   UInt_t          _EcalEndcapNTruthClusters_clusters_collectionID[kMax_EcalEndcapNTruthClusters_clusters];   //[_EcalEndcapNTruthClusters_clusters_]
   Int_t           _EcalEndcapNTruthClusters_hits_;
   Int_t           _EcalEndcapNTruthClusters_hits_index[kMax_EcalEndcapNTruthClusters_hits];   //[_EcalEndcapNTruthClusters_hits_]
   UInt_t          _EcalEndcapNTruthClusters_hits_collectionID[kMax_EcalEndcapNTruthClusters_hits];   //[_EcalEndcapNTruthClusters_hits_]
   Int_t           _EcalEndcapNTruthClusters_particleIDs_;
   Int_t           _EcalEndcapNTruthClusters_particleIDs_index[kMax_EcalEndcapNTruthClusters_particleIDs];   //[_EcalEndcapNTruthClusters_particleIDs_]
   UInt_t          _EcalEndcapNTruthClusters_particleIDs_collectionID[kMax_EcalEndcapNTruthClusters_particleIDs];   //[_EcalEndcapNTruthClusters_particleIDs_]
   vector<float>   *_EcalEndcapNTruthClusters_shapeParameters;
   vector<float>   *_EcalEndcapNTruthClusters_hitContributions;
   vector<float>   *_EcalEndcapNTruthClusters_subdetectorEnergies;
   Int_t           EcalEndcapPClusterAssociations_;
   UInt_t          EcalEndcapPClusterAssociations_simID[kMaxEcalEndcapPClusterAssociations];   //[EcalEndcapPClusterAssociations_]
   UInt_t          EcalEndcapPClusterAssociations_recID[kMaxEcalEndcapPClusterAssociations];   //[EcalEndcapPClusterAssociations_]
   Float_t         EcalEndcapPClusterAssociations_weight[kMaxEcalEndcapPClusterAssociations];   //[EcalEndcapPClusterAssociations_]
   Int_t           _EcalEndcapPClusterAssociations_rec_;
   Int_t           _EcalEndcapPClusterAssociations_rec_index[kMax_EcalEndcapPClusterAssociations_rec];   //[_EcalEndcapPClusterAssociations_rec_]
   UInt_t          _EcalEndcapPClusterAssociations_rec_collectionID[kMax_EcalEndcapPClusterAssociations_rec];   //[_EcalEndcapPClusterAssociations_rec_]
   Int_t           _EcalEndcapPClusterAssociations_sim_;
   Int_t           _EcalEndcapPClusterAssociations_sim_index[kMax_EcalEndcapPClusterAssociations_sim];   //[_EcalEndcapPClusterAssociations_sim_]
   UInt_t          _EcalEndcapPClusterAssociations_sim_collectionID[kMax_EcalEndcapPClusterAssociations_sim];   //[_EcalEndcapPClusterAssociations_sim_]
   Int_t           EcalEndcapPClusters_;
   Int_t           EcalEndcapPClusters_type[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Float_t         EcalEndcapPClusters_energy[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Float_t         EcalEndcapPClusters_energyError[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Float_t         EcalEndcapPClusters_time[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Float_t         EcalEndcapPClusters_timeError[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   UInt_t          EcalEndcapPClusters_nhits[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Float_t         EcalEndcapPClusters_position_x[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Float_t         EcalEndcapPClusters_position_y[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Float_t         EcalEndcapPClusters_position_z[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Float_t         EcalEndcapPClusters_positionError_xx[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Float_t         EcalEndcapPClusters_positionError_yy[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Float_t         EcalEndcapPClusters_positionError_zz[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Float_t         EcalEndcapPClusters_positionError_xy[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Float_t         EcalEndcapPClusters_positionError_xz[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Float_t         EcalEndcapPClusters_positionError_yz[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Float_t         EcalEndcapPClusters_intrinsicTheta[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Float_t         EcalEndcapPClusters_intrinsicPhi[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Float_t         EcalEndcapPClusters_intrinsicDirectionError_xx[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Float_t         EcalEndcapPClusters_intrinsicDirectionError_yy[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Float_t         EcalEndcapPClusters_intrinsicDirectionError_xy[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   UInt_t          EcalEndcapPClusters_shapeParameters_begin[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   UInt_t          EcalEndcapPClusters_shapeParameters_end[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   UInt_t          EcalEndcapPClusters_hitContributions_begin[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   UInt_t          EcalEndcapPClusters_hitContributions_end[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   UInt_t          EcalEndcapPClusters_subdetectorEnergies_begin[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   UInt_t          EcalEndcapPClusters_subdetectorEnergies_end[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   UInt_t          EcalEndcapPClusters_clusters_begin[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   UInt_t          EcalEndcapPClusters_clusters_end[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   UInt_t          EcalEndcapPClusters_hits_begin[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   UInt_t          EcalEndcapPClusters_hits_end[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   UInt_t          EcalEndcapPClusters_particleIDs_begin[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   UInt_t          EcalEndcapPClusters_particleIDs_end[kMaxEcalEndcapPClusters];   //[EcalEndcapPClusters_]
   Int_t           _EcalEndcapPClusters_clusters_;
   Int_t           _EcalEndcapPClusters_clusters_index[kMax_EcalEndcapPClusters_clusters];   //[_EcalEndcapPClusters_clusters_]
   UInt_t          _EcalEndcapPClusters_clusters_collectionID[kMax_EcalEndcapPClusters_clusters];   //[_EcalEndcapPClusters_clusters_]
   Int_t           _EcalEndcapPClusters_hits_;
   Int_t           _EcalEndcapPClusters_hits_index[kMax_EcalEndcapPClusters_hits];   //[_EcalEndcapPClusters_hits_]
   UInt_t          _EcalEndcapPClusters_hits_collectionID[kMax_EcalEndcapPClusters_hits];   //[_EcalEndcapPClusters_hits_]
   Int_t           _EcalEndcapPClusters_particleIDs_;
   Int_t           _EcalEndcapPClusters_particleIDs_index[kMax_EcalEndcapPClusters_particleIDs];   //[_EcalEndcapPClusters_particleIDs_]
   UInt_t          _EcalEndcapPClusters_particleIDs_collectionID[kMax_EcalEndcapPClusters_particleIDs];   //[_EcalEndcapPClusters_particleIDs_]
   vector<float>   *_EcalEndcapPClusters_shapeParameters;
   vector<float>   *_EcalEndcapPClusters_hitContributions;
   vector<float>   *_EcalEndcapPClusters_subdetectorEnergies;
   Int_t           EcalEndcapPInsertClusterAssociations_;
   UInt_t          EcalEndcapPInsertClusterAssociations_simID[kMaxEcalEndcapPInsertClusterAssociations];   //[EcalEndcapPInsertClusterAssociations_]
   UInt_t          EcalEndcapPInsertClusterAssociations_recID[kMaxEcalEndcapPInsertClusterAssociations];   //[EcalEndcapPInsertClusterAssociations_]
   Float_t         EcalEndcapPInsertClusterAssociations_weight[kMaxEcalEndcapPInsertClusterAssociations];   //[EcalEndcapPInsertClusterAssociations_]
   Int_t           _EcalEndcapPInsertClusterAssociations_rec_;
   Int_t           _EcalEndcapPInsertClusterAssociations_rec_index[kMax_EcalEndcapPInsertClusterAssociations_rec];   //[_EcalEndcapPInsertClusterAssociations_rec_]
   UInt_t          _EcalEndcapPInsertClusterAssociations_rec_collectionID[kMax_EcalEndcapPInsertClusterAssociations_rec];   //[_EcalEndcapPInsertClusterAssociations_rec_]
   Int_t           _EcalEndcapPInsertClusterAssociations_sim_;
   Int_t           _EcalEndcapPInsertClusterAssociations_sim_index[kMax_EcalEndcapPInsertClusterAssociations_sim];   //[_EcalEndcapPInsertClusterAssociations_sim_]
   UInt_t          _EcalEndcapPInsertClusterAssociations_sim_collectionID[kMax_EcalEndcapPInsertClusterAssociations_sim];   //[_EcalEndcapPInsertClusterAssociations_sim_]
   Int_t           EcalEndcapPInsertClusters_;
   Int_t           EcalEndcapPInsertClusters_type[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Float_t         EcalEndcapPInsertClusters_energy[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Float_t         EcalEndcapPInsertClusters_energyError[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Float_t         EcalEndcapPInsertClusters_time[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Float_t         EcalEndcapPInsertClusters_timeError[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   UInt_t          EcalEndcapPInsertClusters_nhits[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Float_t         EcalEndcapPInsertClusters_position_x[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Float_t         EcalEndcapPInsertClusters_position_y[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Float_t         EcalEndcapPInsertClusters_position_z[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Float_t         EcalEndcapPInsertClusters_positionError_xx[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Float_t         EcalEndcapPInsertClusters_positionError_yy[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Float_t         EcalEndcapPInsertClusters_positionError_zz[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Float_t         EcalEndcapPInsertClusters_positionError_xy[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Float_t         EcalEndcapPInsertClusters_positionError_xz[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Float_t         EcalEndcapPInsertClusters_positionError_yz[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Float_t         EcalEndcapPInsertClusters_intrinsicTheta[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Float_t         EcalEndcapPInsertClusters_intrinsicPhi[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Float_t         EcalEndcapPInsertClusters_intrinsicDirectionError_xx[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Float_t         EcalEndcapPInsertClusters_intrinsicDirectionError_yy[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Float_t         EcalEndcapPInsertClusters_intrinsicDirectionError_xy[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   UInt_t          EcalEndcapPInsertClusters_shapeParameters_begin[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   UInt_t          EcalEndcapPInsertClusters_shapeParameters_end[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   UInt_t          EcalEndcapPInsertClusters_hitContributions_begin[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   UInt_t          EcalEndcapPInsertClusters_hitContributions_end[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   UInt_t          EcalEndcapPInsertClusters_subdetectorEnergies_begin[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   UInt_t          EcalEndcapPInsertClusters_subdetectorEnergies_end[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   UInt_t          EcalEndcapPInsertClusters_clusters_begin[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   UInt_t          EcalEndcapPInsertClusters_clusters_end[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   UInt_t          EcalEndcapPInsertClusters_hits_begin[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   UInt_t          EcalEndcapPInsertClusters_hits_end[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   UInt_t          EcalEndcapPInsertClusters_particleIDs_begin[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   UInt_t          EcalEndcapPInsertClusters_particleIDs_end[kMaxEcalEndcapPInsertClusters];   //[EcalEndcapPInsertClusters_]
   Int_t           _EcalEndcapPInsertClusters_clusters_;
   Int_t           _EcalEndcapPInsertClusters_clusters_index[kMax_EcalEndcapPInsertClusters_clusters];   //[_EcalEndcapPInsertClusters_clusters_]
   UInt_t          _EcalEndcapPInsertClusters_clusters_collectionID[kMax_EcalEndcapPInsertClusters_clusters];   //[_EcalEndcapPInsertClusters_clusters_]
   Int_t           _EcalEndcapPInsertClusters_hits_;
   Int_t           _EcalEndcapPInsertClusters_hits_index[kMax_EcalEndcapPInsertClusters_hits];   //[_EcalEndcapPInsertClusters_hits_]
   UInt_t          _EcalEndcapPInsertClusters_hits_collectionID[kMax_EcalEndcapPInsertClusters_hits];   //[_EcalEndcapPInsertClusters_hits_]
   Int_t           _EcalEndcapPInsertClusters_particleIDs_;
   Int_t           _EcalEndcapPInsertClusters_particleIDs_index[kMax_EcalEndcapPInsertClusters_particleIDs];   //[_EcalEndcapPInsertClusters_particleIDs_]
   UInt_t          _EcalEndcapPInsertClusters_particleIDs_collectionID[kMax_EcalEndcapPInsertClusters_particleIDs];   //[_EcalEndcapPInsertClusters_particleIDs_]
   vector<float>   *_EcalEndcapPInsertClusters_shapeParameters;
   vector<float>   *_EcalEndcapPInsertClusters_hitContributions;
   vector<float>   *_EcalEndcapPInsertClusters_subdetectorEnergies;
   Int_t           EcalEndcapPInsertRawHits_;
   ULong_t         EcalEndcapPInsertRawHits_cellID[kMaxEcalEndcapPInsertRawHits];   //[EcalEndcapPInsertRawHits_]
   Int_t           EcalEndcapPInsertRawHits_amplitude[kMaxEcalEndcapPInsertRawHits];   //[EcalEndcapPInsertRawHits_]
   Int_t           EcalEndcapPInsertRawHits_timeStamp[kMaxEcalEndcapPInsertRawHits];   //[EcalEndcapPInsertRawHits_]
   Int_t           EcalEndcapPInsertRecHits_;
   ULong_t         EcalEndcapPInsertRecHits_cellID[kMaxEcalEndcapPInsertRecHits];   //[EcalEndcapPInsertRecHits_]
   Float_t         EcalEndcapPInsertRecHits_energy[kMaxEcalEndcapPInsertRecHits];   //[EcalEndcapPInsertRecHits_]
   Float_t         EcalEndcapPInsertRecHits_energyError[kMaxEcalEndcapPInsertRecHits];   //[EcalEndcapPInsertRecHits_]
   Float_t         EcalEndcapPInsertRecHits_time[kMaxEcalEndcapPInsertRecHits];   //[EcalEndcapPInsertRecHits_]
   Float_t         EcalEndcapPInsertRecHits_timeError[kMaxEcalEndcapPInsertRecHits];   //[EcalEndcapPInsertRecHits_]
   Float_t         EcalEndcapPInsertRecHits_position_x[kMaxEcalEndcapPInsertRecHits];   //[EcalEndcapPInsertRecHits_]
   Float_t         EcalEndcapPInsertRecHits_position_y[kMaxEcalEndcapPInsertRecHits];   //[EcalEndcapPInsertRecHits_]
   Float_t         EcalEndcapPInsertRecHits_position_z[kMaxEcalEndcapPInsertRecHits];   //[EcalEndcapPInsertRecHits_]
   Float_t         EcalEndcapPInsertRecHits_dimension_x[kMaxEcalEndcapPInsertRecHits];   //[EcalEndcapPInsertRecHits_]
   Float_t         EcalEndcapPInsertRecHits_dimension_y[kMaxEcalEndcapPInsertRecHits];   //[EcalEndcapPInsertRecHits_]
   Float_t         EcalEndcapPInsertRecHits_dimension_z[kMaxEcalEndcapPInsertRecHits];   //[EcalEndcapPInsertRecHits_]
   Int_t           EcalEndcapPInsertRecHits_sector[kMaxEcalEndcapPInsertRecHits];   //[EcalEndcapPInsertRecHits_]
   Int_t           EcalEndcapPInsertRecHits_layer[kMaxEcalEndcapPInsertRecHits];   //[EcalEndcapPInsertRecHits_]
   Float_t         EcalEndcapPInsertRecHits_local_x[kMaxEcalEndcapPInsertRecHits];   //[EcalEndcapPInsertRecHits_]
   Float_t         EcalEndcapPInsertRecHits_local_y[kMaxEcalEndcapPInsertRecHits];   //[EcalEndcapPInsertRecHits_]
   Float_t         EcalEndcapPInsertRecHits_local_z[kMaxEcalEndcapPInsertRecHits];   //[EcalEndcapPInsertRecHits_]
   Int_t           EcalEndcapPInsertTruthClusterAssociations_;
   UInt_t          EcalEndcapPInsertTruthClusterAssociations_simID[kMaxEcalEndcapPInsertTruthClusterAssociations];   //[EcalEndcapPInsertTruthClusterAssociations_]
   UInt_t          EcalEndcapPInsertTruthClusterAssociations_recID[kMaxEcalEndcapPInsertTruthClusterAssociations];   //[EcalEndcapPInsertTruthClusterAssociations_]
   Float_t         EcalEndcapPInsertTruthClusterAssociations_weight[kMaxEcalEndcapPInsertTruthClusterAssociations];   //[EcalEndcapPInsertTruthClusterAssociations_]
   Int_t           _EcalEndcapPInsertTruthClusterAssociations_rec_;
   Int_t           _EcalEndcapPInsertTruthClusterAssociations_rec_index[kMax_EcalEndcapPInsertTruthClusterAssociations_rec];   //[_EcalEndcapPInsertTruthClusterAssociations_rec_]
   UInt_t          _EcalEndcapPInsertTruthClusterAssociations_rec_collectionID[kMax_EcalEndcapPInsertTruthClusterAssociations_rec];   //[_EcalEndcapPInsertTruthClusterAssociations_rec_]
   Int_t           _EcalEndcapPInsertTruthClusterAssociations_sim_;
   Int_t           _EcalEndcapPInsertTruthClusterAssociations_sim_index[kMax_EcalEndcapPInsertTruthClusterAssociations_sim];   //[_EcalEndcapPInsertTruthClusterAssociations_sim_]
   UInt_t          _EcalEndcapPInsertTruthClusterAssociations_sim_collectionID[kMax_EcalEndcapPInsertTruthClusterAssociations_sim];   //[_EcalEndcapPInsertTruthClusterAssociations_sim_]
   Int_t           EcalEndcapPInsertTruthClusters_;
   Int_t           EcalEndcapPInsertTruthClusters_type[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Float_t         EcalEndcapPInsertTruthClusters_energy[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Float_t         EcalEndcapPInsertTruthClusters_energyError[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Float_t         EcalEndcapPInsertTruthClusters_time[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Float_t         EcalEndcapPInsertTruthClusters_timeError[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   UInt_t          EcalEndcapPInsertTruthClusters_nhits[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Float_t         EcalEndcapPInsertTruthClusters_position_x[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Float_t         EcalEndcapPInsertTruthClusters_position_y[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Float_t         EcalEndcapPInsertTruthClusters_position_z[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Float_t         EcalEndcapPInsertTruthClusters_positionError_xx[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Float_t         EcalEndcapPInsertTruthClusters_positionError_yy[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Float_t         EcalEndcapPInsertTruthClusters_positionError_zz[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Float_t         EcalEndcapPInsertTruthClusters_positionError_xy[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Float_t         EcalEndcapPInsertTruthClusters_positionError_xz[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Float_t         EcalEndcapPInsertTruthClusters_positionError_yz[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Float_t         EcalEndcapPInsertTruthClusters_intrinsicTheta[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Float_t         EcalEndcapPInsertTruthClusters_intrinsicPhi[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Float_t         EcalEndcapPInsertTruthClusters_intrinsicDirectionError_xx[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Float_t         EcalEndcapPInsertTruthClusters_intrinsicDirectionError_yy[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Float_t         EcalEndcapPInsertTruthClusters_intrinsicDirectionError_xy[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   UInt_t          EcalEndcapPInsertTruthClusters_shapeParameters_begin[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   UInt_t          EcalEndcapPInsertTruthClusters_shapeParameters_end[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   UInt_t          EcalEndcapPInsertTruthClusters_hitContributions_begin[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   UInt_t          EcalEndcapPInsertTruthClusters_hitContributions_end[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   UInt_t          EcalEndcapPInsertTruthClusters_subdetectorEnergies_begin[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   UInt_t          EcalEndcapPInsertTruthClusters_subdetectorEnergies_end[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   UInt_t          EcalEndcapPInsertTruthClusters_clusters_begin[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   UInt_t          EcalEndcapPInsertTruthClusters_clusters_end[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   UInt_t          EcalEndcapPInsertTruthClusters_hits_begin[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   UInt_t          EcalEndcapPInsertTruthClusters_hits_end[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   UInt_t          EcalEndcapPInsertTruthClusters_particleIDs_begin[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   UInt_t          EcalEndcapPInsertTruthClusters_particleIDs_end[kMaxEcalEndcapPInsertTruthClusters];   //[EcalEndcapPInsertTruthClusters_]
   Int_t           _EcalEndcapPInsertTruthClusters_clusters_;
   Int_t           _EcalEndcapPInsertTruthClusters_clusters_index[kMax_EcalEndcapPInsertTruthClusters_clusters];   //[_EcalEndcapPInsertTruthClusters_clusters_]
   UInt_t          _EcalEndcapPInsertTruthClusters_clusters_collectionID[kMax_EcalEndcapPInsertTruthClusters_clusters];   //[_EcalEndcapPInsertTruthClusters_clusters_]
   Int_t           _EcalEndcapPInsertTruthClusters_hits_;
   Int_t           _EcalEndcapPInsertTruthClusters_hits_index[kMax_EcalEndcapPInsertTruthClusters_hits];   //[_EcalEndcapPInsertTruthClusters_hits_]
   UInt_t          _EcalEndcapPInsertTruthClusters_hits_collectionID[kMax_EcalEndcapPInsertTruthClusters_hits];   //[_EcalEndcapPInsertTruthClusters_hits_]
   Int_t           _EcalEndcapPInsertTruthClusters_particleIDs_;
   Int_t           _EcalEndcapPInsertTruthClusters_particleIDs_index[kMax_EcalEndcapPInsertTruthClusters_particleIDs];   //[_EcalEndcapPInsertTruthClusters_particleIDs_]
   UInt_t          _EcalEndcapPInsertTruthClusters_particleIDs_collectionID[kMax_EcalEndcapPInsertTruthClusters_particleIDs];   //[_EcalEndcapPInsertTruthClusters_particleIDs_]
   vector<float>   *_EcalEndcapPInsertTruthClusters_shapeParameters;
   vector<float>   *_EcalEndcapPInsertTruthClusters_hitContributions;
   vector<float>   *_EcalEndcapPInsertTruthClusters_subdetectorEnergies;
   Int_t           EcalEndcapPRawHits_;
   ULong_t         EcalEndcapPRawHits_cellID[kMaxEcalEndcapPRawHits];   //[EcalEndcapPRawHits_]
   Int_t           EcalEndcapPRawHits_amplitude[kMaxEcalEndcapPRawHits];   //[EcalEndcapPRawHits_]
   Int_t           EcalEndcapPRawHits_timeStamp[kMaxEcalEndcapPRawHits];   //[EcalEndcapPRawHits_]
   Int_t           EcalEndcapPRecHits_;
   ULong_t         EcalEndcapPRecHits_cellID[kMaxEcalEndcapPRecHits];   //[EcalEndcapPRecHits_]
   Float_t         EcalEndcapPRecHits_energy[kMaxEcalEndcapPRecHits];   //[EcalEndcapPRecHits_]
   Float_t         EcalEndcapPRecHits_energyError[kMaxEcalEndcapPRecHits];   //[EcalEndcapPRecHits_]
   Float_t         EcalEndcapPRecHits_time[kMaxEcalEndcapPRecHits];   //[EcalEndcapPRecHits_]
   Float_t         EcalEndcapPRecHits_timeError[kMaxEcalEndcapPRecHits];   //[EcalEndcapPRecHits_]
   Float_t         EcalEndcapPRecHits_position_x[kMaxEcalEndcapPRecHits];   //[EcalEndcapPRecHits_]
   Float_t         EcalEndcapPRecHits_position_y[kMaxEcalEndcapPRecHits];   //[EcalEndcapPRecHits_]
   Float_t         EcalEndcapPRecHits_position_z[kMaxEcalEndcapPRecHits];   //[EcalEndcapPRecHits_]
   Float_t         EcalEndcapPRecHits_dimension_x[kMaxEcalEndcapPRecHits];   //[EcalEndcapPRecHits_]
   Float_t         EcalEndcapPRecHits_dimension_y[kMaxEcalEndcapPRecHits];   //[EcalEndcapPRecHits_]
   Float_t         EcalEndcapPRecHits_dimension_z[kMaxEcalEndcapPRecHits];   //[EcalEndcapPRecHits_]
   Int_t           EcalEndcapPRecHits_sector[kMaxEcalEndcapPRecHits];   //[EcalEndcapPRecHits_]
   Int_t           EcalEndcapPRecHits_layer[kMaxEcalEndcapPRecHits];   //[EcalEndcapPRecHits_]
   Float_t         EcalEndcapPRecHits_local_x[kMaxEcalEndcapPRecHits];   //[EcalEndcapPRecHits_]
   Float_t         EcalEndcapPRecHits_local_y[kMaxEcalEndcapPRecHits];   //[EcalEndcapPRecHits_]
   Float_t         EcalEndcapPRecHits_local_z[kMaxEcalEndcapPRecHits];   //[EcalEndcapPRecHits_]
   Int_t           EcalEndcapPTruthClusterAssociations_;
   UInt_t          EcalEndcapPTruthClusterAssociations_simID[kMaxEcalEndcapPTruthClusterAssociations];   //[EcalEndcapPTruthClusterAssociations_]
   UInt_t          EcalEndcapPTruthClusterAssociations_recID[kMaxEcalEndcapPTruthClusterAssociations];   //[EcalEndcapPTruthClusterAssociations_]
   Float_t         EcalEndcapPTruthClusterAssociations_weight[kMaxEcalEndcapPTruthClusterAssociations];   //[EcalEndcapPTruthClusterAssociations_]
   Int_t           _EcalEndcapPTruthClusterAssociations_rec_;
   Int_t           _EcalEndcapPTruthClusterAssociations_rec_index[kMax_EcalEndcapPTruthClusterAssociations_rec];   //[_EcalEndcapPTruthClusterAssociations_rec_]
   UInt_t          _EcalEndcapPTruthClusterAssociations_rec_collectionID[kMax_EcalEndcapPTruthClusterAssociations_rec];   //[_EcalEndcapPTruthClusterAssociations_rec_]
   Int_t           _EcalEndcapPTruthClusterAssociations_sim_;
   Int_t           _EcalEndcapPTruthClusterAssociations_sim_index[kMax_EcalEndcapPTruthClusterAssociations_sim];   //[_EcalEndcapPTruthClusterAssociations_sim_]
   UInt_t          _EcalEndcapPTruthClusterAssociations_sim_collectionID[kMax_EcalEndcapPTruthClusterAssociations_sim];   //[_EcalEndcapPTruthClusterAssociations_sim_]
   Int_t           EcalEndcapPTruthClusters_;
   Int_t           EcalEndcapPTruthClusters_type[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Float_t         EcalEndcapPTruthClusters_energy[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Float_t         EcalEndcapPTruthClusters_energyError[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Float_t         EcalEndcapPTruthClusters_time[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Float_t         EcalEndcapPTruthClusters_timeError[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   UInt_t          EcalEndcapPTruthClusters_nhits[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Float_t         EcalEndcapPTruthClusters_position_x[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Float_t         EcalEndcapPTruthClusters_position_y[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Float_t         EcalEndcapPTruthClusters_position_z[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Float_t         EcalEndcapPTruthClusters_positionError_xx[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Float_t         EcalEndcapPTruthClusters_positionError_yy[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Float_t         EcalEndcapPTruthClusters_positionError_zz[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Float_t         EcalEndcapPTruthClusters_positionError_xy[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Float_t         EcalEndcapPTruthClusters_positionError_xz[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Float_t         EcalEndcapPTruthClusters_positionError_yz[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Float_t         EcalEndcapPTruthClusters_intrinsicTheta[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Float_t         EcalEndcapPTruthClusters_intrinsicPhi[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Float_t         EcalEndcapPTruthClusters_intrinsicDirectionError_xx[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Float_t         EcalEndcapPTruthClusters_intrinsicDirectionError_yy[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Float_t         EcalEndcapPTruthClusters_intrinsicDirectionError_xy[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   UInt_t          EcalEndcapPTruthClusters_shapeParameters_begin[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   UInt_t          EcalEndcapPTruthClusters_shapeParameters_end[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   UInt_t          EcalEndcapPTruthClusters_hitContributions_begin[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   UInt_t          EcalEndcapPTruthClusters_hitContributions_end[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   UInt_t          EcalEndcapPTruthClusters_subdetectorEnergies_begin[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   UInt_t          EcalEndcapPTruthClusters_subdetectorEnergies_end[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   UInt_t          EcalEndcapPTruthClusters_clusters_begin[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   UInt_t          EcalEndcapPTruthClusters_clusters_end[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   UInt_t          EcalEndcapPTruthClusters_hits_begin[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   UInt_t          EcalEndcapPTruthClusters_hits_end[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   UInt_t          EcalEndcapPTruthClusters_particleIDs_begin[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   UInt_t          EcalEndcapPTruthClusters_particleIDs_end[kMaxEcalEndcapPTruthClusters];   //[EcalEndcapPTruthClusters_]
   Int_t           _EcalEndcapPTruthClusters_clusters_;
   Int_t           _EcalEndcapPTruthClusters_clusters_index[kMax_EcalEndcapPTruthClusters_clusters];   //[_EcalEndcapPTruthClusters_clusters_]
   UInt_t          _EcalEndcapPTruthClusters_clusters_collectionID[kMax_EcalEndcapPTruthClusters_clusters];   //[_EcalEndcapPTruthClusters_clusters_]
   Int_t           _EcalEndcapPTruthClusters_hits_;
   Int_t           _EcalEndcapPTruthClusters_hits_index[kMax_EcalEndcapPTruthClusters_hits];   //[_EcalEndcapPTruthClusters_hits_]
   UInt_t          _EcalEndcapPTruthClusters_hits_collectionID[kMax_EcalEndcapPTruthClusters_hits];   //[_EcalEndcapPTruthClusters_hits_]
   Int_t           _EcalEndcapPTruthClusters_particleIDs_;
   Int_t           _EcalEndcapPTruthClusters_particleIDs_index[kMax_EcalEndcapPTruthClusters_particleIDs];   //[_EcalEndcapPTruthClusters_particleIDs_]
   UInt_t          _EcalEndcapPTruthClusters_particleIDs_collectionID[kMax_EcalEndcapPTruthClusters_particleIDs];   //[_EcalEndcapPTruthClusters_particleIDs_]
   vector<float>   *_EcalEndcapPTruthClusters_shapeParameters;
   vector<float>   *_EcalEndcapPTruthClusters_hitContributions;
   vector<float>   *_EcalEndcapPTruthClusters_subdetectorEnergies;
   Int_t           EcalLumiSpecClusterAssociations_;
   UInt_t          EcalLumiSpecClusterAssociations_simID[kMaxEcalLumiSpecClusterAssociations];   //[EcalLumiSpecClusterAssociations_]
   UInt_t          EcalLumiSpecClusterAssociations_recID[kMaxEcalLumiSpecClusterAssociations];   //[EcalLumiSpecClusterAssociations_]
   Float_t         EcalLumiSpecClusterAssociations_weight[kMaxEcalLumiSpecClusterAssociations];   //[EcalLumiSpecClusterAssociations_]
   Int_t           _EcalLumiSpecClusterAssociations_rec_;
   Int_t           _EcalLumiSpecClusterAssociations_rec_index[kMax_EcalLumiSpecClusterAssociations_rec];   //[_EcalLumiSpecClusterAssociations_rec_]
   UInt_t          _EcalLumiSpecClusterAssociations_rec_collectionID[kMax_EcalLumiSpecClusterAssociations_rec];   //[_EcalLumiSpecClusterAssociations_rec_]
   Int_t           _EcalLumiSpecClusterAssociations_sim_;
   Int_t           _EcalLumiSpecClusterAssociations_sim_index[kMax_EcalLumiSpecClusterAssociations_sim];   //[_EcalLumiSpecClusterAssociations_sim_]
   UInt_t          _EcalLumiSpecClusterAssociations_sim_collectionID[kMax_EcalLumiSpecClusterAssociations_sim];   //[_EcalLumiSpecClusterAssociations_sim_]
   Int_t           EcalLumiSpecClusters_;
   Int_t           EcalLumiSpecClusters_type[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Float_t         EcalLumiSpecClusters_energy[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Float_t         EcalLumiSpecClusters_energyError[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Float_t         EcalLumiSpecClusters_time[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Float_t         EcalLumiSpecClusters_timeError[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   UInt_t          EcalLumiSpecClusters_nhits[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Float_t         EcalLumiSpecClusters_position_x[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Float_t         EcalLumiSpecClusters_position_y[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Float_t         EcalLumiSpecClusters_position_z[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Float_t         EcalLumiSpecClusters_positionError_xx[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Float_t         EcalLumiSpecClusters_positionError_yy[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Float_t         EcalLumiSpecClusters_positionError_zz[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Float_t         EcalLumiSpecClusters_positionError_xy[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Float_t         EcalLumiSpecClusters_positionError_xz[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Float_t         EcalLumiSpecClusters_positionError_yz[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Float_t         EcalLumiSpecClusters_intrinsicTheta[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Float_t         EcalLumiSpecClusters_intrinsicPhi[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Float_t         EcalLumiSpecClusters_intrinsicDirectionError_xx[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Float_t         EcalLumiSpecClusters_intrinsicDirectionError_yy[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Float_t         EcalLumiSpecClusters_intrinsicDirectionError_xy[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   UInt_t          EcalLumiSpecClusters_shapeParameters_begin[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   UInt_t          EcalLumiSpecClusters_shapeParameters_end[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   UInt_t          EcalLumiSpecClusters_hitContributions_begin[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   UInt_t          EcalLumiSpecClusters_hitContributions_end[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   UInt_t          EcalLumiSpecClusters_subdetectorEnergies_begin[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   UInt_t          EcalLumiSpecClusters_subdetectorEnergies_end[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   UInt_t          EcalLumiSpecClusters_clusters_begin[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   UInt_t          EcalLumiSpecClusters_clusters_end[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   UInt_t          EcalLumiSpecClusters_hits_begin[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   UInt_t          EcalLumiSpecClusters_hits_end[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   UInt_t          EcalLumiSpecClusters_particleIDs_begin[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   UInt_t          EcalLumiSpecClusters_particleIDs_end[kMaxEcalLumiSpecClusters];   //[EcalLumiSpecClusters_]
   Int_t           _EcalLumiSpecClusters_clusters_;
   Int_t           _EcalLumiSpecClusters_clusters_index[kMax_EcalLumiSpecClusters_clusters];   //[_EcalLumiSpecClusters_clusters_]
   UInt_t          _EcalLumiSpecClusters_clusters_collectionID[kMax_EcalLumiSpecClusters_clusters];   //[_EcalLumiSpecClusters_clusters_]
   Int_t           _EcalLumiSpecClusters_hits_;
   Int_t           _EcalLumiSpecClusters_hits_index[kMax_EcalLumiSpecClusters_hits];   //[_EcalLumiSpecClusters_hits_]
   UInt_t          _EcalLumiSpecClusters_hits_collectionID[kMax_EcalLumiSpecClusters_hits];   //[_EcalLumiSpecClusters_hits_]
   Int_t           _EcalLumiSpecClusters_particleIDs_;
   Int_t           _EcalLumiSpecClusters_particleIDs_index[kMax_EcalLumiSpecClusters_particleIDs];   //[_EcalLumiSpecClusters_particleIDs_]
   UInt_t          _EcalLumiSpecClusters_particleIDs_collectionID[kMax_EcalLumiSpecClusters_particleIDs];   //[_EcalLumiSpecClusters_particleIDs_]
   vector<float>   *_EcalLumiSpecClusters_shapeParameters;
   vector<float>   *_EcalLumiSpecClusters_hitContributions;
   vector<float>   *_EcalLumiSpecClusters_subdetectorEnergies;
   Int_t           EcalLumiSpecRawHits_;
   ULong_t         EcalLumiSpecRawHits_cellID[kMaxEcalLumiSpecRawHits];   //[EcalLumiSpecRawHits_]
   Int_t           EcalLumiSpecRawHits_amplitude[kMaxEcalLumiSpecRawHits];   //[EcalLumiSpecRawHits_]
   Int_t           EcalLumiSpecRawHits_timeStamp[kMaxEcalLumiSpecRawHits];   //[EcalLumiSpecRawHits_]
   Int_t           EcalLumiSpecRecHits_;
   ULong_t         EcalLumiSpecRecHits_cellID[kMaxEcalLumiSpecRecHits];   //[EcalLumiSpecRecHits_]
   Float_t         EcalLumiSpecRecHits_energy[kMaxEcalLumiSpecRecHits];   //[EcalLumiSpecRecHits_]
   Float_t         EcalLumiSpecRecHits_energyError[kMaxEcalLumiSpecRecHits];   //[EcalLumiSpecRecHits_]
   Float_t         EcalLumiSpecRecHits_time[kMaxEcalLumiSpecRecHits];   //[EcalLumiSpecRecHits_]
   Float_t         EcalLumiSpecRecHits_timeError[kMaxEcalLumiSpecRecHits];   //[EcalLumiSpecRecHits_]
   Float_t         EcalLumiSpecRecHits_position_x[kMaxEcalLumiSpecRecHits];   //[EcalLumiSpecRecHits_]
   Float_t         EcalLumiSpecRecHits_position_y[kMaxEcalLumiSpecRecHits];   //[EcalLumiSpecRecHits_]
   Float_t         EcalLumiSpecRecHits_position_z[kMaxEcalLumiSpecRecHits];   //[EcalLumiSpecRecHits_]
   Float_t         EcalLumiSpecRecHits_dimension_x[kMaxEcalLumiSpecRecHits];   //[EcalLumiSpecRecHits_]
   Float_t         EcalLumiSpecRecHits_dimension_y[kMaxEcalLumiSpecRecHits];   //[EcalLumiSpecRecHits_]
   Float_t         EcalLumiSpecRecHits_dimension_z[kMaxEcalLumiSpecRecHits];   //[EcalLumiSpecRecHits_]
   Int_t           EcalLumiSpecRecHits_sector[kMaxEcalLumiSpecRecHits];   //[EcalLumiSpecRecHits_]
   Int_t           EcalLumiSpecRecHits_layer[kMaxEcalLumiSpecRecHits];   //[EcalLumiSpecRecHits_]
   Float_t         EcalLumiSpecRecHits_local_x[kMaxEcalLumiSpecRecHits];   //[EcalLumiSpecRecHits_]
   Float_t         EcalLumiSpecRecHits_local_y[kMaxEcalLumiSpecRecHits];   //[EcalLumiSpecRecHits_]
   Float_t         EcalLumiSpecRecHits_local_z[kMaxEcalLumiSpecRecHits];   //[EcalLumiSpecRecHits_]
   Int_t           EcalLumiSpecTruthClusterAssociations_;
   UInt_t          EcalLumiSpecTruthClusterAssociations_simID[kMaxEcalLumiSpecTruthClusterAssociations];   //[EcalLumiSpecTruthClusterAssociations_]
   UInt_t          EcalLumiSpecTruthClusterAssociations_recID[kMaxEcalLumiSpecTruthClusterAssociations];   //[EcalLumiSpecTruthClusterAssociations_]
   Float_t         EcalLumiSpecTruthClusterAssociations_weight[kMaxEcalLumiSpecTruthClusterAssociations];   //[EcalLumiSpecTruthClusterAssociations_]
   Int_t           _EcalLumiSpecTruthClusterAssociations_rec_;
   Int_t           _EcalLumiSpecTruthClusterAssociations_rec_index[kMax_EcalLumiSpecTruthClusterAssociations_rec];   //[_EcalLumiSpecTruthClusterAssociations_rec_]
   UInt_t          _EcalLumiSpecTruthClusterAssociations_rec_collectionID[kMax_EcalLumiSpecTruthClusterAssociations_rec];   //[_EcalLumiSpecTruthClusterAssociations_rec_]
   Int_t           _EcalLumiSpecTruthClusterAssociations_sim_;
   Int_t           _EcalLumiSpecTruthClusterAssociations_sim_index[kMax_EcalLumiSpecTruthClusterAssociations_sim];   //[_EcalLumiSpecTruthClusterAssociations_sim_]
   UInt_t          _EcalLumiSpecTruthClusterAssociations_sim_collectionID[kMax_EcalLumiSpecTruthClusterAssociations_sim];   //[_EcalLumiSpecTruthClusterAssociations_sim_]
   Int_t           EcalLumiSpecTruthClusters_;
   Int_t           EcalLumiSpecTruthClusters_type[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Float_t         EcalLumiSpecTruthClusters_energy[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Float_t         EcalLumiSpecTruthClusters_energyError[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Float_t         EcalLumiSpecTruthClusters_time[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Float_t         EcalLumiSpecTruthClusters_timeError[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   UInt_t          EcalLumiSpecTruthClusters_nhits[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Float_t         EcalLumiSpecTruthClusters_position_x[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Float_t         EcalLumiSpecTruthClusters_position_y[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Float_t         EcalLumiSpecTruthClusters_position_z[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Float_t         EcalLumiSpecTruthClusters_positionError_xx[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Float_t         EcalLumiSpecTruthClusters_positionError_yy[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Float_t         EcalLumiSpecTruthClusters_positionError_zz[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Float_t         EcalLumiSpecTruthClusters_positionError_xy[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Float_t         EcalLumiSpecTruthClusters_positionError_xz[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Float_t         EcalLumiSpecTruthClusters_positionError_yz[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Float_t         EcalLumiSpecTruthClusters_intrinsicTheta[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Float_t         EcalLumiSpecTruthClusters_intrinsicPhi[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Float_t         EcalLumiSpecTruthClusters_intrinsicDirectionError_xx[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Float_t         EcalLumiSpecTruthClusters_intrinsicDirectionError_yy[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Float_t         EcalLumiSpecTruthClusters_intrinsicDirectionError_xy[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   UInt_t          EcalLumiSpecTruthClusters_shapeParameters_begin[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   UInt_t          EcalLumiSpecTruthClusters_shapeParameters_end[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   UInt_t          EcalLumiSpecTruthClusters_hitContributions_begin[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   UInt_t          EcalLumiSpecTruthClusters_hitContributions_end[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   UInt_t          EcalLumiSpecTruthClusters_subdetectorEnergies_begin[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   UInt_t          EcalLumiSpecTruthClusters_subdetectorEnergies_end[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   UInt_t          EcalLumiSpecTruthClusters_clusters_begin[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   UInt_t          EcalLumiSpecTruthClusters_clusters_end[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   UInt_t          EcalLumiSpecTruthClusters_hits_begin[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   UInt_t          EcalLumiSpecTruthClusters_hits_end[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   UInt_t          EcalLumiSpecTruthClusters_particleIDs_begin[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   UInt_t          EcalLumiSpecTruthClusters_particleIDs_end[kMaxEcalLumiSpecTruthClusters];   //[EcalLumiSpecTruthClusters_]
   Int_t           _EcalLumiSpecTruthClusters_clusters_;
   Int_t           _EcalLumiSpecTruthClusters_clusters_index[kMax_EcalLumiSpecTruthClusters_clusters];   //[_EcalLumiSpecTruthClusters_clusters_]
   UInt_t          _EcalLumiSpecTruthClusters_clusters_collectionID[kMax_EcalLumiSpecTruthClusters_clusters];   //[_EcalLumiSpecTruthClusters_clusters_]
   Int_t           _EcalLumiSpecTruthClusters_hits_;
   Int_t           _EcalLumiSpecTruthClusters_hits_index[kMax_EcalLumiSpecTruthClusters_hits];   //[_EcalLumiSpecTruthClusters_hits_]
   UInt_t          _EcalLumiSpecTruthClusters_hits_collectionID[kMax_EcalLumiSpecTruthClusters_hits];   //[_EcalLumiSpecTruthClusters_hits_]
   Int_t           _EcalLumiSpecTruthClusters_particleIDs_;
   Int_t           _EcalLumiSpecTruthClusters_particleIDs_index[kMax_EcalLumiSpecTruthClusters_particleIDs];   //[_EcalLumiSpecTruthClusters_particleIDs_]
   UInt_t          _EcalLumiSpecTruthClusters_particleIDs_collectionID[kMax_EcalLumiSpecTruthClusters_particleIDs];   //[_EcalLumiSpecTruthClusters_particleIDs_]
   vector<float>   *_EcalLumiSpecTruthClusters_shapeParameters;
   vector<float>   *_EcalLumiSpecTruthClusters_hitContributions;
   vector<float>   *_EcalLumiSpecTruthClusters_subdetectorEnergies;
   Int_t           EventHeader_;
   Int_t           EventHeader_eventNumber[kMaxEventHeader];   //[EventHeader_]
   Int_t           EventHeader_runNumber[kMaxEventHeader];   //[EventHeader_]
   ULong_t         EventHeader_timeStamp[kMaxEventHeader];   //[EventHeader_]
   Float_t         EventHeader_weight[kMaxEventHeader];   //[EventHeader_]
   Int_t           ForwardMPGDEndcapRecHits_;
   ULong_t         ForwardMPGDEndcapRecHits_cellID[kMaxForwardMPGDEndcapRecHits];   //[ForwardMPGDEndcapRecHits_]
   Float_t         ForwardMPGDEndcapRecHits_position_x[kMaxForwardMPGDEndcapRecHits];   //[ForwardMPGDEndcapRecHits_]
   Float_t         ForwardMPGDEndcapRecHits_position_y[kMaxForwardMPGDEndcapRecHits];   //[ForwardMPGDEndcapRecHits_]
   Float_t         ForwardMPGDEndcapRecHits_position_z[kMaxForwardMPGDEndcapRecHits];   //[ForwardMPGDEndcapRecHits_]
   Float_t         ForwardMPGDEndcapRecHits_positionError_xx[kMaxForwardMPGDEndcapRecHits];   //[ForwardMPGDEndcapRecHits_]
   Float_t         ForwardMPGDEndcapRecHits_positionError_yy[kMaxForwardMPGDEndcapRecHits];   //[ForwardMPGDEndcapRecHits_]
   Float_t         ForwardMPGDEndcapRecHits_positionError_zz[kMaxForwardMPGDEndcapRecHits];   //[ForwardMPGDEndcapRecHits_]
   Float_t         ForwardMPGDEndcapRecHits_time[kMaxForwardMPGDEndcapRecHits];   //[ForwardMPGDEndcapRecHits_]
   Float_t         ForwardMPGDEndcapRecHits_timeError[kMaxForwardMPGDEndcapRecHits];   //[ForwardMPGDEndcapRecHits_]
   Float_t         ForwardMPGDEndcapRecHits_edep[kMaxForwardMPGDEndcapRecHits];   //[ForwardMPGDEndcapRecHits_]
   Float_t         ForwardMPGDEndcapRecHits_edepError[kMaxForwardMPGDEndcapRecHits];   //[ForwardMPGDEndcapRecHits_]
   Int_t           ForwardOffMRecParticles_;
   Int_t           ForwardOffMRecParticles_type[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_energy[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_momentum_x[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_momentum_y[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_momentum_z[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_referencePoint_x[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_referencePoint_y[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_referencePoint_z[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_charge[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_mass[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_goodnessOfPID[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_covMatrix_xx[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_covMatrix_yy[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_covMatrix_zz[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_covMatrix_tt[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_covMatrix_xy[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_covMatrix_xz[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_covMatrix_xt[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_covMatrix_yz[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_covMatrix_yt[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Float_t         ForwardOffMRecParticles_covMatrix_zt[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Int_t           ForwardOffMRecParticles_PDG[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   UInt_t          ForwardOffMRecParticles_clusters_begin[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   UInt_t          ForwardOffMRecParticles_clusters_end[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   UInt_t          ForwardOffMRecParticles_tracks_begin[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   UInt_t          ForwardOffMRecParticles_tracks_end[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   UInt_t          ForwardOffMRecParticles_particles_begin[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   UInt_t          ForwardOffMRecParticles_particles_end[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   UInt_t          ForwardOffMRecParticles_particleIDs_begin[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   UInt_t          ForwardOffMRecParticles_particleIDs_end[kMaxForwardOffMRecParticles];   //[ForwardOffMRecParticles_]
   Int_t           _ForwardOffMRecParticles_clusters_;
   Int_t           _ForwardOffMRecParticles_clusters_index[kMax_ForwardOffMRecParticles_clusters];   //[_ForwardOffMRecParticles_clusters_]
   UInt_t          _ForwardOffMRecParticles_clusters_collectionID[kMax_ForwardOffMRecParticles_clusters];   //[_ForwardOffMRecParticles_clusters_]
   Int_t           _ForwardOffMRecParticles_tracks_;
   Int_t           _ForwardOffMRecParticles_tracks_index[kMax_ForwardOffMRecParticles_tracks];   //[_ForwardOffMRecParticles_tracks_]
   UInt_t          _ForwardOffMRecParticles_tracks_collectionID[kMax_ForwardOffMRecParticles_tracks];   //[_ForwardOffMRecParticles_tracks_]
   Int_t           _ForwardOffMRecParticles_particles_;
   Int_t           _ForwardOffMRecParticles_particles_index[kMax_ForwardOffMRecParticles_particles];   //[_ForwardOffMRecParticles_particles_]
   UInt_t          _ForwardOffMRecParticles_particles_collectionID[kMax_ForwardOffMRecParticles_particles];   //[_ForwardOffMRecParticles_particles_]
   Int_t           _ForwardOffMRecParticles_particleIDs_;
   Int_t           _ForwardOffMRecParticles_particleIDs_index[kMax_ForwardOffMRecParticles_particleIDs];   //[_ForwardOffMRecParticles_particleIDs_]
   UInt_t          _ForwardOffMRecParticles_particleIDs_collectionID[kMax_ForwardOffMRecParticles_particleIDs];   //[_ForwardOffMRecParticles_particleIDs_]
   Int_t           _ForwardOffMRecParticles_startVertex_;
   Int_t           _ForwardOffMRecParticles_startVertex_index[kMax_ForwardOffMRecParticles_startVertex];   //[_ForwardOffMRecParticles_startVertex_]
   UInt_t          _ForwardOffMRecParticles_startVertex_collectionID[kMax_ForwardOffMRecParticles_startVertex];   //[_ForwardOffMRecParticles_startVertex_]
   Int_t           _ForwardOffMRecParticles_particleIDUsed_;
   Int_t           _ForwardOffMRecParticles_particleIDUsed_index[kMax_ForwardOffMRecParticles_particleIDUsed];   //[_ForwardOffMRecParticles_particleIDUsed_]
   UInt_t          _ForwardOffMRecParticles_particleIDUsed_collectionID[kMax_ForwardOffMRecParticles_particleIDUsed];   //[_ForwardOffMRecParticles_particleIDUsed_]
   Int_t           ForwardRomanPotRecParticles_;
   Int_t           ForwardRomanPotRecParticles_type[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_energy[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_momentum_x[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_momentum_y[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_momentum_z[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_referencePoint_x[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_referencePoint_y[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_referencePoint_z[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_charge[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_mass[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_goodnessOfPID[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_covMatrix_xx[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_covMatrix_yy[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_covMatrix_zz[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_covMatrix_tt[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_covMatrix_xy[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_covMatrix_xz[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_covMatrix_xt[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_covMatrix_yz[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_covMatrix_yt[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Float_t         ForwardRomanPotRecParticles_covMatrix_zt[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Int_t           ForwardRomanPotRecParticles_PDG[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   UInt_t          ForwardRomanPotRecParticles_clusters_begin[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   UInt_t          ForwardRomanPotRecParticles_clusters_end[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   UInt_t          ForwardRomanPotRecParticles_tracks_begin[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   UInt_t          ForwardRomanPotRecParticles_tracks_end[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   UInt_t          ForwardRomanPotRecParticles_particles_begin[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   UInt_t          ForwardRomanPotRecParticles_particles_end[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   UInt_t          ForwardRomanPotRecParticles_particleIDs_begin[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   UInt_t          ForwardRomanPotRecParticles_particleIDs_end[kMaxForwardRomanPotRecParticles];   //[ForwardRomanPotRecParticles_]
   Int_t           _ForwardRomanPotRecParticles_clusters_;
   Int_t           _ForwardRomanPotRecParticles_clusters_index[kMax_ForwardRomanPotRecParticles_clusters];   //[_ForwardRomanPotRecParticles_clusters_]
   UInt_t          _ForwardRomanPotRecParticles_clusters_collectionID[kMax_ForwardRomanPotRecParticles_clusters];   //[_ForwardRomanPotRecParticles_clusters_]
   Int_t           _ForwardRomanPotRecParticles_tracks_;
   Int_t           _ForwardRomanPotRecParticles_tracks_index[kMax_ForwardRomanPotRecParticles_tracks];   //[_ForwardRomanPotRecParticles_tracks_]
   UInt_t          _ForwardRomanPotRecParticles_tracks_collectionID[kMax_ForwardRomanPotRecParticles_tracks];   //[_ForwardRomanPotRecParticles_tracks_]
   Int_t           _ForwardRomanPotRecParticles_particles_;
   Int_t           _ForwardRomanPotRecParticles_particles_index[kMax_ForwardRomanPotRecParticles_particles];   //[_ForwardRomanPotRecParticles_particles_]
   UInt_t          _ForwardRomanPotRecParticles_particles_collectionID[kMax_ForwardRomanPotRecParticles_particles];   //[_ForwardRomanPotRecParticles_particles_]
   Int_t           _ForwardRomanPotRecParticles_particleIDs_;
   Int_t           _ForwardRomanPotRecParticles_particleIDs_index[kMax_ForwardRomanPotRecParticles_particleIDs];   //[_ForwardRomanPotRecParticles_particleIDs_]
   UInt_t          _ForwardRomanPotRecParticles_particleIDs_collectionID[kMax_ForwardRomanPotRecParticles_particleIDs];   //[_ForwardRomanPotRecParticles_particleIDs_]
   Int_t           _ForwardRomanPotRecParticles_startVertex_;
   Int_t           _ForwardRomanPotRecParticles_startVertex_index[kMax_ForwardRomanPotRecParticles_startVertex];   //[_ForwardRomanPotRecParticles_startVertex_]
   UInt_t          _ForwardRomanPotRecParticles_startVertex_collectionID[kMax_ForwardRomanPotRecParticles_startVertex];   //[_ForwardRomanPotRecParticles_startVertex_]
   Int_t           _ForwardRomanPotRecParticles_particleIDUsed_;
   Int_t           _ForwardRomanPotRecParticles_particleIDUsed_index[kMax_ForwardRomanPotRecParticles_particleIDUsed];   //[_ForwardRomanPotRecParticles_particleIDUsed_]
   UInt_t          _ForwardRomanPotRecParticles_particleIDUsed_collectionID[kMax_ForwardRomanPotRecParticles_particleIDUsed];   //[_ForwardRomanPotRecParticles_particleIDUsed_]
   Int_t           GeneratedChargedJets_;
   Int_t           GeneratedChargedJets_type[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_energy[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_momentum_x[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_momentum_y[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_momentum_z[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_referencePoint_x[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_referencePoint_y[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_referencePoint_z[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_charge[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_mass[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_goodnessOfPID[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_covMatrix_xx[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_covMatrix_yy[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_covMatrix_zz[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_covMatrix_tt[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_covMatrix_xy[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_covMatrix_xz[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_covMatrix_xt[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_covMatrix_yz[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_covMatrix_yt[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Float_t         GeneratedChargedJets_covMatrix_zt[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Int_t           GeneratedChargedJets_PDG[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   UInt_t          GeneratedChargedJets_clusters_begin[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   UInt_t          GeneratedChargedJets_clusters_end[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   UInt_t          GeneratedChargedJets_tracks_begin[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   UInt_t          GeneratedChargedJets_tracks_end[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   UInt_t          GeneratedChargedJets_particles_begin[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   UInt_t          GeneratedChargedJets_particles_end[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   UInt_t          GeneratedChargedJets_particleIDs_begin[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   UInt_t          GeneratedChargedJets_particleIDs_end[kMaxGeneratedChargedJets];   //[GeneratedChargedJets_]
   Int_t           _GeneratedChargedJets_clusters_;
   Int_t           _GeneratedChargedJets_clusters_index[kMax_GeneratedChargedJets_clusters];   //[_GeneratedChargedJets_clusters_]
   UInt_t          _GeneratedChargedJets_clusters_collectionID[kMax_GeneratedChargedJets_clusters];   //[_GeneratedChargedJets_clusters_]
   Int_t           _GeneratedChargedJets_tracks_;
   Int_t           _GeneratedChargedJets_tracks_index[kMax_GeneratedChargedJets_tracks];   //[_GeneratedChargedJets_tracks_]
   UInt_t          _GeneratedChargedJets_tracks_collectionID[kMax_GeneratedChargedJets_tracks];   //[_GeneratedChargedJets_tracks_]
   Int_t           _GeneratedChargedJets_particles_;
   Int_t           _GeneratedChargedJets_particles_index[kMax_GeneratedChargedJets_particles];   //[_GeneratedChargedJets_particles_]
   UInt_t          _GeneratedChargedJets_particles_collectionID[kMax_GeneratedChargedJets_particles];   //[_GeneratedChargedJets_particles_]
   Int_t           _GeneratedChargedJets_particleIDs_;
   Int_t           _GeneratedChargedJets_particleIDs_index[kMax_GeneratedChargedJets_particleIDs];   //[_GeneratedChargedJets_particleIDs_]
   UInt_t          _GeneratedChargedJets_particleIDs_collectionID[kMax_GeneratedChargedJets_particleIDs];   //[_GeneratedChargedJets_particleIDs_]
   Int_t           _GeneratedChargedJets_startVertex_;
   Int_t           _GeneratedChargedJets_startVertex_index[kMax_GeneratedChargedJets_startVertex];   //[_GeneratedChargedJets_startVertex_]
   UInt_t          _GeneratedChargedJets_startVertex_collectionID[kMax_GeneratedChargedJets_startVertex];   //[_GeneratedChargedJets_startVertex_]
   Int_t           _GeneratedChargedJets_particleIDUsed_;
   Int_t           _GeneratedChargedJets_particleIDUsed_index[kMax_GeneratedChargedJets_particleIDUsed];   //[_GeneratedChargedJets_particleIDUsed_]
   UInt_t          _GeneratedChargedJets_particleIDUsed_collectionID[kMax_GeneratedChargedJets_particleIDUsed];   //[_GeneratedChargedJets_particleIDUsed_]
   Int_t           GeneratedJets_;
   Int_t           GeneratedJets_type[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_energy[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_momentum_x[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_momentum_y[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_momentum_z[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_referencePoint_x[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_referencePoint_y[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_referencePoint_z[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_charge[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_mass[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_goodnessOfPID[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_covMatrix_xx[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_covMatrix_yy[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_covMatrix_zz[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_covMatrix_tt[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_covMatrix_xy[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_covMatrix_xz[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_covMatrix_xt[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_covMatrix_yz[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_covMatrix_yt[kMaxGeneratedJets];   //[GeneratedJets_]
   Float_t         GeneratedJets_covMatrix_zt[kMaxGeneratedJets];   //[GeneratedJets_]
   Int_t           GeneratedJets_PDG[kMaxGeneratedJets];   //[GeneratedJets_]
   UInt_t          GeneratedJets_clusters_begin[kMaxGeneratedJets];   //[GeneratedJets_]
   UInt_t          GeneratedJets_clusters_end[kMaxGeneratedJets];   //[GeneratedJets_]
   UInt_t          GeneratedJets_tracks_begin[kMaxGeneratedJets];   //[GeneratedJets_]
   UInt_t          GeneratedJets_tracks_end[kMaxGeneratedJets];   //[GeneratedJets_]
   UInt_t          GeneratedJets_particles_begin[kMaxGeneratedJets];   //[GeneratedJets_]
   UInt_t          GeneratedJets_particles_end[kMaxGeneratedJets];   //[GeneratedJets_]
   UInt_t          GeneratedJets_particleIDs_begin[kMaxGeneratedJets];   //[GeneratedJets_]
   UInt_t          GeneratedJets_particleIDs_end[kMaxGeneratedJets];   //[GeneratedJets_]
   Int_t           _GeneratedJets_clusters_;
   Int_t           _GeneratedJets_clusters_index[kMax_GeneratedJets_clusters];   //[_GeneratedJets_clusters_]
   UInt_t          _GeneratedJets_clusters_collectionID[kMax_GeneratedJets_clusters];   //[_GeneratedJets_clusters_]
   Int_t           _GeneratedJets_tracks_;
   Int_t           _GeneratedJets_tracks_index[kMax_GeneratedJets_tracks];   //[_GeneratedJets_tracks_]
   UInt_t          _GeneratedJets_tracks_collectionID[kMax_GeneratedJets_tracks];   //[_GeneratedJets_tracks_]
   Int_t           _GeneratedJets_particles_;
   Int_t           _GeneratedJets_particles_index[kMax_GeneratedJets_particles];   //[_GeneratedJets_particles_]
   UInt_t          _GeneratedJets_particles_collectionID[kMax_GeneratedJets_particles];   //[_GeneratedJets_particles_]
   Int_t           _GeneratedJets_particleIDs_;
   Int_t           _GeneratedJets_particleIDs_index[kMax_GeneratedJets_particleIDs];   //[_GeneratedJets_particleIDs_]
   UInt_t          _GeneratedJets_particleIDs_collectionID[kMax_GeneratedJets_particleIDs];   //[_GeneratedJets_particleIDs_]
   Int_t           _GeneratedJets_startVertex_;
   Int_t           _GeneratedJets_startVertex_index[kMax_GeneratedJets_startVertex];   //[_GeneratedJets_startVertex_]
   UInt_t          _GeneratedJets_startVertex_collectionID[kMax_GeneratedJets_startVertex];   //[_GeneratedJets_startVertex_]
   Int_t           _GeneratedJets_particleIDUsed_;
   Int_t           _GeneratedJets_particleIDUsed_index[kMax_GeneratedJets_particleIDUsed];   //[_GeneratedJets_particleIDUsed_]
   UInt_t          _GeneratedJets_particleIDUsed_collectionID[kMax_GeneratedJets_particleIDUsed];   //[_GeneratedJets_particleIDUsed_]
   Int_t           GeneratedParticles_;
   Int_t           GeneratedParticles_type[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_energy[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_momentum_x[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_momentum_y[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_momentum_z[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_referencePoint_x[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_referencePoint_y[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_referencePoint_z[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_charge[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_mass[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_goodnessOfPID[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_covMatrix_xx[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_covMatrix_yy[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_covMatrix_zz[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_covMatrix_tt[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_covMatrix_xy[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_covMatrix_xz[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_covMatrix_xt[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_covMatrix_yz[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_covMatrix_yt[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Float_t         GeneratedParticles_covMatrix_zt[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Int_t           GeneratedParticles_PDG[kMaxGeneratedParticles];   //[GeneratedParticles_]
   UInt_t          GeneratedParticles_clusters_begin[kMaxGeneratedParticles];   //[GeneratedParticles_]
   UInt_t          GeneratedParticles_clusters_end[kMaxGeneratedParticles];   //[GeneratedParticles_]
   UInt_t          GeneratedParticles_tracks_begin[kMaxGeneratedParticles];   //[GeneratedParticles_]
   UInt_t          GeneratedParticles_tracks_end[kMaxGeneratedParticles];   //[GeneratedParticles_]
   UInt_t          GeneratedParticles_particles_begin[kMaxGeneratedParticles];   //[GeneratedParticles_]
   UInt_t          GeneratedParticles_particles_end[kMaxGeneratedParticles];   //[GeneratedParticles_]
   UInt_t          GeneratedParticles_particleIDs_begin[kMaxGeneratedParticles];   //[GeneratedParticles_]
   UInt_t          GeneratedParticles_particleIDs_end[kMaxGeneratedParticles];   //[GeneratedParticles_]
   Int_t           _GeneratedParticles_clusters_;
   Int_t           _GeneratedParticles_clusters_index[kMax_GeneratedParticles_clusters];   //[_GeneratedParticles_clusters_]
   UInt_t          _GeneratedParticles_clusters_collectionID[kMax_GeneratedParticles_clusters];   //[_GeneratedParticles_clusters_]
   Int_t           _GeneratedParticles_tracks_;
   Int_t           _GeneratedParticles_tracks_index[kMax_GeneratedParticles_tracks];   //[_GeneratedParticles_tracks_]
   UInt_t          _GeneratedParticles_tracks_collectionID[kMax_GeneratedParticles_tracks];   //[_GeneratedParticles_tracks_]
   Int_t           _GeneratedParticles_particles_;
   Int_t           _GeneratedParticles_particles_index[kMax_GeneratedParticles_particles];   //[_GeneratedParticles_particles_]
   UInt_t          _GeneratedParticles_particles_collectionID[kMax_GeneratedParticles_particles];   //[_GeneratedParticles_particles_]
   Int_t           _GeneratedParticles_particleIDs_;
   Int_t           _GeneratedParticles_particleIDs_index[kMax_GeneratedParticles_particleIDs];   //[_GeneratedParticles_particleIDs_]
   UInt_t          _GeneratedParticles_particleIDs_collectionID[kMax_GeneratedParticles_particleIDs];   //[_GeneratedParticles_particleIDs_]
   Int_t           _GeneratedParticles_startVertex_;
   Int_t           _GeneratedParticles_startVertex_index[kMax_GeneratedParticles_startVertex];   //[_GeneratedParticles_startVertex_]
   UInt_t          _GeneratedParticles_startVertex_collectionID[kMax_GeneratedParticles_startVertex];   //[_GeneratedParticles_startVertex_]
   Int_t           _GeneratedParticles_particleIDUsed_;
   Int_t           _GeneratedParticles_particleIDUsed_index[kMax_GeneratedParticles_particleIDUsed];   //[_GeneratedParticles_particleIDUsed_]
   UInt_t          _GeneratedParticles_particleIDUsed_collectionID[kMax_GeneratedParticles_particleIDUsed];   //[_GeneratedParticles_particleIDUsed_]
   Int_t           HcalBarrelClusterAssociations_;
   UInt_t          HcalBarrelClusterAssociations_simID[kMaxHcalBarrelClusterAssociations];   //[HcalBarrelClusterAssociations_]
   UInt_t          HcalBarrelClusterAssociations_recID[kMaxHcalBarrelClusterAssociations];   //[HcalBarrelClusterAssociations_]
   Float_t         HcalBarrelClusterAssociations_weight[kMaxHcalBarrelClusterAssociations];   //[HcalBarrelClusterAssociations_]
   Int_t           _HcalBarrelClusterAssociations_rec_;
   Int_t           _HcalBarrelClusterAssociations_rec_index[kMax_HcalBarrelClusterAssociations_rec];   //[_HcalBarrelClusterAssociations_rec_]
   UInt_t          _HcalBarrelClusterAssociations_rec_collectionID[kMax_HcalBarrelClusterAssociations_rec];   //[_HcalBarrelClusterAssociations_rec_]
   Int_t           _HcalBarrelClusterAssociations_sim_;
   Int_t           _HcalBarrelClusterAssociations_sim_index[kMax_HcalBarrelClusterAssociations_sim];   //[_HcalBarrelClusterAssociations_sim_]
   UInt_t          _HcalBarrelClusterAssociations_sim_collectionID[kMax_HcalBarrelClusterAssociations_sim];   //[_HcalBarrelClusterAssociations_sim_]
   Int_t           HcalBarrelClusters_;
   Int_t           HcalBarrelClusters_type[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Float_t         HcalBarrelClusters_energy[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Float_t         HcalBarrelClusters_energyError[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Float_t         HcalBarrelClusters_time[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Float_t         HcalBarrelClusters_timeError[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   UInt_t          HcalBarrelClusters_nhits[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Float_t         HcalBarrelClusters_position_x[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Float_t         HcalBarrelClusters_position_y[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Float_t         HcalBarrelClusters_position_z[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Float_t         HcalBarrelClusters_positionError_xx[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Float_t         HcalBarrelClusters_positionError_yy[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Float_t         HcalBarrelClusters_positionError_zz[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Float_t         HcalBarrelClusters_positionError_xy[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Float_t         HcalBarrelClusters_positionError_xz[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Float_t         HcalBarrelClusters_positionError_yz[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Float_t         HcalBarrelClusters_intrinsicTheta[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Float_t         HcalBarrelClusters_intrinsicPhi[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Float_t         HcalBarrelClusters_intrinsicDirectionError_xx[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Float_t         HcalBarrelClusters_intrinsicDirectionError_yy[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Float_t         HcalBarrelClusters_intrinsicDirectionError_xy[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   UInt_t          HcalBarrelClusters_shapeParameters_begin[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   UInt_t          HcalBarrelClusters_shapeParameters_end[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   UInt_t          HcalBarrelClusters_hitContributions_begin[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   UInt_t          HcalBarrelClusters_hitContributions_end[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   UInt_t          HcalBarrelClusters_subdetectorEnergies_begin[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   UInt_t          HcalBarrelClusters_subdetectorEnergies_end[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   UInt_t          HcalBarrelClusters_clusters_begin[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   UInt_t          HcalBarrelClusters_clusters_end[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   UInt_t          HcalBarrelClusters_hits_begin[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   UInt_t          HcalBarrelClusters_hits_end[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   UInt_t          HcalBarrelClusters_particleIDs_begin[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   UInt_t          HcalBarrelClusters_particleIDs_end[kMaxHcalBarrelClusters];   //[HcalBarrelClusters_]
   Int_t           _HcalBarrelClusters_clusters_;
   Int_t           _HcalBarrelClusters_clusters_index[kMax_HcalBarrelClusters_clusters];   //[_HcalBarrelClusters_clusters_]
   UInt_t          _HcalBarrelClusters_clusters_collectionID[kMax_HcalBarrelClusters_clusters];   //[_HcalBarrelClusters_clusters_]
   Int_t           _HcalBarrelClusters_hits_;
   Int_t           _HcalBarrelClusters_hits_index[kMax_HcalBarrelClusters_hits];   //[_HcalBarrelClusters_hits_]
   UInt_t          _HcalBarrelClusters_hits_collectionID[kMax_HcalBarrelClusters_hits];   //[_HcalBarrelClusters_hits_]
   Int_t           _HcalBarrelClusters_particleIDs_;
   Int_t           _HcalBarrelClusters_particleIDs_index[kMax_HcalBarrelClusters_particleIDs];   //[_HcalBarrelClusters_particleIDs_]
   UInt_t          _HcalBarrelClusters_particleIDs_collectionID[kMax_HcalBarrelClusters_particleIDs];   //[_HcalBarrelClusters_particleIDs_]
   vector<float>   *_HcalBarrelClusters_shapeParameters;
   vector<float>   *_HcalBarrelClusters_hitContributions;
   vector<float>   *_HcalBarrelClusters_subdetectorEnergies;
   Int_t           HcalBarrelRawHits_;
   ULong_t         HcalBarrelRawHits_cellID[kMaxHcalBarrelRawHits];   //[HcalBarrelRawHits_]
   Int_t           HcalBarrelRawHits_amplitude[kMaxHcalBarrelRawHits];   //[HcalBarrelRawHits_]
   Int_t           HcalBarrelRawHits_timeStamp[kMaxHcalBarrelRawHits];   //[HcalBarrelRawHits_]
   Int_t           HcalBarrelRecHits_;
   ULong_t         HcalBarrelRecHits_cellID[kMaxHcalBarrelRecHits];   //[HcalBarrelRecHits_]
   Float_t         HcalBarrelRecHits_energy[kMaxHcalBarrelRecHits];   //[HcalBarrelRecHits_]
   Float_t         HcalBarrelRecHits_energyError[kMaxHcalBarrelRecHits];   //[HcalBarrelRecHits_]
   Float_t         HcalBarrelRecHits_time[kMaxHcalBarrelRecHits];   //[HcalBarrelRecHits_]
   Float_t         HcalBarrelRecHits_timeError[kMaxHcalBarrelRecHits];   //[HcalBarrelRecHits_]
   Float_t         HcalBarrelRecHits_position_x[kMaxHcalBarrelRecHits];   //[HcalBarrelRecHits_]
   Float_t         HcalBarrelRecHits_position_y[kMaxHcalBarrelRecHits];   //[HcalBarrelRecHits_]
   Float_t         HcalBarrelRecHits_position_z[kMaxHcalBarrelRecHits];   //[HcalBarrelRecHits_]
   Float_t         HcalBarrelRecHits_dimension_x[kMaxHcalBarrelRecHits];   //[HcalBarrelRecHits_]
   Float_t         HcalBarrelRecHits_dimension_y[kMaxHcalBarrelRecHits];   //[HcalBarrelRecHits_]
   Float_t         HcalBarrelRecHits_dimension_z[kMaxHcalBarrelRecHits];   //[HcalBarrelRecHits_]
   Int_t           HcalBarrelRecHits_sector[kMaxHcalBarrelRecHits];   //[HcalBarrelRecHits_]
   Int_t           HcalBarrelRecHits_layer[kMaxHcalBarrelRecHits];   //[HcalBarrelRecHits_]
   Float_t         HcalBarrelRecHits_local_x[kMaxHcalBarrelRecHits];   //[HcalBarrelRecHits_]
   Float_t         HcalBarrelRecHits_local_y[kMaxHcalBarrelRecHits];   //[HcalBarrelRecHits_]
   Float_t         HcalBarrelRecHits_local_z[kMaxHcalBarrelRecHits];   //[HcalBarrelRecHits_]
   Int_t           HcalBarrelTruthClusterAssociations_;
   UInt_t          HcalBarrelTruthClusterAssociations_simID[kMaxHcalBarrelTruthClusterAssociations];   //[HcalBarrelTruthClusterAssociations_]
   UInt_t          HcalBarrelTruthClusterAssociations_recID[kMaxHcalBarrelTruthClusterAssociations];   //[HcalBarrelTruthClusterAssociations_]
   Float_t         HcalBarrelTruthClusterAssociations_weight[kMaxHcalBarrelTruthClusterAssociations];   //[HcalBarrelTruthClusterAssociations_]
   Int_t           _HcalBarrelTruthClusterAssociations_rec_;
   Int_t           _HcalBarrelTruthClusterAssociations_rec_index[kMax_HcalBarrelTruthClusterAssociations_rec];   //[_HcalBarrelTruthClusterAssociations_rec_]
   UInt_t          _HcalBarrelTruthClusterAssociations_rec_collectionID[kMax_HcalBarrelTruthClusterAssociations_rec];   //[_HcalBarrelTruthClusterAssociations_rec_]
   Int_t           _HcalBarrelTruthClusterAssociations_sim_;
   Int_t           _HcalBarrelTruthClusterAssociations_sim_index[kMax_HcalBarrelTruthClusterAssociations_sim];   //[_HcalBarrelTruthClusterAssociations_sim_]
   UInt_t          _HcalBarrelTruthClusterAssociations_sim_collectionID[kMax_HcalBarrelTruthClusterAssociations_sim];   //[_HcalBarrelTruthClusterAssociations_sim_]
   Int_t           HcalBarrelTruthClusters_;
   Int_t           HcalBarrelTruthClusters_type[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Float_t         HcalBarrelTruthClusters_energy[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Float_t         HcalBarrelTruthClusters_energyError[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Float_t         HcalBarrelTruthClusters_time[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Float_t         HcalBarrelTruthClusters_timeError[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   UInt_t          HcalBarrelTruthClusters_nhits[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Float_t         HcalBarrelTruthClusters_position_x[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Float_t         HcalBarrelTruthClusters_position_y[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Float_t         HcalBarrelTruthClusters_position_z[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Float_t         HcalBarrelTruthClusters_positionError_xx[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Float_t         HcalBarrelTruthClusters_positionError_yy[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Float_t         HcalBarrelTruthClusters_positionError_zz[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Float_t         HcalBarrelTruthClusters_positionError_xy[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Float_t         HcalBarrelTruthClusters_positionError_xz[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Float_t         HcalBarrelTruthClusters_positionError_yz[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Float_t         HcalBarrelTruthClusters_intrinsicTheta[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Float_t         HcalBarrelTruthClusters_intrinsicPhi[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Float_t         HcalBarrelTruthClusters_intrinsicDirectionError_xx[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Float_t         HcalBarrelTruthClusters_intrinsicDirectionError_yy[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Float_t         HcalBarrelTruthClusters_intrinsicDirectionError_xy[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   UInt_t          HcalBarrelTruthClusters_shapeParameters_begin[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   UInt_t          HcalBarrelTruthClusters_shapeParameters_end[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   UInt_t          HcalBarrelTruthClusters_hitContributions_begin[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   UInt_t          HcalBarrelTruthClusters_hitContributions_end[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   UInt_t          HcalBarrelTruthClusters_subdetectorEnergies_begin[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   UInt_t          HcalBarrelTruthClusters_subdetectorEnergies_end[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   UInt_t          HcalBarrelTruthClusters_clusters_begin[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   UInt_t          HcalBarrelTruthClusters_clusters_end[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   UInt_t          HcalBarrelTruthClusters_hits_begin[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   UInt_t          HcalBarrelTruthClusters_hits_end[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   UInt_t          HcalBarrelTruthClusters_particleIDs_begin[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   UInt_t          HcalBarrelTruthClusters_particleIDs_end[kMaxHcalBarrelTruthClusters];   //[HcalBarrelTruthClusters_]
   Int_t           _HcalBarrelTruthClusters_clusters_;
   Int_t           _HcalBarrelTruthClusters_clusters_index[kMax_HcalBarrelTruthClusters_clusters];   //[_HcalBarrelTruthClusters_clusters_]
   UInt_t          _HcalBarrelTruthClusters_clusters_collectionID[kMax_HcalBarrelTruthClusters_clusters];   //[_HcalBarrelTruthClusters_clusters_]
   Int_t           _HcalBarrelTruthClusters_hits_;
   Int_t           _HcalBarrelTruthClusters_hits_index[kMax_HcalBarrelTruthClusters_hits];   //[_HcalBarrelTruthClusters_hits_]
   UInt_t          _HcalBarrelTruthClusters_hits_collectionID[kMax_HcalBarrelTruthClusters_hits];   //[_HcalBarrelTruthClusters_hits_]
   Int_t           _HcalBarrelTruthClusters_particleIDs_;
   Int_t           _HcalBarrelTruthClusters_particleIDs_index[kMax_HcalBarrelTruthClusters_particleIDs];   //[_HcalBarrelTruthClusters_particleIDs_]
   UInt_t          _HcalBarrelTruthClusters_particleIDs_collectionID[kMax_HcalBarrelTruthClusters_particleIDs];   //[_HcalBarrelTruthClusters_particleIDs_]
   vector<float>   *_HcalBarrelTruthClusters_shapeParameters;
   vector<float>   *_HcalBarrelTruthClusters_hitContributions;
   vector<float>   *_HcalBarrelTruthClusters_subdetectorEnergies;
   Int_t           HcalEndcapNClusterAssociations_;
   UInt_t          HcalEndcapNClusterAssociations_simID[kMaxHcalEndcapNClusterAssociations];   //[HcalEndcapNClusterAssociations_]
   UInt_t          HcalEndcapNClusterAssociations_recID[kMaxHcalEndcapNClusterAssociations];   //[HcalEndcapNClusterAssociations_]
   Float_t         HcalEndcapNClusterAssociations_weight[kMaxHcalEndcapNClusterAssociations];   //[HcalEndcapNClusterAssociations_]
   Int_t           _HcalEndcapNClusterAssociations_rec_;
   Int_t           _HcalEndcapNClusterAssociations_rec_index[kMax_HcalEndcapNClusterAssociations_rec];   //[_HcalEndcapNClusterAssociations_rec_]
   UInt_t          _HcalEndcapNClusterAssociations_rec_collectionID[kMax_HcalEndcapNClusterAssociations_rec];   //[_HcalEndcapNClusterAssociations_rec_]
   Int_t           _HcalEndcapNClusterAssociations_sim_;
   Int_t           _HcalEndcapNClusterAssociations_sim_index[kMax_HcalEndcapNClusterAssociations_sim];   //[_HcalEndcapNClusterAssociations_sim_]
   UInt_t          _HcalEndcapNClusterAssociations_sim_collectionID[kMax_HcalEndcapNClusterAssociations_sim];   //[_HcalEndcapNClusterAssociations_sim_]
   Int_t           HcalEndcapNClusters_;
   Int_t           HcalEndcapNClusters_type[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Float_t         HcalEndcapNClusters_energy[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Float_t         HcalEndcapNClusters_energyError[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Float_t         HcalEndcapNClusters_time[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Float_t         HcalEndcapNClusters_timeError[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   UInt_t          HcalEndcapNClusters_nhits[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Float_t         HcalEndcapNClusters_position_x[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Float_t         HcalEndcapNClusters_position_y[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Float_t         HcalEndcapNClusters_position_z[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Float_t         HcalEndcapNClusters_positionError_xx[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Float_t         HcalEndcapNClusters_positionError_yy[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Float_t         HcalEndcapNClusters_positionError_zz[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Float_t         HcalEndcapNClusters_positionError_xy[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Float_t         HcalEndcapNClusters_positionError_xz[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Float_t         HcalEndcapNClusters_positionError_yz[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Float_t         HcalEndcapNClusters_intrinsicTheta[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Float_t         HcalEndcapNClusters_intrinsicPhi[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Float_t         HcalEndcapNClusters_intrinsicDirectionError_xx[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Float_t         HcalEndcapNClusters_intrinsicDirectionError_yy[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Float_t         HcalEndcapNClusters_intrinsicDirectionError_xy[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   UInt_t          HcalEndcapNClusters_shapeParameters_begin[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   UInt_t          HcalEndcapNClusters_shapeParameters_end[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   UInt_t          HcalEndcapNClusters_hitContributions_begin[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   UInt_t          HcalEndcapNClusters_hitContributions_end[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   UInt_t          HcalEndcapNClusters_subdetectorEnergies_begin[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   UInt_t          HcalEndcapNClusters_subdetectorEnergies_end[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   UInt_t          HcalEndcapNClusters_clusters_begin[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   UInt_t          HcalEndcapNClusters_clusters_end[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   UInt_t          HcalEndcapNClusters_hits_begin[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   UInt_t          HcalEndcapNClusters_hits_end[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   UInt_t          HcalEndcapNClusters_particleIDs_begin[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   UInt_t          HcalEndcapNClusters_particleIDs_end[kMaxHcalEndcapNClusters];   //[HcalEndcapNClusters_]
   Int_t           _HcalEndcapNClusters_clusters_;
   Int_t           _HcalEndcapNClusters_clusters_index[kMax_HcalEndcapNClusters_clusters];   //[_HcalEndcapNClusters_clusters_]
   UInt_t          _HcalEndcapNClusters_clusters_collectionID[kMax_HcalEndcapNClusters_clusters];   //[_HcalEndcapNClusters_clusters_]
   Int_t           _HcalEndcapNClusters_hits_;
   Int_t           _HcalEndcapNClusters_hits_index[kMax_HcalEndcapNClusters_hits];   //[_HcalEndcapNClusters_hits_]
   UInt_t          _HcalEndcapNClusters_hits_collectionID[kMax_HcalEndcapNClusters_hits];   //[_HcalEndcapNClusters_hits_]
   Int_t           _HcalEndcapNClusters_particleIDs_;
   Int_t           _HcalEndcapNClusters_particleIDs_index[kMax_HcalEndcapNClusters_particleIDs];   //[_HcalEndcapNClusters_particleIDs_]
   UInt_t          _HcalEndcapNClusters_particleIDs_collectionID[kMax_HcalEndcapNClusters_particleIDs];   //[_HcalEndcapNClusters_particleIDs_]
   vector<float>   *_HcalEndcapNClusters_shapeParameters;
   vector<float>   *_HcalEndcapNClusters_hitContributions;
   vector<float>   *_HcalEndcapNClusters_subdetectorEnergies;
   Int_t           HcalEndcapNMergedHits_;
   ULong_t         HcalEndcapNMergedHits_cellID[kMaxHcalEndcapNMergedHits];   //[HcalEndcapNMergedHits_]
   Float_t         HcalEndcapNMergedHits_energy[kMaxHcalEndcapNMergedHits];   //[HcalEndcapNMergedHits_]
   Float_t         HcalEndcapNMergedHits_energyError[kMaxHcalEndcapNMergedHits];   //[HcalEndcapNMergedHits_]
   Float_t         HcalEndcapNMergedHits_time[kMaxHcalEndcapNMergedHits];   //[HcalEndcapNMergedHits_]
   Float_t         HcalEndcapNMergedHits_timeError[kMaxHcalEndcapNMergedHits];   //[HcalEndcapNMergedHits_]
   Float_t         HcalEndcapNMergedHits_position_x[kMaxHcalEndcapNMergedHits];   //[HcalEndcapNMergedHits_]
   Float_t         HcalEndcapNMergedHits_position_y[kMaxHcalEndcapNMergedHits];   //[HcalEndcapNMergedHits_]
   Float_t         HcalEndcapNMergedHits_position_z[kMaxHcalEndcapNMergedHits];   //[HcalEndcapNMergedHits_]
   Float_t         HcalEndcapNMergedHits_dimension_x[kMaxHcalEndcapNMergedHits];   //[HcalEndcapNMergedHits_]
   Float_t         HcalEndcapNMergedHits_dimension_y[kMaxHcalEndcapNMergedHits];   //[HcalEndcapNMergedHits_]
   Float_t         HcalEndcapNMergedHits_dimension_z[kMaxHcalEndcapNMergedHits];   //[HcalEndcapNMergedHits_]
   Int_t           HcalEndcapNMergedHits_sector[kMaxHcalEndcapNMergedHits];   //[HcalEndcapNMergedHits_]
   Int_t           HcalEndcapNMergedHits_layer[kMaxHcalEndcapNMergedHits];   //[HcalEndcapNMergedHits_]
   Float_t         HcalEndcapNMergedHits_local_x[kMaxHcalEndcapNMergedHits];   //[HcalEndcapNMergedHits_]
   Float_t         HcalEndcapNMergedHits_local_y[kMaxHcalEndcapNMergedHits];   //[HcalEndcapNMergedHits_]
   Float_t         HcalEndcapNMergedHits_local_z[kMaxHcalEndcapNMergedHits];   //[HcalEndcapNMergedHits_]
   Int_t           HcalEndcapNRawHits_;
   ULong_t         HcalEndcapNRawHits_cellID[kMaxHcalEndcapNRawHits];   //[HcalEndcapNRawHits_]
   Int_t           HcalEndcapNRawHits_amplitude[kMaxHcalEndcapNRawHits];   //[HcalEndcapNRawHits_]
   Int_t           HcalEndcapNRawHits_timeStamp[kMaxHcalEndcapNRawHits];   //[HcalEndcapNRawHits_]
   Int_t           HcalEndcapNRecHits_;
   ULong_t         HcalEndcapNRecHits_cellID[kMaxHcalEndcapNRecHits];   //[HcalEndcapNRecHits_]
   Float_t         HcalEndcapNRecHits_energy[kMaxHcalEndcapNRecHits];   //[HcalEndcapNRecHits_]
   Float_t         HcalEndcapNRecHits_energyError[kMaxHcalEndcapNRecHits];   //[HcalEndcapNRecHits_]
   Float_t         HcalEndcapNRecHits_time[kMaxHcalEndcapNRecHits];   //[HcalEndcapNRecHits_]
   Float_t         HcalEndcapNRecHits_timeError[kMaxHcalEndcapNRecHits];   //[HcalEndcapNRecHits_]
   Float_t         HcalEndcapNRecHits_position_x[kMaxHcalEndcapNRecHits];   //[HcalEndcapNRecHits_]
   Float_t         HcalEndcapNRecHits_position_y[kMaxHcalEndcapNRecHits];   //[HcalEndcapNRecHits_]
   Float_t         HcalEndcapNRecHits_position_z[kMaxHcalEndcapNRecHits];   //[HcalEndcapNRecHits_]
   Float_t         HcalEndcapNRecHits_dimension_x[kMaxHcalEndcapNRecHits];   //[HcalEndcapNRecHits_]
   Float_t         HcalEndcapNRecHits_dimension_y[kMaxHcalEndcapNRecHits];   //[HcalEndcapNRecHits_]
   Float_t         HcalEndcapNRecHits_dimension_z[kMaxHcalEndcapNRecHits];   //[HcalEndcapNRecHits_]
   Int_t           HcalEndcapNRecHits_sector[kMaxHcalEndcapNRecHits];   //[HcalEndcapNRecHits_]
   Int_t           HcalEndcapNRecHits_layer[kMaxHcalEndcapNRecHits];   //[HcalEndcapNRecHits_]
   Float_t         HcalEndcapNRecHits_local_x[kMaxHcalEndcapNRecHits];   //[HcalEndcapNRecHits_]
   Float_t         HcalEndcapNRecHits_local_y[kMaxHcalEndcapNRecHits];   //[HcalEndcapNRecHits_]
   Float_t         HcalEndcapNRecHits_local_z[kMaxHcalEndcapNRecHits];   //[HcalEndcapNRecHits_]
   Int_t           HcalEndcapNTruthClusterAssociations_;
   UInt_t          HcalEndcapNTruthClusterAssociations_simID[kMaxHcalEndcapNTruthClusterAssociations];   //[HcalEndcapNTruthClusterAssociations_]
   UInt_t          HcalEndcapNTruthClusterAssociations_recID[kMaxHcalEndcapNTruthClusterAssociations];   //[HcalEndcapNTruthClusterAssociations_]
   Float_t         HcalEndcapNTruthClusterAssociations_weight[kMaxHcalEndcapNTruthClusterAssociations];   //[HcalEndcapNTruthClusterAssociations_]
   Int_t           _HcalEndcapNTruthClusterAssociations_rec_;
   Int_t           _HcalEndcapNTruthClusterAssociations_rec_index[kMax_HcalEndcapNTruthClusterAssociations_rec];   //[_HcalEndcapNTruthClusterAssociations_rec_]
   UInt_t          _HcalEndcapNTruthClusterAssociations_rec_collectionID[kMax_HcalEndcapNTruthClusterAssociations_rec];   //[_HcalEndcapNTruthClusterAssociations_rec_]
   Int_t           _HcalEndcapNTruthClusterAssociations_sim_;
   Int_t           _HcalEndcapNTruthClusterAssociations_sim_index[kMax_HcalEndcapNTruthClusterAssociations_sim];   //[_HcalEndcapNTruthClusterAssociations_sim_]
   UInt_t          _HcalEndcapNTruthClusterAssociations_sim_collectionID[kMax_HcalEndcapNTruthClusterAssociations_sim];   //[_HcalEndcapNTruthClusterAssociations_sim_]
   Int_t           HcalEndcapNTruthClusters_;
   Int_t           HcalEndcapNTruthClusters_type[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Float_t         HcalEndcapNTruthClusters_energy[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Float_t         HcalEndcapNTruthClusters_energyError[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Float_t         HcalEndcapNTruthClusters_time[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Float_t         HcalEndcapNTruthClusters_timeError[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   UInt_t          HcalEndcapNTruthClusters_nhits[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Float_t         HcalEndcapNTruthClusters_position_x[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Float_t         HcalEndcapNTruthClusters_position_y[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Float_t         HcalEndcapNTruthClusters_position_z[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Float_t         HcalEndcapNTruthClusters_positionError_xx[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Float_t         HcalEndcapNTruthClusters_positionError_yy[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Float_t         HcalEndcapNTruthClusters_positionError_zz[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Float_t         HcalEndcapNTruthClusters_positionError_xy[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Float_t         HcalEndcapNTruthClusters_positionError_xz[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Float_t         HcalEndcapNTruthClusters_positionError_yz[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Float_t         HcalEndcapNTruthClusters_intrinsicTheta[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Float_t         HcalEndcapNTruthClusters_intrinsicPhi[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Float_t         HcalEndcapNTruthClusters_intrinsicDirectionError_xx[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Float_t         HcalEndcapNTruthClusters_intrinsicDirectionError_yy[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Float_t         HcalEndcapNTruthClusters_intrinsicDirectionError_xy[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   UInt_t          HcalEndcapNTruthClusters_shapeParameters_begin[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   UInt_t          HcalEndcapNTruthClusters_shapeParameters_end[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   UInt_t          HcalEndcapNTruthClusters_hitContributions_begin[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   UInt_t          HcalEndcapNTruthClusters_hitContributions_end[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   UInt_t          HcalEndcapNTruthClusters_subdetectorEnergies_begin[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   UInt_t          HcalEndcapNTruthClusters_subdetectorEnergies_end[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   UInt_t          HcalEndcapNTruthClusters_clusters_begin[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   UInt_t          HcalEndcapNTruthClusters_clusters_end[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   UInt_t          HcalEndcapNTruthClusters_hits_begin[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   UInt_t          HcalEndcapNTruthClusters_hits_end[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   UInt_t          HcalEndcapNTruthClusters_particleIDs_begin[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   UInt_t          HcalEndcapNTruthClusters_particleIDs_end[kMaxHcalEndcapNTruthClusters];   //[HcalEndcapNTruthClusters_]
   Int_t           _HcalEndcapNTruthClusters_clusters_;
   Int_t           _HcalEndcapNTruthClusters_clusters_index[kMax_HcalEndcapNTruthClusters_clusters];   //[_HcalEndcapNTruthClusters_clusters_]
   UInt_t          _HcalEndcapNTruthClusters_clusters_collectionID[kMax_HcalEndcapNTruthClusters_clusters];   //[_HcalEndcapNTruthClusters_clusters_]
   Int_t           _HcalEndcapNTruthClusters_hits_;
   Int_t           _HcalEndcapNTruthClusters_hits_index[kMax_HcalEndcapNTruthClusters_hits];   //[_HcalEndcapNTruthClusters_hits_]
   UInt_t          _HcalEndcapNTruthClusters_hits_collectionID[kMax_HcalEndcapNTruthClusters_hits];   //[_HcalEndcapNTruthClusters_hits_]
   Int_t           _HcalEndcapNTruthClusters_particleIDs_;
   Int_t           _HcalEndcapNTruthClusters_particleIDs_index[kMax_HcalEndcapNTruthClusters_particleIDs];   //[_HcalEndcapNTruthClusters_particleIDs_]
   UInt_t          _HcalEndcapNTruthClusters_particleIDs_collectionID[kMax_HcalEndcapNTruthClusters_particleIDs];   //[_HcalEndcapNTruthClusters_particleIDs_]
   vector<float>   *_HcalEndcapNTruthClusters_shapeParameters;
   vector<float>   *_HcalEndcapNTruthClusters_hitContributions;
   vector<float>   *_HcalEndcapNTruthClusters_subdetectorEnergies;
   Int_t           HcalEndcapPInsertClusterAssociations_;
   UInt_t          HcalEndcapPInsertClusterAssociations_simID[kMaxHcalEndcapPInsertClusterAssociations];   //[HcalEndcapPInsertClusterAssociations_]
   UInt_t          HcalEndcapPInsertClusterAssociations_recID[kMaxHcalEndcapPInsertClusterAssociations];   //[HcalEndcapPInsertClusterAssociations_]
   Float_t         HcalEndcapPInsertClusterAssociations_weight[kMaxHcalEndcapPInsertClusterAssociations];   //[HcalEndcapPInsertClusterAssociations_]
   Int_t           _HcalEndcapPInsertClusterAssociations_rec_;
   Int_t           _HcalEndcapPInsertClusterAssociations_rec_index[kMax_HcalEndcapPInsertClusterAssociations_rec];   //[_HcalEndcapPInsertClusterAssociations_rec_]
   UInt_t          _HcalEndcapPInsertClusterAssociations_rec_collectionID[kMax_HcalEndcapPInsertClusterAssociations_rec];   //[_HcalEndcapPInsertClusterAssociations_rec_]
   Int_t           _HcalEndcapPInsertClusterAssociations_sim_;
   Int_t           _HcalEndcapPInsertClusterAssociations_sim_index[kMax_HcalEndcapPInsertClusterAssociations_sim];   //[_HcalEndcapPInsertClusterAssociations_sim_]
   UInt_t          _HcalEndcapPInsertClusterAssociations_sim_collectionID[kMax_HcalEndcapPInsertClusterAssociations_sim];   //[_HcalEndcapPInsertClusterAssociations_sim_]
   Int_t           HcalEndcapPInsertClusters_;
   Int_t           HcalEndcapPInsertClusters_type[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Float_t         HcalEndcapPInsertClusters_energy[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Float_t         HcalEndcapPInsertClusters_energyError[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Float_t         HcalEndcapPInsertClusters_time[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Float_t         HcalEndcapPInsertClusters_timeError[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   UInt_t          HcalEndcapPInsertClusters_nhits[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Float_t         HcalEndcapPInsertClusters_position_x[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Float_t         HcalEndcapPInsertClusters_position_y[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Float_t         HcalEndcapPInsertClusters_position_z[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Float_t         HcalEndcapPInsertClusters_positionError_xx[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Float_t         HcalEndcapPInsertClusters_positionError_yy[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Float_t         HcalEndcapPInsertClusters_positionError_zz[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Float_t         HcalEndcapPInsertClusters_positionError_xy[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Float_t         HcalEndcapPInsertClusters_positionError_xz[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Float_t         HcalEndcapPInsertClusters_positionError_yz[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Float_t         HcalEndcapPInsertClusters_intrinsicTheta[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Float_t         HcalEndcapPInsertClusters_intrinsicPhi[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Float_t         HcalEndcapPInsertClusters_intrinsicDirectionError_xx[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Float_t         HcalEndcapPInsertClusters_intrinsicDirectionError_yy[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Float_t         HcalEndcapPInsertClusters_intrinsicDirectionError_xy[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   UInt_t          HcalEndcapPInsertClusters_shapeParameters_begin[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   UInt_t          HcalEndcapPInsertClusters_shapeParameters_end[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   UInt_t          HcalEndcapPInsertClusters_hitContributions_begin[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   UInt_t          HcalEndcapPInsertClusters_hitContributions_end[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   UInt_t          HcalEndcapPInsertClusters_subdetectorEnergies_begin[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   UInt_t          HcalEndcapPInsertClusters_subdetectorEnergies_end[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   UInt_t          HcalEndcapPInsertClusters_clusters_begin[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   UInt_t          HcalEndcapPInsertClusters_clusters_end[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   UInt_t          HcalEndcapPInsertClusters_hits_begin[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   UInt_t          HcalEndcapPInsertClusters_hits_end[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   UInt_t          HcalEndcapPInsertClusters_particleIDs_begin[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   UInt_t          HcalEndcapPInsertClusters_particleIDs_end[kMaxHcalEndcapPInsertClusters];   //[HcalEndcapPInsertClusters_]
   Int_t           _HcalEndcapPInsertClusters_clusters_;
   Int_t           _HcalEndcapPInsertClusters_clusters_index[kMax_HcalEndcapPInsertClusters_clusters];   //[_HcalEndcapPInsertClusters_clusters_]
   UInt_t          _HcalEndcapPInsertClusters_clusters_collectionID[kMax_HcalEndcapPInsertClusters_clusters];   //[_HcalEndcapPInsertClusters_clusters_]
   Int_t           _HcalEndcapPInsertClusters_hits_;
   Int_t           _HcalEndcapPInsertClusters_hits_index[kMax_HcalEndcapPInsertClusters_hits];   //[_HcalEndcapPInsertClusters_hits_]
   UInt_t          _HcalEndcapPInsertClusters_hits_collectionID[kMax_HcalEndcapPInsertClusters_hits];   //[_HcalEndcapPInsertClusters_hits_]
   Int_t           _HcalEndcapPInsertClusters_particleIDs_;
   Int_t           _HcalEndcapPInsertClusters_particleIDs_index[kMax_HcalEndcapPInsertClusters_particleIDs];   //[_HcalEndcapPInsertClusters_particleIDs_]
   UInt_t          _HcalEndcapPInsertClusters_particleIDs_collectionID[kMax_HcalEndcapPInsertClusters_particleIDs];   //[_HcalEndcapPInsertClusters_particleIDs_]
   vector<float>   *_HcalEndcapPInsertClusters_shapeParameters;
   vector<float>   *_HcalEndcapPInsertClusters_hitContributions;
   vector<float>   *_HcalEndcapPInsertClusters_subdetectorEnergies;
   Int_t           HcalEndcapPInsertMergedHits_;
   ULong_t         HcalEndcapPInsertMergedHits_cellID[kMaxHcalEndcapPInsertMergedHits];   //[HcalEndcapPInsertMergedHits_]
   Float_t         HcalEndcapPInsertMergedHits_energy[kMaxHcalEndcapPInsertMergedHits];   //[HcalEndcapPInsertMergedHits_]
   Float_t         HcalEndcapPInsertMergedHits_energyError[kMaxHcalEndcapPInsertMergedHits];   //[HcalEndcapPInsertMergedHits_]
   Float_t         HcalEndcapPInsertMergedHits_time[kMaxHcalEndcapPInsertMergedHits];   //[HcalEndcapPInsertMergedHits_]
   Float_t         HcalEndcapPInsertMergedHits_timeError[kMaxHcalEndcapPInsertMergedHits];   //[HcalEndcapPInsertMergedHits_]
   Float_t         HcalEndcapPInsertMergedHits_position_x[kMaxHcalEndcapPInsertMergedHits];   //[HcalEndcapPInsertMergedHits_]
   Float_t         HcalEndcapPInsertMergedHits_position_y[kMaxHcalEndcapPInsertMergedHits];   //[HcalEndcapPInsertMergedHits_]
   Float_t         HcalEndcapPInsertMergedHits_position_z[kMaxHcalEndcapPInsertMergedHits];   //[HcalEndcapPInsertMergedHits_]
   Float_t         HcalEndcapPInsertMergedHits_dimension_x[kMaxHcalEndcapPInsertMergedHits];   //[HcalEndcapPInsertMergedHits_]
   Float_t         HcalEndcapPInsertMergedHits_dimension_y[kMaxHcalEndcapPInsertMergedHits];   //[HcalEndcapPInsertMergedHits_]
   Float_t         HcalEndcapPInsertMergedHits_dimension_z[kMaxHcalEndcapPInsertMergedHits];   //[HcalEndcapPInsertMergedHits_]
   Int_t           HcalEndcapPInsertMergedHits_sector[kMaxHcalEndcapPInsertMergedHits];   //[HcalEndcapPInsertMergedHits_]
   Int_t           HcalEndcapPInsertMergedHits_layer[kMaxHcalEndcapPInsertMergedHits];   //[HcalEndcapPInsertMergedHits_]
   Float_t         HcalEndcapPInsertMergedHits_local_x[kMaxHcalEndcapPInsertMergedHits];   //[HcalEndcapPInsertMergedHits_]
   Float_t         HcalEndcapPInsertMergedHits_local_y[kMaxHcalEndcapPInsertMergedHits];   //[HcalEndcapPInsertMergedHits_]
   Float_t         HcalEndcapPInsertMergedHits_local_z[kMaxHcalEndcapPInsertMergedHits];   //[HcalEndcapPInsertMergedHits_]
   Int_t           HcalEndcapPInsertRawHits_;
   ULong_t         HcalEndcapPInsertRawHits_cellID[kMaxHcalEndcapPInsertRawHits];   //[HcalEndcapPInsertRawHits_]
   Int_t           HcalEndcapPInsertRawHits_amplitude[kMaxHcalEndcapPInsertRawHits];   //[HcalEndcapPInsertRawHits_]
   Int_t           HcalEndcapPInsertRawHits_timeStamp[kMaxHcalEndcapPInsertRawHits];   //[HcalEndcapPInsertRawHits_]
   Int_t           HcalEndcapPInsertRecHits_;
   ULong_t         HcalEndcapPInsertRecHits_cellID[kMaxHcalEndcapPInsertRecHits];   //[HcalEndcapPInsertRecHits_]
   Float_t         HcalEndcapPInsertRecHits_energy[kMaxHcalEndcapPInsertRecHits];   //[HcalEndcapPInsertRecHits_]
   Float_t         HcalEndcapPInsertRecHits_energyError[kMaxHcalEndcapPInsertRecHits];   //[HcalEndcapPInsertRecHits_]
   Float_t         HcalEndcapPInsertRecHits_time[kMaxHcalEndcapPInsertRecHits];   //[HcalEndcapPInsertRecHits_]
   Float_t         HcalEndcapPInsertRecHits_timeError[kMaxHcalEndcapPInsertRecHits];   //[HcalEndcapPInsertRecHits_]
   Float_t         HcalEndcapPInsertRecHits_position_x[kMaxHcalEndcapPInsertRecHits];   //[HcalEndcapPInsertRecHits_]
   Float_t         HcalEndcapPInsertRecHits_position_y[kMaxHcalEndcapPInsertRecHits];   //[HcalEndcapPInsertRecHits_]
   Float_t         HcalEndcapPInsertRecHits_position_z[kMaxHcalEndcapPInsertRecHits];   //[HcalEndcapPInsertRecHits_]
   Float_t         HcalEndcapPInsertRecHits_dimension_x[kMaxHcalEndcapPInsertRecHits];   //[HcalEndcapPInsertRecHits_]
   Float_t         HcalEndcapPInsertRecHits_dimension_y[kMaxHcalEndcapPInsertRecHits];   //[HcalEndcapPInsertRecHits_]
   Float_t         HcalEndcapPInsertRecHits_dimension_z[kMaxHcalEndcapPInsertRecHits];   //[HcalEndcapPInsertRecHits_]
   Int_t           HcalEndcapPInsertRecHits_sector[kMaxHcalEndcapPInsertRecHits];   //[HcalEndcapPInsertRecHits_]
   Int_t           HcalEndcapPInsertRecHits_layer[kMaxHcalEndcapPInsertRecHits];   //[HcalEndcapPInsertRecHits_]
   Float_t         HcalEndcapPInsertRecHits_local_x[kMaxHcalEndcapPInsertRecHits];   //[HcalEndcapPInsertRecHits_]
   Float_t         HcalEndcapPInsertRecHits_local_y[kMaxHcalEndcapPInsertRecHits];   //[HcalEndcapPInsertRecHits_]
   Float_t         HcalEndcapPInsertRecHits_local_z[kMaxHcalEndcapPInsertRecHits];   //[HcalEndcapPInsertRecHits_]
   Int_t           InclusiveKinematicsDA_;
   Float_t         InclusiveKinematicsDA_x[kMaxInclusiveKinematicsDA];   //[InclusiveKinematicsDA_]
   Float_t         InclusiveKinematicsDA_Q2[kMaxInclusiveKinematicsDA];   //[InclusiveKinematicsDA_]
   Float_t         InclusiveKinematicsDA_W[kMaxInclusiveKinematicsDA];   //[InclusiveKinematicsDA_]
   Float_t         InclusiveKinematicsDA_y[kMaxInclusiveKinematicsDA];   //[InclusiveKinematicsDA_]
   Float_t         InclusiveKinematicsDA_nu[kMaxInclusiveKinematicsDA];   //[InclusiveKinematicsDA_]
   Int_t           _InclusiveKinematicsDA_scat_;
   Int_t           _InclusiveKinematicsDA_scat_index[kMax_InclusiveKinematicsDA_scat];   //[_InclusiveKinematicsDA_scat_]
   UInt_t          _InclusiveKinematicsDA_scat_collectionID[kMax_InclusiveKinematicsDA_scat];   //[_InclusiveKinematicsDA_scat_]
   Int_t           InclusiveKinematicsElectron_;
   Float_t         InclusiveKinematicsElectron_x[kMaxInclusiveKinematicsElectron];   //[InclusiveKinematicsElectron_]
   Float_t         InclusiveKinematicsElectron_Q2[kMaxInclusiveKinematicsElectron];   //[InclusiveKinematicsElectron_]
   Float_t         InclusiveKinematicsElectron_W[kMaxInclusiveKinematicsElectron];   //[InclusiveKinematicsElectron_]
   Float_t         InclusiveKinematicsElectron_y[kMaxInclusiveKinematicsElectron];   //[InclusiveKinematicsElectron_]
   Float_t         InclusiveKinematicsElectron_nu[kMaxInclusiveKinematicsElectron];   //[InclusiveKinematicsElectron_]
   Int_t           _InclusiveKinematicsElectron_scat_;
   Int_t           _InclusiveKinematicsElectron_scat_index[kMax_InclusiveKinematicsElectron_scat];   //[_InclusiveKinematicsElectron_scat_]
   UInt_t          _InclusiveKinematicsElectron_scat_collectionID[kMax_InclusiveKinematicsElectron_scat];   //[_InclusiveKinematicsElectron_scat_]
   Int_t           InclusiveKinematicseSigma_;
   Float_t         InclusiveKinematicseSigma_x[kMaxInclusiveKinematicseSigma];   //[InclusiveKinematicseSigma_]
   Float_t         InclusiveKinematicseSigma_Q2[kMaxInclusiveKinematicseSigma];   //[InclusiveKinematicseSigma_]
   Float_t         InclusiveKinematicseSigma_W[kMaxInclusiveKinematicseSigma];   //[InclusiveKinematicseSigma_]
   Float_t         InclusiveKinematicseSigma_y[kMaxInclusiveKinematicseSigma];   //[InclusiveKinematicseSigma_]
   Float_t         InclusiveKinematicseSigma_nu[kMaxInclusiveKinematicseSigma];   //[InclusiveKinematicseSigma_]
   Int_t           _InclusiveKinematicseSigma_scat_;
   Int_t           _InclusiveKinematicseSigma_scat_index[kMax_InclusiveKinematicseSigma_scat];   //[_InclusiveKinematicseSigma_scat_]
   UInt_t          _InclusiveKinematicseSigma_scat_collectionID[kMax_InclusiveKinematicseSigma_scat];   //[_InclusiveKinematicseSigma_scat_]
   Int_t           InclusiveKinematicsJB_;
   Float_t         InclusiveKinematicsJB_x[kMaxInclusiveKinematicsJB];   //[InclusiveKinematicsJB_]
   Float_t         InclusiveKinematicsJB_Q2[kMaxInclusiveKinematicsJB];   //[InclusiveKinematicsJB_]
   Float_t         InclusiveKinematicsJB_W[kMaxInclusiveKinematicsJB];   //[InclusiveKinematicsJB_]
   Float_t         InclusiveKinematicsJB_y[kMaxInclusiveKinematicsJB];   //[InclusiveKinematicsJB_]
   Float_t         InclusiveKinematicsJB_nu[kMaxInclusiveKinematicsJB];   //[InclusiveKinematicsJB_]
   Int_t           _InclusiveKinematicsJB_scat_;
   Int_t           _InclusiveKinematicsJB_scat_index[kMax_InclusiveKinematicsJB_scat];   //[_InclusiveKinematicsJB_scat_]
   UInt_t          _InclusiveKinematicsJB_scat_collectionID[kMax_InclusiveKinematicsJB_scat];   //[_InclusiveKinematicsJB_scat_]
   Int_t           InclusiveKinematicsSigma_;
   Float_t         InclusiveKinematicsSigma_x[kMaxInclusiveKinematicsSigma];   //[InclusiveKinematicsSigma_]
   Float_t         InclusiveKinematicsSigma_Q2[kMaxInclusiveKinematicsSigma];   //[InclusiveKinematicsSigma_]
   Float_t         InclusiveKinematicsSigma_W[kMaxInclusiveKinematicsSigma];   //[InclusiveKinematicsSigma_]
   Float_t         InclusiveKinematicsSigma_y[kMaxInclusiveKinematicsSigma];   //[InclusiveKinematicsSigma_]
   Float_t         InclusiveKinematicsSigma_nu[kMaxInclusiveKinematicsSigma];   //[InclusiveKinematicsSigma_]
   Int_t           _InclusiveKinematicsSigma_scat_;
   Int_t           _InclusiveKinematicsSigma_scat_index[kMax_InclusiveKinematicsSigma_scat];   //[_InclusiveKinematicsSigma_scat_]
   UInt_t          _InclusiveKinematicsSigma_scat_collectionID[kMax_InclusiveKinematicsSigma_scat];   //[_InclusiveKinematicsSigma_scat_]
   Int_t           InclusiveKinematicsTruth_;
   Float_t         InclusiveKinematicsTruth_x[kMaxInclusiveKinematicsTruth];   //[InclusiveKinematicsTruth_]
   Float_t         InclusiveKinematicsTruth_Q2[kMaxInclusiveKinematicsTruth];   //[InclusiveKinematicsTruth_]
   Float_t         InclusiveKinematicsTruth_W[kMaxInclusiveKinematicsTruth];   //[InclusiveKinematicsTruth_]
   Float_t         InclusiveKinematicsTruth_y[kMaxInclusiveKinematicsTruth];   //[InclusiveKinematicsTruth_]
   Float_t         InclusiveKinematicsTruth_nu[kMaxInclusiveKinematicsTruth];   //[InclusiveKinematicsTruth_]
   Int_t           _InclusiveKinematicsTruth_scat_;
   Int_t           _InclusiveKinematicsTruth_scat_index[kMax_InclusiveKinematicsTruth_scat];   //[_InclusiveKinematicsTruth_scat_]
   UInt_t          _InclusiveKinematicsTruth_scat_collectionID[kMax_InclusiveKinematicsTruth_scat];   //[_InclusiveKinematicsTruth_scat_]
   Int_t           LFHCALClusterAssociations_;
   UInt_t          LFHCALClusterAssociations_simID[kMaxLFHCALClusterAssociations];   //[LFHCALClusterAssociations_]
   UInt_t          LFHCALClusterAssociations_recID[kMaxLFHCALClusterAssociations];   //[LFHCALClusterAssociations_]
   Float_t         LFHCALClusterAssociations_weight[kMaxLFHCALClusterAssociations];   //[LFHCALClusterAssociations_]
   Int_t           _LFHCALClusterAssociations_rec_;
   Int_t           _LFHCALClusterAssociations_rec_index[kMax_LFHCALClusterAssociations_rec];   //[_LFHCALClusterAssociations_rec_]
   UInt_t          _LFHCALClusterAssociations_rec_collectionID[kMax_LFHCALClusterAssociations_rec];   //[_LFHCALClusterAssociations_rec_]
   Int_t           _LFHCALClusterAssociations_sim_;
   Int_t           _LFHCALClusterAssociations_sim_index[kMax_LFHCALClusterAssociations_sim];   //[_LFHCALClusterAssociations_sim_]
   UInt_t          _LFHCALClusterAssociations_sim_collectionID[kMax_LFHCALClusterAssociations_sim];   //[_LFHCALClusterAssociations_sim_]
   Int_t           LFHCALClusters_;
   Int_t           LFHCALClusters_type[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Float_t         LFHCALClusters_energy[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Float_t         LFHCALClusters_energyError[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Float_t         LFHCALClusters_time[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Float_t         LFHCALClusters_timeError[kMaxLFHCALClusters];   //[LFHCALClusters_]
   UInt_t          LFHCALClusters_nhits[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Float_t         LFHCALClusters_position_x[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Float_t         LFHCALClusters_position_y[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Float_t         LFHCALClusters_position_z[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Float_t         LFHCALClusters_positionError_xx[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Float_t         LFHCALClusters_positionError_yy[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Float_t         LFHCALClusters_positionError_zz[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Float_t         LFHCALClusters_positionError_xy[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Float_t         LFHCALClusters_positionError_xz[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Float_t         LFHCALClusters_positionError_yz[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Float_t         LFHCALClusters_intrinsicTheta[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Float_t         LFHCALClusters_intrinsicPhi[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Float_t         LFHCALClusters_intrinsicDirectionError_xx[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Float_t         LFHCALClusters_intrinsicDirectionError_yy[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Float_t         LFHCALClusters_intrinsicDirectionError_xy[kMaxLFHCALClusters];   //[LFHCALClusters_]
   UInt_t          LFHCALClusters_shapeParameters_begin[kMaxLFHCALClusters];   //[LFHCALClusters_]
   UInt_t          LFHCALClusters_shapeParameters_end[kMaxLFHCALClusters];   //[LFHCALClusters_]
   UInt_t          LFHCALClusters_hitContributions_begin[kMaxLFHCALClusters];   //[LFHCALClusters_]
   UInt_t          LFHCALClusters_hitContributions_end[kMaxLFHCALClusters];   //[LFHCALClusters_]
   UInt_t          LFHCALClusters_subdetectorEnergies_begin[kMaxLFHCALClusters];   //[LFHCALClusters_]
   UInt_t          LFHCALClusters_subdetectorEnergies_end[kMaxLFHCALClusters];   //[LFHCALClusters_]
   UInt_t          LFHCALClusters_clusters_begin[kMaxLFHCALClusters];   //[LFHCALClusters_]
   UInt_t          LFHCALClusters_clusters_end[kMaxLFHCALClusters];   //[LFHCALClusters_]
   UInt_t          LFHCALClusters_hits_begin[kMaxLFHCALClusters];   //[LFHCALClusters_]
   UInt_t          LFHCALClusters_hits_end[kMaxLFHCALClusters];   //[LFHCALClusters_]
   UInt_t          LFHCALClusters_particleIDs_begin[kMaxLFHCALClusters];   //[LFHCALClusters_]
   UInt_t          LFHCALClusters_particleIDs_end[kMaxLFHCALClusters];   //[LFHCALClusters_]
   Int_t           _LFHCALClusters_clusters_;
   Int_t           _LFHCALClusters_clusters_index[kMax_LFHCALClusters_clusters];   //[_LFHCALClusters_clusters_]
   UInt_t          _LFHCALClusters_clusters_collectionID[kMax_LFHCALClusters_clusters];   //[_LFHCALClusters_clusters_]
   Int_t           _LFHCALClusters_hits_;
   Int_t           _LFHCALClusters_hits_index[kMax_LFHCALClusters_hits];   //[_LFHCALClusters_hits_]
   UInt_t          _LFHCALClusters_hits_collectionID[kMax_LFHCALClusters_hits];   //[_LFHCALClusters_hits_]
   Int_t           _LFHCALClusters_particleIDs_;
   Int_t           _LFHCALClusters_particleIDs_index[kMax_LFHCALClusters_particleIDs];   //[_LFHCALClusters_particleIDs_]
   UInt_t          _LFHCALClusters_particleIDs_collectionID[kMax_LFHCALClusters_particleIDs];   //[_LFHCALClusters_particleIDs_]
   vector<float>   *_LFHCALClusters_shapeParameters;
   vector<float>   *_LFHCALClusters_hitContributions;
   vector<float>   *_LFHCALClusters_subdetectorEnergies;
   Int_t           LFHCALRawHits_;
   ULong_t         LFHCALRawHits_cellID[kMaxLFHCALRawHits];   //[LFHCALRawHits_]
   Int_t           LFHCALRawHits_amplitude[kMaxLFHCALRawHits];   //[LFHCALRawHits_]
   Int_t           LFHCALRawHits_timeStamp[kMaxLFHCALRawHits];   //[LFHCALRawHits_]
   Int_t           LFHCALRecHits_;
   ULong_t         LFHCALRecHits_cellID[kMaxLFHCALRecHits];   //[LFHCALRecHits_]
   Float_t         LFHCALRecHits_energy[kMaxLFHCALRecHits];   //[LFHCALRecHits_]
   Float_t         LFHCALRecHits_energyError[kMaxLFHCALRecHits];   //[LFHCALRecHits_]
   Float_t         LFHCALRecHits_time[kMaxLFHCALRecHits];   //[LFHCALRecHits_]
   Float_t         LFHCALRecHits_timeError[kMaxLFHCALRecHits];   //[LFHCALRecHits_]
   Float_t         LFHCALRecHits_position_x[kMaxLFHCALRecHits];   //[LFHCALRecHits_]
   Float_t         LFHCALRecHits_position_y[kMaxLFHCALRecHits];   //[LFHCALRecHits_]
   Float_t         LFHCALRecHits_position_z[kMaxLFHCALRecHits];   //[LFHCALRecHits_]
   Float_t         LFHCALRecHits_dimension_x[kMaxLFHCALRecHits];   //[LFHCALRecHits_]
   Float_t         LFHCALRecHits_dimension_y[kMaxLFHCALRecHits];   //[LFHCALRecHits_]
   Float_t         LFHCALRecHits_dimension_z[kMaxLFHCALRecHits];   //[LFHCALRecHits_]
   Int_t           LFHCALRecHits_sector[kMaxLFHCALRecHits];   //[LFHCALRecHits_]
   Int_t           LFHCALRecHits_layer[kMaxLFHCALRecHits];   //[LFHCALRecHits_]
   Float_t         LFHCALRecHits_local_x[kMaxLFHCALRecHits];   //[LFHCALRecHits_]
   Float_t         LFHCALRecHits_local_y[kMaxLFHCALRecHits];   //[LFHCALRecHits_]
   Float_t         LFHCALRecHits_local_z[kMaxLFHCALRecHits];   //[LFHCALRecHits_]
   Int_t           MCParticles_;
   Int_t           MCParticles_PDG[kMaxMCParticles];   //[MCParticles_]
   Int_t           MCParticles_generatorStatus[kMaxMCParticles];   //[MCParticles_]
   Int_t           MCParticles_simulatorStatus[kMaxMCParticles];   //[MCParticles_]
   Float_t         MCParticles_charge[kMaxMCParticles];   //[MCParticles_]
   Float_t         MCParticles_time[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_mass[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_vertex_x[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_vertex_y[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_vertex_z[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_endpoint_x[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_endpoint_y[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_endpoint_z[kMaxMCParticles];   //[MCParticles_]
   Float_t         MCParticles_momentum_x[kMaxMCParticles];   //[MCParticles_]
   Float_t         MCParticles_momentum_y[kMaxMCParticles];   //[MCParticles_]
   Float_t         MCParticles_momentum_z[kMaxMCParticles];   //[MCParticles_]
   Float_t         MCParticles_momentumAtEndpoint_x[kMaxMCParticles];   //[MCParticles_]
   Float_t         MCParticles_momentumAtEndpoint_y[kMaxMCParticles];   //[MCParticles_]
   Float_t         MCParticles_momentumAtEndpoint_z[kMaxMCParticles];   //[MCParticles_]
   Float_t         MCParticles_spin_x[kMaxMCParticles];   //[MCParticles_]
   Float_t         MCParticles_spin_y[kMaxMCParticles];   //[MCParticles_]
   Float_t         MCParticles_spin_z[kMaxMCParticles];   //[MCParticles_]
   Int_t           MCParticles_colorFlow_a[kMaxMCParticles];   //[MCParticles_]
   Int_t           MCParticles_colorFlow_b[kMaxMCParticles];   //[MCParticles_]
   UInt_t          MCParticles_parents_begin[kMaxMCParticles];   //[MCParticles_]
   UInt_t          MCParticles_parents_end[kMaxMCParticles];   //[MCParticles_]
   UInt_t          MCParticles_daughters_begin[kMaxMCParticles];   //[MCParticles_]
   UInt_t          MCParticles_daughters_end[kMaxMCParticles];   //[MCParticles_]
   Int_t           _MCParticles_parents_;
   Int_t           _MCParticles_parents_index[kMax_MCParticles_parents];   //[_MCParticles_parents_]
   UInt_t          _MCParticles_parents_collectionID[kMax_MCParticles_parents];   //[_MCParticles_parents_]
   Int_t           _MCParticles_daughters_;
   Int_t           _MCParticles_daughters_index[kMax_MCParticles_daughters];   //[_MCParticles_daughters_]
   UInt_t          _MCParticles_daughters_collectionID[kMax_MCParticles_daughters];   //[_MCParticles_daughters_]
   Int_t           MPGDBarrelRecHits_;
   ULong_t         MPGDBarrelRecHits_cellID[kMaxMPGDBarrelRecHits];   //[MPGDBarrelRecHits_]
   Float_t         MPGDBarrelRecHits_position_x[kMaxMPGDBarrelRecHits];   //[MPGDBarrelRecHits_]
   Float_t         MPGDBarrelRecHits_position_y[kMaxMPGDBarrelRecHits];   //[MPGDBarrelRecHits_]
   Float_t         MPGDBarrelRecHits_position_z[kMaxMPGDBarrelRecHits];   //[MPGDBarrelRecHits_]
   Float_t         MPGDBarrelRecHits_positionError_xx[kMaxMPGDBarrelRecHits];   //[MPGDBarrelRecHits_]
   Float_t         MPGDBarrelRecHits_positionError_yy[kMaxMPGDBarrelRecHits];   //[MPGDBarrelRecHits_]
   Float_t         MPGDBarrelRecHits_positionError_zz[kMaxMPGDBarrelRecHits];   //[MPGDBarrelRecHits_]
   Float_t         MPGDBarrelRecHits_time[kMaxMPGDBarrelRecHits];   //[MPGDBarrelRecHits_]
   Float_t         MPGDBarrelRecHits_timeError[kMaxMPGDBarrelRecHits];   //[MPGDBarrelRecHits_]
   Float_t         MPGDBarrelRecHits_edep[kMaxMPGDBarrelRecHits];   //[MPGDBarrelRecHits_]
   Float_t         MPGDBarrelRecHits_edepError[kMaxMPGDBarrelRecHits];   //[MPGDBarrelRecHits_]
   Int_t           MPGDDIRCRecHits_;
   ULong_t         MPGDDIRCRecHits_cellID[kMaxMPGDDIRCRecHits];   //[MPGDDIRCRecHits_]
   Float_t         MPGDDIRCRecHits_position_x[kMaxMPGDDIRCRecHits];   //[MPGDDIRCRecHits_]
   Float_t         MPGDDIRCRecHits_position_y[kMaxMPGDDIRCRecHits];   //[MPGDDIRCRecHits_]
   Float_t         MPGDDIRCRecHits_position_z[kMaxMPGDDIRCRecHits];   //[MPGDDIRCRecHits_]
   Float_t         MPGDDIRCRecHits_positionError_xx[kMaxMPGDDIRCRecHits];   //[MPGDDIRCRecHits_]
   Float_t         MPGDDIRCRecHits_positionError_yy[kMaxMPGDDIRCRecHits];   //[MPGDDIRCRecHits_]
   Float_t         MPGDDIRCRecHits_positionError_zz[kMaxMPGDDIRCRecHits];   //[MPGDDIRCRecHits_]
   Float_t         MPGDDIRCRecHits_time[kMaxMPGDDIRCRecHits];   //[MPGDDIRCRecHits_]
   Float_t         MPGDDIRCRecHits_timeError[kMaxMPGDDIRCRecHits];   //[MPGDDIRCRecHits_]
   Float_t         MPGDDIRCRecHits_edep[kMaxMPGDDIRCRecHits];   //[MPGDDIRCRecHits_]
   Float_t         MPGDDIRCRecHits_edepError[kMaxMPGDDIRCRecHits];   //[MPGDDIRCRecHits_]
   Int_t           OuterMPGDBarrelRecHits_;
   ULong_t         OuterMPGDBarrelRecHits_cellID[kMaxOuterMPGDBarrelRecHits];   //[OuterMPGDBarrelRecHits_]
   Float_t         OuterMPGDBarrelRecHits_position_x[kMaxOuterMPGDBarrelRecHits];   //[OuterMPGDBarrelRecHits_]
   Float_t         OuterMPGDBarrelRecHits_position_y[kMaxOuterMPGDBarrelRecHits];   //[OuterMPGDBarrelRecHits_]
   Float_t         OuterMPGDBarrelRecHits_position_z[kMaxOuterMPGDBarrelRecHits];   //[OuterMPGDBarrelRecHits_]
   Float_t         OuterMPGDBarrelRecHits_positionError_xx[kMaxOuterMPGDBarrelRecHits];   //[OuterMPGDBarrelRecHits_]
   Float_t         OuterMPGDBarrelRecHits_positionError_yy[kMaxOuterMPGDBarrelRecHits];   //[OuterMPGDBarrelRecHits_]
   Float_t         OuterMPGDBarrelRecHits_positionError_zz[kMaxOuterMPGDBarrelRecHits];   //[OuterMPGDBarrelRecHits_]
   Float_t         OuterMPGDBarrelRecHits_time[kMaxOuterMPGDBarrelRecHits];   //[OuterMPGDBarrelRecHits_]
   Float_t         OuterMPGDBarrelRecHits_timeError[kMaxOuterMPGDBarrelRecHits];   //[OuterMPGDBarrelRecHits_]
   Float_t         OuterMPGDBarrelRecHits_edep[kMaxOuterMPGDBarrelRecHits];   //[OuterMPGDBarrelRecHits_]
   Float_t         OuterMPGDBarrelRecHits_edepError[kMaxOuterMPGDBarrelRecHits];   //[OuterMPGDBarrelRecHits_]
   Int_t           ReconstructedChargedJets_;
   Int_t           ReconstructedChargedJets_type[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_energy[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_momentum_x[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_momentum_y[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_momentum_z[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_referencePoint_x[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_referencePoint_y[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_referencePoint_z[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_charge[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_mass[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_goodnessOfPID[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_covMatrix_xx[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_covMatrix_yy[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_covMatrix_zz[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_covMatrix_tt[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_covMatrix_xy[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_covMatrix_xz[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_covMatrix_xt[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_covMatrix_yz[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_covMatrix_yt[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Float_t         ReconstructedChargedJets_covMatrix_zt[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Int_t           ReconstructedChargedJets_PDG[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   UInt_t          ReconstructedChargedJets_clusters_begin[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   UInt_t          ReconstructedChargedJets_clusters_end[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   UInt_t          ReconstructedChargedJets_tracks_begin[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   UInt_t          ReconstructedChargedJets_tracks_end[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   UInt_t          ReconstructedChargedJets_particles_begin[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   UInt_t          ReconstructedChargedJets_particles_end[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   UInt_t          ReconstructedChargedJets_particleIDs_begin[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   UInt_t          ReconstructedChargedJets_particleIDs_end[kMaxReconstructedChargedJets];   //[ReconstructedChargedJets_]
   Int_t           _ReconstructedChargedJets_clusters_;
   Int_t           _ReconstructedChargedJets_clusters_index[kMax_ReconstructedChargedJets_clusters];   //[_ReconstructedChargedJets_clusters_]
   UInt_t          _ReconstructedChargedJets_clusters_collectionID[kMax_ReconstructedChargedJets_clusters];   //[_ReconstructedChargedJets_clusters_]
   Int_t           _ReconstructedChargedJets_tracks_;
   Int_t           _ReconstructedChargedJets_tracks_index[kMax_ReconstructedChargedJets_tracks];   //[_ReconstructedChargedJets_tracks_]
   UInt_t          _ReconstructedChargedJets_tracks_collectionID[kMax_ReconstructedChargedJets_tracks];   //[_ReconstructedChargedJets_tracks_]
   Int_t           _ReconstructedChargedJets_particles_;
   Int_t           _ReconstructedChargedJets_particles_index[kMax_ReconstructedChargedJets_particles];   //[_ReconstructedChargedJets_particles_]
   UInt_t          _ReconstructedChargedJets_particles_collectionID[kMax_ReconstructedChargedJets_particles];   //[_ReconstructedChargedJets_particles_]
   Int_t           _ReconstructedChargedJets_particleIDs_;
   Int_t           _ReconstructedChargedJets_particleIDs_index[kMax_ReconstructedChargedJets_particleIDs];   //[_ReconstructedChargedJets_particleIDs_]
   UInt_t          _ReconstructedChargedJets_particleIDs_collectionID[kMax_ReconstructedChargedJets_particleIDs];   //[_ReconstructedChargedJets_particleIDs_]
   Int_t           _ReconstructedChargedJets_startVertex_;
   Int_t           _ReconstructedChargedJets_startVertex_index[kMax_ReconstructedChargedJets_startVertex];   //[_ReconstructedChargedJets_startVertex_]
   UInt_t          _ReconstructedChargedJets_startVertex_collectionID[kMax_ReconstructedChargedJets_startVertex];   //[_ReconstructedChargedJets_startVertex_]
   Int_t           _ReconstructedChargedJets_particleIDUsed_;
   Int_t           _ReconstructedChargedJets_particleIDUsed_index[kMax_ReconstructedChargedJets_particleIDUsed];   //[_ReconstructedChargedJets_particleIDUsed_]
   UInt_t          _ReconstructedChargedJets_particleIDUsed_collectionID[kMax_ReconstructedChargedJets_particleIDUsed];   //[_ReconstructedChargedJets_particleIDUsed_]
   Int_t           ReconstructedChargedParticleAssociations_;
   UInt_t          ReconstructedChargedParticleAssociations_simID[kMaxReconstructedChargedParticleAssociations];   //[ReconstructedChargedParticleAssociations_]
   UInt_t          ReconstructedChargedParticleAssociations_recID[kMaxReconstructedChargedParticleAssociations];   //[ReconstructedChargedParticleAssociations_]
   Float_t         ReconstructedChargedParticleAssociations_weight[kMaxReconstructedChargedParticleAssociations];   //[ReconstructedChargedParticleAssociations_]
   Int_t           _ReconstructedChargedParticleAssociations_rec_;
   Int_t           _ReconstructedChargedParticleAssociations_rec_index[kMax_ReconstructedChargedParticleAssociations_rec];   //[_ReconstructedChargedParticleAssociations_rec_]
   UInt_t          _ReconstructedChargedParticleAssociations_rec_collectionID[kMax_ReconstructedChargedParticleAssociations_rec];   //[_ReconstructedChargedParticleAssociations_rec_]
   Int_t           _ReconstructedChargedParticleAssociations_sim_;
   Int_t           _ReconstructedChargedParticleAssociations_sim_index[kMax_ReconstructedChargedParticleAssociations_sim];   //[_ReconstructedChargedParticleAssociations_sim_]
   UInt_t          _ReconstructedChargedParticleAssociations_sim_collectionID[kMax_ReconstructedChargedParticleAssociations_sim];   //[_ReconstructedChargedParticleAssociations_sim_]
   Int_t           ReconstructedChargedParticleIDs_;
   Int_t           ReconstructedChargedParticleIDs_type[kMaxReconstructedChargedParticleIDs];   //[ReconstructedChargedParticleIDs_]
   Int_t           ReconstructedChargedParticleIDs_PDG[kMaxReconstructedChargedParticleIDs];   //[ReconstructedChargedParticleIDs_]
   Int_t           ReconstructedChargedParticleIDs_algorithmType[kMaxReconstructedChargedParticleIDs];   //[ReconstructedChargedParticleIDs_]
   Float_t         ReconstructedChargedParticleIDs_likelihood[kMaxReconstructedChargedParticleIDs];   //[ReconstructedChargedParticleIDs_]
   UInt_t          ReconstructedChargedParticleIDs_parameters_begin[kMaxReconstructedChargedParticleIDs];   //[ReconstructedChargedParticleIDs_]
   UInt_t          ReconstructedChargedParticleIDs_parameters_end[kMaxReconstructedChargedParticleIDs];   //[ReconstructedChargedParticleIDs_]
   vector<float>   *_ReconstructedChargedParticleIDs_parameters;
   Int_t           ReconstructedChargedParticles_;
   Int_t           ReconstructedChargedParticles_type[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_energy[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_momentum_x[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_momentum_y[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_momentum_z[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_referencePoint_x[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_referencePoint_y[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_referencePoint_z[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_charge[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_mass[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_goodnessOfPID[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_covMatrix_xx[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_covMatrix_yy[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_covMatrix_zz[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_covMatrix_tt[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_covMatrix_xy[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_covMatrix_xz[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_covMatrix_xt[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_covMatrix_yz[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_covMatrix_yt[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Float_t         ReconstructedChargedParticles_covMatrix_zt[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Int_t           ReconstructedChargedParticles_PDG[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   UInt_t          ReconstructedChargedParticles_clusters_begin[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   UInt_t          ReconstructedChargedParticles_clusters_end[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   UInt_t          ReconstructedChargedParticles_tracks_begin[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   UInt_t          ReconstructedChargedParticles_tracks_end[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   UInt_t          ReconstructedChargedParticles_particles_begin[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   UInt_t          ReconstructedChargedParticles_particles_end[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   UInt_t          ReconstructedChargedParticles_particleIDs_begin[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   UInt_t          ReconstructedChargedParticles_particleIDs_end[kMaxReconstructedChargedParticles];   //[ReconstructedChargedParticles_]
   Int_t           _ReconstructedChargedParticles_clusters_;
   Int_t           _ReconstructedChargedParticles_clusters_index[kMax_ReconstructedChargedParticles_clusters];   //[_ReconstructedChargedParticles_clusters_]
   UInt_t          _ReconstructedChargedParticles_clusters_collectionID[kMax_ReconstructedChargedParticles_clusters];   //[_ReconstructedChargedParticles_clusters_]
   Int_t           _ReconstructedChargedParticles_tracks_;
   Int_t           _ReconstructedChargedParticles_tracks_index[kMax_ReconstructedChargedParticles_tracks];   //[_ReconstructedChargedParticles_tracks_]
   UInt_t          _ReconstructedChargedParticles_tracks_collectionID[kMax_ReconstructedChargedParticles_tracks];   //[_ReconstructedChargedParticles_tracks_]
   Int_t           _ReconstructedChargedParticles_particles_;
   Int_t           _ReconstructedChargedParticles_particles_index[kMax_ReconstructedChargedParticles_particles];   //[_ReconstructedChargedParticles_particles_]
   UInt_t          _ReconstructedChargedParticles_particles_collectionID[kMax_ReconstructedChargedParticles_particles];   //[_ReconstructedChargedParticles_particles_]
   Int_t           _ReconstructedChargedParticles_particleIDs_;
   Int_t           _ReconstructedChargedParticles_particleIDs_index[kMax_ReconstructedChargedParticles_particleIDs];   //[_ReconstructedChargedParticles_particleIDs_]
   UInt_t          _ReconstructedChargedParticles_particleIDs_collectionID[kMax_ReconstructedChargedParticles_particleIDs];   //[_ReconstructedChargedParticles_particleIDs_]
   Int_t           _ReconstructedChargedParticles_startVertex_;
   Int_t           _ReconstructedChargedParticles_startVertex_index[kMax_ReconstructedChargedParticles_startVertex];   //[_ReconstructedChargedParticles_startVertex_]
   UInt_t          _ReconstructedChargedParticles_startVertex_collectionID[kMax_ReconstructedChargedParticles_startVertex];   //[_ReconstructedChargedParticles_startVertex_]
   Int_t           _ReconstructedChargedParticles_particleIDUsed_;
   Int_t           _ReconstructedChargedParticles_particleIDUsed_index[kMax_ReconstructedChargedParticles_particleIDUsed];   //[_ReconstructedChargedParticles_particleIDUsed_]
   UInt_t          _ReconstructedChargedParticles_particleIDUsed_collectionID[kMax_ReconstructedChargedParticles_particleIDUsed];   //[_ReconstructedChargedParticles_particleIDUsed_]
   Int_t           ReconstructedElectrons_;
   Int_t           ReconstructedElectrons_type[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_energy[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_momentum_x[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_momentum_y[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_momentum_z[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_referencePoint_x[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_referencePoint_y[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_referencePoint_z[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_charge[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_mass[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_goodnessOfPID[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_covMatrix_xx[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_covMatrix_yy[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_covMatrix_zz[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_covMatrix_tt[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_covMatrix_xy[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_covMatrix_xz[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_covMatrix_xt[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_covMatrix_yz[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_covMatrix_yt[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Float_t         ReconstructedElectrons_covMatrix_zt[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Int_t           ReconstructedElectrons_PDG[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   UInt_t          ReconstructedElectrons_clusters_begin[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   UInt_t          ReconstructedElectrons_clusters_end[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   UInt_t          ReconstructedElectrons_tracks_begin[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   UInt_t          ReconstructedElectrons_tracks_end[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   UInt_t          ReconstructedElectrons_particles_begin[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   UInt_t          ReconstructedElectrons_particles_end[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   UInt_t          ReconstructedElectrons_particleIDs_begin[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   UInt_t          ReconstructedElectrons_particleIDs_end[kMaxReconstructedElectrons];   //[ReconstructedElectrons_]
   Int_t           _ReconstructedElectrons_clusters_;
   Int_t           _ReconstructedElectrons_clusters_index[kMax_ReconstructedElectrons_clusters];   //[_ReconstructedElectrons_clusters_]
   UInt_t          _ReconstructedElectrons_clusters_collectionID[kMax_ReconstructedElectrons_clusters];   //[_ReconstructedElectrons_clusters_]
   Int_t           _ReconstructedElectrons_tracks_;
   Int_t           _ReconstructedElectrons_tracks_index[kMax_ReconstructedElectrons_tracks];   //[_ReconstructedElectrons_tracks_]
   UInt_t          _ReconstructedElectrons_tracks_collectionID[kMax_ReconstructedElectrons_tracks];   //[_ReconstructedElectrons_tracks_]
   Int_t           _ReconstructedElectrons_particles_;
   Int_t           _ReconstructedElectrons_particles_index[kMax_ReconstructedElectrons_particles];   //[_ReconstructedElectrons_particles_]
   UInt_t          _ReconstructedElectrons_particles_collectionID[kMax_ReconstructedElectrons_particles];   //[_ReconstructedElectrons_particles_]
   Int_t           _ReconstructedElectrons_particleIDs_;
   Int_t           _ReconstructedElectrons_particleIDs_index[kMax_ReconstructedElectrons_particleIDs];   //[_ReconstructedElectrons_particleIDs_]
   UInt_t          _ReconstructedElectrons_particleIDs_collectionID[kMax_ReconstructedElectrons_particleIDs];   //[_ReconstructedElectrons_particleIDs_]
   Int_t           _ReconstructedElectrons_startVertex_;
   Int_t           _ReconstructedElectrons_startVertex_index[kMax_ReconstructedElectrons_startVertex];   //[_ReconstructedElectrons_startVertex_]
   UInt_t          _ReconstructedElectrons_startVertex_collectionID[kMax_ReconstructedElectrons_startVertex];   //[_ReconstructedElectrons_startVertex_]
   Int_t           _ReconstructedElectrons_particleIDUsed_;
   Int_t           _ReconstructedElectrons_particleIDUsed_index[kMax_ReconstructedElectrons_particleIDUsed];   //[_ReconstructedElectrons_particleIDUsed_]
   UInt_t          _ReconstructedElectrons_particleIDUsed_collectionID[kMax_ReconstructedElectrons_particleIDUsed];   //[_ReconstructedElectrons_particleIDUsed_]
   Int_t           ReconstructedJets_;
   Int_t           ReconstructedJets_type[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_energy[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_momentum_x[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_momentum_y[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_momentum_z[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_referencePoint_x[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_referencePoint_y[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_referencePoint_z[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_charge[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_mass[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_goodnessOfPID[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_covMatrix_xx[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_covMatrix_yy[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_covMatrix_zz[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_covMatrix_tt[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_covMatrix_xy[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_covMatrix_xz[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_covMatrix_xt[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_covMatrix_yz[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_covMatrix_yt[kMaxReconstructedJets];   //[ReconstructedJets_]
   Float_t         ReconstructedJets_covMatrix_zt[kMaxReconstructedJets];   //[ReconstructedJets_]
   Int_t           ReconstructedJets_PDG[kMaxReconstructedJets];   //[ReconstructedJets_]
   UInt_t          ReconstructedJets_clusters_begin[kMaxReconstructedJets];   //[ReconstructedJets_]
   UInt_t          ReconstructedJets_clusters_end[kMaxReconstructedJets];   //[ReconstructedJets_]
   UInt_t          ReconstructedJets_tracks_begin[kMaxReconstructedJets];   //[ReconstructedJets_]
   UInt_t          ReconstructedJets_tracks_end[kMaxReconstructedJets];   //[ReconstructedJets_]
   UInt_t          ReconstructedJets_particles_begin[kMaxReconstructedJets];   //[ReconstructedJets_]
   UInt_t          ReconstructedJets_particles_end[kMaxReconstructedJets];   //[ReconstructedJets_]
   UInt_t          ReconstructedJets_particleIDs_begin[kMaxReconstructedJets];   //[ReconstructedJets_]
   UInt_t          ReconstructedJets_particleIDs_end[kMaxReconstructedJets];   //[ReconstructedJets_]
   Int_t           _ReconstructedJets_clusters_;
   Int_t           _ReconstructedJets_clusters_index[kMax_ReconstructedJets_clusters];   //[_ReconstructedJets_clusters_]
   UInt_t          _ReconstructedJets_clusters_collectionID[kMax_ReconstructedJets_clusters];   //[_ReconstructedJets_clusters_]
   Int_t           _ReconstructedJets_tracks_;
   Int_t           _ReconstructedJets_tracks_index[kMax_ReconstructedJets_tracks];   //[_ReconstructedJets_tracks_]
   UInt_t          _ReconstructedJets_tracks_collectionID[kMax_ReconstructedJets_tracks];   //[_ReconstructedJets_tracks_]
   Int_t           _ReconstructedJets_particles_;
   Int_t           _ReconstructedJets_particles_index[kMax_ReconstructedJets_particles];   //[_ReconstructedJets_particles_]
   UInt_t          _ReconstructedJets_particles_collectionID[kMax_ReconstructedJets_particles];   //[_ReconstructedJets_particles_]
   Int_t           _ReconstructedJets_particleIDs_;
   Int_t           _ReconstructedJets_particleIDs_index[kMax_ReconstructedJets_particleIDs];   //[_ReconstructedJets_particleIDs_]
   UInt_t          _ReconstructedJets_particleIDs_collectionID[kMax_ReconstructedJets_particleIDs];   //[_ReconstructedJets_particleIDs_]
   Int_t           _ReconstructedJets_startVertex_;
   Int_t           _ReconstructedJets_startVertex_index[kMax_ReconstructedJets_startVertex];   //[_ReconstructedJets_startVertex_]
   UInt_t          _ReconstructedJets_startVertex_collectionID[kMax_ReconstructedJets_startVertex];   //[_ReconstructedJets_startVertex_]
   Int_t           _ReconstructedJets_particleIDUsed_;
   Int_t           _ReconstructedJets_particleIDUsed_index[kMax_ReconstructedJets_particleIDUsed];   //[_ReconstructedJets_particleIDUsed_]
   UInt_t          _ReconstructedJets_particleIDUsed_collectionID[kMax_ReconstructedJets_particleIDUsed];   //[_ReconstructedJets_particleIDUsed_]
   Int_t           ReconstructedParticleAssociations_;
   UInt_t          ReconstructedParticleAssociations_simID[kMaxReconstructedParticleAssociations];   //[ReconstructedParticleAssociations_]
   UInt_t          ReconstructedParticleAssociations_recID[kMaxReconstructedParticleAssociations];   //[ReconstructedParticleAssociations_]
   Float_t         ReconstructedParticleAssociations_weight[kMaxReconstructedParticleAssociations];   //[ReconstructedParticleAssociations_]
   Int_t           _ReconstructedParticleAssociations_rec_;
   Int_t           _ReconstructedParticleAssociations_rec_index[kMax_ReconstructedParticleAssociations_rec];   //[_ReconstructedParticleAssociations_rec_]
   UInt_t          _ReconstructedParticleAssociations_rec_collectionID[kMax_ReconstructedParticleAssociations_rec];   //[_ReconstructedParticleAssociations_rec_]
   Int_t           _ReconstructedParticleAssociations_sim_;
   Int_t           _ReconstructedParticleAssociations_sim_index[kMax_ReconstructedParticleAssociations_sim];   //[_ReconstructedParticleAssociations_sim_]
   UInt_t          _ReconstructedParticleAssociations_sim_collectionID[kMax_ReconstructedParticleAssociations_sim];   //[_ReconstructedParticleAssociations_sim_]
   Int_t           ReconstructedParticles_;
   Int_t           ReconstructedParticles_type[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_energy[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_momentum_x[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_momentum_y[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_momentum_z[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_referencePoint_x[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_referencePoint_y[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_referencePoint_z[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_charge[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_mass[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_goodnessOfPID[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_covMatrix_xx[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_covMatrix_yy[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_covMatrix_zz[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_covMatrix_tt[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_covMatrix_xy[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_covMatrix_xz[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_covMatrix_xt[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_covMatrix_yz[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_covMatrix_yt[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_covMatrix_zt[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Int_t           ReconstructedParticles_PDG[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   UInt_t          ReconstructedParticles_clusters_begin[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   UInt_t          ReconstructedParticles_clusters_end[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   UInt_t          ReconstructedParticles_tracks_begin[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   UInt_t          ReconstructedParticles_tracks_end[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   UInt_t          ReconstructedParticles_particles_begin[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   UInt_t          ReconstructedParticles_particles_end[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   UInt_t          ReconstructedParticles_particleIDs_begin[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   UInt_t          ReconstructedParticles_particleIDs_end[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Int_t           _ReconstructedParticles_clusters_;
   Int_t           _ReconstructedParticles_clusters_index[kMax_ReconstructedParticles_clusters];   //[_ReconstructedParticles_clusters_]
   UInt_t          _ReconstructedParticles_clusters_collectionID[kMax_ReconstructedParticles_clusters];   //[_ReconstructedParticles_clusters_]
   Int_t           _ReconstructedParticles_tracks_;
   Int_t           _ReconstructedParticles_tracks_index[kMax_ReconstructedParticles_tracks];   //[_ReconstructedParticles_tracks_]
   UInt_t          _ReconstructedParticles_tracks_collectionID[kMax_ReconstructedParticles_tracks];   //[_ReconstructedParticles_tracks_]
   Int_t           _ReconstructedParticles_particles_;
   Int_t           _ReconstructedParticles_particles_index[kMax_ReconstructedParticles_particles];   //[_ReconstructedParticles_particles_]
   UInt_t          _ReconstructedParticles_particles_collectionID[kMax_ReconstructedParticles_particles];   //[_ReconstructedParticles_particles_]
   Int_t           _ReconstructedParticles_particleIDs_;
   Int_t           _ReconstructedParticles_particleIDs_index[kMax_ReconstructedParticles_particleIDs];   //[_ReconstructedParticles_particleIDs_]
   UInt_t          _ReconstructedParticles_particleIDs_collectionID[kMax_ReconstructedParticles_particleIDs];   //[_ReconstructedParticles_particleIDs_]
   Int_t           _ReconstructedParticles_startVertex_;
   Int_t           _ReconstructedParticles_startVertex_index[kMax_ReconstructedParticles_startVertex];   //[_ReconstructedParticles_startVertex_]
   UInt_t          _ReconstructedParticles_startVertex_collectionID[kMax_ReconstructedParticles_startVertex];   //[_ReconstructedParticles_startVertex_]
   Int_t           _ReconstructedParticles_particleIDUsed_;
   Int_t           _ReconstructedParticles_particleIDUsed_index[kMax_ReconstructedParticles_particleIDUsed];   //[_ReconstructedParticles_particleIDUsed_]
   UInt_t          _ReconstructedParticles_particleIDUsed_collectionID[kMax_ReconstructedParticles_particleIDUsed];   //[_ReconstructedParticles_particleIDUsed_]
   Int_t           ReconstructedSeededChargedParticleAssociations_;
   UInt_t          ReconstructedSeededChargedParticleAssociations_simID[kMaxReconstructedSeededChargedParticleAssociations];   //[ReconstructedSeededChargedParticleAssociations_]
   UInt_t          ReconstructedSeededChargedParticleAssociations_recID[kMaxReconstructedSeededChargedParticleAssociations];   //[ReconstructedSeededChargedParticleAssociations_]
   Float_t         ReconstructedSeededChargedParticleAssociations_weight[kMaxReconstructedSeededChargedParticleAssociations];   //[ReconstructedSeededChargedParticleAssociations_]
   Int_t           _ReconstructedSeededChargedParticleAssociations_rec_;
   Int_t           _ReconstructedSeededChargedParticleAssociations_rec_index[kMax_ReconstructedSeededChargedParticleAssociations_rec];   //[_ReconstructedSeededChargedParticleAssociations_rec_]
   UInt_t          _ReconstructedSeededChargedParticleAssociations_rec_collectionID[kMax_ReconstructedSeededChargedParticleAssociations_rec];   //[_ReconstructedSeededChargedParticleAssociations_rec_]
   Int_t           _ReconstructedSeededChargedParticleAssociations_sim_;
   Int_t           _ReconstructedSeededChargedParticleAssociations_sim_index[kMax_ReconstructedSeededChargedParticleAssociations_sim];   //[_ReconstructedSeededChargedParticleAssociations_sim_]
   UInt_t          _ReconstructedSeededChargedParticleAssociations_sim_collectionID[kMax_ReconstructedSeededChargedParticleAssociations_sim];   //[_ReconstructedSeededChargedParticleAssociations_sim_]
   Int_t           ReconstructedSeededChargedParticles_;
   Int_t           ReconstructedSeededChargedParticles_type[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_energy[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_momentum_x[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_momentum_y[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_momentum_z[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_referencePoint_x[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_referencePoint_y[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_referencePoint_z[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_charge[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_mass[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_goodnessOfPID[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_covMatrix_xx[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_covMatrix_yy[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_covMatrix_zz[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_covMatrix_tt[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_covMatrix_xy[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_covMatrix_xz[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_covMatrix_xt[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_covMatrix_yz[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_covMatrix_yt[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Float_t         ReconstructedSeededChargedParticles_covMatrix_zt[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Int_t           ReconstructedSeededChargedParticles_PDG[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   UInt_t          ReconstructedSeededChargedParticles_clusters_begin[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   UInt_t          ReconstructedSeededChargedParticles_clusters_end[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   UInt_t          ReconstructedSeededChargedParticles_tracks_begin[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   UInt_t          ReconstructedSeededChargedParticles_tracks_end[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   UInt_t          ReconstructedSeededChargedParticles_particles_begin[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   UInt_t          ReconstructedSeededChargedParticles_particles_end[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   UInt_t          ReconstructedSeededChargedParticles_particleIDs_begin[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   UInt_t          ReconstructedSeededChargedParticles_particleIDs_end[kMaxReconstructedSeededChargedParticles];   //[ReconstructedSeededChargedParticles_]
   Int_t           _ReconstructedSeededChargedParticles_clusters_;
   Int_t           _ReconstructedSeededChargedParticles_clusters_index[kMax_ReconstructedSeededChargedParticles_clusters];   //[_ReconstructedSeededChargedParticles_clusters_]
   UInt_t          _ReconstructedSeededChargedParticles_clusters_collectionID[kMax_ReconstructedSeededChargedParticles_clusters];   //[_ReconstructedSeededChargedParticles_clusters_]
   Int_t           _ReconstructedSeededChargedParticles_tracks_;
   Int_t           _ReconstructedSeededChargedParticles_tracks_index[kMax_ReconstructedSeededChargedParticles_tracks];   //[_ReconstructedSeededChargedParticles_tracks_]
   UInt_t          _ReconstructedSeededChargedParticles_tracks_collectionID[kMax_ReconstructedSeededChargedParticles_tracks];   //[_ReconstructedSeededChargedParticles_tracks_]
   Int_t           _ReconstructedSeededChargedParticles_particles_;
   Int_t           _ReconstructedSeededChargedParticles_particles_index[kMax_ReconstructedSeededChargedParticles_particles];   //[_ReconstructedSeededChargedParticles_particles_]
   UInt_t          _ReconstructedSeededChargedParticles_particles_collectionID[kMax_ReconstructedSeededChargedParticles_particles];   //[_ReconstructedSeededChargedParticles_particles_]
   Int_t           _ReconstructedSeededChargedParticles_particleIDs_;
   Int_t           _ReconstructedSeededChargedParticles_particleIDs_index[kMax_ReconstructedSeededChargedParticles_particleIDs];   //[_ReconstructedSeededChargedParticles_particleIDs_]
   UInt_t          _ReconstructedSeededChargedParticles_particleIDs_collectionID[kMax_ReconstructedSeededChargedParticles_particleIDs];   //[_ReconstructedSeededChargedParticles_particleIDs_]
   Int_t           _ReconstructedSeededChargedParticles_startVertex_;
   Int_t           _ReconstructedSeededChargedParticles_startVertex_index[kMax_ReconstructedSeededChargedParticles_startVertex];   //[_ReconstructedSeededChargedParticles_startVertex_]
   UInt_t          _ReconstructedSeededChargedParticles_startVertex_collectionID[kMax_ReconstructedSeededChargedParticles_startVertex];   //[_ReconstructedSeededChargedParticles_startVertex_]
   Int_t           _ReconstructedSeededChargedParticles_particleIDUsed_;
   Int_t           _ReconstructedSeededChargedParticles_particleIDUsed_index[kMax_ReconstructedSeededChargedParticles_particleIDUsed];   //[_ReconstructedSeededChargedParticles_particleIDUsed_]
   UInt_t          _ReconstructedSeededChargedParticles_particleIDUsed_collectionID[kMax_ReconstructedSeededChargedParticles_particleIDUsed];   //[_ReconstructedSeededChargedParticles_particleIDUsed_]
   Int_t           SiBarrelTrackerRecHits_;
   ULong_t         SiBarrelTrackerRecHits_cellID[kMaxSiBarrelTrackerRecHits];   //[SiBarrelTrackerRecHits_]
   Float_t         SiBarrelTrackerRecHits_position_x[kMaxSiBarrelTrackerRecHits];   //[SiBarrelTrackerRecHits_]
   Float_t         SiBarrelTrackerRecHits_position_y[kMaxSiBarrelTrackerRecHits];   //[SiBarrelTrackerRecHits_]
   Float_t         SiBarrelTrackerRecHits_position_z[kMaxSiBarrelTrackerRecHits];   //[SiBarrelTrackerRecHits_]
   Float_t         SiBarrelTrackerRecHits_positionError_xx[kMaxSiBarrelTrackerRecHits];   //[SiBarrelTrackerRecHits_]
   Float_t         SiBarrelTrackerRecHits_positionError_yy[kMaxSiBarrelTrackerRecHits];   //[SiBarrelTrackerRecHits_]
   Float_t         SiBarrelTrackerRecHits_positionError_zz[kMaxSiBarrelTrackerRecHits];   //[SiBarrelTrackerRecHits_]
   Float_t         SiBarrelTrackerRecHits_time[kMaxSiBarrelTrackerRecHits];   //[SiBarrelTrackerRecHits_]
   Float_t         SiBarrelTrackerRecHits_timeError[kMaxSiBarrelTrackerRecHits];   //[SiBarrelTrackerRecHits_]
   Float_t         SiBarrelTrackerRecHits_edep[kMaxSiBarrelTrackerRecHits];   //[SiBarrelTrackerRecHits_]
   Float_t         SiBarrelTrackerRecHits_edepError[kMaxSiBarrelTrackerRecHits];   //[SiBarrelTrackerRecHits_]
   Int_t           SiBarrelVertexRecHits_;
   ULong_t         SiBarrelVertexRecHits_cellID[kMaxSiBarrelVertexRecHits];   //[SiBarrelVertexRecHits_]
   Float_t         SiBarrelVertexRecHits_position_x[kMaxSiBarrelVertexRecHits];   //[SiBarrelVertexRecHits_]
   Float_t         SiBarrelVertexRecHits_position_y[kMaxSiBarrelVertexRecHits];   //[SiBarrelVertexRecHits_]
   Float_t         SiBarrelVertexRecHits_position_z[kMaxSiBarrelVertexRecHits];   //[SiBarrelVertexRecHits_]
   Float_t         SiBarrelVertexRecHits_positionError_xx[kMaxSiBarrelVertexRecHits];   //[SiBarrelVertexRecHits_]
   Float_t         SiBarrelVertexRecHits_positionError_yy[kMaxSiBarrelVertexRecHits];   //[SiBarrelVertexRecHits_]
   Float_t         SiBarrelVertexRecHits_positionError_zz[kMaxSiBarrelVertexRecHits];   //[SiBarrelVertexRecHits_]
   Float_t         SiBarrelVertexRecHits_time[kMaxSiBarrelVertexRecHits];   //[SiBarrelVertexRecHits_]
   Float_t         SiBarrelVertexRecHits_timeError[kMaxSiBarrelVertexRecHits];   //[SiBarrelVertexRecHits_]
   Float_t         SiBarrelVertexRecHits_edep[kMaxSiBarrelVertexRecHits];   //[SiBarrelVertexRecHits_]
   Float_t         SiBarrelVertexRecHits_edepError[kMaxSiBarrelVertexRecHits];   //[SiBarrelVertexRecHits_]
   Int_t           SiEndcapTrackerRecHits_;
   ULong_t         SiEndcapTrackerRecHits_cellID[kMaxSiEndcapTrackerRecHits];   //[SiEndcapTrackerRecHits_]
   Float_t         SiEndcapTrackerRecHits_position_x[kMaxSiEndcapTrackerRecHits];   //[SiEndcapTrackerRecHits_]
   Float_t         SiEndcapTrackerRecHits_position_y[kMaxSiEndcapTrackerRecHits];   //[SiEndcapTrackerRecHits_]
   Float_t         SiEndcapTrackerRecHits_position_z[kMaxSiEndcapTrackerRecHits];   //[SiEndcapTrackerRecHits_]
   Float_t         SiEndcapTrackerRecHits_positionError_xx[kMaxSiEndcapTrackerRecHits];   //[SiEndcapTrackerRecHits_]
   Float_t         SiEndcapTrackerRecHits_positionError_yy[kMaxSiEndcapTrackerRecHits];   //[SiEndcapTrackerRecHits_]
   Float_t         SiEndcapTrackerRecHits_positionError_zz[kMaxSiEndcapTrackerRecHits];   //[SiEndcapTrackerRecHits_]
   Float_t         SiEndcapTrackerRecHits_time[kMaxSiEndcapTrackerRecHits];   //[SiEndcapTrackerRecHits_]
   Float_t         SiEndcapTrackerRecHits_timeError[kMaxSiEndcapTrackerRecHits];   //[SiEndcapTrackerRecHits_]
   Float_t         SiEndcapTrackerRecHits_edep[kMaxSiEndcapTrackerRecHits];   //[SiEndcapTrackerRecHits_]
   Float_t         SiEndcapTrackerRecHits_edepError[kMaxSiEndcapTrackerRecHits];   //[SiEndcapTrackerRecHits_]
   Int_t           TaggerTrackerRawHits_;
   ULong_t         TaggerTrackerRawHits_cellID[kMaxTaggerTrackerRawHits];   //[TaggerTrackerRawHits_]
   Int_t           TaggerTrackerRawHits_charge[kMaxTaggerTrackerRawHits];   //[TaggerTrackerRawHits_]
   Int_t           TaggerTrackerRawHits_timeStamp[kMaxTaggerTrackerRawHits];   //[TaggerTrackerRawHits_]
   Int_t           TOFBarrelRecHit_;
   ULong_t         TOFBarrelRecHit_cellID[kMaxTOFBarrelRecHit];   //[TOFBarrelRecHit_]
   Float_t         TOFBarrelRecHit_position_x[kMaxTOFBarrelRecHit];   //[TOFBarrelRecHit_]
   Float_t         TOFBarrelRecHit_position_y[kMaxTOFBarrelRecHit];   //[TOFBarrelRecHit_]
   Float_t         TOFBarrelRecHit_position_z[kMaxTOFBarrelRecHit];   //[TOFBarrelRecHit_]
   Float_t         TOFBarrelRecHit_positionError_xx[kMaxTOFBarrelRecHit];   //[TOFBarrelRecHit_]
   Float_t         TOFBarrelRecHit_positionError_yy[kMaxTOFBarrelRecHit];   //[TOFBarrelRecHit_]
   Float_t         TOFBarrelRecHit_positionError_zz[kMaxTOFBarrelRecHit];   //[TOFBarrelRecHit_]
   Float_t         TOFBarrelRecHit_time[kMaxTOFBarrelRecHit];   //[TOFBarrelRecHit_]
   Float_t         TOFBarrelRecHit_timeError[kMaxTOFBarrelRecHit];   //[TOFBarrelRecHit_]
   Float_t         TOFBarrelRecHit_edep[kMaxTOFBarrelRecHit];   //[TOFBarrelRecHit_]
   Float_t         TOFBarrelRecHit_edepError[kMaxTOFBarrelRecHit];   //[TOFBarrelRecHit_]
   Int_t           TOFEndcapRecHits_;
   ULong_t         TOFEndcapRecHits_cellID[kMaxTOFEndcapRecHits];   //[TOFEndcapRecHits_]
   Float_t         TOFEndcapRecHits_position_x[kMaxTOFEndcapRecHits];   //[TOFEndcapRecHits_]
   Float_t         TOFEndcapRecHits_position_y[kMaxTOFEndcapRecHits];   //[TOFEndcapRecHits_]
   Float_t         TOFEndcapRecHits_position_z[kMaxTOFEndcapRecHits];   //[TOFEndcapRecHits_]
   Float_t         TOFEndcapRecHits_positionError_xx[kMaxTOFEndcapRecHits];   //[TOFEndcapRecHits_]
   Float_t         TOFEndcapRecHits_positionError_yy[kMaxTOFEndcapRecHits];   //[TOFEndcapRecHits_]
   Float_t         TOFEndcapRecHits_positionError_zz[kMaxTOFEndcapRecHits];   //[TOFEndcapRecHits_]
   Float_t         TOFEndcapRecHits_time[kMaxTOFEndcapRecHits];   //[TOFEndcapRecHits_]
   Float_t         TOFEndcapRecHits_timeError[kMaxTOFEndcapRecHits];   //[TOFEndcapRecHits_]
   Float_t         TOFEndcapRecHits_edep[kMaxTOFEndcapRecHits];   //[TOFEndcapRecHits_]
   Float_t         TOFEndcapRecHits_edepError[kMaxTOFEndcapRecHits];   //[TOFEndcapRecHits_]
   Int_t           ZDCEcalClusterAssociations_;
   UInt_t          ZDCEcalClusterAssociations_simID[kMaxZDCEcalClusterAssociations];   //[ZDCEcalClusterAssociations_]
   UInt_t          ZDCEcalClusterAssociations_recID[kMaxZDCEcalClusterAssociations];   //[ZDCEcalClusterAssociations_]
   Float_t         ZDCEcalClusterAssociations_weight[kMaxZDCEcalClusterAssociations];   //[ZDCEcalClusterAssociations_]
   Int_t           _ZDCEcalClusterAssociations_rec_;
   Int_t           _ZDCEcalClusterAssociations_rec_index[kMax_ZDCEcalClusterAssociations_rec];   //[_ZDCEcalClusterAssociations_rec_]
   UInt_t          _ZDCEcalClusterAssociations_rec_collectionID[kMax_ZDCEcalClusterAssociations_rec];   //[_ZDCEcalClusterAssociations_rec_]
   Int_t           _ZDCEcalClusterAssociations_sim_;
   Int_t           _ZDCEcalClusterAssociations_sim_index[kMax_ZDCEcalClusterAssociations_sim];   //[_ZDCEcalClusterAssociations_sim_]
   UInt_t          _ZDCEcalClusterAssociations_sim_collectionID[kMax_ZDCEcalClusterAssociations_sim];   //[_ZDCEcalClusterAssociations_sim_]
   Int_t           ZDCEcalClusters_;
   Int_t           ZDCEcalClusters_type[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Float_t         ZDCEcalClusters_energy[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Float_t         ZDCEcalClusters_energyError[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Float_t         ZDCEcalClusters_time[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Float_t         ZDCEcalClusters_timeError[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   UInt_t          ZDCEcalClusters_nhits[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Float_t         ZDCEcalClusters_position_x[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Float_t         ZDCEcalClusters_position_y[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Float_t         ZDCEcalClusters_position_z[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Float_t         ZDCEcalClusters_positionError_xx[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Float_t         ZDCEcalClusters_positionError_yy[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Float_t         ZDCEcalClusters_positionError_zz[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Float_t         ZDCEcalClusters_positionError_xy[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Float_t         ZDCEcalClusters_positionError_xz[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Float_t         ZDCEcalClusters_positionError_yz[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Float_t         ZDCEcalClusters_intrinsicTheta[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Float_t         ZDCEcalClusters_intrinsicPhi[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Float_t         ZDCEcalClusters_intrinsicDirectionError_xx[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Float_t         ZDCEcalClusters_intrinsicDirectionError_yy[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Float_t         ZDCEcalClusters_intrinsicDirectionError_xy[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   UInt_t          ZDCEcalClusters_shapeParameters_begin[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   UInt_t          ZDCEcalClusters_shapeParameters_end[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   UInt_t          ZDCEcalClusters_hitContributions_begin[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   UInt_t          ZDCEcalClusters_hitContributions_end[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   UInt_t          ZDCEcalClusters_subdetectorEnergies_begin[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   UInt_t          ZDCEcalClusters_subdetectorEnergies_end[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   UInt_t          ZDCEcalClusters_clusters_begin[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   UInt_t          ZDCEcalClusters_clusters_end[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   UInt_t          ZDCEcalClusters_hits_begin[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   UInt_t          ZDCEcalClusters_hits_end[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   UInt_t          ZDCEcalClusters_particleIDs_begin[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   UInt_t          ZDCEcalClusters_particleIDs_end[kMaxZDCEcalClusters];   //[ZDCEcalClusters_]
   Int_t           _ZDCEcalClusters_clusters_;
   Int_t           _ZDCEcalClusters_clusters_index[kMax_ZDCEcalClusters_clusters];   //[_ZDCEcalClusters_clusters_]
   UInt_t          _ZDCEcalClusters_clusters_collectionID[kMax_ZDCEcalClusters_clusters];   //[_ZDCEcalClusters_clusters_]
   Int_t           _ZDCEcalClusters_hits_;
   Int_t           _ZDCEcalClusters_hits_index[kMax_ZDCEcalClusters_hits];   //[_ZDCEcalClusters_hits_]
   UInt_t          _ZDCEcalClusters_hits_collectionID[kMax_ZDCEcalClusters_hits];   //[_ZDCEcalClusters_hits_]
   Int_t           _ZDCEcalClusters_particleIDs_;
   Int_t           _ZDCEcalClusters_particleIDs_index[kMax_ZDCEcalClusters_particleIDs];   //[_ZDCEcalClusters_particleIDs_]
   UInt_t          _ZDCEcalClusters_particleIDs_collectionID[kMax_ZDCEcalClusters_particleIDs];   //[_ZDCEcalClusters_particleIDs_]
   vector<float>   *_ZDCEcalClusters_shapeParameters;
   vector<float>   *_ZDCEcalClusters_hitContributions;
   vector<float>   *_ZDCEcalClusters_subdetectorEnergies;
   Int_t           ZDCEcalRawHits_;
   ULong_t         ZDCEcalRawHits_cellID[kMaxZDCEcalRawHits];   //[ZDCEcalRawHits_]
   Int_t           ZDCEcalRawHits_amplitude[kMaxZDCEcalRawHits];   //[ZDCEcalRawHits_]
   Int_t           ZDCEcalRawHits_timeStamp[kMaxZDCEcalRawHits];   //[ZDCEcalRawHits_]
   Int_t           ZDCEcalRecHits_;
   ULong_t         ZDCEcalRecHits_cellID[kMaxZDCEcalRecHits];   //[ZDCEcalRecHits_]
   Float_t         ZDCEcalRecHits_energy[kMaxZDCEcalRecHits];   //[ZDCEcalRecHits_]
   Float_t         ZDCEcalRecHits_energyError[kMaxZDCEcalRecHits];   //[ZDCEcalRecHits_]
   Float_t         ZDCEcalRecHits_time[kMaxZDCEcalRecHits];   //[ZDCEcalRecHits_]
   Float_t         ZDCEcalRecHits_timeError[kMaxZDCEcalRecHits];   //[ZDCEcalRecHits_]
   Float_t         ZDCEcalRecHits_position_x[kMaxZDCEcalRecHits];   //[ZDCEcalRecHits_]
   Float_t         ZDCEcalRecHits_position_y[kMaxZDCEcalRecHits];   //[ZDCEcalRecHits_]
   Float_t         ZDCEcalRecHits_position_z[kMaxZDCEcalRecHits];   //[ZDCEcalRecHits_]
   Float_t         ZDCEcalRecHits_dimension_x[kMaxZDCEcalRecHits];   //[ZDCEcalRecHits_]
   Float_t         ZDCEcalRecHits_dimension_y[kMaxZDCEcalRecHits];   //[ZDCEcalRecHits_]
   Float_t         ZDCEcalRecHits_dimension_z[kMaxZDCEcalRecHits];   //[ZDCEcalRecHits_]
   Int_t           ZDCEcalRecHits_sector[kMaxZDCEcalRecHits];   //[ZDCEcalRecHits_]
   Int_t           ZDCEcalRecHits_layer[kMaxZDCEcalRecHits];   //[ZDCEcalRecHits_]
   Float_t         ZDCEcalRecHits_local_x[kMaxZDCEcalRecHits];   //[ZDCEcalRecHits_]
   Float_t         ZDCEcalRecHits_local_y[kMaxZDCEcalRecHits];   //[ZDCEcalRecHits_]
   Float_t         ZDCEcalRecHits_local_z[kMaxZDCEcalRecHits];   //[ZDCEcalRecHits_]
   Int_t           ZDCEcalTruthClusterAssociations_;
   UInt_t          ZDCEcalTruthClusterAssociations_simID[kMaxZDCEcalTruthClusterAssociations];   //[ZDCEcalTruthClusterAssociations_]
   UInt_t          ZDCEcalTruthClusterAssociations_recID[kMaxZDCEcalTruthClusterAssociations];   //[ZDCEcalTruthClusterAssociations_]
   Float_t         ZDCEcalTruthClusterAssociations_weight[kMaxZDCEcalTruthClusterAssociations];   //[ZDCEcalTruthClusterAssociations_]
   Int_t           _ZDCEcalTruthClusterAssociations_rec_;
   Int_t           _ZDCEcalTruthClusterAssociations_rec_index[kMax_ZDCEcalTruthClusterAssociations_rec];   //[_ZDCEcalTruthClusterAssociations_rec_]
   UInt_t          _ZDCEcalTruthClusterAssociations_rec_collectionID[kMax_ZDCEcalTruthClusterAssociations_rec];   //[_ZDCEcalTruthClusterAssociations_rec_]
   Int_t           _ZDCEcalTruthClusterAssociations_sim_;
   Int_t           _ZDCEcalTruthClusterAssociations_sim_index[kMax_ZDCEcalTruthClusterAssociations_sim];   //[_ZDCEcalTruthClusterAssociations_sim_]
   UInt_t          _ZDCEcalTruthClusterAssociations_sim_collectionID[kMax_ZDCEcalTruthClusterAssociations_sim];   //[_ZDCEcalTruthClusterAssociations_sim_]
   Int_t           ZDCEcalTruthClusters_;
   Int_t           ZDCEcalTruthClusters_type[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Float_t         ZDCEcalTruthClusters_energy[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Float_t         ZDCEcalTruthClusters_energyError[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Float_t         ZDCEcalTruthClusters_time[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Float_t         ZDCEcalTruthClusters_timeError[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   UInt_t          ZDCEcalTruthClusters_nhits[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Float_t         ZDCEcalTruthClusters_position_x[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Float_t         ZDCEcalTruthClusters_position_y[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Float_t         ZDCEcalTruthClusters_position_z[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Float_t         ZDCEcalTruthClusters_positionError_xx[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Float_t         ZDCEcalTruthClusters_positionError_yy[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Float_t         ZDCEcalTruthClusters_positionError_zz[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Float_t         ZDCEcalTruthClusters_positionError_xy[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Float_t         ZDCEcalTruthClusters_positionError_xz[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Float_t         ZDCEcalTruthClusters_positionError_yz[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Float_t         ZDCEcalTruthClusters_intrinsicTheta[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Float_t         ZDCEcalTruthClusters_intrinsicPhi[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Float_t         ZDCEcalTruthClusters_intrinsicDirectionError_xx[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Float_t         ZDCEcalTruthClusters_intrinsicDirectionError_yy[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Float_t         ZDCEcalTruthClusters_intrinsicDirectionError_xy[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   UInt_t          ZDCEcalTruthClusters_shapeParameters_begin[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   UInt_t          ZDCEcalTruthClusters_shapeParameters_end[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   UInt_t          ZDCEcalTruthClusters_hitContributions_begin[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   UInt_t          ZDCEcalTruthClusters_hitContributions_end[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   UInt_t          ZDCEcalTruthClusters_subdetectorEnergies_begin[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   UInt_t          ZDCEcalTruthClusters_subdetectorEnergies_end[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   UInt_t          ZDCEcalTruthClusters_clusters_begin[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   UInt_t          ZDCEcalTruthClusters_clusters_end[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   UInt_t          ZDCEcalTruthClusters_hits_begin[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   UInt_t          ZDCEcalTruthClusters_hits_end[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   UInt_t          ZDCEcalTruthClusters_particleIDs_begin[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   UInt_t          ZDCEcalTruthClusters_particleIDs_end[kMaxZDCEcalTruthClusters];   //[ZDCEcalTruthClusters_]
   Int_t           _ZDCEcalTruthClusters_clusters_;
   Int_t           _ZDCEcalTruthClusters_clusters_index[kMax_ZDCEcalTruthClusters_clusters];   //[_ZDCEcalTruthClusters_clusters_]
   UInt_t          _ZDCEcalTruthClusters_clusters_collectionID[kMax_ZDCEcalTruthClusters_clusters];   //[_ZDCEcalTruthClusters_clusters_]
   Int_t           _ZDCEcalTruthClusters_hits_;
   Int_t           _ZDCEcalTruthClusters_hits_index[kMax_ZDCEcalTruthClusters_hits];   //[_ZDCEcalTruthClusters_hits_]
   UInt_t          _ZDCEcalTruthClusters_hits_collectionID[kMax_ZDCEcalTruthClusters_hits];   //[_ZDCEcalTruthClusters_hits_]
   Int_t           _ZDCEcalTruthClusters_particleIDs_;
   Int_t           _ZDCEcalTruthClusters_particleIDs_index[kMax_ZDCEcalTruthClusters_particleIDs];   //[_ZDCEcalTruthClusters_particleIDs_]
   UInt_t          _ZDCEcalTruthClusters_particleIDs_collectionID[kMax_ZDCEcalTruthClusters_particleIDs];   //[_ZDCEcalTruthClusters_particleIDs_]
   vector<float>   *_ZDCEcalTruthClusters_shapeParameters;
   vector<float>   *_ZDCEcalTruthClusters_hitContributions;
   vector<float>   *_ZDCEcalTruthClusters_subdetectorEnergies;
 //podio::GenericParameters *PARAMETERS;
   Int_t           _intMap_;
   string          _intMap_first[kMax_intMap];
   vector<int>     _intMap_second[kMax_intMap];
   Int_t           _floatMap_;
   string          _floatMap_first[kMax_floatMap];
   vector<float>   _floatMap_second[kMax_floatMap];
   Int_t           _stringMap_;
   string          _stringMap_first[kMax_stringMap];
   vector<string>  _stringMap_second[kMax_stringMap];
   Int_t           _doubleMap_;
   string          _doubleMap_first[kMax_doubleMap];
   vector<double>  _doubleMap_second[kMax_doubleMap];

   // List of branches
   TBranch        *b_B0ECalClusterAssociations_;   //!
   TBranch        *b_B0ECalClusterAssociations_simID;   //!
   TBranch        *b_B0ECalClusterAssociations_recID;   //!
   TBranch        *b_B0ECalClusterAssociations_weight;   //!
   TBranch        *b__B0ECalClusterAssociations_rec_;   //!
   TBranch        *b__B0ECalClusterAssociations_rec_index;   //!
   TBranch        *b__B0ECalClusterAssociations_rec_collectionID;   //!
   TBranch        *b__B0ECalClusterAssociations_sim_;   //!
   TBranch        *b__B0ECalClusterAssociations_sim_index;   //!
   TBranch        *b__B0ECalClusterAssociations_sim_collectionID;   //!
   TBranch        *b_B0ECalClusters_;   //!
   TBranch        *b_B0ECalClusters_type;   //!
   TBranch        *b_B0ECalClusters_energy;   //!
   TBranch        *b_B0ECalClusters_energyError;   //!
   TBranch        *b_B0ECalClusters_time;   //!
   TBranch        *b_B0ECalClusters_timeError;   //!
   TBranch        *b_B0ECalClusters_nhits;   //!
   TBranch        *b_B0ECalClusters_position_x;   //!
   TBranch        *b_B0ECalClusters_position_y;   //!
   TBranch        *b_B0ECalClusters_position_z;   //!
   TBranch        *b_B0ECalClusters_positionError_xx;   //!
   TBranch        *b_B0ECalClusters_positionError_yy;   //!
   TBranch        *b_B0ECalClusters_positionError_zz;   //!
   TBranch        *b_B0ECalClusters_positionError_xy;   //!
   TBranch        *b_B0ECalClusters_positionError_xz;   //!
   TBranch        *b_B0ECalClusters_positionError_yz;   //!
   TBranch        *b_B0ECalClusters_intrinsicTheta;   //!
   TBranch        *b_B0ECalClusters_intrinsicPhi;   //!
   TBranch        *b_B0ECalClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_B0ECalClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_B0ECalClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_B0ECalClusters_shapeParameters_begin;   //!
   TBranch        *b_B0ECalClusters_shapeParameters_end;   //!
   TBranch        *b_B0ECalClusters_hitContributions_begin;   //!
   TBranch        *b_B0ECalClusters_hitContributions_end;   //!
   TBranch        *b_B0ECalClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_B0ECalClusters_subdetectorEnergies_end;   //!
   TBranch        *b_B0ECalClusters_clusters_begin;   //!
   TBranch        *b_B0ECalClusters_clusters_end;   //!
   TBranch        *b_B0ECalClusters_hits_begin;   //!
   TBranch        *b_B0ECalClusters_hits_end;   //!
   TBranch        *b_B0ECalClusters_particleIDs_begin;   //!
   TBranch        *b_B0ECalClusters_particleIDs_end;   //!
   TBranch        *b__B0ECalClusters_clusters_;   //!
   TBranch        *b__B0ECalClusters_clusters_index;   //!
   TBranch        *b__B0ECalClusters_clusters_collectionID;   //!
   TBranch        *b__B0ECalClusters_hits_;   //!
   TBranch        *b__B0ECalClusters_hits_index;   //!
   TBranch        *b__B0ECalClusters_hits_collectionID;   //!
   TBranch        *b__B0ECalClusters_particleIDs_;   //!
   TBranch        *b__B0ECalClusters_particleIDs_index;   //!
   TBranch        *b__B0ECalClusters_particleIDs_collectionID;   //!
   TBranch        *b__B0ECalClusters_shapeParameters;   //!
   TBranch        *b__B0ECalClusters_hitContributions;   //!
   TBranch        *b__B0ECalClusters_subdetectorEnergies;   //!
   TBranch        *b_B0ECalRawHits_;   //!
   TBranch        *b_B0ECalRawHits_cellID;   //!
   TBranch        *b_B0ECalRawHits_amplitude;   //!
   TBranch        *b_B0ECalRawHits_timeStamp;   //!
   TBranch        *b_B0ECalRecHits_;   //!
   TBranch        *b_B0ECalRecHits_cellID;   //!
   TBranch        *b_B0ECalRecHits_energy;   //!
   TBranch        *b_B0ECalRecHits_energyError;   //!
   TBranch        *b_B0ECalRecHits_time;   //!
   TBranch        *b_B0ECalRecHits_timeError;   //!
   TBranch        *b_B0ECalRecHits_position_x;   //!
   TBranch        *b_B0ECalRecHits_position_y;   //!
   TBranch        *b_B0ECalRecHits_position_z;   //!
   TBranch        *b_B0ECalRecHits_dimension_x;   //!
   TBranch        *b_B0ECalRecHits_dimension_y;   //!
   TBranch        *b_B0ECalRecHits_dimension_z;   //!
   TBranch        *b_B0ECalRecHits_sector;   //!
   TBranch        *b_B0ECalRecHits_layer;   //!
   TBranch        *b_B0ECalRecHits_local_x;   //!
   TBranch        *b_B0ECalRecHits_local_y;   //!
   TBranch        *b_B0ECalRecHits_local_z;   //!
   TBranch        *b_B0TrackerRecHits_;   //!
   TBranch        *b_B0TrackerRecHits_cellID;   //!
   TBranch        *b_B0TrackerRecHits_position_x;   //!
   TBranch        *b_B0TrackerRecHits_position_y;   //!
   TBranch        *b_B0TrackerRecHits_position_z;   //!
   TBranch        *b_B0TrackerRecHits_positionError_xx;   //!
   TBranch        *b_B0TrackerRecHits_positionError_yy;   //!
   TBranch        *b_B0TrackerRecHits_positionError_zz;   //!
   TBranch        *b_B0TrackerRecHits_time;   //!
   TBranch        *b_B0TrackerRecHits_timeError;   //!
   TBranch        *b_B0TrackerRecHits_edep;   //!
   TBranch        *b_B0TrackerRecHits_edepError;   //!
   TBranch        *b_BackwardMPGDEndcapRecHits_;   //!
   TBranch        *b_BackwardMPGDEndcapRecHits_cellID;   //!
   TBranch        *b_BackwardMPGDEndcapRecHits_position_x;   //!
   TBranch        *b_BackwardMPGDEndcapRecHits_position_y;   //!
   TBranch        *b_BackwardMPGDEndcapRecHits_position_z;   //!
   TBranch        *b_BackwardMPGDEndcapRecHits_positionError_xx;   //!
   TBranch        *b_BackwardMPGDEndcapRecHits_positionError_yy;   //!
   TBranch        *b_BackwardMPGDEndcapRecHits_positionError_zz;   //!
   TBranch        *b_BackwardMPGDEndcapRecHits_time;   //!
   TBranch        *b_BackwardMPGDEndcapRecHits_timeError;   //!
   TBranch        *b_BackwardMPGDEndcapRecHits_edep;   //!
   TBranch        *b_BackwardMPGDEndcapRecHits_edepError;   //!
   TBranch        *b_CalorimeterTrackProjections_;   //!
   TBranch        *b_CalorimeterTrackProjections_length;   //!
   TBranch        *b_CalorimeterTrackProjections_lengthError;   //!
   TBranch        *b_CalorimeterTrackProjections_points_begin;   //!
   TBranch        *b_CalorimeterTrackProjections_points_end;   //!
   TBranch        *b__CalorimeterTrackProjections_track_;   //!
   TBranch        *b__CalorimeterTrackProjections_track_index;   //!
   TBranch        *b__CalorimeterTrackProjections_track_collectionID;   //!
   TBranch        *b__CalorimeterTrackProjections_points_;   //!
   TBranch        *b__CalorimeterTrackProjections_points_surface;   //!
   TBranch        *b__CalorimeterTrackProjections_points_system;   //!
   TBranch        *b__CalorimeterTrackProjections_points_position_x;   //!
   TBranch        *b__CalorimeterTrackProjections_points_position_y;   //!
   TBranch        *b__CalorimeterTrackProjections_points_position_z;   //!
   TBranch        *b__CalorimeterTrackProjections_points_positionError_xx;   //!
   TBranch        *b__CalorimeterTrackProjections_points_positionError_yy;   //!
   TBranch        *b__CalorimeterTrackProjections_points_positionError_zz;   //!
   TBranch        *b__CalorimeterTrackProjections_points_positionError_xy;   //!
   TBranch        *b__CalorimeterTrackProjections_points_positionError_xz;   //!
   TBranch        *b__CalorimeterTrackProjections_points_positionError_yz;   //!
   TBranch        *b__CalorimeterTrackProjections_points_momentum_x;   //!
   TBranch        *b__CalorimeterTrackProjections_points_momentum_y;   //!
   TBranch        *b__CalorimeterTrackProjections_points_momentum_z;   //!
   TBranch        *b__CalorimeterTrackProjections_points_momentumError_xx;   //!
   TBranch        *b__CalorimeterTrackProjections_points_momentumError_yy;   //!
   TBranch        *b__CalorimeterTrackProjections_points_momentumError_zz;   //!
   TBranch        *b__CalorimeterTrackProjections_points_momentumError_xy;   //!
   TBranch        *b__CalorimeterTrackProjections_points_momentumError_xz;   //!
   TBranch        *b__CalorimeterTrackProjections_points_momentumError_yz;   //!
   TBranch        *b__CalorimeterTrackProjections_points_time;   //!
   TBranch        *b__CalorimeterTrackProjections_points_timeError;   //!
   TBranch        *b__CalorimeterTrackProjections_points_theta;   //!
   TBranch        *b__CalorimeterTrackProjections_points_phi;   //!
   TBranch        *b__CalorimeterTrackProjections_points_directionError_xx;   //!
   TBranch        *b__CalorimeterTrackProjections_points_directionError_yy;   //!
   TBranch        *b__CalorimeterTrackProjections_points_directionError_xy;   //!
   TBranch        *b__CalorimeterTrackProjections_points_pathlength;   //!
   TBranch        *b__CalorimeterTrackProjections_points_pathlengthError;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_type;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_loc_a;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_loc_b;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_locError_xx;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_locError_yy;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_locError_xy;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_theta;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_phi;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_qOverP;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_momentumError_xx;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_momentumError_yy;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_momentumError_zz;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_momentumError_xy;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_momentumError_xz;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_momentumError_yz;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_time;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_timeError;   //!
   TBranch        *b_CentralCKFSeededTrackParameters_charge;   //!
   TBranch        *b__CentralCKFSeededTrackParameters_trajectory_;   //!
   TBranch        *b__CentralCKFSeededTrackParameters_trajectory_index;   //!
   TBranch        *b__CentralCKFSeededTrackParameters_trajectory_collectionID;   //!
   TBranch        *b_CentralCKFSeededTrajectories_;   //!
   TBranch        *b_CentralCKFSeededTrajectories_type;   //!
   TBranch        *b_CentralCKFSeededTrajectories_nStates;   //!
   TBranch        *b_CentralCKFSeededTrajectories_nMeasurements;   //!
   TBranch        *b_CentralCKFSeededTrajectories_nOutliers;   //!
   TBranch        *b_CentralCKFSeededTrajectories_nHoles;   //!
   TBranch        *b_CentralCKFSeededTrajectories_chi2;   //!
   TBranch        *b_CentralCKFSeededTrajectories_ndf;   //!
   TBranch        *b_CentralCKFSeededTrajectories_nSharedHits;   //!
   TBranch        *b_CentralCKFSeededTrajectories_measurementChi2_begin;   //!
   TBranch        *b_CentralCKFSeededTrajectories_measurementChi2_end;   //!
   TBranch        *b_CentralCKFSeededTrajectories_outlierChi2_begin;   //!
   TBranch        *b_CentralCKFSeededTrajectories_outlierChi2_end;   //!
   TBranch        *b_CentralCKFSeededTrajectories_trackParameters_begin;   //!
   TBranch        *b_CentralCKFSeededTrajectories_trackParameters_end;   //!
   TBranch        *b_CentralCKFSeededTrajectories_measurementHits_begin;   //!
   TBranch        *b_CentralCKFSeededTrajectories_measurementHits_end;   //!
   TBranch        *b_CentralCKFSeededTrajectories_outlierHits_begin;   //!
   TBranch        *b_CentralCKFSeededTrajectories_outlierHits_end;   //!
   TBranch        *b__CentralCKFSeededTrajectories_trackParameters_;   //!
   TBranch        *b__CentralCKFSeededTrajectories_trackParameters_index;   //!
   TBranch        *b__CentralCKFSeededTrajectories_trackParameters_collectionID;   //!
   TBranch        *b__CentralCKFSeededTrajectories_measurementHits_;   //!
   TBranch        *b__CentralCKFSeededTrajectories_measurementHits_index;   //!
   TBranch        *b__CentralCKFSeededTrajectories_measurementHits_collectionID;   //!
   TBranch        *b__CentralCKFSeededTrajectories_outlierHits_;   //!
   TBranch        *b__CentralCKFSeededTrajectories_outlierHits_index;   //!
   TBranch        *b__CentralCKFSeededTrajectories_outlierHits_collectionID;   //!
   TBranch        *b__CentralCKFSeededTrajectories_measurementChi2;   //!
   TBranch        *b__CentralCKFSeededTrajectories_outlierChi2;   //!
   TBranch        *b_CentralCKFTrackParameters_;   //!
   TBranch        *b_CentralCKFTrackParameters_type;   //!
   TBranch        *b_CentralCKFTrackParameters_loc_a;   //!
   TBranch        *b_CentralCKFTrackParameters_loc_b;   //!
   TBranch        *b_CentralCKFTrackParameters_locError_xx;   //!
   TBranch        *b_CentralCKFTrackParameters_locError_yy;   //!
   TBranch        *b_CentralCKFTrackParameters_locError_xy;   //!
   TBranch        *b_CentralCKFTrackParameters_theta;   //!
   TBranch        *b_CentralCKFTrackParameters_phi;   //!
   TBranch        *b_CentralCKFTrackParameters_qOverP;   //!
   TBranch        *b_CentralCKFTrackParameters_momentumError_xx;   //!
   TBranch        *b_CentralCKFTrackParameters_momentumError_yy;   //!
   TBranch        *b_CentralCKFTrackParameters_momentumError_zz;   //!
   TBranch        *b_CentralCKFTrackParameters_momentumError_xy;   //!
   TBranch        *b_CentralCKFTrackParameters_momentumError_xz;   //!
   TBranch        *b_CentralCKFTrackParameters_momentumError_yz;   //!
   TBranch        *b_CentralCKFTrackParameters_time;   //!
   TBranch        *b_CentralCKFTrackParameters_timeError;   //!
   TBranch        *b_CentralCKFTrackParameters_charge;   //!
   TBranch        *b__CentralCKFTrackParameters_trajectory_;   //!
   TBranch        *b__CentralCKFTrackParameters_trajectory_index;   //!
   TBranch        *b__CentralCKFTrackParameters_trajectory_collectionID;   //!
   TBranch        *b_CentralCKFTrajectories_;   //!
   TBranch        *b_CentralCKFTrajectories_type;   //!
   TBranch        *b_CentralCKFTrajectories_nStates;   //!
   TBranch        *b_CentralCKFTrajectories_nMeasurements;   //!
   TBranch        *b_CentralCKFTrajectories_nOutliers;   //!
   TBranch        *b_CentralCKFTrajectories_nHoles;   //!
   TBranch        *b_CentralCKFTrajectories_chi2;   //!
   TBranch        *b_CentralCKFTrajectories_ndf;   //!
   TBranch        *b_CentralCKFTrajectories_nSharedHits;   //!
   TBranch        *b_CentralCKFTrajectories_measurementChi2_begin;   //!
   TBranch        *b_CentralCKFTrajectories_measurementChi2_end;   //!
   TBranch        *b_CentralCKFTrajectories_outlierChi2_begin;   //!
   TBranch        *b_CentralCKFTrajectories_outlierChi2_end;   //!
   TBranch        *b_CentralCKFTrajectories_trackParameters_begin;   //!
   TBranch        *b_CentralCKFTrajectories_trackParameters_end;   //!
   TBranch        *b_CentralCKFTrajectories_measurementHits_begin;   //!
   TBranch        *b_CentralCKFTrajectories_measurementHits_end;   //!
   TBranch        *b_CentralCKFTrajectories_outlierHits_begin;   //!
   TBranch        *b_CentralCKFTrajectories_outlierHits_end;   //!
   TBranch        *b__CentralCKFTrajectories_trackParameters_;   //!
   TBranch        *b__CentralCKFTrajectories_trackParameters_index;   //!
   TBranch        *b__CentralCKFTrajectories_trackParameters_collectionID;   //!
   TBranch        *b__CentralCKFTrajectories_measurementHits_;   //!
   TBranch        *b__CentralCKFTrajectories_measurementHits_index;   //!
   TBranch        *b__CentralCKFTrajectories_measurementHits_collectionID;   //!
   TBranch        *b__CentralCKFTrajectories_outlierHits_;   //!
   TBranch        *b__CentralCKFTrajectories_outlierHits_index;   //!
   TBranch        *b__CentralCKFTrajectories_outlierHits_collectionID;   //!
   TBranch        *b__CentralCKFTrajectories_measurementChi2;   //!
   TBranch        *b__CentralCKFTrajectories_outlierChi2;   //!
   TBranch        *b_CentralTrackerMeasurements_;   //!
   TBranch        *b_CentralTrackerMeasurements_surface;   //!
   TBranch        *b_CentralTrackerMeasurements_loc_a;   //!
   TBranch        *b_CentralTrackerMeasurements_loc_b;   //!
   TBranch        *b_CentralTrackerMeasurements_time;   //!
   TBranch        *b_CentralTrackerMeasurements_covariance_xx;   //!
   TBranch        *b_CentralTrackerMeasurements_covariance_yy;   //!
   TBranch        *b_CentralTrackerMeasurements_covariance_zz;   //!
   TBranch        *b_CentralTrackerMeasurements_covariance_xy;   //!
   TBranch        *b_CentralTrackerMeasurements_covariance_xz;   //!
   TBranch        *b_CentralTrackerMeasurements_covariance_yz;   //!
   TBranch        *b_CentralTrackerMeasurements_weights_begin;   //!
   TBranch        *b_CentralTrackerMeasurements_weights_end;   //!
   TBranch        *b_CentralTrackerMeasurements_hits_begin;   //!
   TBranch        *b_CentralTrackerMeasurements_hits_end;   //!
   TBranch        *b__CentralTrackerMeasurements_hits_;   //!
   TBranch        *b__CentralTrackerMeasurements_hits_index;   //!
   TBranch        *b__CentralTrackerMeasurements_hits_collectionID;   //!
   TBranch        *b__CentralTrackerMeasurements_weights;   //!
   TBranch        *b_CentralTrackingRecHits_objIdx_;   //!
   TBranch        *b_CentralTrackingRecHits_objIdx_index;   //!
   TBranch        *b_CentralTrackingRecHits_objIdx_collectionID;   //!
   TBranch        *b_CentralTrackSeedingResults_;   //!
   TBranch        *b_CentralTrackSeedingResults_type;   //!
   TBranch        *b_CentralTrackSeedingResults_loc_a;   //!
   TBranch        *b_CentralTrackSeedingResults_loc_b;   //!
   TBranch        *b_CentralTrackSeedingResults_locError_xx;   //!
   TBranch        *b_CentralTrackSeedingResults_locError_yy;   //!
   TBranch        *b_CentralTrackSeedingResults_locError_xy;   //!
   TBranch        *b_CentralTrackSeedingResults_theta;   //!
   TBranch        *b_CentralTrackSeedingResults_phi;   //!
   TBranch        *b_CentralTrackSeedingResults_qOverP;   //!
   TBranch        *b_CentralTrackSeedingResults_momentumError_xx;   //!
   TBranch        *b_CentralTrackSeedingResults_momentumError_yy;   //!
   TBranch        *b_CentralTrackSeedingResults_momentumError_zz;   //!
   TBranch        *b_CentralTrackSeedingResults_momentumError_xy;   //!
   TBranch        *b_CentralTrackSeedingResults_momentumError_xz;   //!
   TBranch        *b_CentralTrackSeedingResults_momentumError_yz;   //!
   TBranch        *b_CentralTrackSeedingResults_time;   //!
   TBranch        *b_CentralTrackSeedingResults_timeError;   //!
   TBranch        *b_CentralTrackSeedingResults_charge;   //!
   TBranch        *b__CentralTrackSeedingResults_trajectory_;   //!
   TBranch        *b__CentralTrackSeedingResults_trajectory_index;   //!
   TBranch        *b__CentralTrackSeedingResults_trajectory_collectionID;   //!
   TBranch        *b_CentralTrackSegments_;   //!
   TBranch        *b_CentralTrackSegments_length;   //!
   TBranch        *b_CentralTrackSegments_lengthError;   //!
   TBranch        *b_CentralTrackSegments_points_begin;   //!
   TBranch        *b_CentralTrackSegments_points_end;   //!
   TBranch        *b__CentralTrackSegments_track_;   //!
   TBranch        *b__CentralTrackSegments_track_index;   //!
   TBranch        *b__CentralTrackSegments_track_collectionID;   //!
   TBranch        *b__CentralTrackSegments_points_;   //!
   TBranch        *b__CentralTrackSegments_points_surface;   //!
   TBranch        *b__CentralTrackSegments_points_system;   //!
   TBranch        *b__CentralTrackSegments_points_position_x;   //!
   TBranch        *b__CentralTrackSegments_points_position_y;   //!
   TBranch        *b__CentralTrackSegments_points_position_z;   //!
   TBranch        *b__CentralTrackSegments_points_positionError_xx;   //!
   TBranch        *b__CentralTrackSegments_points_positionError_yy;   //!
   TBranch        *b__CentralTrackSegments_points_positionError_zz;   //!
   TBranch        *b__CentralTrackSegments_points_positionError_xy;   //!
   TBranch        *b__CentralTrackSegments_points_positionError_xz;   //!
   TBranch        *b__CentralTrackSegments_points_positionError_yz;   //!
   TBranch        *b__CentralTrackSegments_points_momentum_x;   //!
   TBranch        *b__CentralTrackSegments_points_momentum_y;   //!
   TBranch        *b__CentralTrackSegments_points_momentum_z;   //!
   TBranch        *b__CentralTrackSegments_points_momentumError_xx;   //!
   TBranch        *b__CentralTrackSegments_points_momentumError_yy;   //!
   TBranch        *b__CentralTrackSegments_points_momentumError_zz;   //!
   TBranch        *b__CentralTrackSegments_points_momentumError_xy;   //!
   TBranch        *b__CentralTrackSegments_points_momentumError_xz;   //!
   TBranch        *b__CentralTrackSegments_points_momentumError_yz;   //!
   TBranch        *b__CentralTrackSegments_points_time;   //!
   TBranch        *b__CentralTrackSegments_points_timeError;   //!
   TBranch        *b__CentralTrackSegments_points_theta;   //!
   TBranch        *b__CentralTrackSegments_points_phi;   //!
   TBranch        *b__CentralTrackSegments_points_directionError_xx;   //!
   TBranch        *b__CentralTrackSegments_points_directionError_yy;   //!
   TBranch        *b__CentralTrackSegments_points_directionError_xy;   //!
   TBranch        *b__CentralTrackSegments_points_pathlength;   //!
   TBranch        *b__CentralTrackSegments_points_pathlengthError;   //!
   TBranch        *b_CentralTrackVertices_;   //!
   TBranch        *b_CentralTrackVertices_primary;   //!
   TBranch        *b_CentralTrackVertices_chi2;   //!
   TBranch        *b_CentralTrackVertices_probability;   //!
   TBranch        *b_CentralTrackVertices_position_x;   //!
   TBranch        *b_CentralTrackVertices_position_y;   //!
   TBranch        *b_CentralTrackVertices_position_z;   //!
   TBranch        *b_CentralTrackVertices_positionError_xx;   //!
   TBranch        *b_CentralTrackVertices_positionError_yy;   //!
   TBranch        *b_CentralTrackVertices_positionError_zz;   //!
   TBranch        *b_CentralTrackVertices_positionError_xy;   //!
   TBranch        *b_CentralTrackVertices_positionError_xz;   //!
   TBranch        *b_CentralTrackVertices_positionError_yz;   //!
   TBranch        *b_CentralTrackVertices_algorithmType;   //!
   TBranch        *b_CentralTrackVertices_time;   //!
   TBranch        *b_CentralTrackVertices_parameters_begin;   //!
   TBranch        *b_CentralTrackVertices_parameters_end;   //!
   TBranch        *b__CentralTrackVertices_associatedParticle_;   //!
   TBranch        *b__CentralTrackVertices_associatedParticle_index;   //!
   TBranch        *b__CentralTrackVertices_associatedParticle_collectionID;   //!
   TBranch        *b__CentralTrackVertices_parameters;   //!
   TBranch        *b_DIRCRawHits_;   //!
   TBranch        *b_DIRCRawHits_cellID;   //!
   TBranch        *b_DIRCRawHits_charge;   //!
   TBranch        *b_DIRCRawHits_timeStamp;   //!
   TBranch        *b_DRICHAerogelIrtCherenkovParticleID_;   //!
   TBranch        *b_DRICHAerogelIrtCherenkovParticleID_npe;   //!
   TBranch        *b_DRICHAerogelIrtCherenkovParticleID_refractiveIndex;   //!
   TBranch        *b_DRICHAerogelIrtCherenkovParticleID_photonEnergy;   //!
   TBranch        *b_DRICHAerogelIrtCherenkovParticleID_hypotheses_begin;   //!
   TBranch        *b_DRICHAerogelIrtCherenkovParticleID_hypotheses_end;   //!
   TBranch        *b_DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_begin;   //!
   TBranch        *b_DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_end;   //!
   TBranch        *b_DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_begin;   //!
   TBranch        *b_DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_end;   //!
   TBranch        *b__DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_;   //!
   TBranch        *b__DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_index;   //!
   TBranch        *b__DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_collectionID;   //!
   TBranch        *b__DRICHAerogelIrtCherenkovParticleID_chargedParticle_;   //!
   TBranch        *b__DRICHAerogelIrtCherenkovParticleID_chargedParticle_index;   //!
   TBranch        *b__DRICHAerogelIrtCherenkovParticleID_chargedParticle_collectionID;   //!
   TBranch        *b__DRICHAerogelIrtCherenkovParticleID_hypotheses_;   //!
   TBranch        *b__DRICHAerogelIrtCherenkovParticleID_hypotheses_PDG;   //!
   TBranch        *b__DRICHAerogelIrtCherenkovParticleID_hypotheses_npe;   //!
   TBranch        *b__DRICHAerogelIrtCherenkovParticleID_hypotheses_weight;   //!
   TBranch        *b__DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_;   //!
   TBranch        *b__DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_a;   //!
   TBranch        *b__DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_b;   //!
   TBranch        *b_DRICHAerogelTracks_;   //!
   TBranch        *b_DRICHAerogelTracks_length;   //!
   TBranch        *b_DRICHAerogelTracks_lengthError;   //!
   TBranch        *b_DRICHAerogelTracks_points_begin;   //!
   TBranch        *b_DRICHAerogelTracks_points_end;   //!
   TBranch        *b__DRICHAerogelTracks_track_;   //!
   TBranch        *b__DRICHAerogelTracks_track_index;   //!
   TBranch        *b__DRICHAerogelTracks_track_collectionID;   //!
   TBranch        *b__DRICHAerogelTracks_points_;   //!
   TBranch        *b__DRICHAerogelTracks_points_surface;   //!
   TBranch        *b__DRICHAerogelTracks_points_system;   //!
   TBranch        *b__DRICHAerogelTracks_points_position_x;   //!
   TBranch        *b__DRICHAerogelTracks_points_position_y;   //!
   TBranch        *b__DRICHAerogelTracks_points_position_z;   //!
   TBranch        *b__DRICHAerogelTracks_points_positionError_xx;   //!
   TBranch        *b__DRICHAerogelTracks_points_positionError_yy;   //!
   TBranch        *b__DRICHAerogelTracks_points_positionError_zz;   //!
   TBranch        *b__DRICHAerogelTracks_points_positionError_xy;   //!
   TBranch        *b__DRICHAerogelTracks_points_positionError_xz;   //!
   TBranch        *b__DRICHAerogelTracks_points_positionError_yz;   //!
   TBranch        *b__DRICHAerogelTracks_points_momentum_x;   //!
   TBranch        *b__DRICHAerogelTracks_points_momentum_y;   //!
   TBranch        *b__DRICHAerogelTracks_points_momentum_z;   //!
   TBranch        *b__DRICHAerogelTracks_points_momentumError_xx;   //!
   TBranch        *b__DRICHAerogelTracks_points_momentumError_yy;   //!
   TBranch        *b__DRICHAerogelTracks_points_momentumError_zz;   //!
   TBranch        *b__DRICHAerogelTracks_points_momentumError_xy;   //!
   TBranch        *b__DRICHAerogelTracks_points_momentumError_xz;   //!
   TBranch        *b__DRICHAerogelTracks_points_momentumError_yz;   //!
   TBranch        *b__DRICHAerogelTracks_points_time;   //!
   TBranch        *b__DRICHAerogelTracks_points_timeError;   //!
   TBranch        *b__DRICHAerogelTracks_points_theta;   //!
   TBranch        *b__DRICHAerogelTracks_points_phi;   //!
   TBranch        *b__DRICHAerogelTracks_points_directionError_xx;   //!
   TBranch        *b__DRICHAerogelTracks_points_directionError_yy;   //!
   TBranch        *b__DRICHAerogelTracks_points_directionError_xy;   //!
   TBranch        *b__DRICHAerogelTracks_points_pathlength;   //!
   TBranch        *b__DRICHAerogelTracks_points_pathlengthError;   //!
   TBranch        *b_DRICHGasIrtCherenkovParticleID_;   //!
   TBranch        *b_DRICHGasIrtCherenkovParticleID_npe;   //!
   TBranch        *b_DRICHGasIrtCherenkovParticleID_refractiveIndex;   //!
   TBranch        *b_DRICHGasIrtCherenkovParticleID_photonEnergy;   //!
   TBranch        *b_DRICHGasIrtCherenkovParticleID_hypotheses_begin;   //!
   TBranch        *b_DRICHGasIrtCherenkovParticleID_hypotheses_end;   //!
   TBranch        *b_DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_begin;   //!
   TBranch        *b_DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_end;   //!
   TBranch        *b_DRICHGasIrtCherenkovParticleID_rawHitAssociations_begin;   //!
   TBranch        *b_DRICHGasIrtCherenkovParticleID_rawHitAssociations_end;   //!
   TBranch        *b__DRICHGasIrtCherenkovParticleID_rawHitAssociations_;   //!
   TBranch        *b__DRICHGasIrtCherenkovParticleID_rawHitAssociations_index;   //!
   TBranch        *b__DRICHGasIrtCherenkovParticleID_rawHitAssociations_collectionID;   //!
   TBranch        *b__DRICHGasIrtCherenkovParticleID_chargedParticle_;   //!
   TBranch        *b__DRICHGasIrtCherenkovParticleID_chargedParticle_index;   //!
   TBranch        *b__DRICHGasIrtCherenkovParticleID_chargedParticle_collectionID;   //!
   TBranch        *b__DRICHGasIrtCherenkovParticleID_hypotheses_;   //!
   TBranch        *b__DRICHGasIrtCherenkovParticleID_hypotheses_PDG;   //!
   TBranch        *b__DRICHGasIrtCherenkovParticleID_hypotheses_npe;   //!
   TBranch        *b__DRICHGasIrtCherenkovParticleID_hypotheses_weight;   //!
   TBranch        *b__DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_;   //!
   TBranch        *b__DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_a;   //!
   TBranch        *b__DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_b;   //!
   TBranch        *b_DRICHGasTracks_;   //!
   TBranch        *b_DRICHGasTracks_length;   //!
   TBranch        *b_DRICHGasTracks_lengthError;   //!
   TBranch        *b_DRICHGasTracks_points_begin;   //!
   TBranch        *b_DRICHGasTracks_points_end;   //!
   TBranch        *b__DRICHGasTracks_track_;   //!
   TBranch        *b__DRICHGasTracks_track_index;   //!
   TBranch        *b__DRICHGasTracks_track_collectionID;   //!
   TBranch        *b__DRICHGasTracks_points_;   //!
   TBranch        *b__DRICHGasTracks_points_surface;   //!
   TBranch        *b__DRICHGasTracks_points_system;   //!
   TBranch        *b__DRICHGasTracks_points_position_x;   //!
   TBranch        *b__DRICHGasTracks_points_position_y;   //!
   TBranch        *b__DRICHGasTracks_points_position_z;   //!
   TBranch        *b__DRICHGasTracks_points_positionError_xx;   //!
   TBranch        *b__DRICHGasTracks_points_positionError_yy;   //!
   TBranch        *b__DRICHGasTracks_points_positionError_zz;   //!
   TBranch        *b__DRICHGasTracks_points_positionError_xy;   //!
   TBranch        *b__DRICHGasTracks_points_positionError_xz;   //!
   TBranch        *b__DRICHGasTracks_points_positionError_yz;   //!
   TBranch        *b__DRICHGasTracks_points_momentum_x;   //!
   TBranch        *b__DRICHGasTracks_points_momentum_y;   //!
   TBranch        *b__DRICHGasTracks_points_momentum_z;   //!
   TBranch        *b__DRICHGasTracks_points_momentumError_xx;   //!
   TBranch        *b__DRICHGasTracks_points_momentumError_yy;   //!
   TBranch        *b__DRICHGasTracks_points_momentumError_zz;   //!
   TBranch        *b__DRICHGasTracks_points_momentumError_xy;   //!
   TBranch        *b__DRICHGasTracks_points_momentumError_xz;   //!
   TBranch        *b__DRICHGasTracks_points_momentumError_yz;   //!
   TBranch        *b__DRICHGasTracks_points_time;   //!
   TBranch        *b__DRICHGasTracks_points_timeError;   //!
   TBranch        *b__DRICHGasTracks_points_theta;   //!
   TBranch        *b__DRICHGasTracks_points_phi;   //!
   TBranch        *b__DRICHGasTracks_points_directionError_xx;   //!
   TBranch        *b__DRICHGasTracks_points_directionError_yy;   //!
   TBranch        *b__DRICHGasTracks_points_directionError_xy;   //!
   TBranch        *b__DRICHGasTracks_points_pathlength;   //!
   TBranch        *b__DRICHGasTracks_points_pathlengthError;   //!
   TBranch        *b_DRICHRawHits_;   //!
   TBranch        *b_DRICHRawHits_cellID;   //!
   TBranch        *b_DRICHRawHits_charge;   //!
   TBranch        *b_DRICHRawHits_timeStamp;   //!
   TBranch        *b_DRICHRawHitsAssociations_;   //!
   TBranch        *b_DRICHRawHitsAssociations_weight;   //!
   TBranch        *b_DRICHRawHitsAssociations_simHits_begin;   //!
   TBranch        *b_DRICHRawHitsAssociations_simHits_end;   //!
   TBranch        *b__DRICHRawHitsAssociations_simHits_;   //!
   TBranch        *b__DRICHRawHitsAssociations_simHits_index;   //!
   TBranch        *b__DRICHRawHitsAssociations_simHits_collectionID;   //!
   TBranch        *b__DRICHRawHitsAssociations_rawHit_;   //!
   TBranch        *b__DRICHRawHitsAssociations_rawHit_index;   //!
   TBranch        *b__DRICHRawHitsAssociations_rawHit_collectionID;   //!
   TBranch        *b_EcalBarrelClusterAssociations_;   //!
   TBranch        *b_EcalBarrelClusterAssociations_simID;   //!
   TBranch        *b_EcalBarrelClusterAssociations_recID;   //!
   TBranch        *b_EcalBarrelClusterAssociations_weight;   //!
   TBranch        *b__EcalBarrelClusterAssociations_rec_;   //!
   TBranch        *b__EcalBarrelClusterAssociations_rec_index;   //!
   TBranch        *b__EcalBarrelClusterAssociations_rec_collectionID;   //!
   TBranch        *b__EcalBarrelClusterAssociations_sim_;   //!
   TBranch        *b__EcalBarrelClusterAssociations_sim_index;   //!
   TBranch        *b__EcalBarrelClusterAssociations_sim_collectionID;   //!
   TBranch        *b_EcalBarrelClusters_;   //!
   TBranch        *b_EcalBarrelClusters_type;   //!
   TBranch        *b_EcalBarrelClusters_energy;   //!
   TBranch        *b_EcalBarrelClusters_energyError;   //!
   TBranch        *b_EcalBarrelClusters_time;   //!
   TBranch        *b_EcalBarrelClusters_timeError;   //!
   TBranch        *b_EcalBarrelClusters_nhits;   //!
   TBranch        *b_EcalBarrelClusters_position_x;   //!
   TBranch        *b_EcalBarrelClusters_position_y;   //!
   TBranch        *b_EcalBarrelClusters_position_z;   //!
   TBranch        *b_EcalBarrelClusters_positionError_xx;   //!
   TBranch        *b_EcalBarrelClusters_positionError_yy;   //!
   TBranch        *b_EcalBarrelClusters_positionError_zz;   //!
   TBranch        *b_EcalBarrelClusters_positionError_xy;   //!
   TBranch        *b_EcalBarrelClusters_positionError_xz;   //!
   TBranch        *b_EcalBarrelClusters_positionError_yz;   //!
   TBranch        *b_EcalBarrelClusters_intrinsicTheta;   //!
   TBranch        *b_EcalBarrelClusters_intrinsicPhi;   //!
   TBranch        *b_EcalBarrelClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_EcalBarrelClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_EcalBarrelClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_EcalBarrelClusters_shapeParameters_begin;   //!
   TBranch        *b_EcalBarrelClusters_shapeParameters_end;   //!
   TBranch        *b_EcalBarrelClusters_hitContributions_begin;   //!
   TBranch        *b_EcalBarrelClusters_hitContributions_end;   //!
   TBranch        *b_EcalBarrelClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_EcalBarrelClusters_subdetectorEnergies_end;   //!
   TBranch        *b_EcalBarrelClusters_clusters_begin;   //!
   TBranch        *b_EcalBarrelClusters_clusters_end;   //!
   TBranch        *b_EcalBarrelClusters_hits_begin;   //!
   TBranch        *b_EcalBarrelClusters_hits_end;   //!
   TBranch        *b_EcalBarrelClusters_particleIDs_begin;   //!
   TBranch        *b_EcalBarrelClusters_particleIDs_end;   //!
   TBranch        *b__EcalBarrelClusters_clusters_;   //!
   TBranch        *b__EcalBarrelClusters_clusters_index;   //!
   TBranch        *b__EcalBarrelClusters_clusters_collectionID;   //!
   TBranch        *b__EcalBarrelClusters_hits_;   //!
   TBranch        *b__EcalBarrelClusters_hits_index;   //!
   TBranch        *b__EcalBarrelClusters_hits_collectionID;   //!
   TBranch        *b__EcalBarrelClusters_particleIDs_;   //!
   TBranch        *b__EcalBarrelClusters_particleIDs_index;   //!
   TBranch        *b__EcalBarrelClusters_particleIDs_collectionID;   //!
   TBranch        *b__EcalBarrelClusters_shapeParameters;   //!
   TBranch        *b__EcalBarrelClusters_hitContributions;   //!
   TBranch        *b__EcalBarrelClusters_subdetectorEnergies;   //!
   TBranch        *b_EcalBarrelImagingClusterAssociations_;   //!
   TBranch        *b_EcalBarrelImagingClusterAssociations_simID;   //!
   TBranch        *b_EcalBarrelImagingClusterAssociations_recID;   //!
   TBranch        *b_EcalBarrelImagingClusterAssociations_weight;   //!
   TBranch        *b__EcalBarrelImagingClusterAssociations_rec_;   //!
   TBranch        *b__EcalBarrelImagingClusterAssociations_rec_index;   //!
   TBranch        *b__EcalBarrelImagingClusterAssociations_rec_collectionID;   //!
   TBranch        *b__EcalBarrelImagingClusterAssociations_sim_;   //!
   TBranch        *b__EcalBarrelImagingClusterAssociations_sim_index;   //!
   TBranch        *b__EcalBarrelImagingClusterAssociations_sim_collectionID;   //!
   TBranch        *b_EcalBarrelImagingClusters_;   //!
   TBranch        *b_EcalBarrelImagingClusters_type;   //!
   TBranch        *b_EcalBarrelImagingClusters_energy;   //!
   TBranch        *b_EcalBarrelImagingClusters_energyError;   //!
   TBranch        *b_EcalBarrelImagingClusters_time;   //!
   TBranch        *b_EcalBarrelImagingClusters_timeError;   //!
   TBranch        *b_EcalBarrelImagingClusters_nhits;   //!
   TBranch        *b_EcalBarrelImagingClusters_position_x;   //!
   TBranch        *b_EcalBarrelImagingClusters_position_y;   //!
   TBranch        *b_EcalBarrelImagingClusters_position_z;   //!
   TBranch        *b_EcalBarrelImagingClusters_positionError_xx;   //!
   TBranch        *b_EcalBarrelImagingClusters_positionError_yy;   //!
   TBranch        *b_EcalBarrelImagingClusters_positionError_zz;   //!
   TBranch        *b_EcalBarrelImagingClusters_positionError_xy;   //!
   TBranch        *b_EcalBarrelImagingClusters_positionError_xz;   //!
   TBranch        *b_EcalBarrelImagingClusters_positionError_yz;   //!
   TBranch        *b_EcalBarrelImagingClusters_intrinsicTheta;   //!
   TBranch        *b_EcalBarrelImagingClusters_intrinsicPhi;   //!
   TBranch        *b_EcalBarrelImagingClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_EcalBarrelImagingClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_EcalBarrelImagingClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_EcalBarrelImagingClusters_shapeParameters_begin;   //!
   TBranch        *b_EcalBarrelImagingClusters_shapeParameters_end;   //!
   TBranch        *b_EcalBarrelImagingClusters_hitContributions_begin;   //!
   TBranch        *b_EcalBarrelImagingClusters_hitContributions_end;   //!
   TBranch        *b_EcalBarrelImagingClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_EcalBarrelImagingClusters_subdetectorEnergies_end;   //!
   TBranch        *b_EcalBarrelImagingClusters_clusters_begin;   //!
   TBranch        *b_EcalBarrelImagingClusters_clusters_end;   //!
   TBranch        *b_EcalBarrelImagingClusters_hits_begin;   //!
   TBranch        *b_EcalBarrelImagingClusters_hits_end;   //!
   TBranch        *b_EcalBarrelImagingClusters_particleIDs_begin;   //!
   TBranch        *b_EcalBarrelImagingClusters_particleIDs_end;   //!
   TBranch        *b__EcalBarrelImagingClusters_clusters_;   //!
   TBranch        *b__EcalBarrelImagingClusters_clusters_index;   //!
   TBranch        *b__EcalBarrelImagingClusters_clusters_collectionID;   //!
   TBranch        *b__EcalBarrelImagingClusters_hits_;   //!
   TBranch        *b__EcalBarrelImagingClusters_hits_index;   //!
   TBranch        *b__EcalBarrelImagingClusters_hits_collectionID;   //!
   TBranch        *b__EcalBarrelImagingClusters_particleIDs_;   //!
   TBranch        *b__EcalBarrelImagingClusters_particleIDs_index;   //!
   TBranch        *b__EcalBarrelImagingClusters_particleIDs_collectionID;   //!
   TBranch        *b__EcalBarrelImagingClusters_shapeParameters;   //!
   TBranch        *b__EcalBarrelImagingClusters_hitContributions;   //!
   TBranch        *b__EcalBarrelImagingClusters_subdetectorEnergies;   //!
   TBranch        *b_EcalBarrelImagingRawHits_;   //!
   TBranch        *b_EcalBarrelImagingRawHits_cellID;   //!
   TBranch        *b_EcalBarrelImagingRawHits_amplitude;   //!
   TBranch        *b_EcalBarrelImagingRawHits_timeStamp;   //!
   TBranch        *b_EcalBarrelImagingRecHits_;   //!
   TBranch        *b_EcalBarrelImagingRecHits_cellID;   //!
   TBranch        *b_EcalBarrelImagingRecHits_energy;   //!
   TBranch        *b_EcalBarrelImagingRecHits_energyError;   //!
   TBranch        *b_EcalBarrelImagingRecHits_time;   //!
   TBranch        *b_EcalBarrelImagingRecHits_timeError;   //!
   TBranch        *b_EcalBarrelImagingRecHits_position_x;   //!
   TBranch        *b_EcalBarrelImagingRecHits_position_y;   //!
   TBranch        *b_EcalBarrelImagingRecHits_position_z;   //!
   TBranch        *b_EcalBarrelImagingRecHits_dimension_x;   //!
   TBranch        *b_EcalBarrelImagingRecHits_dimension_y;   //!
   TBranch        *b_EcalBarrelImagingRecHits_dimension_z;   //!
   TBranch        *b_EcalBarrelImagingRecHits_sector;   //!
   TBranch        *b_EcalBarrelImagingRecHits_layer;   //!
   TBranch        *b_EcalBarrelImagingRecHits_local_x;   //!
   TBranch        *b_EcalBarrelImagingRecHits_local_y;   //!
   TBranch        *b_EcalBarrelImagingRecHits_local_z;   //!
   TBranch        *b_EcalBarrelScFiClusterAssociations_;   //!
   TBranch        *b_EcalBarrelScFiClusterAssociations_simID;   //!
   TBranch        *b_EcalBarrelScFiClusterAssociations_recID;   //!
   TBranch        *b_EcalBarrelScFiClusterAssociations_weight;   //!
   TBranch        *b__EcalBarrelScFiClusterAssociations_rec_;   //!
   TBranch        *b__EcalBarrelScFiClusterAssociations_rec_index;   //!
   TBranch        *b__EcalBarrelScFiClusterAssociations_rec_collectionID;   //!
   TBranch        *b__EcalBarrelScFiClusterAssociations_sim_;   //!
   TBranch        *b__EcalBarrelScFiClusterAssociations_sim_index;   //!
   TBranch        *b__EcalBarrelScFiClusterAssociations_sim_collectionID;   //!
   TBranch        *b_EcalBarrelScFiClusters_;   //!
   TBranch        *b_EcalBarrelScFiClusters_type;   //!
   TBranch        *b_EcalBarrelScFiClusters_energy;   //!
   TBranch        *b_EcalBarrelScFiClusters_energyError;   //!
   TBranch        *b_EcalBarrelScFiClusters_time;   //!
   TBranch        *b_EcalBarrelScFiClusters_timeError;   //!
   TBranch        *b_EcalBarrelScFiClusters_nhits;   //!
   TBranch        *b_EcalBarrelScFiClusters_position_x;   //!
   TBranch        *b_EcalBarrelScFiClusters_position_y;   //!
   TBranch        *b_EcalBarrelScFiClusters_position_z;   //!
   TBranch        *b_EcalBarrelScFiClusters_positionError_xx;   //!
   TBranch        *b_EcalBarrelScFiClusters_positionError_yy;   //!
   TBranch        *b_EcalBarrelScFiClusters_positionError_zz;   //!
   TBranch        *b_EcalBarrelScFiClusters_positionError_xy;   //!
   TBranch        *b_EcalBarrelScFiClusters_positionError_xz;   //!
   TBranch        *b_EcalBarrelScFiClusters_positionError_yz;   //!
   TBranch        *b_EcalBarrelScFiClusters_intrinsicTheta;   //!
   TBranch        *b_EcalBarrelScFiClusters_intrinsicPhi;   //!
   TBranch        *b_EcalBarrelScFiClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_EcalBarrelScFiClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_EcalBarrelScFiClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_EcalBarrelScFiClusters_shapeParameters_begin;   //!
   TBranch        *b_EcalBarrelScFiClusters_shapeParameters_end;   //!
   TBranch        *b_EcalBarrelScFiClusters_hitContributions_begin;   //!
   TBranch        *b_EcalBarrelScFiClusters_hitContributions_end;   //!
   TBranch        *b_EcalBarrelScFiClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_EcalBarrelScFiClusters_subdetectorEnergies_end;   //!
   TBranch        *b_EcalBarrelScFiClusters_clusters_begin;   //!
   TBranch        *b_EcalBarrelScFiClusters_clusters_end;   //!
   TBranch        *b_EcalBarrelScFiClusters_hits_begin;   //!
   TBranch        *b_EcalBarrelScFiClusters_hits_end;   //!
   TBranch        *b_EcalBarrelScFiClusters_particleIDs_begin;   //!
   TBranch        *b_EcalBarrelScFiClusters_particleIDs_end;   //!
   TBranch        *b__EcalBarrelScFiClusters_clusters_;   //!
   TBranch        *b__EcalBarrelScFiClusters_clusters_index;   //!
   TBranch        *b__EcalBarrelScFiClusters_clusters_collectionID;   //!
   TBranch        *b__EcalBarrelScFiClusters_hits_;   //!
   TBranch        *b__EcalBarrelScFiClusters_hits_index;   //!
   TBranch        *b__EcalBarrelScFiClusters_hits_collectionID;   //!
   TBranch        *b__EcalBarrelScFiClusters_particleIDs_;   //!
   TBranch        *b__EcalBarrelScFiClusters_particleIDs_index;   //!
   TBranch        *b__EcalBarrelScFiClusters_particleIDs_collectionID;   //!
   TBranch        *b__EcalBarrelScFiClusters_shapeParameters;   //!
   TBranch        *b__EcalBarrelScFiClusters_hitContributions;   //!
   TBranch        *b__EcalBarrelScFiClusters_subdetectorEnergies;   //!
   TBranch        *b_EcalBarrelScFiRawHits_;   //!
   TBranch        *b_EcalBarrelScFiRawHits_cellID;   //!
   TBranch        *b_EcalBarrelScFiRawHits_amplitude;   //!
   TBranch        *b_EcalBarrelScFiRawHits_timeStamp;   //!
   TBranch        *b_EcalBarrelScFiRecHits_;   //!
   TBranch        *b_EcalBarrelScFiRecHits_cellID;   //!
   TBranch        *b_EcalBarrelScFiRecHits_energy;   //!
   TBranch        *b_EcalBarrelScFiRecHits_energyError;   //!
   TBranch        *b_EcalBarrelScFiRecHits_time;   //!
   TBranch        *b_EcalBarrelScFiRecHits_timeError;   //!
   TBranch        *b_EcalBarrelScFiRecHits_position_x;   //!
   TBranch        *b_EcalBarrelScFiRecHits_position_y;   //!
   TBranch        *b_EcalBarrelScFiRecHits_position_z;   //!
   TBranch        *b_EcalBarrelScFiRecHits_dimension_x;   //!
   TBranch        *b_EcalBarrelScFiRecHits_dimension_y;   //!
   TBranch        *b_EcalBarrelScFiRecHits_dimension_z;   //!
   TBranch        *b_EcalBarrelScFiRecHits_sector;   //!
   TBranch        *b_EcalBarrelScFiRecHits_layer;   //!
   TBranch        *b_EcalBarrelScFiRecHits_local_x;   //!
   TBranch        *b_EcalBarrelScFiRecHits_local_y;   //!
   TBranch        *b_EcalBarrelScFiRecHits_local_z;   //!
   TBranch        *b_EcalBarrelTruthClusterAssociations_;   //!
   TBranch        *b_EcalBarrelTruthClusterAssociations_simID;   //!
   TBranch        *b_EcalBarrelTruthClusterAssociations_recID;   //!
   TBranch        *b_EcalBarrelTruthClusterAssociations_weight;   //!
   TBranch        *b__EcalBarrelTruthClusterAssociations_rec_;   //!
   TBranch        *b__EcalBarrelTruthClusterAssociations_rec_index;   //!
   TBranch        *b__EcalBarrelTruthClusterAssociations_rec_collectionID;   //!
   TBranch        *b__EcalBarrelTruthClusterAssociations_sim_;   //!
   TBranch        *b__EcalBarrelTruthClusterAssociations_sim_index;   //!
   TBranch        *b__EcalBarrelTruthClusterAssociations_sim_collectionID;   //!
   TBranch        *b_EcalBarrelTruthClusters_;   //!
   TBranch        *b_EcalBarrelTruthClusters_type;   //!
   TBranch        *b_EcalBarrelTruthClusters_energy;   //!
   TBranch        *b_EcalBarrelTruthClusters_energyError;   //!
   TBranch        *b_EcalBarrelTruthClusters_time;   //!
   TBranch        *b_EcalBarrelTruthClusters_timeError;   //!
   TBranch        *b_EcalBarrelTruthClusters_nhits;   //!
   TBranch        *b_EcalBarrelTruthClusters_position_x;   //!
   TBranch        *b_EcalBarrelTruthClusters_position_y;   //!
   TBranch        *b_EcalBarrelTruthClusters_position_z;   //!
   TBranch        *b_EcalBarrelTruthClusters_positionError_xx;   //!
   TBranch        *b_EcalBarrelTruthClusters_positionError_yy;   //!
   TBranch        *b_EcalBarrelTruthClusters_positionError_zz;   //!
   TBranch        *b_EcalBarrelTruthClusters_positionError_xy;   //!
   TBranch        *b_EcalBarrelTruthClusters_positionError_xz;   //!
   TBranch        *b_EcalBarrelTruthClusters_positionError_yz;   //!
   TBranch        *b_EcalBarrelTruthClusters_intrinsicTheta;   //!
   TBranch        *b_EcalBarrelTruthClusters_intrinsicPhi;   //!
   TBranch        *b_EcalBarrelTruthClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_EcalBarrelTruthClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_EcalBarrelTruthClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_EcalBarrelTruthClusters_shapeParameters_begin;   //!
   TBranch        *b_EcalBarrelTruthClusters_shapeParameters_end;   //!
   TBranch        *b_EcalBarrelTruthClusters_hitContributions_begin;   //!
   TBranch        *b_EcalBarrelTruthClusters_hitContributions_end;   //!
   TBranch        *b_EcalBarrelTruthClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_EcalBarrelTruthClusters_subdetectorEnergies_end;   //!
   TBranch        *b_EcalBarrelTruthClusters_clusters_begin;   //!
   TBranch        *b_EcalBarrelTruthClusters_clusters_end;   //!
   TBranch        *b_EcalBarrelTruthClusters_hits_begin;   //!
   TBranch        *b_EcalBarrelTruthClusters_hits_end;   //!
   TBranch        *b_EcalBarrelTruthClusters_particleIDs_begin;   //!
   TBranch        *b_EcalBarrelTruthClusters_particleIDs_end;   //!
   TBranch        *b__EcalBarrelTruthClusters_clusters_;   //!
   TBranch        *b__EcalBarrelTruthClusters_clusters_index;   //!
   TBranch        *b__EcalBarrelTruthClusters_clusters_collectionID;   //!
   TBranch        *b__EcalBarrelTruthClusters_hits_;   //!
   TBranch        *b__EcalBarrelTruthClusters_hits_index;   //!
   TBranch        *b__EcalBarrelTruthClusters_hits_collectionID;   //!
   TBranch        *b__EcalBarrelTruthClusters_particleIDs_;   //!
   TBranch        *b__EcalBarrelTruthClusters_particleIDs_index;   //!
   TBranch        *b__EcalBarrelTruthClusters_particleIDs_collectionID;   //!
   TBranch        *b__EcalBarrelTruthClusters_shapeParameters;   //!
   TBranch        *b__EcalBarrelTruthClusters_hitContributions;   //!
   TBranch        *b__EcalBarrelTruthClusters_subdetectorEnergies;   //!
   TBranch        *b_EcalEndcapNClusterAssociations_;   //!
   TBranch        *b_EcalEndcapNClusterAssociations_simID;   //!
   TBranch        *b_EcalEndcapNClusterAssociations_recID;   //!
   TBranch        *b_EcalEndcapNClusterAssociations_weight;   //!
   TBranch        *b__EcalEndcapNClusterAssociations_rec_;   //!
   TBranch        *b__EcalEndcapNClusterAssociations_rec_index;   //!
   TBranch        *b__EcalEndcapNClusterAssociations_rec_collectionID;   //!
   TBranch        *b__EcalEndcapNClusterAssociations_sim_;   //!
   TBranch        *b__EcalEndcapNClusterAssociations_sim_index;   //!
   TBranch        *b__EcalEndcapNClusterAssociations_sim_collectionID;   //!
   TBranch        *b_EcalEndcapNClusters_;   //!
   TBranch        *b_EcalEndcapNClusters_type;   //!
   TBranch        *b_EcalEndcapNClusters_energy;   //!
   TBranch        *b_EcalEndcapNClusters_energyError;   //!
   TBranch        *b_EcalEndcapNClusters_time;   //!
   TBranch        *b_EcalEndcapNClusters_timeError;   //!
   TBranch        *b_EcalEndcapNClusters_nhits;   //!
   TBranch        *b_EcalEndcapNClusters_position_x;   //!
   TBranch        *b_EcalEndcapNClusters_position_y;   //!
   TBranch        *b_EcalEndcapNClusters_position_z;   //!
   TBranch        *b_EcalEndcapNClusters_positionError_xx;   //!
   TBranch        *b_EcalEndcapNClusters_positionError_yy;   //!
   TBranch        *b_EcalEndcapNClusters_positionError_zz;   //!
   TBranch        *b_EcalEndcapNClusters_positionError_xy;   //!
   TBranch        *b_EcalEndcapNClusters_positionError_xz;   //!
   TBranch        *b_EcalEndcapNClusters_positionError_yz;   //!
   TBranch        *b_EcalEndcapNClusters_intrinsicTheta;   //!
   TBranch        *b_EcalEndcapNClusters_intrinsicPhi;   //!
   TBranch        *b_EcalEndcapNClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_EcalEndcapNClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_EcalEndcapNClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_EcalEndcapNClusters_shapeParameters_begin;   //!
   TBranch        *b_EcalEndcapNClusters_shapeParameters_end;   //!
   TBranch        *b_EcalEndcapNClusters_hitContributions_begin;   //!
   TBranch        *b_EcalEndcapNClusters_hitContributions_end;   //!
   TBranch        *b_EcalEndcapNClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_EcalEndcapNClusters_subdetectorEnergies_end;   //!
   TBranch        *b_EcalEndcapNClusters_clusters_begin;   //!
   TBranch        *b_EcalEndcapNClusters_clusters_end;   //!
   TBranch        *b_EcalEndcapNClusters_hits_begin;   //!
   TBranch        *b_EcalEndcapNClusters_hits_end;   //!
   TBranch        *b_EcalEndcapNClusters_particleIDs_begin;   //!
   TBranch        *b_EcalEndcapNClusters_particleIDs_end;   //!
   TBranch        *b__EcalEndcapNClusters_clusters_;   //!
   TBranch        *b__EcalEndcapNClusters_clusters_index;   //!
   TBranch        *b__EcalEndcapNClusters_clusters_collectionID;   //!
   TBranch        *b__EcalEndcapNClusters_hits_;   //!
   TBranch        *b__EcalEndcapNClusters_hits_index;   //!
   TBranch        *b__EcalEndcapNClusters_hits_collectionID;   //!
   TBranch        *b__EcalEndcapNClusters_particleIDs_;   //!
   TBranch        *b__EcalEndcapNClusters_particleIDs_index;   //!
   TBranch        *b__EcalEndcapNClusters_particleIDs_collectionID;   //!
   TBranch        *b__EcalEndcapNClusters_shapeParameters;   //!
   TBranch        *b__EcalEndcapNClusters_hitContributions;   //!
   TBranch        *b__EcalEndcapNClusters_subdetectorEnergies;   //!
   TBranch        *b_EcalEndcapNRawHits_;   //!
   TBranch        *b_EcalEndcapNRawHits_cellID;   //!
   TBranch        *b_EcalEndcapNRawHits_amplitude;   //!
   TBranch        *b_EcalEndcapNRawHits_timeStamp;   //!
   TBranch        *b_EcalEndcapNRecHits_;   //!
   TBranch        *b_EcalEndcapNRecHits_cellID;   //!
   TBranch        *b_EcalEndcapNRecHits_energy;   //!
   TBranch        *b_EcalEndcapNRecHits_energyError;   //!
   TBranch        *b_EcalEndcapNRecHits_time;   //!
   TBranch        *b_EcalEndcapNRecHits_timeError;   //!
   TBranch        *b_EcalEndcapNRecHits_position_x;   //!
   TBranch        *b_EcalEndcapNRecHits_position_y;   //!
   TBranch        *b_EcalEndcapNRecHits_position_z;   //!
   TBranch        *b_EcalEndcapNRecHits_dimension_x;   //!
   TBranch        *b_EcalEndcapNRecHits_dimension_y;   //!
   TBranch        *b_EcalEndcapNRecHits_dimension_z;   //!
   TBranch        *b_EcalEndcapNRecHits_sector;   //!
   TBranch        *b_EcalEndcapNRecHits_layer;   //!
   TBranch        *b_EcalEndcapNRecHits_local_x;   //!
   TBranch        *b_EcalEndcapNRecHits_local_y;   //!
   TBranch        *b_EcalEndcapNRecHits_local_z;   //!
   TBranch        *b_EcalEndcapNTruthClusterAssociations_;   //!
   TBranch        *b_EcalEndcapNTruthClusterAssociations_simID;   //!
   TBranch        *b_EcalEndcapNTruthClusterAssociations_recID;   //!
   TBranch        *b_EcalEndcapNTruthClusterAssociations_weight;   //!
   TBranch        *b__EcalEndcapNTruthClusterAssociations_rec_;   //!
   TBranch        *b__EcalEndcapNTruthClusterAssociations_rec_index;   //!
   TBranch        *b__EcalEndcapNTruthClusterAssociations_rec_collectionID;   //!
   TBranch        *b__EcalEndcapNTruthClusterAssociations_sim_;   //!
   TBranch        *b__EcalEndcapNTruthClusterAssociations_sim_index;   //!
   TBranch        *b__EcalEndcapNTruthClusterAssociations_sim_collectionID;   //!
   TBranch        *b_EcalEndcapNTruthClusters_;   //!
   TBranch        *b_EcalEndcapNTruthClusters_type;   //!
   TBranch        *b_EcalEndcapNTruthClusters_energy;   //!
   TBranch        *b_EcalEndcapNTruthClusters_energyError;   //!
   TBranch        *b_EcalEndcapNTruthClusters_time;   //!
   TBranch        *b_EcalEndcapNTruthClusters_timeError;   //!
   TBranch        *b_EcalEndcapNTruthClusters_nhits;   //!
   TBranch        *b_EcalEndcapNTruthClusters_position_x;   //!
   TBranch        *b_EcalEndcapNTruthClusters_position_y;   //!
   TBranch        *b_EcalEndcapNTruthClusters_position_z;   //!
   TBranch        *b_EcalEndcapNTruthClusters_positionError_xx;   //!
   TBranch        *b_EcalEndcapNTruthClusters_positionError_yy;   //!
   TBranch        *b_EcalEndcapNTruthClusters_positionError_zz;   //!
   TBranch        *b_EcalEndcapNTruthClusters_positionError_xy;   //!
   TBranch        *b_EcalEndcapNTruthClusters_positionError_xz;   //!
   TBranch        *b_EcalEndcapNTruthClusters_positionError_yz;   //!
   TBranch        *b_EcalEndcapNTruthClusters_intrinsicTheta;   //!
   TBranch        *b_EcalEndcapNTruthClusters_intrinsicPhi;   //!
   TBranch        *b_EcalEndcapNTruthClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_EcalEndcapNTruthClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_EcalEndcapNTruthClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_EcalEndcapNTruthClusters_shapeParameters_begin;   //!
   TBranch        *b_EcalEndcapNTruthClusters_shapeParameters_end;   //!
   TBranch        *b_EcalEndcapNTruthClusters_hitContributions_begin;   //!
   TBranch        *b_EcalEndcapNTruthClusters_hitContributions_end;   //!
   TBranch        *b_EcalEndcapNTruthClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_EcalEndcapNTruthClusters_subdetectorEnergies_end;   //!
   TBranch        *b_EcalEndcapNTruthClusters_clusters_begin;   //!
   TBranch        *b_EcalEndcapNTruthClusters_clusters_end;   //!
   TBranch        *b_EcalEndcapNTruthClusters_hits_begin;   //!
   TBranch        *b_EcalEndcapNTruthClusters_hits_end;   //!
   TBranch        *b_EcalEndcapNTruthClusters_particleIDs_begin;   //!
   TBranch        *b_EcalEndcapNTruthClusters_particleIDs_end;   //!
   TBranch        *b__EcalEndcapNTruthClusters_clusters_;   //!
   TBranch        *b__EcalEndcapNTruthClusters_clusters_index;   //!
   TBranch        *b__EcalEndcapNTruthClusters_clusters_collectionID;   //!
   TBranch        *b__EcalEndcapNTruthClusters_hits_;   //!
   TBranch        *b__EcalEndcapNTruthClusters_hits_index;   //!
   TBranch        *b__EcalEndcapNTruthClusters_hits_collectionID;   //!
   TBranch        *b__EcalEndcapNTruthClusters_particleIDs_;   //!
   TBranch        *b__EcalEndcapNTruthClusters_particleIDs_index;   //!
   TBranch        *b__EcalEndcapNTruthClusters_particleIDs_collectionID;   //!
   TBranch        *b__EcalEndcapNTruthClusters_shapeParameters;   //!
   TBranch        *b__EcalEndcapNTruthClusters_hitContributions;   //!
   TBranch        *b__EcalEndcapNTruthClusters_subdetectorEnergies;   //!
   TBranch        *b_EcalEndcapPClusterAssociations_;   //!
   TBranch        *b_EcalEndcapPClusterAssociations_simID;   //!
   TBranch        *b_EcalEndcapPClusterAssociations_recID;   //!
   TBranch        *b_EcalEndcapPClusterAssociations_weight;   //!
   TBranch        *b__EcalEndcapPClusterAssociations_rec_;   //!
   TBranch        *b__EcalEndcapPClusterAssociations_rec_index;   //!
   TBranch        *b__EcalEndcapPClusterAssociations_rec_collectionID;   //!
   TBranch        *b__EcalEndcapPClusterAssociations_sim_;   //!
   TBranch        *b__EcalEndcapPClusterAssociations_sim_index;   //!
   TBranch        *b__EcalEndcapPClusterAssociations_sim_collectionID;   //!
   TBranch        *b_EcalEndcapPClusters_;   //!
   TBranch        *b_EcalEndcapPClusters_type;   //!
   TBranch        *b_EcalEndcapPClusters_energy;   //!
   TBranch        *b_EcalEndcapPClusters_energyError;   //!
   TBranch        *b_EcalEndcapPClusters_time;   //!
   TBranch        *b_EcalEndcapPClusters_timeError;   //!
   TBranch        *b_EcalEndcapPClusters_nhits;   //!
   TBranch        *b_EcalEndcapPClusters_position_x;   //!
   TBranch        *b_EcalEndcapPClusters_position_y;   //!
   TBranch        *b_EcalEndcapPClusters_position_z;   //!
   TBranch        *b_EcalEndcapPClusters_positionError_xx;   //!
   TBranch        *b_EcalEndcapPClusters_positionError_yy;   //!
   TBranch        *b_EcalEndcapPClusters_positionError_zz;   //!
   TBranch        *b_EcalEndcapPClusters_positionError_xy;   //!
   TBranch        *b_EcalEndcapPClusters_positionError_xz;   //!
   TBranch        *b_EcalEndcapPClusters_positionError_yz;   //!
   TBranch        *b_EcalEndcapPClusters_intrinsicTheta;   //!
   TBranch        *b_EcalEndcapPClusters_intrinsicPhi;   //!
   TBranch        *b_EcalEndcapPClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_EcalEndcapPClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_EcalEndcapPClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_EcalEndcapPClusters_shapeParameters_begin;   //!
   TBranch        *b_EcalEndcapPClusters_shapeParameters_end;   //!
   TBranch        *b_EcalEndcapPClusters_hitContributions_begin;   //!
   TBranch        *b_EcalEndcapPClusters_hitContributions_end;   //!
   TBranch        *b_EcalEndcapPClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_EcalEndcapPClusters_subdetectorEnergies_end;   //!
   TBranch        *b_EcalEndcapPClusters_clusters_begin;   //!
   TBranch        *b_EcalEndcapPClusters_clusters_end;   //!
   TBranch        *b_EcalEndcapPClusters_hits_begin;   //!
   TBranch        *b_EcalEndcapPClusters_hits_end;   //!
   TBranch        *b_EcalEndcapPClusters_particleIDs_begin;   //!
   TBranch        *b_EcalEndcapPClusters_particleIDs_end;   //!
   TBranch        *b__EcalEndcapPClusters_clusters_;   //!
   TBranch        *b__EcalEndcapPClusters_clusters_index;   //!
   TBranch        *b__EcalEndcapPClusters_clusters_collectionID;   //!
   TBranch        *b__EcalEndcapPClusters_hits_;   //!
   TBranch        *b__EcalEndcapPClusters_hits_index;   //!
   TBranch        *b__EcalEndcapPClusters_hits_collectionID;   //!
   TBranch        *b__EcalEndcapPClusters_particleIDs_;   //!
   TBranch        *b__EcalEndcapPClusters_particleIDs_index;   //!
   TBranch        *b__EcalEndcapPClusters_particleIDs_collectionID;   //!
   TBranch        *b__EcalEndcapPClusters_shapeParameters;   //!
   TBranch        *b__EcalEndcapPClusters_hitContributions;   //!
   TBranch        *b__EcalEndcapPClusters_subdetectorEnergies;   //!
   TBranch        *b_EcalEndcapPInsertClusterAssociations_;   //!
   TBranch        *b_EcalEndcapPInsertClusterAssociations_simID;   //!
   TBranch        *b_EcalEndcapPInsertClusterAssociations_recID;   //!
   TBranch        *b_EcalEndcapPInsertClusterAssociations_weight;   //!
   TBranch        *b__EcalEndcapPInsertClusterAssociations_rec_;   //!
   TBranch        *b__EcalEndcapPInsertClusterAssociations_rec_index;   //!
   TBranch        *b__EcalEndcapPInsertClusterAssociations_rec_collectionID;   //!
   TBranch        *b__EcalEndcapPInsertClusterAssociations_sim_;   //!
   TBranch        *b__EcalEndcapPInsertClusterAssociations_sim_index;   //!
   TBranch        *b__EcalEndcapPInsertClusterAssociations_sim_collectionID;   //!
   TBranch        *b_EcalEndcapPInsertClusters_;   //!
   TBranch        *b_EcalEndcapPInsertClusters_type;   //!
   TBranch        *b_EcalEndcapPInsertClusters_energy;   //!
   TBranch        *b_EcalEndcapPInsertClusters_energyError;   //!
   TBranch        *b_EcalEndcapPInsertClusters_time;   //!
   TBranch        *b_EcalEndcapPInsertClusters_timeError;   //!
   TBranch        *b_EcalEndcapPInsertClusters_nhits;   //!
   TBranch        *b_EcalEndcapPInsertClusters_position_x;   //!
   TBranch        *b_EcalEndcapPInsertClusters_position_y;   //!
   TBranch        *b_EcalEndcapPInsertClusters_position_z;   //!
   TBranch        *b_EcalEndcapPInsertClusters_positionError_xx;   //!
   TBranch        *b_EcalEndcapPInsertClusters_positionError_yy;   //!
   TBranch        *b_EcalEndcapPInsertClusters_positionError_zz;   //!
   TBranch        *b_EcalEndcapPInsertClusters_positionError_xy;   //!
   TBranch        *b_EcalEndcapPInsertClusters_positionError_xz;   //!
   TBranch        *b_EcalEndcapPInsertClusters_positionError_yz;   //!
   TBranch        *b_EcalEndcapPInsertClusters_intrinsicTheta;   //!
   TBranch        *b_EcalEndcapPInsertClusters_intrinsicPhi;   //!
   TBranch        *b_EcalEndcapPInsertClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_EcalEndcapPInsertClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_EcalEndcapPInsertClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_EcalEndcapPInsertClusters_shapeParameters_begin;   //!
   TBranch        *b_EcalEndcapPInsertClusters_shapeParameters_end;   //!
   TBranch        *b_EcalEndcapPInsertClusters_hitContributions_begin;   //!
   TBranch        *b_EcalEndcapPInsertClusters_hitContributions_end;   //!
   TBranch        *b_EcalEndcapPInsertClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_EcalEndcapPInsertClusters_subdetectorEnergies_end;   //!
   TBranch        *b_EcalEndcapPInsertClusters_clusters_begin;   //!
   TBranch        *b_EcalEndcapPInsertClusters_clusters_end;   //!
   TBranch        *b_EcalEndcapPInsertClusters_hits_begin;   //!
   TBranch        *b_EcalEndcapPInsertClusters_hits_end;   //!
   TBranch        *b_EcalEndcapPInsertClusters_particleIDs_begin;   //!
   TBranch        *b_EcalEndcapPInsertClusters_particleIDs_end;   //!
   TBranch        *b__EcalEndcapPInsertClusters_clusters_;   //!
   TBranch        *b__EcalEndcapPInsertClusters_clusters_index;   //!
   TBranch        *b__EcalEndcapPInsertClusters_clusters_collectionID;   //!
   TBranch        *b__EcalEndcapPInsertClusters_hits_;   //!
   TBranch        *b__EcalEndcapPInsertClusters_hits_index;   //!
   TBranch        *b__EcalEndcapPInsertClusters_hits_collectionID;   //!
   TBranch        *b__EcalEndcapPInsertClusters_particleIDs_;   //!
   TBranch        *b__EcalEndcapPInsertClusters_particleIDs_index;   //!
   TBranch        *b__EcalEndcapPInsertClusters_particleIDs_collectionID;   //!
   TBranch        *b__EcalEndcapPInsertClusters_shapeParameters;   //!
   TBranch        *b__EcalEndcapPInsertClusters_hitContributions;   //!
   TBranch        *b__EcalEndcapPInsertClusters_subdetectorEnergies;   //!
   TBranch        *b_EcalEndcapPInsertRawHits_;   //!
   TBranch        *b_EcalEndcapPInsertRawHits_cellID;   //!
   TBranch        *b_EcalEndcapPInsertRawHits_amplitude;   //!
   TBranch        *b_EcalEndcapPInsertRawHits_timeStamp;   //!
   TBranch        *b_EcalEndcapPInsertRecHits_;   //!
   TBranch        *b_EcalEndcapPInsertRecHits_cellID;   //!
   TBranch        *b_EcalEndcapPInsertRecHits_energy;   //!
   TBranch        *b_EcalEndcapPInsertRecHits_energyError;   //!
   TBranch        *b_EcalEndcapPInsertRecHits_time;   //!
   TBranch        *b_EcalEndcapPInsertRecHits_timeError;   //!
   TBranch        *b_EcalEndcapPInsertRecHits_position_x;   //!
   TBranch        *b_EcalEndcapPInsertRecHits_position_y;   //!
   TBranch        *b_EcalEndcapPInsertRecHits_position_z;   //!
   TBranch        *b_EcalEndcapPInsertRecHits_dimension_x;   //!
   TBranch        *b_EcalEndcapPInsertRecHits_dimension_y;   //!
   TBranch        *b_EcalEndcapPInsertRecHits_dimension_z;   //!
   TBranch        *b_EcalEndcapPInsertRecHits_sector;   //!
   TBranch        *b_EcalEndcapPInsertRecHits_layer;   //!
   TBranch        *b_EcalEndcapPInsertRecHits_local_x;   //!
   TBranch        *b_EcalEndcapPInsertRecHits_local_y;   //!
   TBranch        *b_EcalEndcapPInsertRecHits_local_z;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusterAssociations_;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusterAssociations_simID;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusterAssociations_recID;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusterAssociations_weight;   //!
   TBranch        *b__EcalEndcapPInsertTruthClusterAssociations_rec_;   //!
   TBranch        *b__EcalEndcapPInsertTruthClusterAssociations_rec_index;   //!
   TBranch        *b__EcalEndcapPInsertTruthClusterAssociations_rec_collectionID;   //!
   TBranch        *b__EcalEndcapPInsertTruthClusterAssociations_sim_;   //!
   TBranch        *b__EcalEndcapPInsertTruthClusterAssociations_sim_index;   //!
   TBranch        *b__EcalEndcapPInsertTruthClusterAssociations_sim_collectionID;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_type;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_energy;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_energyError;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_time;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_timeError;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_nhits;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_position_x;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_position_y;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_position_z;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_positionError_xx;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_positionError_yy;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_positionError_zz;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_positionError_xy;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_positionError_xz;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_positionError_yz;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_intrinsicTheta;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_intrinsicPhi;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_shapeParameters_begin;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_shapeParameters_end;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_hitContributions_begin;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_hitContributions_end;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_subdetectorEnergies_end;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_clusters_begin;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_clusters_end;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_hits_begin;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_hits_end;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_particleIDs_begin;   //!
   TBranch        *b_EcalEndcapPInsertTruthClusters_particleIDs_end;   //!
   TBranch        *b__EcalEndcapPInsertTruthClusters_clusters_;   //!
   TBranch        *b__EcalEndcapPInsertTruthClusters_clusters_index;   //!
   TBranch        *b__EcalEndcapPInsertTruthClusters_clusters_collectionID;   //!
   TBranch        *b__EcalEndcapPInsertTruthClusters_hits_;   //!
   TBranch        *b__EcalEndcapPInsertTruthClusters_hits_index;   //!
   TBranch        *b__EcalEndcapPInsertTruthClusters_hits_collectionID;   //!
   TBranch        *b__EcalEndcapPInsertTruthClusters_particleIDs_;   //!
   TBranch        *b__EcalEndcapPInsertTruthClusters_particleIDs_index;   //!
   TBranch        *b__EcalEndcapPInsertTruthClusters_particleIDs_collectionID;   //!
   TBranch        *b__EcalEndcapPInsertTruthClusters_shapeParameters;   //!
   TBranch        *b__EcalEndcapPInsertTruthClusters_hitContributions;   //!
   TBranch        *b__EcalEndcapPInsertTruthClusters_subdetectorEnergies;   //!
   TBranch        *b_EcalEndcapPRawHits_;   //!
   TBranch        *b_EcalEndcapPRawHits_cellID;   //!
   TBranch        *b_EcalEndcapPRawHits_amplitude;   //!
   TBranch        *b_EcalEndcapPRawHits_timeStamp;   //!
   TBranch        *b_EcalEndcapPRecHits_;   //!
   TBranch        *b_EcalEndcapPRecHits_cellID;   //!
   TBranch        *b_EcalEndcapPRecHits_energy;   //!
   TBranch        *b_EcalEndcapPRecHits_energyError;   //!
   TBranch        *b_EcalEndcapPRecHits_time;   //!
   TBranch        *b_EcalEndcapPRecHits_timeError;   //!
   TBranch        *b_EcalEndcapPRecHits_position_x;   //!
   TBranch        *b_EcalEndcapPRecHits_position_y;   //!
   TBranch        *b_EcalEndcapPRecHits_position_z;   //!
   TBranch        *b_EcalEndcapPRecHits_dimension_x;   //!
   TBranch        *b_EcalEndcapPRecHits_dimension_y;   //!
   TBranch        *b_EcalEndcapPRecHits_dimension_z;   //!
   TBranch        *b_EcalEndcapPRecHits_sector;   //!
   TBranch        *b_EcalEndcapPRecHits_layer;   //!
   TBranch        *b_EcalEndcapPRecHits_local_x;   //!
   TBranch        *b_EcalEndcapPRecHits_local_y;   //!
   TBranch        *b_EcalEndcapPRecHits_local_z;   //!
   TBranch        *b_EcalEndcapPTruthClusterAssociations_;   //!
   TBranch        *b_EcalEndcapPTruthClusterAssociations_simID;   //!
   TBranch        *b_EcalEndcapPTruthClusterAssociations_recID;   //!
   TBranch        *b_EcalEndcapPTruthClusterAssociations_weight;   //!
   TBranch        *b__EcalEndcapPTruthClusterAssociations_rec_;   //!
   TBranch        *b__EcalEndcapPTruthClusterAssociations_rec_index;   //!
   TBranch        *b__EcalEndcapPTruthClusterAssociations_rec_collectionID;   //!
   TBranch        *b__EcalEndcapPTruthClusterAssociations_sim_;   //!
   TBranch        *b__EcalEndcapPTruthClusterAssociations_sim_index;   //!
   TBranch        *b__EcalEndcapPTruthClusterAssociations_sim_collectionID;   //!
   TBranch        *b_EcalEndcapPTruthClusters_;   //!
   TBranch        *b_EcalEndcapPTruthClusters_type;   //!
   TBranch        *b_EcalEndcapPTruthClusters_energy;   //!
   TBranch        *b_EcalEndcapPTruthClusters_energyError;   //!
   TBranch        *b_EcalEndcapPTruthClusters_time;   //!
   TBranch        *b_EcalEndcapPTruthClusters_timeError;   //!
   TBranch        *b_EcalEndcapPTruthClusters_nhits;   //!
   TBranch        *b_EcalEndcapPTruthClusters_position_x;   //!
   TBranch        *b_EcalEndcapPTruthClusters_position_y;   //!
   TBranch        *b_EcalEndcapPTruthClusters_position_z;   //!
   TBranch        *b_EcalEndcapPTruthClusters_positionError_xx;   //!
   TBranch        *b_EcalEndcapPTruthClusters_positionError_yy;   //!
   TBranch        *b_EcalEndcapPTruthClusters_positionError_zz;   //!
   TBranch        *b_EcalEndcapPTruthClusters_positionError_xy;   //!
   TBranch        *b_EcalEndcapPTruthClusters_positionError_xz;   //!
   TBranch        *b_EcalEndcapPTruthClusters_positionError_yz;   //!
   TBranch        *b_EcalEndcapPTruthClusters_intrinsicTheta;   //!
   TBranch        *b_EcalEndcapPTruthClusters_intrinsicPhi;   //!
   TBranch        *b_EcalEndcapPTruthClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_EcalEndcapPTruthClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_EcalEndcapPTruthClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_EcalEndcapPTruthClusters_shapeParameters_begin;   //!
   TBranch        *b_EcalEndcapPTruthClusters_shapeParameters_end;   //!
   TBranch        *b_EcalEndcapPTruthClusters_hitContributions_begin;   //!
   TBranch        *b_EcalEndcapPTruthClusters_hitContributions_end;   //!
   TBranch        *b_EcalEndcapPTruthClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_EcalEndcapPTruthClusters_subdetectorEnergies_end;   //!
   TBranch        *b_EcalEndcapPTruthClusters_clusters_begin;   //!
   TBranch        *b_EcalEndcapPTruthClusters_clusters_end;   //!
   TBranch        *b_EcalEndcapPTruthClusters_hits_begin;   //!
   TBranch        *b_EcalEndcapPTruthClusters_hits_end;   //!
   TBranch        *b_EcalEndcapPTruthClusters_particleIDs_begin;   //!
   TBranch        *b_EcalEndcapPTruthClusters_particleIDs_end;   //!
   TBranch        *b__EcalEndcapPTruthClusters_clusters_;   //!
   TBranch        *b__EcalEndcapPTruthClusters_clusters_index;   //!
   TBranch        *b__EcalEndcapPTruthClusters_clusters_collectionID;   //!
   TBranch        *b__EcalEndcapPTruthClusters_hits_;   //!
   TBranch        *b__EcalEndcapPTruthClusters_hits_index;   //!
   TBranch        *b__EcalEndcapPTruthClusters_hits_collectionID;   //!
   TBranch        *b__EcalEndcapPTruthClusters_particleIDs_;   //!
   TBranch        *b__EcalEndcapPTruthClusters_particleIDs_index;   //!
   TBranch        *b__EcalEndcapPTruthClusters_particleIDs_collectionID;   //!
   TBranch        *b__EcalEndcapPTruthClusters_shapeParameters;   //!
   TBranch        *b__EcalEndcapPTruthClusters_hitContributions;   //!
   TBranch        *b__EcalEndcapPTruthClusters_subdetectorEnergies;   //!
   TBranch        *b_EcalLumiSpecClusterAssociations_;   //!
   TBranch        *b_EcalLumiSpecClusterAssociations_simID;   //!
   TBranch        *b_EcalLumiSpecClusterAssociations_recID;   //!
   TBranch        *b_EcalLumiSpecClusterAssociations_weight;   //!
   TBranch        *b__EcalLumiSpecClusterAssociations_rec_;   //!
   TBranch        *b__EcalLumiSpecClusterAssociations_rec_index;   //!
   TBranch        *b__EcalLumiSpecClusterAssociations_rec_collectionID;   //!
   TBranch        *b__EcalLumiSpecClusterAssociations_sim_;   //!
   TBranch        *b__EcalLumiSpecClusterAssociations_sim_index;   //!
   TBranch        *b__EcalLumiSpecClusterAssociations_sim_collectionID;   //!
   TBranch        *b_EcalLumiSpecClusters_;   //!
   TBranch        *b_EcalLumiSpecClusters_type;   //!
   TBranch        *b_EcalLumiSpecClusters_energy;   //!
   TBranch        *b_EcalLumiSpecClusters_energyError;   //!
   TBranch        *b_EcalLumiSpecClusters_time;   //!
   TBranch        *b_EcalLumiSpecClusters_timeError;   //!
   TBranch        *b_EcalLumiSpecClusters_nhits;   //!
   TBranch        *b_EcalLumiSpecClusters_position_x;   //!
   TBranch        *b_EcalLumiSpecClusters_position_y;   //!
   TBranch        *b_EcalLumiSpecClusters_position_z;   //!
   TBranch        *b_EcalLumiSpecClusters_positionError_xx;   //!
   TBranch        *b_EcalLumiSpecClusters_positionError_yy;   //!
   TBranch        *b_EcalLumiSpecClusters_positionError_zz;   //!
   TBranch        *b_EcalLumiSpecClusters_positionError_xy;   //!
   TBranch        *b_EcalLumiSpecClusters_positionError_xz;   //!
   TBranch        *b_EcalLumiSpecClusters_positionError_yz;   //!
   TBranch        *b_EcalLumiSpecClusters_intrinsicTheta;   //!
   TBranch        *b_EcalLumiSpecClusters_intrinsicPhi;   //!
   TBranch        *b_EcalLumiSpecClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_EcalLumiSpecClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_EcalLumiSpecClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_EcalLumiSpecClusters_shapeParameters_begin;   //!
   TBranch        *b_EcalLumiSpecClusters_shapeParameters_end;   //!
   TBranch        *b_EcalLumiSpecClusters_hitContributions_begin;   //!
   TBranch        *b_EcalLumiSpecClusters_hitContributions_end;   //!
   TBranch        *b_EcalLumiSpecClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_EcalLumiSpecClusters_subdetectorEnergies_end;   //!
   TBranch        *b_EcalLumiSpecClusters_clusters_begin;   //!
   TBranch        *b_EcalLumiSpecClusters_clusters_end;   //!
   TBranch        *b_EcalLumiSpecClusters_hits_begin;   //!
   TBranch        *b_EcalLumiSpecClusters_hits_end;   //!
   TBranch        *b_EcalLumiSpecClusters_particleIDs_begin;   //!
   TBranch        *b_EcalLumiSpecClusters_particleIDs_end;   //!
   TBranch        *b__EcalLumiSpecClusters_clusters_;   //!
   TBranch        *b__EcalLumiSpecClusters_clusters_index;   //!
   TBranch        *b__EcalLumiSpecClusters_clusters_collectionID;   //!
   TBranch        *b__EcalLumiSpecClusters_hits_;   //!
   TBranch        *b__EcalLumiSpecClusters_hits_index;   //!
   TBranch        *b__EcalLumiSpecClusters_hits_collectionID;   //!
   TBranch        *b__EcalLumiSpecClusters_particleIDs_;   //!
   TBranch        *b__EcalLumiSpecClusters_particleIDs_index;   //!
   TBranch        *b__EcalLumiSpecClusters_particleIDs_collectionID;   //!
   TBranch        *b__EcalLumiSpecClusters_shapeParameters;   //!
   TBranch        *b__EcalLumiSpecClusters_hitContributions;   //!
   TBranch        *b__EcalLumiSpecClusters_subdetectorEnergies;   //!
   TBranch        *b_EcalLumiSpecRawHits_;   //!
   TBranch        *b_EcalLumiSpecRawHits_cellID;   //!
   TBranch        *b_EcalLumiSpecRawHits_amplitude;   //!
   TBranch        *b_EcalLumiSpecRawHits_timeStamp;   //!
   TBranch        *b_EcalLumiSpecRecHits_;   //!
   TBranch        *b_EcalLumiSpecRecHits_cellID;   //!
   TBranch        *b_EcalLumiSpecRecHits_energy;   //!
   TBranch        *b_EcalLumiSpecRecHits_energyError;   //!
   TBranch        *b_EcalLumiSpecRecHits_time;   //!
   TBranch        *b_EcalLumiSpecRecHits_timeError;   //!
   TBranch        *b_EcalLumiSpecRecHits_position_x;   //!
   TBranch        *b_EcalLumiSpecRecHits_position_y;   //!
   TBranch        *b_EcalLumiSpecRecHits_position_z;   //!
   TBranch        *b_EcalLumiSpecRecHits_dimension_x;   //!
   TBranch        *b_EcalLumiSpecRecHits_dimension_y;   //!
   TBranch        *b_EcalLumiSpecRecHits_dimension_z;   //!
   TBranch        *b_EcalLumiSpecRecHits_sector;   //!
   TBranch        *b_EcalLumiSpecRecHits_layer;   //!
   TBranch        *b_EcalLumiSpecRecHits_local_x;   //!
   TBranch        *b_EcalLumiSpecRecHits_local_y;   //!
   TBranch        *b_EcalLumiSpecRecHits_local_z;   //!
   TBranch        *b_EcalLumiSpecTruthClusterAssociations_;   //!
   TBranch        *b_EcalLumiSpecTruthClusterAssociations_simID;   //!
   TBranch        *b_EcalLumiSpecTruthClusterAssociations_recID;   //!
   TBranch        *b_EcalLumiSpecTruthClusterAssociations_weight;   //!
   TBranch        *b__EcalLumiSpecTruthClusterAssociations_rec_;   //!
   TBranch        *b__EcalLumiSpecTruthClusterAssociations_rec_index;   //!
   TBranch        *b__EcalLumiSpecTruthClusterAssociations_rec_collectionID;   //!
   TBranch        *b__EcalLumiSpecTruthClusterAssociations_sim_;   //!
   TBranch        *b__EcalLumiSpecTruthClusterAssociations_sim_index;   //!
   TBranch        *b__EcalLumiSpecTruthClusterAssociations_sim_collectionID;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_type;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_energy;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_energyError;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_time;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_timeError;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_nhits;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_position_x;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_position_y;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_position_z;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_positionError_xx;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_positionError_yy;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_positionError_zz;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_positionError_xy;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_positionError_xz;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_positionError_yz;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_intrinsicTheta;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_intrinsicPhi;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_shapeParameters_begin;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_shapeParameters_end;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_hitContributions_begin;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_hitContributions_end;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_subdetectorEnergies_end;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_clusters_begin;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_clusters_end;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_hits_begin;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_hits_end;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_particleIDs_begin;   //!
   TBranch        *b_EcalLumiSpecTruthClusters_particleIDs_end;   //!
   TBranch        *b__EcalLumiSpecTruthClusters_clusters_;   //!
   TBranch        *b__EcalLumiSpecTruthClusters_clusters_index;   //!
   TBranch        *b__EcalLumiSpecTruthClusters_clusters_collectionID;   //!
   TBranch        *b__EcalLumiSpecTruthClusters_hits_;   //!
   TBranch        *b__EcalLumiSpecTruthClusters_hits_index;   //!
   TBranch        *b__EcalLumiSpecTruthClusters_hits_collectionID;   //!
   TBranch        *b__EcalLumiSpecTruthClusters_particleIDs_;   //!
   TBranch        *b__EcalLumiSpecTruthClusters_particleIDs_index;   //!
   TBranch        *b__EcalLumiSpecTruthClusters_particleIDs_collectionID;   //!
   TBranch        *b__EcalLumiSpecTruthClusters_shapeParameters;   //!
   TBranch        *b__EcalLumiSpecTruthClusters_hitContributions;   //!
   TBranch        *b__EcalLumiSpecTruthClusters_subdetectorEnergies;   //!
   TBranch        *b_EventHeader_;   //!
   TBranch        *b_EventHeader_eventNumber;   //!
   TBranch        *b_EventHeader_runNumber;   //!
   TBranch        *b_EventHeader_timeStamp;   //!
   TBranch        *b_EventHeader_weight;   //!
   TBranch        *b_ForwardMPGDEndcapRecHits_;   //!
   TBranch        *b_ForwardMPGDEndcapRecHits_cellID;   //!
   TBranch        *b_ForwardMPGDEndcapRecHits_position_x;   //!
   TBranch        *b_ForwardMPGDEndcapRecHits_position_y;   //!
   TBranch        *b_ForwardMPGDEndcapRecHits_position_z;   //!
   TBranch        *b_ForwardMPGDEndcapRecHits_positionError_xx;   //!
   TBranch        *b_ForwardMPGDEndcapRecHits_positionError_yy;   //!
   TBranch        *b_ForwardMPGDEndcapRecHits_positionError_zz;   //!
   TBranch        *b_ForwardMPGDEndcapRecHits_time;   //!
   TBranch        *b_ForwardMPGDEndcapRecHits_timeError;   //!
   TBranch        *b_ForwardMPGDEndcapRecHits_edep;   //!
   TBranch        *b_ForwardMPGDEndcapRecHits_edepError;   //!
   TBranch        *b_ForwardOffMRecParticles_;   //!
   TBranch        *b_ForwardOffMRecParticles_type;   //!
   TBranch        *b_ForwardOffMRecParticles_energy;   //!
   TBranch        *b_ForwardOffMRecParticles_momentum_x;   //!
   TBranch        *b_ForwardOffMRecParticles_momentum_y;   //!
   TBranch        *b_ForwardOffMRecParticles_momentum_z;   //!
   TBranch        *b_ForwardOffMRecParticles_referencePoint_x;   //!
   TBranch        *b_ForwardOffMRecParticles_referencePoint_y;   //!
   TBranch        *b_ForwardOffMRecParticles_referencePoint_z;   //!
   TBranch        *b_ForwardOffMRecParticles_charge;   //!
   TBranch        *b_ForwardOffMRecParticles_mass;   //!
   TBranch        *b_ForwardOffMRecParticles_goodnessOfPID;   //!
   TBranch        *b_ForwardOffMRecParticles_covMatrix_xx;   //!
   TBranch        *b_ForwardOffMRecParticles_covMatrix_yy;   //!
   TBranch        *b_ForwardOffMRecParticles_covMatrix_zz;   //!
   TBranch        *b_ForwardOffMRecParticles_covMatrix_tt;   //!
   TBranch        *b_ForwardOffMRecParticles_covMatrix_xy;   //!
   TBranch        *b_ForwardOffMRecParticles_covMatrix_xz;   //!
   TBranch        *b_ForwardOffMRecParticles_covMatrix_xt;   //!
   TBranch        *b_ForwardOffMRecParticles_covMatrix_yz;   //!
   TBranch        *b_ForwardOffMRecParticles_covMatrix_yt;   //!
   TBranch        *b_ForwardOffMRecParticles_covMatrix_zt;   //!
   TBranch        *b_ForwardOffMRecParticles_PDG;   //!
   TBranch        *b_ForwardOffMRecParticles_clusters_begin;   //!
   TBranch        *b_ForwardOffMRecParticles_clusters_end;   //!
   TBranch        *b_ForwardOffMRecParticles_tracks_begin;   //!
   TBranch        *b_ForwardOffMRecParticles_tracks_end;   //!
   TBranch        *b_ForwardOffMRecParticles_particles_begin;   //!
   TBranch        *b_ForwardOffMRecParticles_particles_end;   //!
   TBranch        *b_ForwardOffMRecParticles_particleIDs_begin;   //!
   TBranch        *b_ForwardOffMRecParticles_particleIDs_end;   //!
   TBranch        *b__ForwardOffMRecParticles_clusters_;   //!
   TBranch        *b__ForwardOffMRecParticles_clusters_index;   //!
   TBranch        *b__ForwardOffMRecParticles_clusters_collectionID;   //!
   TBranch        *b__ForwardOffMRecParticles_tracks_;   //!
   TBranch        *b__ForwardOffMRecParticles_tracks_index;   //!
   TBranch        *b__ForwardOffMRecParticles_tracks_collectionID;   //!
   TBranch        *b__ForwardOffMRecParticles_particles_;   //!
   TBranch        *b__ForwardOffMRecParticles_particles_index;   //!
   TBranch        *b__ForwardOffMRecParticles_particles_collectionID;   //!
   TBranch        *b__ForwardOffMRecParticles_particleIDs_;   //!
   TBranch        *b__ForwardOffMRecParticles_particleIDs_index;   //!
   TBranch        *b__ForwardOffMRecParticles_particleIDs_collectionID;   //!
   TBranch        *b__ForwardOffMRecParticles_startVertex_;   //!
   TBranch        *b__ForwardOffMRecParticles_startVertex_index;   //!
   TBranch        *b__ForwardOffMRecParticles_startVertex_collectionID;   //!
   TBranch        *b__ForwardOffMRecParticles_particleIDUsed_;   //!
   TBranch        *b__ForwardOffMRecParticles_particleIDUsed_index;   //!
   TBranch        *b__ForwardOffMRecParticles_particleIDUsed_collectionID;   //!
   TBranch        *b_ForwardRomanPotRecParticles_;   //!
   TBranch        *b_ForwardRomanPotRecParticles_type;   //!
   TBranch        *b_ForwardRomanPotRecParticles_energy;   //!
   TBranch        *b_ForwardRomanPotRecParticles_momentum_x;   //!
   TBranch        *b_ForwardRomanPotRecParticles_momentum_y;   //!
   TBranch        *b_ForwardRomanPotRecParticles_momentum_z;   //!
   TBranch        *b_ForwardRomanPotRecParticles_referencePoint_x;   //!
   TBranch        *b_ForwardRomanPotRecParticles_referencePoint_y;   //!
   TBranch        *b_ForwardRomanPotRecParticles_referencePoint_z;   //!
   TBranch        *b_ForwardRomanPotRecParticles_charge;   //!
   TBranch        *b_ForwardRomanPotRecParticles_mass;   //!
   TBranch        *b_ForwardRomanPotRecParticles_goodnessOfPID;   //!
   TBranch        *b_ForwardRomanPotRecParticles_covMatrix_xx;   //!
   TBranch        *b_ForwardRomanPotRecParticles_covMatrix_yy;   //!
   TBranch        *b_ForwardRomanPotRecParticles_covMatrix_zz;   //!
   TBranch        *b_ForwardRomanPotRecParticles_covMatrix_tt;   //!
   TBranch        *b_ForwardRomanPotRecParticles_covMatrix_xy;   //!
   TBranch        *b_ForwardRomanPotRecParticles_covMatrix_xz;   //!
   TBranch        *b_ForwardRomanPotRecParticles_covMatrix_xt;   //!
   TBranch        *b_ForwardRomanPotRecParticles_covMatrix_yz;   //!
   TBranch        *b_ForwardRomanPotRecParticles_covMatrix_yt;   //!
   TBranch        *b_ForwardRomanPotRecParticles_covMatrix_zt;   //!
   TBranch        *b_ForwardRomanPotRecParticles_PDG;   //!
   TBranch        *b_ForwardRomanPotRecParticles_clusters_begin;   //!
   TBranch        *b_ForwardRomanPotRecParticles_clusters_end;   //!
   TBranch        *b_ForwardRomanPotRecParticles_tracks_begin;   //!
   TBranch        *b_ForwardRomanPotRecParticles_tracks_end;   //!
   TBranch        *b_ForwardRomanPotRecParticles_particles_begin;   //!
   TBranch        *b_ForwardRomanPotRecParticles_particles_end;   //!
   TBranch        *b_ForwardRomanPotRecParticles_particleIDs_begin;   //!
   TBranch        *b_ForwardRomanPotRecParticles_particleIDs_end;   //!
   TBranch        *b__ForwardRomanPotRecParticles_clusters_;   //!
   TBranch        *b__ForwardRomanPotRecParticles_clusters_index;   //!
   TBranch        *b__ForwardRomanPotRecParticles_clusters_collectionID;   //!
   TBranch        *b__ForwardRomanPotRecParticles_tracks_;   //!
   TBranch        *b__ForwardRomanPotRecParticles_tracks_index;   //!
   TBranch        *b__ForwardRomanPotRecParticles_tracks_collectionID;   //!
   TBranch        *b__ForwardRomanPotRecParticles_particles_;   //!
   TBranch        *b__ForwardRomanPotRecParticles_particles_index;   //!
   TBranch        *b__ForwardRomanPotRecParticles_particles_collectionID;   //!
   TBranch        *b__ForwardRomanPotRecParticles_particleIDs_;   //!
   TBranch        *b__ForwardRomanPotRecParticles_particleIDs_index;   //!
   TBranch        *b__ForwardRomanPotRecParticles_particleIDs_collectionID;   //!
   TBranch        *b__ForwardRomanPotRecParticles_startVertex_;   //!
   TBranch        *b__ForwardRomanPotRecParticles_startVertex_index;   //!
   TBranch        *b__ForwardRomanPotRecParticles_startVertex_collectionID;   //!
   TBranch        *b__ForwardRomanPotRecParticles_particleIDUsed_;   //!
   TBranch        *b__ForwardRomanPotRecParticles_particleIDUsed_index;   //!
   TBranch        *b__ForwardRomanPotRecParticles_particleIDUsed_collectionID;   //!
   TBranch        *b_GeneratedChargedJets_;   //!
   TBranch        *b_GeneratedChargedJets_type;   //!
   TBranch        *b_GeneratedChargedJets_energy;   //!
   TBranch        *b_GeneratedChargedJets_momentum_x;   //!
   TBranch        *b_GeneratedChargedJets_momentum_y;   //!
   TBranch        *b_GeneratedChargedJets_momentum_z;   //!
   TBranch        *b_GeneratedChargedJets_referencePoint_x;   //!
   TBranch        *b_GeneratedChargedJets_referencePoint_y;   //!
   TBranch        *b_GeneratedChargedJets_referencePoint_z;   //!
   TBranch        *b_GeneratedChargedJets_charge;   //!
   TBranch        *b_GeneratedChargedJets_mass;   //!
   TBranch        *b_GeneratedChargedJets_goodnessOfPID;   //!
   TBranch        *b_GeneratedChargedJets_covMatrix_xx;   //!
   TBranch        *b_GeneratedChargedJets_covMatrix_yy;   //!
   TBranch        *b_GeneratedChargedJets_covMatrix_zz;   //!
   TBranch        *b_GeneratedChargedJets_covMatrix_tt;   //!
   TBranch        *b_GeneratedChargedJets_covMatrix_xy;   //!
   TBranch        *b_GeneratedChargedJets_covMatrix_xz;   //!
   TBranch        *b_GeneratedChargedJets_covMatrix_xt;   //!
   TBranch        *b_GeneratedChargedJets_covMatrix_yz;   //!
   TBranch        *b_GeneratedChargedJets_covMatrix_yt;   //!
   TBranch        *b_GeneratedChargedJets_covMatrix_zt;   //!
   TBranch        *b_GeneratedChargedJets_PDG;   //!
   TBranch        *b_GeneratedChargedJets_clusters_begin;   //!
   TBranch        *b_GeneratedChargedJets_clusters_end;   //!
   TBranch        *b_GeneratedChargedJets_tracks_begin;   //!
   TBranch        *b_GeneratedChargedJets_tracks_end;   //!
   TBranch        *b_GeneratedChargedJets_particles_begin;   //!
   TBranch        *b_GeneratedChargedJets_particles_end;   //!
   TBranch        *b_GeneratedChargedJets_particleIDs_begin;   //!
   TBranch        *b_GeneratedChargedJets_particleIDs_end;   //!
   TBranch        *b__GeneratedChargedJets_clusters_;   //!
   TBranch        *b__GeneratedChargedJets_clusters_index;   //!
   TBranch        *b__GeneratedChargedJets_clusters_collectionID;   //!
   TBranch        *b__GeneratedChargedJets_tracks_;   //!
   TBranch        *b__GeneratedChargedJets_tracks_index;   //!
   TBranch        *b__GeneratedChargedJets_tracks_collectionID;   //!
   TBranch        *b__GeneratedChargedJets_particles_;   //!
   TBranch        *b__GeneratedChargedJets_particles_index;   //!
   TBranch        *b__GeneratedChargedJets_particles_collectionID;   //!
   TBranch        *b__GeneratedChargedJets_particleIDs_;   //!
   TBranch        *b__GeneratedChargedJets_particleIDs_index;   //!
   TBranch        *b__GeneratedChargedJets_particleIDs_collectionID;   //!
   TBranch        *b__GeneratedChargedJets_startVertex_;   //!
   TBranch        *b__GeneratedChargedJets_startVertex_index;   //!
   TBranch        *b__GeneratedChargedJets_startVertex_collectionID;   //!
   TBranch        *b__GeneratedChargedJets_particleIDUsed_;   //!
   TBranch        *b__GeneratedChargedJets_particleIDUsed_index;   //!
   TBranch        *b__GeneratedChargedJets_particleIDUsed_collectionID;   //!
   TBranch        *b_GeneratedJets_;   //!
   TBranch        *b_GeneratedJets_type;   //!
   TBranch        *b_GeneratedJets_energy;   //!
   TBranch        *b_GeneratedJets_momentum_x;   //!
   TBranch        *b_GeneratedJets_momentum_y;   //!
   TBranch        *b_GeneratedJets_momentum_z;   //!
   TBranch        *b_GeneratedJets_referencePoint_x;   //!
   TBranch        *b_GeneratedJets_referencePoint_y;   //!
   TBranch        *b_GeneratedJets_referencePoint_z;   //!
   TBranch        *b_GeneratedJets_charge;   //!
   TBranch        *b_GeneratedJets_mass;   //!
   TBranch        *b_GeneratedJets_goodnessOfPID;   //!
   TBranch        *b_GeneratedJets_covMatrix_xx;   //!
   TBranch        *b_GeneratedJets_covMatrix_yy;   //!
   TBranch        *b_GeneratedJets_covMatrix_zz;   //!
   TBranch        *b_GeneratedJets_covMatrix_tt;   //!
   TBranch        *b_GeneratedJets_covMatrix_xy;   //!
   TBranch        *b_GeneratedJets_covMatrix_xz;   //!
   TBranch        *b_GeneratedJets_covMatrix_xt;   //!
   TBranch        *b_GeneratedJets_covMatrix_yz;   //!
   TBranch        *b_GeneratedJets_covMatrix_yt;   //!
   TBranch        *b_GeneratedJets_covMatrix_zt;   //!
   TBranch        *b_GeneratedJets_PDG;   //!
   TBranch        *b_GeneratedJets_clusters_begin;   //!
   TBranch        *b_GeneratedJets_clusters_end;   //!
   TBranch        *b_GeneratedJets_tracks_begin;   //!
   TBranch        *b_GeneratedJets_tracks_end;   //!
   TBranch        *b_GeneratedJets_particles_begin;   //!
   TBranch        *b_GeneratedJets_particles_end;   //!
   TBranch        *b_GeneratedJets_particleIDs_begin;   //!
   TBranch        *b_GeneratedJets_particleIDs_end;   //!
   TBranch        *b__GeneratedJets_clusters_;   //!
   TBranch        *b__GeneratedJets_clusters_index;   //!
   TBranch        *b__GeneratedJets_clusters_collectionID;   //!
   TBranch        *b__GeneratedJets_tracks_;   //!
   TBranch        *b__GeneratedJets_tracks_index;   //!
   TBranch        *b__GeneratedJets_tracks_collectionID;   //!
   TBranch        *b__GeneratedJets_particles_;   //!
   TBranch        *b__GeneratedJets_particles_index;   //!
   TBranch        *b__GeneratedJets_particles_collectionID;   //!
   TBranch        *b__GeneratedJets_particleIDs_;   //!
   TBranch        *b__GeneratedJets_particleIDs_index;   //!
   TBranch        *b__GeneratedJets_particleIDs_collectionID;   //!
   TBranch        *b__GeneratedJets_startVertex_;   //!
   TBranch        *b__GeneratedJets_startVertex_index;   //!
   TBranch        *b__GeneratedJets_startVertex_collectionID;   //!
   TBranch        *b__GeneratedJets_particleIDUsed_;   //!
   TBranch        *b__GeneratedJets_particleIDUsed_index;   //!
   TBranch        *b__GeneratedJets_particleIDUsed_collectionID;   //!
   TBranch        *b_GeneratedParticles_;   //!
   TBranch        *b_GeneratedParticles_type;   //!
   TBranch        *b_GeneratedParticles_energy;   //!
   TBranch        *b_GeneratedParticles_momentum_x;   //!
   TBranch        *b_GeneratedParticles_momentum_y;   //!
   TBranch        *b_GeneratedParticles_momentum_z;   //!
   TBranch        *b_GeneratedParticles_referencePoint_x;   //!
   TBranch        *b_GeneratedParticles_referencePoint_y;   //!
   TBranch        *b_GeneratedParticles_referencePoint_z;   //!
   TBranch        *b_GeneratedParticles_charge;   //!
   TBranch        *b_GeneratedParticles_mass;   //!
   TBranch        *b_GeneratedParticles_goodnessOfPID;   //!
   TBranch        *b_GeneratedParticles_covMatrix_xx;   //!
   TBranch        *b_GeneratedParticles_covMatrix_yy;   //!
   TBranch        *b_GeneratedParticles_covMatrix_zz;   //!
   TBranch        *b_GeneratedParticles_covMatrix_tt;   //!
   TBranch        *b_GeneratedParticles_covMatrix_xy;   //!
   TBranch        *b_GeneratedParticles_covMatrix_xz;   //!
   TBranch        *b_GeneratedParticles_covMatrix_xt;   //!
   TBranch        *b_GeneratedParticles_covMatrix_yz;   //!
   TBranch        *b_GeneratedParticles_covMatrix_yt;   //!
   TBranch        *b_GeneratedParticles_covMatrix_zt;   //!
   TBranch        *b_GeneratedParticles_PDG;   //!
   TBranch        *b_GeneratedParticles_clusters_begin;   //!
   TBranch        *b_GeneratedParticles_clusters_end;   //!
   TBranch        *b_GeneratedParticles_tracks_begin;   //!
   TBranch        *b_GeneratedParticles_tracks_end;   //!
   TBranch        *b_GeneratedParticles_particles_begin;   //!
   TBranch        *b_GeneratedParticles_particles_end;   //!
   TBranch        *b_GeneratedParticles_particleIDs_begin;   //!
   TBranch        *b_GeneratedParticles_particleIDs_end;   //!
   TBranch        *b__GeneratedParticles_clusters_;   //!
   TBranch        *b__GeneratedParticles_clusters_index;   //!
   TBranch        *b__GeneratedParticles_clusters_collectionID;   //!
   TBranch        *b__GeneratedParticles_tracks_;   //!
   TBranch        *b__GeneratedParticles_tracks_index;   //!
   TBranch        *b__GeneratedParticles_tracks_collectionID;   //!
   TBranch        *b__GeneratedParticles_particles_;   //!
   TBranch        *b__GeneratedParticles_particles_index;   //!
   TBranch        *b__GeneratedParticles_particles_collectionID;   //!
   TBranch        *b__GeneratedParticles_particleIDs_;   //!
   TBranch        *b__GeneratedParticles_particleIDs_index;   //!
   TBranch        *b__GeneratedParticles_particleIDs_collectionID;   //!
   TBranch        *b__GeneratedParticles_startVertex_;   //!
   TBranch        *b__GeneratedParticles_startVertex_index;   //!
   TBranch        *b__GeneratedParticles_startVertex_collectionID;   //!
   TBranch        *b__GeneratedParticles_particleIDUsed_;   //!
   TBranch        *b__GeneratedParticles_particleIDUsed_index;   //!
   TBranch        *b__GeneratedParticles_particleIDUsed_collectionID;   //!
   TBranch        *b_HcalBarrelClusterAssociations_;   //!
   TBranch        *b_HcalBarrelClusterAssociations_simID;   //!
   TBranch        *b_HcalBarrelClusterAssociations_recID;   //!
   TBranch        *b_HcalBarrelClusterAssociations_weight;   //!
   TBranch        *b__HcalBarrelClusterAssociations_rec_;   //!
   TBranch        *b__HcalBarrelClusterAssociations_rec_index;   //!
   TBranch        *b__HcalBarrelClusterAssociations_rec_collectionID;   //!
   TBranch        *b__HcalBarrelClusterAssociations_sim_;   //!
   TBranch        *b__HcalBarrelClusterAssociations_sim_index;   //!
   TBranch        *b__HcalBarrelClusterAssociations_sim_collectionID;   //!
   TBranch        *b_HcalBarrelClusters_;   //!
   TBranch        *b_HcalBarrelClusters_type;   //!
   TBranch        *b_HcalBarrelClusters_energy;   //!
   TBranch        *b_HcalBarrelClusters_energyError;   //!
   TBranch        *b_HcalBarrelClusters_time;   //!
   TBranch        *b_HcalBarrelClusters_timeError;   //!
   TBranch        *b_HcalBarrelClusters_nhits;   //!
   TBranch        *b_HcalBarrelClusters_position_x;   //!
   TBranch        *b_HcalBarrelClusters_position_y;   //!
   TBranch        *b_HcalBarrelClusters_position_z;   //!
   TBranch        *b_HcalBarrelClusters_positionError_xx;   //!
   TBranch        *b_HcalBarrelClusters_positionError_yy;   //!
   TBranch        *b_HcalBarrelClusters_positionError_zz;   //!
   TBranch        *b_HcalBarrelClusters_positionError_xy;   //!
   TBranch        *b_HcalBarrelClusters_positionError_xz;   //!
   TBranch        *b_HcalBarrelClusters_positionError_yz;   //!
   TBranch        *b_HcalBarrelClusters_intrinsicTheta;   //!
   TBranch        *b_HcalBarrelClusters_intrinsicPhi;   //!
   TBranch        *b_HcalBarrelClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_HcalBarrelClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_HcalBarrelClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_HcalBarrelClusters_shapeParameters_begin;   //!
   TBranch        *b_HcalBarrelClusters_shapeParameters_end;   //!
   TBranch        *b_HcalBarrelClusters_hitContributions_begin;   //!
   TBranch        *b_HcalBarrelClusters_hitContributions_end;   //!
   TBranch        *b_HcalBarrelClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_HcalBarrelClusters_subdetectorEnergies_end;   //!
   TBranch        *b_HcalBarrelClusters_clusters_begin;   //!
   TBranch        *b_HcalBarrelClusters_clusters_end;   //!
   TBranch        *b_HcalBarrelClusters_hits_begin;   //!
   TBranch        *b_HcalBarrelClusters_hits_end;   //!
   TBranch        *b_HcalBarrelClusters_particleIDs_begin;   //!
   TBranch        *b_HcalBarrelClusters_particleIDs_end;   //!
   TBranch        *b__HcalBarrelClusters_clusters_;   //!
   TBranch        *b__HcalBarrelClusters_clusters_index;   //!
   TBranch        *b__HcalBarrelClusters_clusters_collectionID;   //!
   TBranch        *b__HcalBarrelClusters_hits_;   //!
   TBranch        *b__HcalBarrelClusters_hits_index;   //!
   TBranch        *b__HcalBarrelClusters_hits_collectionID;   //!
   TBranch        *b__HcalBarrelClusters_particleIDs_;   //!
   TBranch        *b__HcalBarrelClusters_particleIDs_index;   //!
   TBranch        *b__HcalBarrelClusters_particleIDs_collectionID;   //!
   TBranch        *b__HcalBarrelClusters_shapeParameters;   //!
   TBranch        *b__HcalBarrelClusters_hitContributions;   //!
   TBranch        *b__HcalBarrelClusters_subdetectorEnergies;   //!
   TBranch        *b_HcalBarrelRawHits_;   //!
   TBranch        *b_HcalBarrelRawHits_cellID;   //!
   TBranch        *b_HcalBarrelRawHits_amplitude;   //!
   TBranch        *b_HcalBarrelRawHits_timeStamp;   //!
   TBranch        *b_HcalBarrelRecHits_;   //!
   TBranch        *b_HcalBarrelRecHits_cellID;   //!
   TBranch        *b_HcalBarrelRecHits_energy;   //!
   TBranch        *b_HcalBarrelRecHits_energyError;   //!
   TBranch        *b_HcalBarrelRecHits_time;   //!
   TBranch        *b_HcalBarrelRecHits_timeError;   //!
   TBranch        *b_HcalBarrelRecHits_position_x;   //!
   TBranch        *b_HcalBarrelRecHits_position_y;   //!
   TBranch        *b_HcalBarrelRecHits_position_z;   //!
   TBranch        *b_HcalBarrelRecHits_dimension_x;   //!
   TBranch        *b_HcalBarrelRecHits_dimension_y;   //!
   TBranch        *b_HcalBarrelRecHits_dimension_z;   //!
   TBranch        *b_HcalBarrelRecHits_sector;   //!
   TBranch        *b_HcalBarrelRecHits_layer;   //!
   TBranch        *b_HcalBarrelRecHits_local_x;   //!
   TBranch        *b_HcalBarrelRecHits_local_y;   //!
   TBranch        *b_HcalBarrelRecHits_local_z;   //!
   TBranch        *b_HcalBarrelTruthClusterAssociations_;   //!
   TBranch        *b_HcalBarrelTruthClusterAssociations_simID;   //!
   TBranch        *b_HcalBarrelTruthClusterAssociations_recID;   //!
   TBranch        *b_HcalBarrelTruthClusterAssociations_weight;   //!
   TBranch        *b__HcalBarrelTruthClusterAssociations_rec_;   //!
   TBranch        *b__HcalBarrelTruthClusterAssociations_rec_index;   //!
   TBranch        *b__HcalBarrelTruthClusterAssociations_rec_collectionID;   //!
   TBranch        *b__HcalBarrelTruthClusterAssociations_sim_;   //!
   TBranch        *b__HcalBarrelTruthClusterAssociations_sim_index;   //!
   TBranch        *b__HcalBarrelTruthClusterAssociations_sim_collectionID;   //!
   TBranch        *b_HcalBarrelTruthClusters_;   //!
   TBranch        *b_HcalBarrelTruthClusters_type;   //!
   TBranch        *b_HcalBarrelTruthClusters_energy;   //!
   TBranch        *b_HcalBarrelTruthClusters_energyError;   //!
   TBranch        *b_HcalBarrelTruthClusters_time;   //!
   TBranch        *b_HcalBarrelTruthClusters_timeError;   //!
   TBranch        *b_HcalBarrelTruthClusters_nhits;   //!
   TBranch        *b_HcalBarrelTruthClusters_position_x;   //!
   TBranch        *b_HcalBarrelTruthClusters_position_y;   //!
   TBranch        *b_HcalBarrelTruthClusters_position_z;   //!
   TBranch        *b_HcalBarrelTruthClusters_positionError_xx;   //!
   TBranch        *b_HcalBarrelTruthClusters_positionError_yy;   //!
   TBranch        *b_HcalBarrelTruthClusters_positionError_zz;   //!
   TBranch        *b_HcalBarrelTruthClusters_positionError_xy;   //!
   TBranch        *b_HcalBarrelTruthClusters_positionError_xz;   //!
   TBranch        *b_HcalBarrelTruthClusters_positionError_yz;   //!
   TBranch        *b_HcalBarrelTruthClusters_intrinsicTheta;   //!
   TBranch        *b_HcalBarrelTruthClusters_intrinsicPhi;   //!
   TBranch        *b_HcalBarrelTruthClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_HcalBarrelTruthClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_HcalBarrelTruthClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_HcalBarrelTruthClusters_shapeParameters_begin;   //!
   TBranch        *b_HcalBarrelTruthClusters_shapeParameters_end;   //!
   TBranch        *b_HcalBarrelTruthClusters_hitContributions_begin;   //!
   TBranch        *b_HcalBarrelTruthClusters_hitContributions_end;   //!
   TBranch        *b_HcalBarrelTruthClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_HcalBarrelTruthClusters_subdetectorEnergies_end;   //!
   TBranch        *b_HcalBarrelTruthClusters_clusters_begin;   //!
   TBranch        *b_HcalBarrelTruthClusters_clusters_end;   //!
   TBranch        *b_HcalBarrelTruthClusters_hits_begin;   //!
   TBranch        *b_HcalBarrelTruthClusters_hits_end;   //!
   TBranch        *b_HcalBarrelTruthClusters_particleIDs_begin;   //!
   TBranch        *b_HcalBarrelTruthClusters_particleIDs_end;   //!
   TBranch        *b__HcalBarrelTruthClusters_clusters_;   //!
   TBranch        *b__HcalBarrelTruthClusters_clusters_index;   //!
   TBranch        *b__HcalBarrelTruthClusters_clusters_collectionID;   //!
   TBranch        *b__HcalBarrelTruthClusters_hits_;   //!
   TBranch        *b__HcalBarrelTruthClusters_hits_index;   //!
   TBranch        *b__HcalBarrelTruthClusters_hits_collectionID;   //!
   TBranch        *b__HcalBarrelTruthClusters_particleIDs_;   //!
   TBranch        *b__HcalBarrelTruthClusters_particleIDs_index;   //!
   TBranch        *b__HcalBarrelTruthClusters_particleIDs_collectionID;   //!
   TBranch        *b__HcalBarrelTruthClusters_shapeParameters;   //!
   TBranch        *b__HcalBarrelTruthClusters_hitContributions;   //!
   TBranch        *b__HcalBarrelTruthClusters_subdetectorEnergies;   //!
   TBranch        *b_HcalEndcapNClusterAssociations_;   //!
   TBranch        *b_HcalEndcapNClusterAssociations_simID;   //!
   TBranch        *b_HcalEndcapNClusterAssociations_recID;   //!
   TBranch        *b_HcalEndcapNClusterAssociations_weight;   //!
   TBranch        *b__HcalEndcapNClusterAssociations_rec_;   //!
   TBranch        *b__HcalEndcapNClusterAssociations_rec_index;   //!
   TBranch        *b__HcalEndcapNClusterAssociations_rec_collectionID;   //!
   TBranch        *b__HcalEndcapNClusterAssociations_sim_;   //!
   TBranch        *b__HcalEndcapNClusterAssociations_sim_index;   //!
   TBranch        *b__HcalEndcapNClusterAssociations_sim_collectionID;   //!
   TBranch        *b_HcalEndcapNClusters_;   //!
   TBranch        *b_HcalEndcapNClusters_type;   //!
   TBranch        *b_HcalEndcapNClusters_energy;   //!
   TBranch        *b_HcalEndcapNClusters_energyError;   //!
   TBranch        *b_HcalEndcapNClusters_time;   //!
   TBranch        *b_HcalEndcapNClusters_timeError;   //!
   TBranch        *b_HcalEndcapNClusters_nhits;   //!
   TBranch        *b_HcalEndcapNClusters_position_x;   //!
   TBranch        *b_HcalEndcapNClusters_position_y;   //!
   TBranch        *b_HcalEndcapNClusters_position_z;   //!
   TBranch        *b_HcalEndcapNClusters_positionError_xx;   //!
   TBranch        *b_HcalEndcapNClusters_positionError_yy;   //!
   TBranch        *b_HcalEndcapNClusters_positionError_zz;   //!
   TBranch        *b_HcalEndcapNClusters_positionError_xy;   //!
   TBranch        *b_HcalEndcapNClusters_positionError_xz;   //!
   TBranch        *b_HcalEndcapNClusters_positionError_yz;   //!
   TBranch        *b_HcalEndcapNClusters_intrinsicTheta;   //!
   TBranch        *b_HcalEndcapNClusters_intrinsicPhi;   //!
   TBranch        *b_HcalEndcapNClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_HcalEndcapNClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_HcalEndcapNClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_HcalEndcapNClusters_shapeParameters_begin;   //!
   TBranch        *b_HcalEndcapNClusters_shapeParameters_end;   //!
   TBranch        *b_HcalEndcapNClusters_hitContributions_begin;   //!
   TBranch        *b_HcalEndcapNClusters_hitContributions_end;   //!
   TBranch        *b_HcalEndcapNClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_HcalEndcapNClusters_subdetectorEnergies_end;   //!
   TBranch        *b_HcalEndcapNClusters_clusters_begin;   //!
   TBranch        *b_HcalEndcapNClusters_clusters_end;   //!
   TBranch        *b_HcalEndcapNClusters_hits_begin;   //!
   TBranch        *b_HcalEndcapNClusters_hits_end;   //!
   TBranch        *b_HcalEndcapNClusters_particleIDs_begin;   //!
   TBranch        *b_HcalEndcapNClusters_particleIDs_end;   //!
   TBranch        *b__HcalEndcapNClusters_clusters_;   //!
   TBranch        *b__HcalEndcapNClusters_clusters_index;   //!
   TBranch        *b__HcalEndcapNClusters_clusters_collectionID;   //!
   TBranch        *b__HcalEndcapNClusters_hits_;   //!
   TBranch        *b__HcalEndcapNClusters_hits_index;   //!
   TBranch        *b__HcalEndcapNClusters_hits_collectionID;   //!
   TBranch        *b__HcalEndcapNClusters_particleIDs_;   //!
   TBranch        *b__HcalEndcapNClusters_particleIDs_index;   //!
   TBranch        *b__HcalEndcapNClusters_particleIDs_collectionID;   //!
   TBranch        *b__HcalEndcapNClusters_shapeParameters;   //!
   TBranch        *b__HcalEndcapNClusters_hitContributions;   //!
   TBranch        *b__HcalEndcapNClusters_subdetectorEnergies;   //!
   TBranch        *b_HcalEndcapNMergedHits_;   //!
   TBranch        *b_HcalEndcapNMergedHits_cellID;   //!
   TBranch        *b_HcalEndcapNMergedHits_energy;   //!
   TBranch        *b_HcalEndcapNMergedHits_energyError;   //!
   TBranch        *b_HcalEndcapNMergedHits_time;   //!
   TBranch        *b_HcalEndcapNMergedHits_timeError;   //!
   TBranch        *b_HcalEndcapNMergedHits_position_x;   //!
   TBranch        *b_HcalEndcapNMergedHits_position_y;   //!
   TBranch        *b_HcalEndcapNMergedHits_position_z;   //!
   TBranch        *b_HcalEndcapNMergedHits_dimension_x;   //!
   TBranch        *b_HcalEndcapNMergedHits_dimension_y;   //!
   TBranch        *b_HcalEndcapNMergedHits_dimension_z;   //!
   TBranch        *b_HcalEndcapNMergedHits_sector;   //!
   TBranch        *b_HcalEndcapNMergedHits_layer;   //!
   TBranch        *b_HcalEndcapNMergedHits_local_x;   //!
   TBranch        *b_HcalEndcapNMergedHits_local_y;   //!
   TBranch        *b_HcalEndcapNMergedHits_local_z;   //!
   TBranch        *b_HcalEndcapNRawHits_;   //!
   TBranch        *b_HcalEndcapNRawHits_cellID;   //!
   TBranch        *b_HcalEndcapNRawHits_amplitude;   //!
   TBranch        *b_HcalEndcapNRawHits_timeStamp;   //!
   TBranch        *b_HcalEndcapNRecHits_;   //!
   TBranch        *b_HcalEndcapNRecHits_cellID;   //!
   TBranch        *b_HcalEndcapNRecHits_energy;   //!
   TBranch        *b_HcalEndcapNRecHits_energyError;   //!
   TBranch        *b_HcalEndcapNRecHits_time;   //!
   TBranch        *b_HcalEndcapNRecHits_timeError;   //!
   TBranch        *b_HcalEndcapNRecHits_position_x;   //!
   TBranch        *b_HcalEndcapNRecHits_position_y;   //!
   TBranch        *b_HcalEndcapNRecHits_position_z;   //!
   TBranch        *b_HcalEndcapNRecHits_dimension_x;   //!
   TBranch        *b_HcalEndcapNRecHits_dimension_y;   //!
   TBranch        *b_HcalEndcapNRecHits_dimension_z;   //!
   TBranch        *b_HcalEndcapNRecHits_sector;   //!
   TBranch        *b_HcalEndcapNRecHits_layer;   //!
   TBranch        *b_HcalEndcapNRecHits_local_x;   //!
   TBranch        *b_HcalEndcapNRecHits_local_y;   //!
   TBranch        *b_HcalEndcapNRecHits_local_z;   //!
   TBranch        *b_HcalEndcapNTruthClusterAssociations_;   //!
   TBranch        *b_HcalEndcapNTruthClusterAssociations_simID;   //!
   TBranch        *b_HcalEndcapNTruthClusterAssociations_recID;   //!
   TBranch        *b_HcalEndcapNTruthClusterAssociations_weight;   //!
   TBranch        *b__HcalEndcapNTruthClusterAssociations_rec_;   //!
   TBranch        *b__HcalEndcapNTruthClusterAssociations_rec_index;   //!
   TBranch        *b__HcalEndcapNTruthClusterAssociations_rec_collectionID;   //!
   TBranch        *b__HcalEndcapNTruthClusterAssociations_sim_;   //!
   TBranch        *b__HcalEndcapNTruthClusterAssociations_sim_index;   //!
   TBranch        *b__HcalEndcapNTruthClusterAssociations_sim_collectionID;   //!
   TBranch        *b_HcalEndcapNTruthClusters_;   //!
   TBranch        *b_HcalEndcapNTruthClusters_type;   //!
   TBranch        *b_HcalEndcapNTruthClusters_energy;   //!
   TBranch        *b_HcalEndcapNTruthClusters_energyError;   //!
   TBranch        *b_HcalEndcapNTruthClusters_time;   //!
   TBranch        *b_HcalEndcapNTruthClusters_timeError;   //!
   TBranch        *b_HcalEndcapNTruthClusters_nhits;   //!
   TBranch        *b_HcalEndcapNTruthClusters_position_x;   //!
   TBranch        *b_HcalEndcapNTruthClusters_position_y;   //!
   TBranch        *b_HcalEndcapNTruthClusters_position_z;   //!
   TBranch        *b_HcalEndcapNTruthClusters_positionError_xx;   //!
   TBranch        *b_HcalEndcapNTruthClusters_positionError_yy;   //!
   TBranch        *b_HcalEndcapNTruthClusters_positionError_zz;   //!
   TBranch        *b_HcalEndcapNTruthClusters_positionError_xy;   //!
   TBranch        *b_HcalEndcapNTruthClusters_positionError_xz;   //!
   TBranch        *b_HcalEndcapNTruthClusters_positionError_yz;   //!
   TBranch        *b_HcalEndcapNTruthClusters_intrinsicTheta;   //!
   TBranch        *b_HcalEndcapNTruthClusters_intrinsicPhi;   //!
   TBranch        *b_HcalEndcapNTruthClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_HcalEndcapNTruthClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_HcalEndcapNTruthClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_HcalEndcapNTruthClusters_shapeParameters_begin;   //!
   TBranch        *b_HcalEndcapNTruthClusters_shapeParameters_end;   //!
   TBranch        *b_HcalEndcapNTruthClusters_hitContributions_begin;   //!
   TBranch        *b_HcalEndcapNTruthClusters_hitContributions_end;   //!
   TBranch        *b_HcalEndcapNTruthClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_HcalEndcapNTruthClusters_subdetectorEnergies_end;   //!
   TBranch        *b_HcalEndcapNTruthClusters_clusters_begin;   //!
   TBranch        *b_HcalEndcapNTruthClusters_clusters_end;   //!
   TBranch        *b_HcalEndcapNTruthClusters_hits_begin;   //!
   TBranch        *b_HcalEndcapNTruthClusters_hits_end;   //!
   TBranch        *b_HcalEndcapNTruthClusters_particleIDs_begin;   //!
   TBranch        *b_HcalEndcapNTruthClusters_particleIDs_end;   //!
   TBranch        *b__HcalEndcapNTruthClusters_clusters_;   //!
   TBranch        *b__HcalEndcapNTruthClusters_clusters_index;   //!
   TBranch        *b__HcalEndcapNTruthClusters_clusters_collectionID;   //!
   TBranch        *b__HcalEndcapNTruthClusters_hits_;   //!
   TBranch        *b__HcalEndcapNTruthClusters_hits_index;   //!
   TBranch        *b__HcalEndcapNTruthClusters_hits_collectionID;   //!
   TBranch        *b__HcalEndcapNTruthClusters_particleIDs_;   //!
   TBranch        *b__HcalEndcapNTruthClusters_particleIDs_index;   //!
   TBranch        *b__HcalEndcapNTruthClusters_particleIDs_collectionID;   //!
   TBranch        *b__HcalEndcapNTruthClusters_shapeParameters;   //!
   TBranch        *b__HcalEndcapNTruthClusters_hitContributions;   //!
   TBranch        *b__HcalEndcapNTruthClusters_subdetectorEnergies;   //!
   TBranch        *b_HcalEndcapPInsertClusterAssociations_;   //!
   TBranch        *b_HcalEndcapPInsertClusterAssociations_simID;   //!
   TBranch        *b_HcalEndcapPInsertClusterAssociations_recID;   //!
   TBranch        *b_HcalEndcapPInsertClusterAssociations_weight;   //!
   TBranch        *b__HcalEndcapPInsertClusterAssociations_rec_;   //!
   TBranch        *b__HcalEndcapPInsertClusterAssociations_rec_index;   //!
   TBranch        *b__HcalEndcapPInsertClusterAssociations_rec_collectionID;   //!
   TBranch        *b__HcalEndcapPInsertClusterAssociations_sim_;   //!
   TBranch        *b__HcalEndcapPInsertClusterAssociations_sim_index;   //!
   TBranch        *b__HcalEndcapPInsertClusterAssociations_sim_collectionID;   //!
   TBranch        *b_HcalEndcapPInsertClusters_;   //!
   TBranch        *b_HcalEndcapPInsertClusters_type;   //!
   TBranch        *b_HcalEndcapPInsertClusters_energy;   //!
   TBranch        *b_HcalEndcapPInsertClusters_energyError;   //!
   TBranch        *b_HcalEndcapPInsertClusters_time;   //!
   TBranch        *b_HcalEndcapPInsertClusters_timeError;   //!
   TBranch        *b_HcalEndcapPInsertClusters_nhits;   //!
   TBranch        *b_HcalEndcapPInsertClusters_position_x;   //!
   TBranch        *b_HcalEndcapPInsertClusters_position_y;   //!
   TBranch        *b_HcalEndcapPInsertClusters_position_z;   //!
   TBranch        *b_HcalEndcapPInsertClusters_positionError_xx;   //!
   TBranch        *b_HcalEndcapPInsertClusters_positionError_yy;   //!
   TBranch        *b_HcalEndcapPInsertClusters_positionError_zz;   //!
   TBranch        *b_HcalEndcapPInsertClusters_positionError_xy;   //!
   TBranch        *b_HcalEndcapPInsertClusters_positionError_xz;   //!
   TBranch        *b_HcalEndcapPInsertClusters_positionError_yz;   //!
   TBranch        *b_HcalEndcapPInsertClusters_intrinsicTheta;   //!
   TBranch        *b_HcalEndcapPInsertClusters_intrinsicPhi;   //!
   TBranch        *b_HcalEndcapPInsertClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_HcalEndcapPInsertClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_HcalEndcapPInsertClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_HcalEndcapPInsertClusters_shapeParameters_begin;   //!
   TBranch        *b_HcalEndcapPInsertClusters_shapeParameters_end;   //!
   TBranch        *b_HcalEndcapPInsertClusters_hitContributions_begin;   //!
   TBranch        *b_HcalEndcapPInsertClusters_hitContributions_end;   //!
   TBranch        *b_HcalEndcapPInsertClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_HcalEndcapPInsertClusters_subdetectorEnergies_end;   //!
   TBranch        *b_HcalEndcapPInsertClusters_clusters_begin;   //!
   TBranch        *b_HcalEndcapPInsertClusters_clusters_end;   //!
   TBranch        *b_HcalEndcapPInsertClusters_hits_begin;   //!
   TBranch        *b_HcalEndcapPInsertClusters_hits_end;   //!
   TBranch        *b_HcalEndcapPInsertClusters_particleIDs_begin;   //!
   TBranch        *b_HcalEndcapPInsertClusters_particleIDs_end;   //!
   TBranch        *b__HcalEndcapPInsertClusters_clusters_;   //!
   TBranch        *b__HcalEndcapPInsertClusters_clusters_index;   //!
   TBranch        *b__HcalEndcapPInsertClusters_clusters_collectionID;   //!
   TBranch        *b__HcalEndcapPInsertClusters_hits_;   //!
   TBranch        *b__HcalEndcapPInsertClusters_hits_index;   //!
   TBranch        *b__HcalEndcapPInsertClusters_hits_collectionID;   //!
   TBranch        *b__HcalEndcapPInsertClusters_particleIDs_;   //!
   TBranch        *b__HcalEndcapPInsertClusters_particleIDs_index;   //!
   TBranch        *b__HcalEndcapPInsertClusters_particleIDs_collectionID;   //!
   TBranch        *b__HcalEndcapPInsertClusters_shapeParameters;   //!
   TBranch        *b__HcalEndcapPInsertClusters_hitContributions;   //!
   TBranch        *b__HcalEndcapPInsertClusters_subdetectorEnergies;   //!
   TBranch        *b_HcalEndcapPInsertMergedHits_;   //!
   TBranch        *b_HcalEndcapPInsertMergedHits_cellID;   //!
   TBranch        *b_HcalEndcapPInsertMergedHits_energy;   //!
   TBranch        *b_HcalEndcapPInsertMergedHits_energyError;   //!
   TBranch        *b_HcalEndcapPInsertMergedHits_time;   //!
   TBranch        *b_HcalEndcapPInsertMergedHits_timeError;   //!
   TBranch        *b_HcalEndcapPInsertMergedHits_position_x;   //!
   TBranch        *b_HcalEndcapPInsertMergedHits_position_y;   //!
   TBranch        *b_HcalEndcapPInsertMergedHits_position_z;   //!
   TBranch        *b_HcalEndcapPInsertMergedHits_dimension_x;   //!
   TBranch        *b_HcalEndcapPInsertMergedHits_dimension_y;   //!
   TBranch        *b_HcalEndcapPInsertMergedHits_dimension_z;   //!
   TBranch        *b_HcalEndcapPInsertMergedHits_sector;   //!
   TBranch        *b_HcalEndcapPInsertMergedHits_layer;   //!
   TBranch        *b_HcalEndcapPInsertMergedHits_local_x;   //!
   TBranch        *b_HcalEndcapPInsertMergedHits_local_y;   //!
   TBranch        *b_HcalEndcapPInsertMergedHits_local_z;   //!
   TBranch        *b_HcalEndcapPInsertRawHits_;   //!
   TBranch        *b_HcalEndcapPInsertRawHits_cellID;   //!
   TBranch        *b_HcalEndcapPInsertRawHits_amplitude;   //!
   TBranch        *b_HcalEndcapPInsertRawHits_timeStamp;   //!
   TBranch        *b_HcalEndcapPInsertRecHits_;   //!
   TBranch        *b_HcalEndcapPInsertRecHits_cellID;   //!
   TBranch        *b_HcalEndcapPInsertRecHits_energy;   //!
   TBranch        *b_HcalEndcapPInsertRecHits_energyError;   //!
   TBranch        *b_HcalEndcapPInsertRecHits_time;   //!
   TBranch        *b_HcalEndcapPInsertRecHits_timeError;   //!
   TBranch        *b_HcalEndcapPInsertRecHits_position_x;   //!
   TBranch        *b_HcalEndcapPInsertRecHits_position_y;   //!
   TBranch        *b_HcalEndcapPInsertRecHits_position_z;   //!
   TBranch        *b_HcalEndcapPInsertRecHits_dimension_x;   //!
   TBranch        *b_HcalEndcapPInsertRecHits_dimension_y;   //!
   TBranch        *b_HcalEndcapPInsertRecHits_dimension_z;   //!
   TBranch        *b_HcalEndcapPInsertRecHits_sector;   //!
   TBranch        *b_HcalEndcapPInsertRecHits_layer;   //!
   TBranch        *b_HcalEndcapPInsertRecHits_local_x;   //!
   TBranch        *b_HcalEndcapPInsertRecHits_local_y;   //!
   TBranch        *b_HcalEndcapPInsertRecHits_local_z;   //!
   TBranch        *b_InclusiveKinematicsDA_;   //!
   TBranch        *b_InclusiveKinematicsDA_x;   //!
   TBranch        *b_InclusiveKinematicsDA_Q2;   //!
   TBranch        *b_InclusiveKinematicsDA_W;   //!
   TBranch        *b_InclusiveKinematicsDA_y;   //!
   TBranch        *b_InclusiveKinematicsDA_nu;   //!
   TBranch        *b__InclusiveKinematicsDA_scat_;   //!
   TBranch        *b__InclusiveKinematicsDA_scat_index;   //!
   TBranch        *b__InclusiveKinematicsDA_scat_collectionID;   //!
   TBranch        *b_InclusiveKinematicsElectron_;   //!
   TBranch        *b_InclusiveKinematicsElectron_x;   //!
   TBranch        *b_InclusiveKinematicsElectron_Q2;   //!
   TBranch        *b_InclusiveKinematicsElectron_W;   //!
   TBranch        *b_InclusiveKinematicsElectron_y;   //!
   TBranch        *b_InclusiveKinematicsElectron_nu;   //!
   TBranch        *b__InclusiveKinematicsElectron_scat_;   //!
   TBranch        *b__InclusiveKinematicsElectron_scat_index;   //!
   TBranch        *b__InclusiveKinematicsElectron_scat_collectionID;   //!
   TBranch        *b_InclusiveKinematicseSigma_;   //!
   TBranch        *b_InclusiveKinematicseSigma_x;   //!
   TBranch        *b_InclusiveKinematicseSigma_Q2;   //!
   TBranch        *b_InclusiveKinematicseSigma_W;   //!
   TBranch        *b_InclusiveKinematicseSigma_y;   //!
   TBranch        *b_InclusiveKinematicseSigma_nu;   //!
   TBranch        *b__InclusiveKinematicseSigma_scat_;   //!
   TBranch        *b__InclusiveKinematicseSigma_scat_index;   //!
   TBranch        *b__InclusiveKinematicseSigma_scat_collectionID;   //!
   TBranch        *b_InclusiveKinematicsJB_;   //!
   TBranch        *b_InclusiveKinematicsJB_x;   //!
   TBranch        *b_InclusiveKinematicsJB_Q2;   //!
   TBranch        *b_InclusiveKinematicsJB_W;   //!
   TBranch        *b_InclusiveKinematicsJB_y;   //!
   TBranch        *b_InclusiveKinematicsJB_nu;   //!
   TBranch        *b__InclusiveKinematicsJB_scat_;   //!
   TBranch        *b__InclusiveKinematicsJB_scat_index;   //!
   TBranch        *b__InclusiveKinematicsJB_scat_collectionID;   //!
   TBranch        *b_InclusiveKinematicsSigma_;   //!
   TBranch        *b_InclusiveKinematicsSigma_x;   //!
   TBranch        *b_InclusiveKinematicsSigma_Q2;   //!
   TBranch        *b_InclusiveKinematicsSigma_W;   //!
   TBranch        *b_InclusiveKinematicsSigma_y;   //!
   TBranch        *b_InclusiveKinematicsSigma_nu;   //!
   TBranch        *b__InclusiveKinematicsSigma_scat_;   //!
   TBranch        *b__InclusiveKinematicsSigma_scat_index;   //!
   TBranch        *b__InclusiveKinematicsSigma_scat_collectionID;   //!
   TBranch        *b_InclusiveKinematicsTruth_;   //!
   TBranch        *b_InclusiveKinematicsTruth_x;   //!
   TBranch        *b_InclusiveKinematicsTruth_Q2;   //!
   TBranch        *b_InclusiveKinematicsTruth_W;   //!
   TBranch        *b_InclusiveKinematicsTruth_y;   //!
   TBranch        *b_InclusiveKinematicsTruth_nu;   //!
   TBranch        *b__InclusiveKinematicsTruth_scat_;   //!
   TBranch        *b__InclusiveKinematicsTruth_scat_index;   //!
   TBranch        *b__InclusiveKinematicsTruth_scat_collectionID;   //!
   TBranch        *b_LFHCALClusterAssociations_;   //!
   TBranch        *b_LFHCALClusterAssociations_simID;   //!
   TBranch        *b_LFHCALClusterAssociations_recID;   //!
   TBranch        *b_LFHCALClusterAssociations_weight;   //!
   TBranch        *b__LFHCALClusterAssociations_rec_;   //!
   TBranch        *b__LFHCALClusterAssociations_rec_index;   //!
   TBranch        *b__LFHCALClusterAssociations_rec_collectionID;   //!
   TBranch        *b__LFHCALClusterAssociations_sim_;   //!
   TBranch        *b__LFHCALClusterAssociations_sim_index;   //!
   TBranch        *b__LFHCALClusterAssociations_sim_collectionID;   //!
   TBranch        *b_LFHCALClusters_;   //!
   TBranch        *b_LFHCALClusters_type;   //!
   TBranch        *b_LFHCALClusters_energy;   //!
   TBranch        *b_LFHCALClusters_energyError;   //!
   TBranch        *b_LFHCALClusters_time;   //!
   TBranch        *b_LFHCALClusters_timeError;   //!
   TBranch        *b_LFHCALClusters_nhits;   //!
   TBranch        *b_LFHCALClusters_position_x;   //!
   TBranch        *b_LFHCALClusters_position_y;   //!
   TBranch        *b_LFHCALClusters_position_z;   //!
   TBranch        *b_LFHCALClusters_positionError_xx;   //!
   TBranch        *b_LFHCALClusters_positionError_yy;   //!
   TBranch        *b_LFHCALClusters_positionError_zz;   //!
   TBranch        *b_LFHCALClusters_positionError_xy;   //!
   TBranch        *b_LFHCALClusters_positionError_xz;   //!
   TBranch        *b_LFHCALClusters_positionError_yz;   //!
   TBranch        *b_LFHCALClusters_intrinsicTheta;   //!
   TBranch        *b_LFHCALClusters_intrinsicPhi;   //!
   TBranch        *b_LFHCALClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_LFHCALClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_LFHCALClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_LFHCALClusters_shapeParameters_begin;   //!
   TBranch        *b_LFHCALClusters_shapeParameters_end;   //!
   TBranch        *b_LFHCALClusters_hitContributions_begin;   //!
   TBranch        *b_LFHCALClusters_hitContributions_end;   //!
   TBranch        *b_LFHCALClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_LFHCALClusters_subdetectorEnergies_end;   //!
   TBranch        *b_LFHCALClusters_clusters_begin;   //!
   TBranch        *b_LFHCALClusters_clusters_end;   //!
   TBranch        *b_LFHCALClusters_hits_begin;   //!
   TBranch        *b_LFHCALClusters_hits_end;   //!
   TBranch        *b_LFHCALClusters_particleIDs_begin;   //!
   TBranch        *b_LFHCALClusters_particleIDs_end;   //!
   TBranch        *b__LFHCALClusters_clusters_;   //!
   TBranch        *b__LFHCALClusters_clusters_index;   //!
   TBranch        *b__LFHCALClusters_clusters_collectionID;   //!
   TBranch        *b__LFHCALClusters_hits_;   //!
   TBranch        *b__LFHCALClusters_hits_index;   //!
   TBranch        *b__LFHCALClusters_hits_collectionID;   //!
   TBranch        *b__LFHCALClusters_particleIDs_;   //!
   TBranch        *b__LFHCALClusters_particleIDs_index;   //!
   TBranch        *b__LFHCALClusters_particleIDs_collectionID;   //!
   TBranch        *b__LFHCALClusters_shapeParameters;   //!
   TBranch        *b__LFHCALClusters_hitContributions;   //!
   TBranch        *b__LFHCALClusters_subdetectorEnergies;   //!
   TBranch        *b_LFHCALRawHits_;   //!
   TBranch        *b_LFHCALRawHits_cellID;   //!
   TBranch        *b_LFHCALRawHits_amplitude;   //!
   TBranch        *b_LFHCALRawHits_timeStamp;   //!
   TBranch        *b_LFHCALRecHits_;   //!
   TBranch        *b_LFHCALRecHits_cellID;   //!
   TBranch        *b_LFHCALRecHits_energy;   //!
   TBranch        *b_LFHCALRecHits_energyError;   //!
   TBranch        *b_LFHCALRecHits_time;   //!
   TBranch        *b_LFHCALRecHits_timeError;   //!
   TBranch        *b_LFHCALRecHits_position_x;   //!
   TBranch        *b_LFHCALRecHits_position_y;   //!
   TBranch        *b_LFHCALRecHits_position_z;   //!
   TBranch        *b_LFHCALRecHits_dimension_x;   //!
   TBranch        *b_LFHCALRecHits_dimension_y;   //!
   TBranch        *b_LFHCALRecHits_dimension_z;   //!
   TBranch        *b_LFHCALRecHits_sector;   //!
   TBranch        *b_LFHCALRecHits_layer;   //!
   TBranch        *b_LFHCALRecHits_local_x;   //!
   TBranch        *b_LFHCALRecHits_local_y;   //!
   TBranch        *b_LFHCALRecHits_local_z;   //!
   TBranch        *b_MCParticles_;   //!
   TBranch        *b_MCParticles_PDG;   //!
   TBranch        *b_MCParticles_generatorStatus;   //!
   TBranch        *b_MCParticles_simulatorStatus;   //!
   TBranch        *b_MCParticles_charge;   //!
   TBranch        *b_MCParticles_time;   //!
   TBranch        *b_MCParticles_mass;   //!
   TBranch        *b_MCParticles_vertex_x;   //!
   TBranch        *b_MCParticles_vertex_y;   //!
   TBranch        *b_MCParticles_vertex_z;   //!
   TBranch        *b_MCParticles_endpoint_x;   //!
   TBranch        *b_MCParticles_endpoint_y;   //!
   TBranch        *b_MCParticles_endpoint_z;   //!
   TBranch        *b_MCParticles_momentum_x;   //!
   TBranch        *b_MCParticles_momentum_y;   //!
   TBranch        *b_MCParticles_momentum_z;   //!
   TBranch        *b_MCParticles_momentumAtEndpoint_x;   //!
   TBranch        *b_MCParticles_momentumAtEndpoint_y;   //!
   TBranch        *b_MCParticles_momentumAtEndpoint_z;   //!
   TBranch        *b_MCParticles_spin_x;   //!
   TBranch        *b_MCParticles_spin_y;   //!
   TBranch        *b_MCParticles_spin_z;   //!
   TBranch        *b_MCParticles_colorFlow_a;   //!
   TBranch        *b_MCParticles_colorFlow_b;   //!
   TBranch        *b_MCParticles_parents_begin;   //!
   TBranch        *b_MCParticles_parents_end;   //!
   TBranch        *b_MCParticles_daughters_begin;   //!
   TBranch        *b_MCParticles_daughters_end;   //!
   TBranch        *b__MCParticles_parents_;   //!
   TBranch        *b__MCParticles_parents_index;   //!
   TBranch        *b__MCParticles_parents_collectionID;   //!
   TBranch        *b__MCParticles_daughters_;   //!
   TBranch        *b__MCParticles_daughters_index;   //!
   TBranch        *b__MCParticles_daughters_collectionID;   //!
   TBranch        *b_MPGDBarrelRecHits_;   //!
   TBranch        *b_MPGDBarrelRecHits_cellID;   //!
   TBranch        *b_MPGDBarrelRecHits_position_x;   //!
   TBranch        *b_MPGDBarrelRecHits_position_y;   //!
   TBranch        *b_MPGDBarrelRecHits_position_z;   //!
   TBranch        *b_MPGDBarrelRecHits_positionError_xx;   //!
   TBranch        *b_MPGDBarrelRecHits_positionError_yy;   //!
   TBranch        *b_MPGDBarrelRecHits_positionError_zz;   //!
   TBranch        *b_MPGDBarrelRecHits_time;   //!
   TBranch        *b_MPGDBarrelRecHits_timeError;   //!
   TBranch        *b_MPGDBarrelRecHits_edep;   //!
   TBranch        *b_MPGDBarrelRecHits_edepError;   //!
   TBranch        *b_MPGDDIRCRecHits_;   //!
   TBranch        *b_MPGDDIRCRecHits_cellID;   //!
   TBranch        *b_MPGDDIRCRecHits_position_x;   //!
   TBranch        *b_MPGDDIRCRecHits_position_y;   //!
   TBranch        *b_MPGDDIRCRecHits_position_z;   //!
   TBranch        *b_MPGDDIRCRecHits_positionError_xx;   //!
   TBranch        *b_MPGDDIRCRecHits_positionError_yy;   //!
   TBranch        *b_MPGDDIRCRecHits_positionError_zz;   //!
   TBranch        *b_MPGDDIRCRecHits_time;   //!
   TBranch        *b_MPGDDIRCRecHits_timeError;   //!
   TBranch        *b_MPGDDIRCRecHits_edep;   //!
   TBranch        *b_MPGDDIRCRecHits_edepError;   //!
   TBranch        *b_OuterMPGDBarrelRecHits_;   //!
   TBranch        *b_OuterMPGDBarrelRecHits_cellID;   //!
   TBranch        *b_OuterMPGDBarrelRecHits_position_x;   //!
   TBranch        *b_OuterMPGDBarrelRecHits_position_y;   //!
   TBranch        *b_OuterMPGDBarrelRecHits_position_z;   //!
   TBranch        *b_OuterMPGDBarrelRecHits_positionError_xx;   //!
   TBranch        *b_OuterMPGDBarrelRecHits_positionError_yy;   //!
   TBranch        *b_OuterMPGDBarrelRecHits_positionError_zz;   //!
   TBranch        *b_OuterMPGDBarrelRecHits_time;   //!
   TBranch        *b_OuterMPGDBarrelRecHits_timeError;   //!
   TBranch        *b_OuterMPGDBarrelRecHits_edep;   //!
   TBranch        *b_OuterMPGDBarrelRecHits_edepError;   //!
   TBranch        *b_ReconstructedChargedJets_;   //!
   TBranch        *b_ReconstructedChargedJets_type;   //!
   TBranch        *b_ReconstructedChargedJets_energy;   //!
   TBranch        *b_ReconstructedChargedJets_momentum_x;   //!
   TBranch        *b_ReconstructedChargedJets_momentum_y;   //!
   TBranch        *b_ReconstructedChargedJets_momentum_z;   //!
   TBranch        *b_ReconstructedChargedJets_referencePoint_x;   //!
   TBranch        *b_ReconstructedChargedJets_referencePoint_y;   //!
   TBranch        *b_ReconstructedChargedJets_referencePoint_z;   //!
   TBranch        *b_ReconstructedChargedJets_charge;   //!
   TBranch        *b_ReconstructedChargedJets_mass;   //!
   TBranch        *b_ReconstructedChargedJets_goodnessOfPID;   //!
   TBranch        *b_ReconstructedChargedJets_covMatrix_xx;   //!
   TBranch        *b_ReconstructedChargedJets_covMatrix_yy;   //!
   TBranch        *b_ReconstructedChargedJets_covMatrix_zz;   //!
   TBranch        *b_ReconstructedChargedJets_covMatrix_tt;   //!
   TBranch        *b_ReconstructedChargedJets_covMatrix_xy;   //!
   TBranch        *b_ReconstructedChargedJets_covMatrix_xz;   //!
   TBranch        *b_ReconstructedChargedJets_covMatrix_xt;   //!
   TBranch        *b_ReconstructedChargedJets_covMatrix_yz;   //!
   TBranch        *b_ReconstructedChargedJets_covMatrix_yt;   //!
   TBranch        *b_ReconstructedChargedJets_covMatrix_zt;   //!
   TBranch        *b_ReconstructedChargedJets_PDG;   //!
   TBranch        *b_ReconstructedChargedJets_clusters_begin;   //!
   TBranch        *b_ReconstructedChargedJets_clusters_end;   //!
   TBranch        *b_ReconstructedChargedJets_tracks_begin;   //!
   TBranch        *b_ReconstructedChargedJets_tracks_end;   //!
   TBranch        *b_ReconstructedChargedJets_particles_begin;   //!
   TBranch        *b_ReconstructedChargedJets_particles_end;   //!
   TBranch        *b_ReconstructedChargedJets_particleIDs_begin;   //!
   TBranch        *b_ReconstructedChargedJets_particleIDs_end;   //!
   TBranch        *b__ReconstructedChargedJets_clusters_;   //!
   TBranch        *b__ReconstructedChargedJets_clusters_index;   //!
   TBranch        *b__ReconstructedChargedJets_clusters_collectionID;   //!
   TBranch        *b__ReconstructedChargedJets_tracks_;   //!
   TBranch        *b__ReconstructedChargedJets_tracks_index;   //!
   TBranch        *b__ReconstructedChargedJets_tracks_collectionID;   //!
   TBranch        *b__ReconstructedChargedJets_particles_;   //!
   TBranch        *b__ReconstructedChargedJets_particles_index;   //!
   TBranch        *b__ReconstructedChargedJets_particles_collectionID;   //!
   TBranch        *b__ReconstructedChargedJets_particleIDs_;   //!
   TBranch        *b__ReconstructedChargedJets_particleIDs_index;   //!
   TBranch        *b__ReconstructedChargedJets_particleIDs_collectionID;   //!
   TBranch        *b__ReconstructedChargedJets_startVertex_;   //!
   TBranch        *b__ReconstructedChargedJets_startVertex_index;   //!
   TBranch        *b__ReconstructedChargedJets_startVertex_collectionID;   //!
   TBranch        *b__ReconstructedChargedJets_particleIDUsed_;   //!
   TBranch        *b__ReconstructedChargedJets_particleIDUsed_index;   //!
   TBranch        *b__ReconstructedChargedJets_particleIDUsed_collectionID;   //!
   TBranch        *b_ReconstructedChargedParticleAssociations_;   //!
   TBranch        *b_ReconstructedChargedParticleAssociations_simID;   //!
   TBranch        *b_ReconstructedChargedParticleAssociations_recID;   //!
   TBranch        *b_ReconstructedChargedParticleAssociations_weight;   //!
   TBranch        *b__ReconstructedChargedParticleAssociations_rec_;   //!
   TBranch        *b__ReconstructedChargedParticleAssociations_rec_index;   //!
   TBranch        *b__ReconstructedChargedParticleAssociations_rec_collectionID;   //!
   TBranch        *b__ReconstructedChargedParticleAssociations_sim_;   //!
   TBranch        *b__ReconstructedChargedParticleAssociations_sim_index;   //!
   TBranch        *b__ReconstructedChargedParticleAssociations_sim_collectionID;   //!
   TBranch        *b_ReconstructedChargedParticleIDs_;   //!
   TBranch        *b_ReconstructedChargedParticleIDs_type;   //!
   TBranch        *b_ReconstructedChargedParticleIDs_PDG;   //!
   TBranch        *b_ReconstructedChargedParticleIDs_algorithmType;   //!
   TBranch        *b_ReconstructedChargedParticleIDs_likelihood;   //!
   TBranch        *b_ReconstructedChargedParticleIDs_parameters_begin;   //!
   TBranch        *b_ReconstructedChargedParticleIDs_parameters_end;   //!
   TBranch        *b__ReconstructedChargedParticleIDs_parameters;   //!
   TBranch        *b_ReconstructedChargedParticles_;   //!
   TBranch        *b_ReconstructedChargedParticles_type;   //!
   TBranch        *b_ReconstructedChargedParticles_energy;   //!
   TBranch        *b_ReconstructedChargedParticles_momentum_x;   //!
   TBranch        *b_ReconstructedChargedParticles_momentum_y;   //!
   TBranch        *b_ReconstructedChargedParticles_momentum_z;   //!
   TBranch        *b_ReconstructedChargedParticles_referencePoint_x;   //!
   TBranch        *b_ReconstructedChargedParticles_referencePoint_y;   //!
   TBranch        *b_ReconstructedChargedParticles_referencePoint_z;   //!
   TBranch        *b_ReconstructedChargedParticles_charge;   //!
   TBranch        *b_ReconstructedChargedParticles_mass;   //!
   TBranch        *b_ReconstructedChargedParticles_goodnessOfPID;   //!
   TBranch        *b_ReconstructedChargedParticles_covMatrix_xx;   //!
   TBranch        *b_ReconstructedChargedParticles_covMatrix_yy;   //!
   TBranch        *b_ReconstructedChargedParticles_covMatrix_zz;   //!
   TBranch        *b_ReconstructedChargedParticles_covMatrix_tt;   //!
   TBranch        *b_ReconstructedChargedParticles_covMatrix_xy;   //!
   TBranch        *b_ReconstructedChargedParticles_covMatrix_xz;   //!
   TBranch        *b_ReconstructedChargedParticles_covMatrix_xt;   //!
   TBranch        *b_ReconstructedChargedParticles_covMatrix_yz;   //!
   TBranch        *b_ReconstructedChargedParticles_covMatrix_yt;   //!
   TBranch        *b_ReconstructedChargedParticles_covMatrix_zt;   //!
   TBranch        *b_ReconstructedChargedParticles_PDG;   //!
   TBranch        *b_ReconstructedChargedParticles_clusters_begin;   //!
   TBranch        *b_ReconstructedChargedParticles_clusters_end;   //!
   TBranch        *b_ReconstructedChargedParticles_tracks_begin;   //!
   TBranch        *b_ReconstructedChargedParticles_tracks_end;   //!
   TBranch        *b_ReconstructedChargedParticles_particles_begin;   //!
   TBranch        *b_ReconstructedChargedParticles_particles_end;   //!
   TBranch        *b_ReconstructedChargedParticles_particleIDs_begin;   //!
   TBranch        *b_ReconstructedChargedParticles_particleIDs_end;   //!
   TBranch        *b__ReconstructedChargedParticles_clusters_;   //!
   TBranch        *b__ReconstructedChargedParticles_clusters_index;   //!
   TBranch        *b__ReconstructedChargedParticles_clusters_collectionID;   //!
   TBranch        *b__ReconstructedChargedParticles_tracks_;   //!
   TBranch        *b__ReconstructedChargedParticles_tracks_index;   //!
   TBranch        *b__ReconstructedChargedParticles_tracks_collectionID;   //!
   TBranch        *b__ReconstructedChargedParticles_particles_;   //!
   TBranch        *b__ReconstructedChargedParticles_particles_index;   //!
   TBranch        *b__ReconstructedChargedParticles_particles_collectionID;   //!
   TBranch        *b__ReconstructedChargedParticles_particleIDs_;   //!
   TBranch        *b__ReconstructedChargedParticles_particleIDs_index;   //!
   TBranch        *b__ReconstructedChargedParticles_particleIDs_collectionID;   //!
   TBranch        *b__ReconstructedChargedParticles_startVertex_;   //!
   TBranch        *b__ReconstructedChargedParticles_startVertex_index;   //!
   TBranch        *b__ReconstructedChargedParticles_startVertex_collectionID;   //!
   TBranch        *b__ReconstructedChargedParticles_particleIDUsed_;   //!
   TBranch        *b__ReconstructedChargedParticles_particleIDUsed_index;   //!
   TBranch        *b__ReconstructedChargedParticles_particleIDUsed_collectionID;   //!
   TBranch        *b_ReconstructedElectrons_;   //!
   TBranch        *b_ReconstructedElectrons_type;   //!
   TBranch        *b_ReconstructedElectrons_energy;   //!
   TBranch        *b_ReconstructedElectrons_momentum_x;   //!
   TBranch        *b_ReconstructedElectrons_momentum_y;   //!
   TBranch        *b_ReconstructedElectrons_momentum_z;   //!
   TBranch        *b_ReconstructedElectrons_referencePoint_x;   //!
   TBranch        *b_ReconstructedElectrons_referencePoint_y;   //!
   TBranch        *b_ReconstructedElectrons_referencePoint_z;   //!
   TBranch        *b_ReconstructedElectrons_charge;   //!
   TBranch        *b_ReconstructedElectrons_mass;   //!
   TBranch        *b_ReconstructedElectrons_goodnessOfPID;   //!
   TBranch        *b_ReconstructedElectrons_covMatrix_xx;   //!
   TBranch        *b_ReconstructedElectrons_covMatrix_yy;   //!
   TBranch        *b_ReconstructedElectrons_covMatrix_zz;   //!
   TBranch        *b_ReconstructedElectrons_covMatrix_tt;   //!
   TBranch        *b_ReconstructedElectrons_covMatrix_xy;   //!
   TBranch        *b_ReconstructedElectrons_covMatrix_xz;   //!
   TBranch        *b_ReconstructedElectrons_covMatrix_xt;   //!
   TBranch        *b_ReconstructedElectrons_covMatrix_yz;   //!
   TBranch        *b_ReconstructedElectrons_covMatrix_yt;   //!
   TBranch        *b_ReconstructedElectrons_covMatrix_zt;   //!
   TBranch        *b_ReconstructedElectrons_PDG;   //!
   TBranch        *b_ReconstructedElectrons_clusters_begin;   //!
   TBranch        *b_ReconstructedElectrons_clusters_end;   //!
   TBranch        *b_ReconstructedElectrons_tracks_begin;   //!
   TBranch        *b_ReconstructedElectrons_tracks_end;   //!
   TBranch        *b_ReconstructedElectrons_particles_begin;   //!
   TBranch        *b_ReconstructedElectrons_particles_end;   //!
   TBranch        *b_ReconstructedElectrons_particleIDs_begin;   //!
   TBranch        *b_ReconstructedElectrons_particleIDs_end;   //!
   TBranch        *b__ReconstructedElectrons_clusters_;   //!
   TBranch        *b__ReconstructedElectrons_clusters_index;   //!
   TBranch        *b__ReconstructedElectrons_clusters_collectionID;   //!
   TBranch        *b__ReconstructedElectrons_tracks_;   //!
   TBranch        *b__ReconstructedElectrons_tracks_index;   //!
   TBranch        *b__ReconstructedElectrons_tracks_collectionID;   //!
   TBranch        *b__ReconstructedElectrons_particles_;   //!
   TBranch        *b__ReconstructedElectrons_particles_index;   //!
   TBranch        *b__ReconstructedElectrons_particles_collectionID;   //!
   TBranch        *b__ReconstructedElectrons_particleIDs_;   //!
   TBranch        *b__ReconstructedElectrons_particleIDs_index;   //!
   TBranch        *b__ReconstructedElectrons_particleIDs_collectionID;   //!
   TBranch        *b__ReconstructedElectrons_startVertex_;   //!
   TBranch        *b__ReconstructedElectrons_startVertex_index;   //!
   TBranch        *b__ReconstructedElectrons_startVertex_collectionID;   //!
   TBranch        *b__ReconstructedElectrons_particleIDUsed_;   //!
   TBranch        *b__ReconstructedElectrons_particleIDUsed_index;   //!
   TBranch        *b__ReconstructedElectrons_particleIDUsed_collectionID;   //!
   TBranch        *b_ReconstructedJets_;   //!
   TBranch        *b_ReconstructedJets_type;   //!
   TBranch        *b_ReconstructedJets_energy;   //!
   TBranch        *b_ReconstructedJets_momentum_x;   //!
   TBranch        *b_ReconstructedJets_momentum_y;   //!
   TBranch        *b_ReconstructedJets_momentum_z;   //!
   TBranch        *b_ReconstructedJets_referencePoint_x;   //!
   TBranch        *b_ReconstructedJets_referencePoint_y;   //!
   TBranch        *b_ReconstructedJets_referencePoint_z;   //!
   TBranch        *b_ReconstructedJets_charge;   //!
   TBranch        *b_ReconstructedJets_mass;   //!
   TBranch        *b_ReconstructedJets_goodnessOfPID;   //!
   TBranch        *b_ReconstructedJets_covMatrix_xx;   //!
   TBranch        *b_ReconstructedJets_covMatrix_yy;   //!
   TBranch        *b_ReconstructedJets_covMatrix_zz;   //!
   TBranch        *b_ReconstructedJets_covMatrix_tt;   //!
   TBranch        *b_ReconstructedJets_covMatrix_xy;   //!
   TBranch        *b_ReconstructedJets_covMatrix_xz;   //!
   TBranch        *b_ReconstructedJets_covMatrix_xt;   //!
   TBranch        *b_ReconstructedJets_covMatrix_yz;   //!
   TBranch        *b_ReconstructedJets_covMatrix_yt;   //!
   TBranch        *b_ReconstructedJets_covMatrix_zt;   //!
   TBranch        *b_ReconstructedJets_PDG;   //!
   TBranch        *b_ReconstructedJets_clusters_begin;   //!
   TBranch        *b_ReconstructedJets_clusters_end;   //!
   TBranch        *b_ReconstructedJets_tracks_begin;   //!
   TBranch        *b_ReconstructedJets_tracks_end;   //!
   TBranch        *b_ReconstructedJets_particles_begin;   //!
   TBranch        *b_ReconstructedJets_particles_end;   //!
   TBranch        *b_ReconstructedJets_particleIDs_begin;   //!
   TBranch        *b_ReconstructedJets_particleIDs_end;   //!
   TBranch        *b__ReconstructedJets_clusters_;   //!
   TBranch        *b__ReconstructedJets_clusters_index;   //!
   TBranch        *b__ReconstructedJets_clusters_collectionID;   //!
   TBranch        *b__ReconstructedJets_tracks_;   //!
   TBranch        *b__ReconstructedJets_tracks_index;   //!
   TBranch        *b__ReconstructedJets_tracks_collectionID;   //!
   TBranch        *b__ReconstructedJets_particles_;   //!
   TBranch        *b__ReconstructedJets_particles_index;   //!
   TBranch        *b__ReconstructedJets_particles_collectionID;   //!
   TBranch        *b__ReconstructedJets_particleIDs_;   //!
   TBranch        *b__ReconstructedJets_particleIDs_index;   //!
   TBranch        *b__ReconstructedJets_particleIDs_collectionID;   //!
   TBranch        *b__ReconstructedJets_startVertex_;   //!
   TBranch        *b__ReconstructedJets_startVertex_index;   //!
   TBranch        *b__ReconstructedJets_startVertex_collectionID;   //!
   TBranch        *b__ReconstructedJets_particleIDUsed_;   //!
   TBranch        *b__ReconstructedJets_particleIDUsed_index;   //!
   TBranch        *b__ReconstructedJets_particleIDUsed_collectionID;   //!
   TBranch        *b_ReconstructedParticleAssociations_;   //!
   TBranch        *b_ReconstructedParticleAssociations_simID;   //!
   TBranch        *b_ReconstructedParticleAssociations_recID;   //!
   TBranch        *b_ReconstructedParticleAssociations_weight;   //!
   TBranch        *b__ReconstructedParticleAssociations_rec_;   //!
   TBranch        *b__ReconstructedParticleAssociations_rec_index;   //!
   TBranch        *b__ReconstructedParticleAssociations_rec_collectionID;   //!
   TBranch        *b__ReconstructedParticleAssociations_sim_;   //!
   TBranch        *b__ReconstructedParticleAssociations_sim_index;   //!
   TBranch        *b__ReconstructedParticleAssociations_sim_collectionID;   //!
   TBranch        *b_ReconstructedParticles_;   //!
   TBranch        *b_ReconstructedParticles_type;   //!
   TBranch        *b_ReconstructedParticles_energy;   //!
   TBranch        *b_ReconstructedParticles_momentum_x;   //!
   TBranch        *b_ReconstructedParticles_momentum_y;   //!
   TBranch        *b_ReconstructedParticles_momentum_z;   //!
   TBranch        *b_ReconstructedParticles_referencePoint_x;   //!
   TBranch        *b_ReconstructedParticles_referencePoint_y;   //!
   TBranch        *b_ReconstructedParticles_referencePoint_z;   //!
   TBranch        *b_ReconstructedParticles_charge;   //!
   TBranch        *b_ReconstructedParticles_mass;   //!
   TBranch        *b_ReconstructedParticles_goodnessOfPID;   //!
   TBranch        *b_ReconstructedParticles_covMatrix_xx;   //!
   TBranch        *b_ReconstructedParticles_covMatrix_yy;   //!
   TBranch        *b_ReconstructedParticles_covMatrix_zz;   //!
   TBranch        *b_ReconstructedParticles_covMatrix_tt;   //!
   TBranch        *b_ReconstructedParticles_covMatrix_xy;   //!
   TBranch        *b_ReconstructedParticles_covMatrix_xz;   //!
   TBranch        *b_ReconstructedParticles_covMatrix_xt;   //!
   TBranch        *b_ReconstructedParticles_covMatrix_yz;   //!
   TBranch        *b_ReconstructedParticles_covMatrix_yt;   //!
   TBranch        *b_ReconstructedParticles_covMatrix_zt;   //!
   TBranch        *b_ReconstructedParticles_PDG;   //!
   TBranch        *b_ReconstructedParticles_clusters_begin;   //!
   TBranch        *b_ReconstructedParticles_clusters_end;   //!
   TBranch        *b_ReconstructedParticles_tracks_begin;   //!
   TBranch        *b_ReconstructedParticles_tracks_end;   //!
   TBranch        *b_ReconstructedParticles_particles_begin;   //!
   TBranch        *b_ReconstructedParticles_particles_end;   //!
   TBranch        *b_ReconstructedParticles_particleIDs_begin;   //!
   TBranch        *b_ReconstructedParticles_particleIDs_end;   //!
   TBranch        *b__ReconstructedParticles_clusters_;   //!
   TBranch        *b__ReconstructedParticles_clusters_index;   //!
   TBranch        *b__ReconstructedParticles_clusters_collectionID;   //!
   TBranch        *b__ReconstructedParticles_tracks_;   //!
   TBranch        *b__ReconstructedParticles_tracks_index;   //!
   TBranch        *b__ReconstructedParticles_tracks_collectionID;   //!
   TBranch        *b__ReconstructedParticles_particles_;   //!
   TBranch        *b__ReconstructedParticles_particles_index;   //!
   TBranch        *b__ReconstructedParticles_particles_collectionID;   //!
   TBranch        *b__ReconstructedParticles_particleIDs_;   //!
   TBranch        *b__ReconstructedParticles_particleIDs_index;   //!
   TBranch        *b__ReconstructedParticles_particleIDs_collectionID;   //!
   TBranch        *b__ReconstructedParticles_startVertex_;   //!
   TBranch        *b__ReconstructedParticles_startVertex_index;   //!
   TBranch        *b__ReconstructedParticles_startVertex_collectionID;   //!
   TBranch        *b__ReconstructedParticles_particleIDUsed_;   //!
   TBranch        *b__ReconstructedParticles_particleIDUsed_index;   //!
   TBranch        *b__ReconstructedParticles_particleIDUsed_collectionID;   //!
   TBranch        *b_ReconstructedSeededChargedParticleAssociations_;   //!
   TBranch        *b_ReconstructedSeededChargedParticleAssociations_simID;   //!
   TBranch        *b_ReconstructedSeededChargedParticleAssociations_recID;   //!
   TBranch        *b_ReconstructedSeededChargedParticleAssociations_weight;   //!
   TBranch        *b__ReconstructedSeededChargedParticleAssociations_rec_;   //!
   TBranch        *b__ReconstructedSeededChargedParticleAssociations_rec_index;   //!
   TBranch        *b__ReconstructedSeededChargedParticleAssociations_rec_collectionID;   //!
   TBranch        *b__ReconstructedSeededChargedParticleAssociations_sim_;   //!
   TBranch        *b__ReconstructedSeededChargedParticleAssociations_sim_index;   //!
   TBranch        *b__ReconstructedSeededChargedParticleAssociations_sim_collectionID;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_type;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_energy;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_momentum_x;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_momentum_y;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_momentum_z;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_referencePoint_x;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_referencePoint_y;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_referencePoint_z;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_charge;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_mass;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_goodnessOfPID;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_covMatrix_xx;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_covMatrix_yy;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_covMatrix_zz;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_covMatrix_tt;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_covMatrix_xy;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_covMatrix_xz;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_covMatrix_xt;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_covMatrix_yz;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_covMatrix_yt;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_covMatrix_zt;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_PDG;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_clusters_begin;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_clusters_end;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_tracks_begin;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_tracks_end;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_particles_begin;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_particles_end;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_particleIDs_begin;   //!
   TBranch        *b_ReconstructedSeededChargedParticles_particleIDs_end;   //!
   TBranch        *b__ReconstructedSeededChargedParticles_clusters_;   //!
   TBranch        *b__ReconstructedSeededChargedParticles_clusters_index;   //!
   TBranch        *b__ReconstructedSeededChargedParticles_clusters_collectionID;   //!
   TBranch        *b__ReconstructedSeededChargedParticles_tracks_;   //!
   TBranch        *b__ReconstructedSeededChargedParticles_tracks_index;   //!
   TBranch        *b__ReconstructedSeededChargedParticles_tracks_collectionID;   //!
   TBranch        *b__ReconstructedSeededChargedParticles_particles_;   //!
   TBranch        *b__ReconstructedSeededChargedParticles_particles_index;   //!
   TBranch        *b__ReconstructedSeededChargedParticles_particles_collectionID;   //!
   TBranch        *b__ReconstructedSeededChargedParticles_particleIDs_;   //!
   TBranch        *b__ReconstructedSeededChargedParticles_particleIDs_index;   //!
   TBranch        *b__ReconstructedSeededChargedParticles_particleIDs_collectionID;   //!
   TBranch        *b__ReconstructedSeededChargedParticles_startVertex_;   //!
   TBranch        *b__ReconstructedSeededChargedParticles_startVertex_index;   //!
   TBranch        *b__ReconstructedSeededChargedParticles_startVertex_collectionID;   //!
   TBranch        *b__ReconstructedSeededChargedParticles_particleIDUsed_;   //!
   TBranch        *b__ReconstructedSeededChargedParticles_particleIDUsed_index;   //!
   TBranch        *b__ReconstructedSeededChargedParticles_particleIDUsed_collectionID;   //!
   TBranch        *b_SiBarrelTrackerRecHits_;   //!
   TBranch        *b_SiBarrelTrackerRecHits_cellID;   //!
   TBranch        *b_SiBarrelTrackerRecHits_position_x;   //!
   TBranch        *b_SiBarrelTrackerRecHits_position_y;   //!
   TBranch        *b_SiBarrelTrackerRecHits_position_z;   //!
   TBranch        *b_SiBarrelTrackerRecHits_positionError_xx;   //!
   TBranch        *b_SiBarrelTrackerRecHits_positionError_yy;   //!
   TBranch        *b_SiBarrelTrackerRecHits_positionError_zz;   //!
   TBranch        *b_SiBarrelTrackerRecHits_time;   //!
   TBranch        *b_SiBarrelTrackerRecHits_timeError;   //!
   TBranch        *b_SiBarrelTrackerRecHits_edep;   //!
   TBranch        *b_SiBarrelTrackerRecHits_edepError;   //!
   TBranch        *b_SiBarrelVertexRecHits_;   //!
   TBranch        *b_SiBarrelVertexRecHits_cellID;   //!
   TBranch        *b_SiBarrelVertexRecHits_position_x;   //!
   TBranch        *b_SiBarrelVertexRecHits_position_y;   //!
   TBranch        *b_SiBarrelVertexRecHits_position_z;   //!
   TBranch        *b_SiBarrelVertexRecHits_positionError_xx;   //!
   TBranch        *b_SiBarrelVertexRecHits_positionError_yy;   //!
   TBranch        *b_SiBarrelVertexRecHits_positionError_zz;   //!
   TBranch        *b_SiBarrelVertexRecHits_time;   //!
   TBranch        *b_SiBarrelVertexRecHits_timeError;   //!
   TBranch        *b_SiBarrelVertexRecHits_edep;   //!
   TBranch        *b_SiBarrelVertexRecHits_edepError;   //!
   TBranch        *b_SiEndcapTrackerRecHits_;   //!
   TBranch        *b_SiEndcapTrackerRecHits_cellID;   //!
   TBranch        *b_SiEndcapTrackerRecHits_position_x;   //!
   TBranch        *b_SiEndcapTrackerRecHits_position_y;   //!
   TBranch        *b_SiEndcapTrackerRecHits_position_z;   //!
   TBranch        *b_SiEndcapTrackerRecHits_positionError_xx;   //!
   TBranch        *b_SiEndcapTrackerRecHits_positionError_yy;   //!
   TBranch        *b_SiEndcapTrackerRecHits_positionError_zz;   //!
   TBranch        *b_SiEndcapTrackerRecHits_time;   //!
   TBranch        *b_SiEndcapTrackerRecHits_timeError;   //!
   TBranch        *b_SiEndcapTrackerRecHits_edep;   //!
   TBranch        *b_SiEndcapTrackerRecHits_edepError;   //!
   TBranch        *b_TaggerTrackerRawHits_;   //!
   TBranch        *b_TaggerTrackerRawHits_cellID;   //!
   TBranch        *b_TaggerTrackerRawHits_charge;   //!
   TBranch        *b_TaggerTrackerRawHits_timeStamp;   //!
   TBranch        *b_TOFBarrelRecHit_;   //!
   TBranch        *b_TOFBarrelRecHit_cellID;   //!
   TBranch        *b_TOFBarrelRecHit_position_x;   //!
   TBranch        *b_TOFBarrelRecHit_position_y;   //!
   TBranch        *b_TOFBarrelRecHit_position_z;   //!
   TBranch        *b_TOFBarrelRecHit_positionError_xx;   //!
   TBranch        *b_TOFBarrelRecHit_positionError_yy;   //!
   TBranch        *b_TOFBarrelRecHit_positionError_zz;   //!
   TBranch        *b_TOFBarrelRecHit_time;   //!
   TBranch        *b_TOFBarrelRecHit_timeError;   //!
   TBranch        *b_TOFBarrelRecHit_edep;   //!
   TBranch        *b_TOFBarrelRecHit_edepError;   //!
   TBranch        *b_TOFEndcapRecHits_;   //!
   TBranch        *b_TOFEndcapRecHits_cellID;   //!
   TBranch        *b_TOFEndcapRecHits_position_x;   //!
   TBranch        *b_TOFEndcapRecHits_position_y;   //!
   TBranch        *b_TOFEndcapRecHits_position_z;   //!
   TBranch        *b_TOFEndcapRecHits_positionError_xx;   //!
   TBranch        *b_TOFEndcapRecHits_positionError_yy;   //!
   TBranch        *b_TOFEndcapRecHits_positionError_zz;   //!
   TBranch        *b_TOFEndcapRecHits_time;   //!
   TBranch        *b_TOFEndcapRecHits_timeError;   //!
   TBranch        *b_TOFEndcapRecHits_edep;   //!
   TBranch        *b_TOFEndcapRecHits_edepError;   //!
   TBranch        *b_ZDCEcalClusterAssociations_;   //!
   TBranch        *b_ZDCEcalClusterAssociations_simID;   //!
   TBranch        *b_ZDCEcalClusterAssociations_recID;   //!
   TBranch        *b_ZDCEcalClusterAssociations_weight;   //!
   TBranch        *b__ZDCEcalClusterAssociations_rec_;   //!
   TBranch        *b__ZDCEcalClusterAssociations_rec_index;   //!
   TBranch        *b__ZDCEcalClusterAssociations_rec_collectionID;   //!
   TBranch        *b__ZDCEcalClusterAssociations_sim_;   //!
   TBranch        *b__ZDCEcalClusterAssociations_sim_index;   //!
   TBranch        *b__ZDCEcalClusterAssociations_sim_collectionID;   //!
   TBranch        *b_ZDCEcalClusters_;   //!
   TBranch        *b_ZDCEcalClusters_type;   //!
   TBranch        *b_ZDCEcalClusters_energy;   //!
   TBranch        *b_ZDCEcalClusters_energyError;   //!
   TBranch        *b_ZDCEcalClusters_time;   //!
   TBranch        *b_ZDCEcalClusters_timeError;   //!
   TBranch        *b_ZDCEcalClusters_nhits;   //!
   TBranch        *b_ZDCEcalClusters_position_x;   //!
   TBranch        *b_ZDCEcalClusters_position_y;   //!
   TBranch        *b_ZDCEcalClusters_position_z;   //!
   TBranch        *b_ZDCEcalClusters_positionError_xx;   //!
   TBranch        *b_ZDCEcalClusters_positionError_yy;   //!
   TBranch        *b_ZDCEcalClusters_positionError_zz;   //!
   TBranch        *b_ZDCEcalClusters_positionError_xy;   //!
   TBranch        *b_ZDCEcalClusters_positionError_xz;   //!
   TBranch        *b_ZDCEcalClusters_positionError_yz;   //!
   TBranch        *b_ZDCEcalClusters_intrinsicTheta;   //!
   TBranch        *b_ZDCEcalClusters_intrinsicPhi;   //!
   TBranch        *b_ZDCEcalClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_ZDCEcalClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_ZDCEcalClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_ZDCEcalClusters_shapeParameters_begin;   //!
   TBranch        *b_ZDCEcalClusters_shapeParameters_end;   //!
   TBranch        *b_ZDCEcalClusters_hitContributions_begin;   //!
   TBranch        *b_ZDCEcalClusters_hitContributions_end;   //!
   TBranch        *b_ZDCEcalClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_ZDCEcalClusters_subdetectorEnergies_end;   //!
   TBranch        *b_ZDCEcalClusters_clusters_begin;   //!
   TBranch        *b_ZDCEcalClusters_clusters_end;   //!
   TBranch        *b_ZDCEcalClusters_hits_begin;   //!
   TBranch        *b_ZDCEcalClusters_hits_end;   //!
   TBranch        *b_ZDCEcalClusters_particleIDs_begin;   //!
   TBranch        *b_ZDCEcalClusters_particleIDs_end;   //!
   TBranch        *b__ZDCEcalClusters_clusters_;   //!
   TBranch        *b__ZDCEcalClusters_clusters_index;   //!
   TBranch        *b__ZDCEcalClusters_clusters_collectionID;   //!
   TBranch        *b__ZDCEcalClusters_hits_;   //!
   TBranch        *b__ZDCEcalClusters_hits_index;   //!
   TBranch        *b__ZDCEcalClusters_hits_collectionID;   //!
   TBranch        *b__ZDCEcalClusters_particleIDs_;   //!
   TBranch        *b__ZDCEcalClusters_particleIDs_index;   //!
   TBranch        *b__ZDCEcalClusters_particleIDs_collectionID;   //!
   TBranch        *b__ZDCEcalClusters_shapeParameters;   //!
   TBranch        *b__ZDCEcalClusters_hitContributions;   //!
   TBranch        *b__ZDCEcalClusters_subdetectorEnergies;   //!
   TBranch        *b_ZDCEcalRawHits_;   //!
   TBranch        *b_ZDCEcalRawHits_cellID;   //!
   TBranch        *b_ZDCEcalRawHits_amplitude;   //!
   TBranch        *b_ZDCEcalRawHits_timeStamp;   //!
   TBranch        *b_ZDCEcalRecHits_;   //!
   TBranch        *b_ZDCEcalRecHits_cellID;   //!
   TBranch        *b_ZDCEcalRecHits_energy;   //!
   TBranch        *b_ZDCEcalRecHits_energyError;   //!
   TBranch        *b_ZDCEcalRecHits_time;   //!
   TBranch        *b_ZDCEcalRecHits_timeError;   //!
   TBranch        *b_ZDCEcalRecHits_position_x;   //!
   TBranch        *b_ZDCEcalRecHits_position_y;   //!
   TBranch        *b_ZDCEcalRecHits_position_z;   //!
   TBranch        *b_ZDCEcalRecHits_dimension_x;   //!
   TBranch        *b_ZDCEcalRecHits_dimension_y;   //!
   TBranch        *b_ZDCEcalRecHits_dimension_z;   //!
   TBranch        *b_ZDCEcalRecHits_sector;   //!
   TBranch        *b_ZDCEcalRecHits_layer;   //!
   TBranch        *b_ZDCEcalRecHits_local_x;   //!
   TBranch        *b_ZDCEcalRecHits_local_y;   //!
   TBranch        *b_ZDCEcalRecHits_local_z;   //!
   TBranch        *b_ZDCEcalTruthClusterAssociations_;   //!
   TBranch        *b_ZDCEcalTruthClusterAssociations_simID;   //!
   TBranch        *b_ZDCEcalTruthClusterAssociations_recID;   //!
   TBranch        *b_ZDCEcalTruthClusterAssociations_weight;   //!
   TBranch        *b__ZDCEcalTruthClusterAssociations_rec_;   //!
   TBranch        *b__ZDCEcalTruthClusterAssociations_rec_index;   //!
   TBranch        *b__ZDCEcalTruthClusterAssociations_rec_collectionID;   //!
   TBranch        *b__ZDCEcalTruthClusterAssociations_sim_;   //!
   TBranch        *b__ZDCEcalTruthClusterAssociations_sim_index;   //!
   TBranch        *b__ZDCEcalTruthClusterAssociations_sim_collectionID;   //!
   TBranch        *b_ZDCEcalTruthClusters_;   //!
   TBranch        *b_ZDCEcalTruthClusters_type;   //!
   TBranch        *b_ZDCEcalTruthClusters_energy;   //!
   TBranch        *b_ZDCEcalTruthClusters_energyError;   //!
   TBranch        *b_ZDCEcalTruthClusters_time;   //!
   TBranch        *b_ZDCEcalTruthClusters_timeError;   //!
   TBranch        *b_ZDCEcalTruthClusters_nhits;   //!
   TBranch        *b_ZDCEcalTruthClusters_position_x;   //!
   TBranch        *b_ZDCEcalTruthClusters_position_y;   //!
   TBranch        *b_ZDCEcalTruthClusters_position_z;   //!
   TBranch        *b_ZDCEcalTruthClusters_positionError_xx;   //!
   TBranch        *b_ZDCEcalTruthClusters_positionError_yy;   //!
   TBranch        *b_ZDCEcalTruthClusters_positionError_zz;   //!
   TBranch        *b_ZDCEcalTruthClusters_positionError_xy;   //!
   TBranch        *b_ZDCEcalTruthClusters_positionError_xz;   //!
   TBranch        *b_ZDCEcalTruthClusters_positionError_yz;   //!
   TBranch        *b_ZDCEcalTruthClusters_intrinsicTheta;   //!
   TBranch        *b_ZDCEcalTruthClusters_intrinsicPhi;   //!
   TBranch        *b_ZDCEcalTruthClusters_intrinsicDirectionError_xx;   //!
   TBranch        *b_ZDCEcalTruthClusters_intrinsicDirectionError_yy;   //!
   TBranch        *b_ZDCEcalTruthClusters_intrinsicDirectionError_xy;   //!
   TBranch        *b_ZDCEcalTruthClusters_shapeParameters_begin;   //!
   TBranch        *b_ZDCEcalTruthClusters_shapeParameters_end;   //!
   TBranch        *b_ZDCEcalTruthClusters_hitContributions_begin;   //!
   TBranch        *b_ZDCEcalTruthClusters_hitContributions_end;   //!
   TBranch        *b_ZDCEcalTruthClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_ZDCEcalTruthClusters_subdetectorEnergies_end;   //!
   TBranch        *b_ZDCEcalTruthClusters_clusters_begin;   //!
   TBranch        *b_ZDCEcalTruthClusters_clusters_end;   //!
   TBranch        *b_ZDCEcalTruthClusters_hits_begin;   //!
   TBranch        *b_ZDCEcalTruthClusters_hits_end;   //!
   TBranch        *b_ZDCEcalTruthClusters_particleIDs_begin;   //!
   TBranch        *b_ZDCEcalTruthClusters_particleIDs_end;   //!
   TBranch        *b__ZDCEcalTruthClusters_clusters_;   //!
   TBranch        *b__ZDCEcalTruthClusters_clusters_index;   //!
   TBranch        *b__ZDCEcalTruthClusters_clusters_collectionID;   //!
   TBranch        *b__ZDCEcalTruthClusters_hits_;   //!
   TBranch        *b__ZDCEcalTruthClusters_hits_index;   //!
   TBranch        *b__ZDCEcalTruthClusters_hits_collectionID;   //!
   TBranch        *b__ZDCEcalTruthClusters_particleIDs_;   //!
   TBranch        *b__ZDCEcalTruthClusters_particleIDs_index;   //!
   TBranch        *b__ZDCEcalTruthClusters_particleIDs_collectionID;   //!
   TBranch        *b__ZDCEcalTruthClusters_shapeParameters;   //!
   TBranch        *b__ZDCEcalTruthClusters_hitContributions;   //!
   TBranch        *b__ZDCEcalTruthClusters_subdetectorEnergies;   //!
   TBranch        *b_PARAMETERS__intMap_;   //!
   TBranch        *b__intMap_first;   //!
   TBranch        *b__intMap_second;   //!
   TBranch        *b_PARAMETERS__floatMap_;   //!
   TBranch        *b__floatMap_first;   //!
   TBranch        *b__floatMap_second;   //!
   TBranch        *b_PARAMETERS__stringMap_;   //!
   TBranch        *b__stringMap_first;   //!
   TBranch        *b__stringMap_second;   //!
   TBranch        *b_PARAMETERS__doubleMap_;   //!
   TBranch        *b__doubleMap_first;   //!
   TBranch        *b__doubleMap_second;   //!

   DIS(TTree *tree=0);
   virtual ~DIS();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef DIS_cxx
DIS::DIS(TTree *tree) : fChain(0) 
{
  // if parameter tree is not specified (or zero), connect the file
  // used to generate this class and read the T
  if (tree == 0) {
    const char *fn = "DIS.root";
    //const char *fn = "/home/jml/eic/jml/pythia_ep_noradcor_18x275_q2_0.000000001_1.0_run9.ab.0001.eicrecon.tree.edm4eic.root";
    //const char *fn = "s3https://dtn01.sdcc.bnl.gov:9000/eictest/EPIC/EVGEN/BACKGROUNDS/BEAMGAS/proton/pythia8.306-1.0/pythia_ep_noradcor_18x275_q2_0.000000001_1.0_run9.ab.0001.eicrecon.tree.edm4eic.root";
    /*
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(fn);
      //TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/gpfs/mnt/gpfs02/eic/zhangzq/EPIC/NewReco/analysis_DIS/all.tree.edm4eic.root");
      if (!f || !f->IsOpen()) {
    */
    TFile *f = new TFile(fn);
       
    //f = new TFile("/gpfs/mnt/gpfs02/eic/zhangzq/EPIC/NewReco/analysis_DIS/all.tree.edm4eic.root");
    //}
    f->GetObject("events",tree);

  }
  Init(tree);
}

DIS::~DIS()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t DIS::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t DIS::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void DIS::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   _B0ECalClusters_shapeParameters = 0;
   _B0ECalClusters_hitContributions = 0;
   _B0ECalClusters_subdetectorEnergies = 0;
   _CentralCKFSeededTrajectories_measurementChi2 = 0;
   _CentralCKFSeededTrajectories_outlierChi2 = 0;
   _CentralCKFTrajectories_measurementChi2 = 0;
   _CentralCKFTrajectories_outlierChi2 = 0;
   _CentralTrackerMeasurements_weights = 0;
   _CentralTrackVertices_parameters = 0;
   _EcalBarrelClusters_shapeParameters = 0;
   _EcalBarrelClusters_hitContributions = 0;
   _EcalBarrelClusters_subdetectorEnergies = 0;
   _EcalBarrelImagingClusters_shapeParameters = 0;
   _EcalBarrelImagingClusters_hitContributions = 0;
   _EcalBarrelImagingClusters_subdetectorEnergies = 0;
   _EcalBarrelScFiClusters_shapeParameters = 0;
   _EcalBarrelScFiClusters_hitContributions = 0;
   _EcalBarrelScFiClusters_subdetectorEnergies = 0;
   _EcalBarrelTruthClusters_shapeParameters = 0;
   _EcalBarrelTruthClusters_hitContributions = 0;
   _EcalBarrelTruthClusters_subdetectorEnergies = 0;
   _EcalEndcapNClusters_shapeParameters = 0;
   _EcalEndcapNClusters_hitContributions = 0;
   _EcalEndcapNClusters_subdetectorEnergies = 0;
   _EcalEndcapNTruthClusters_shapeParameters = 0;
   _EcalEndcapNTruthClusters_hitContributions = 0;
   _EcalEndcapNTruthClusters_subdetectorEnergies = 0;
   _EcalEndcapPClusters_shapeParameters = 0;
   _EcalEndcapPClusters_hitContributions = 0;
   _EcalEndcapPClusters_subdetectorEnergies = 0;
   _EcalEndcapPInsertClusters_shapeParameters = 0;
   _EcalEndcapPInsertClusters_hitContributions = 0;
   _EcalEndcapPInsertClusters_subdetectorEnergies = 0;
   _EcalEndcapPInsertTruthClusters_shapeParameters = 0;
   _EcalEndcapPInsertTruthClusters_hitContributions = 0;
   _EcalEndcapPInsertTruthClusters_subdetectorEnergies = 0;
   _EcalEndcapPTruthClusters_shapeParameters = 0;
   _EcalEndcapPTruthClusters_hitContributions = 0;
   _EcalEndcapPTruthClusters_subdetectorEnergies = 0;
   _EcalLumiSpecClusters_shapeParameters = 0;
   _EcalLumiSpecClusters_hitContributions = 0;
   _EcalLumiSpecClusters_subdetectorEnergies = 0;
   _EcalLumiSpecTruthClusters_shapeParameters = 0;
   _EcalLumiSpecTruthClusters_hitContributions = 0;
   _EcalLumiSpecTruthClusters_subdetectorEnergies = 0;
   _HcalBarrelClusters_shapeParameters = 0;
   _HcalBarrelClusters_hitContributions = 0;
   _HcalBarrelClusters_subdetectorEnergies = 0;
   _HcalBarrelTruthClusters_shapeParameters = 0;
   _HcalBarrelTruthClusters_hitContributions = 0;
   _HcalBarrelTruthClusters_subdetectorEnergies = 0;
   _HcalEndcapNClusters_shapeParameters = 0;
   _HcalEndcapNClusters_hitContributions = 0;
   _HcalEndcapNClusters_subdetectorEnergies = 0;
   _HcalEndcapNTruthClusters_shapeParameters = 0;
   _HcalEndcapNTruthClusters_hitContributions = 0;
   _HcalEndcapNTruthClusters_subdetectorEnergies = 0;
   _HcalEndcapPInsertClusters_shapeParameters = 0;
   _HcalEndcapPInsertClusters_hitContributions = 0;
   _HcalEndcapPInsertClusters_subdetectorEnergies = 0;
   _LFHCALClusters_shapeParameters = 0;
   _LFHCALClusters_hitContributions = 0;
   _LFHCALClusters_subdetectorEnergies = 0;
   _ReconstructedChargedParticleIDs_parameters = 0;
   _ZDCEcalClusters_shapeParameters = 0;
   _ZDCEcalClusters_hitContributions = 0;
   _ZDCEcalClusters_subdetectorEnergies = 0;
   _ZDCEcalTruthClusters_shapeParameters = 0;
   _ZDCEcalTruthClusters_hitContributions = 0;
   _ZDCEcalTruthClusters_subdetectorEnergies = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("B0ECalClusterAssociations", &B0ECalClusterAssociations_, &b_B0ECalClusterAssociations_);
   fChain->SetBranchAddress("B0ECalClusterAssociations.simID", B0ECalClusterAssociations_simID, &b_B0ECalClusterAssociations_simID);
   fChain->SetBranchAddress("B0ECalClusterAssociations.recID", B0ECalClusterAssociations_recID, &b_B0ECalClusterAssociations_recID);
   fChain->SetBranchAddress("B0ECalClusterAssociations.weight", B0ECalClusterAssociations_weight, &b_B0ECalClusterAssociations_weight);
   fChain->SetBranchAddress("_B0ECalClusterAssociations_rec", &_B0ECalClusterAssociations_rec_, &b__B0ECalClusterAssociations_rec_);
   fChain->SetBranchAddress("_B0ECalClusterAssociations_rec.index", _B0ECalClusterAssociations_rec_index, &b__B0ECalClusterAssociations_rec_index);
   fChain->SetBranchAddress("_B0ECalClusterAssociations_rec.collectionID", _B0ECalClusterAssociations_rec_collectionID, &b__B0ECalClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_B0ECalClusterAssociations_sim", &_B0ECalClusterAssociations_sim_, &b__B0ECalClusterAssociations_sim_);
   fChain->SetBranchAddress("_B0ECalClusterAssociations_sim.index", _B0ECalClusterAssociations_sim_index, &b__B0ECalClusterAssociations_sim_index);
   fChain->SetBranchAddress("_B0ECalClusterAssociations_sim.collectionID", _B0ECalClusterAssociations_sim_collectionID, &b__B0ECalClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("B0ECalClusters", &B0ECalClusters_, &b_B0ECalClusters_);
   fChain->SetBranchAddress("B0ECalClusters.type", B0ECalClusters_type, &b_B0ECalClusters_type);
   fChain->SetBranchAddress("B0ECalClusters.energy", B0ECalClusters_energy, &b_B0ECalClusters_energy);
   fChain->SetBranchAddress("B0ECalClusters.energyError", B0ECalClusters_energyError, &b_B0ECalClusters_energyError);
   fChain->SetBranchAddress("B0ECalClusters.time", B0ECalClusters_time, &b_B0ECalClusters_time);
   fChain->SetBranchAddress("B0ECalClusters.timeError", B0ECalClusters_timeError, &b_B0ECalClusters_timeError);
   fChain->SetBranchAddress("B0ECalClusters.nhits", B0ECalClusters_nhits, &b_B0ECalClusters_nhits);
   fChain->SetBranchAddress("B0ECalClusters.position.x", B0ECalClusters_position_x, &b_B0ECalClusters_position_x);
   fChain->SetBranchAddress("B0ECalClusters.position.y", B0ECalClusters_position_y, &b_B0ECalClusters_position_y);
   fChain->SetBranchAddress("B0ECalClusters.position.z", B0ECalClusters_position_z, &b_B0ECalClusters_position_z);
   fChain->SetBranchAddress("B0ECalClusters.positionError.xx", B0ECalClusters_positionError_xx, &b_B0ECalClusters_positionError_xx);
   fChain->SetBranchAddress("B0ECalClusters.positionError.yy", B0ECalClusters_positionError_yy, &b_B0ECalClusters_positionError_yy);
   fChain->SetBranchAddress("B0ECalClusters.positionError.zz", B0ECalClusters_positionError_zz, &b_B0ECalClusters_positionError_zz);
   fChain->SetBranchAddress("B0ECalClusters.positionError.xy", B0ECalClusters_positionError_xy, &b_B0ECalClusters_positionError_xy);
   fChain->SetBranchAddress("B0ECalClusters.positionError.xz", B0ECalClusters_positionError_xz, &b_B0ECalClusters_positionError_xz);
   fChain->SetBranchAddress("B0ECalClusters.positionError.yz", B0ECalClusters_positionError_yz, &b_B0ECalClusters_positionError_yz);
   fChain->SetBranchAddress("B0ECalClusters.intrinsicTheta", B0ECalClusters_intrinsicTheta, &b_B0ECalClusters_intrinsicTheta);
   fChain->SetBranchAddress("B0ECalClusters.intrinsicPhi", B0ECalClusters_intrinsicPhi, &b_B0ECalClusters_intrinsicPhi);
   fChain->SetBranchAddress("B0ECalClusters.intrinsicDirectionError.xx", B0ECalClusters_intrinsicDirectionError_xx, &b_B0ECalClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("B0ECalClusters.intrinsicDirectionError.yy", B0ECalClusters_intrinsicDirectionError_yy, &b_B0ECalClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("B0ECalClusters.intrinsicDirectionError.xy", B0ECalClusters_intrinsicDirectionError_xy, &b_B0ECalClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("B0ECalClusters.shapeParameters_begin", B0ECalClusters_shapeParameters_begin, &b_B0ECalClusters_shapeParameters_begin);
   fChain->SetBranchAddress("B0ECalClusters.shapeParameters_end", B0ECalClusters_shapeParameters_end, &b_B0ECalClusters_shapeParameters_end);
   fChain->SetBranchAddress("B0ECalClusters.hitContributions_begin", B0ECalClusters_hitContributions_begin, &b_B0ECalClusters_hitContributions_begin);
   fChain->SetBranchAddress("B0ECalClusters.hitContributions_end", B0ECalClusters_hitContributions_end, &b_B0ECalClusters_hitContributions_end);
   fChain->SetBranchAddress("B0ECalClusters.subdetectorEnergies_begin", B0ECalClusters_subdetectorEnergies_begin, &b_B0ECalClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("B0ECalClusters.subdetectorEnergies_end", B0ECalClusters_subdetectorEnergies_end, &b_B0ECalClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("B0ECalClusters.clusters_begin", B0ECalClusters_clusters_begin, &b_B0ECalClusters_clusters_begin);
   fChain->SetBranchAddress("B0ECalClusters.clusters_end", B0ECalClusters_clusters_end, &b_B0ECalClusters_clusters_end);
   fChain->SetBranchAddress("B0ECalClusters.hits_begin", B0ECalClusters_hits_begin, &b_B0ECalClusters_hits_begin);
   fChain->SetBranchAddress("B0ECalClusters.hits_end", B0ECalClusters_hits_end, &b_B0ECalClusters_hits_end);
   fChain->SetBranchAddress("B0ECalClusters.particleIDs_begin", B0ECalClusters_particleIDs_begin, &b_B0ECalClusters_particleIDs_begin);
   fChain->SetBranchAddress("B0ECalClusters.particleIDs_end", B0ECalClusters_particleIDs_end, &b_B0ECalClusters_particleIDs_end);
   fChain->SetBranchAddress("_B0ECalClusters_clusters", &_B0ECalClusters_clusters_, &b__B0ECalClusters_clusters_);
   fChain->SetBranchAddress("_B0ECalClusters_clusters.index", &_B0ECalClusters_clusters_index, &b__B0ECalClusters_clusters_index);
   fChain->SetBranchAddress("_B0ECalClusters_clusters.collectionID", &_B0ECalClusters_clusters_collectionID, &b__B0ECalClusters_clusters_collectionID);
   fChain->SetBranchAddress("_B0ECalClusters_hits", &_B0ECalClusters_hits_, &b__B0ECalClusters_hits_);
   fChain->SetBranchAddress("_B0ECalClusters_hits.index", &_B0ECalClusters_hits_index, &b__B0ECalClusters_hits_index);
   fChain->SetBranchAddress("_B0ECalClusters_hits.collectionID", &_B0ECalClusters_hits_collectionID, &b__B0ECalClusters_hits_collectionID);
   fChain->SetBranchAddress("_B0ECalClusters_particleIDs", &_B0ECalClusters_particleIDs_, &b__B0ECalClusters_particleIDs_);
   fChain->SetBranchAddress("_B0ECalClusters_particleIDs.index", &_B0ECalClusters_particleIDs_index, &b__B0ECalClusters_particleIDs_index);
   fChain->SetBranchAddress("_B0ECalClusters_particleIDs.collectionID", &_B0ECalClusters_particleIDs_collectionID, &b__B0ECalClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_B0ECalClusters_shapeParameters", &_B0ECalClusters_shapeParameters, &b__B0ECalClusters_shapeParameters);
   fChain->SetBranchAddress("_B0ECalClusters_hitContributions", &_B0ECalClusters_hitContributions, &b__B0ECalClusters_hitContributions);
   fChain->SetBranchAddress("_B0ECalClusters_subdetectorEnergies", &_B0ECalClusters_subdetectorEnergies, &b__B0ECalClusters_subdetectorEnergies);
   fChain->SetBranchAddress("B0ECalRawHits", &B0ECalRawHits_, &b_B0ECalRawHits_);
   fChain->SetBranchAddress("B0ECalRawHits.cellID", B0ECalRawHits_cellID, &b_B0ECalRawHits_cellID);
   fChain->SetBranchAddress("B0ECalRawHits.amplitude", B0ECalRawHits_amplitude, &b_B0ECalRawHits_amplitude);
   fChain->SetBranchAddress("B0ECalRawHits.timeStamp", B0ECalRawHits_timeStamp, &b_B0ECalRawHits_timeStamp);
   fChain->SetBranchAddress("B0ECalRecHits", &B0ECalRecHits_, &b_B0ECalRecHits_);
   fChain->SetBranchAddress("B0ECalRecHits.cellID", B0ECalRecHits_cellID, &b_B0ECalRecHits_cellID);
   fChain->SetBranchAddress("B0ECalRecHits.energy", B0ECalRecHits_energy, &b_B0ECalRecHits_energy);
   fChain->SetBranchAddress("B0ECalRecHits.energyError", B0ECalRecHits_energyError, &b_B0ECalRecHits_energyError);
   fChain->SetBranchAddress("B0ECalRecHits.time", B0ECalRecHits_time, &b_B0ECalRecHits_time);
   fChain->SetBranchAddress("B0ECalRecHits.timeError", B0ECalRecHits_timeError, &b_B0ECalRecHits_timeError);
   fChain->SetBranchAddress("B0ECalRecHits.position.x", B0ECalRecHits_position_x, &b_B0ECalRecHits_position_x);
   fChain->SetBranchAddress("B0ECalRecHits.position.y", B0ECalRecHits_position_y, &b_B0ECalRecHits_position_y);
   fChain->SetBranchAddress("B0ECalRecHits.position.z", B0ECalRecHits_position_z, &b_B0ECalRecHits_position_z);
   fChain->SetBranchAddress("B0ECalRecHits.dimension.x", B0ECalRecHits_dimension_x, &b_B0ECalRecHits_dimension_x);
   fChain->SetBranchAddress("B0ECalRecHits.dimension.y", B0ECalRecHits_dimension_y, &b_B0ECalRecHits_dimension_y);
   fChain->SetBranchAddress("B0ECalRecHits.dimension.z", B0ECalRecHits_dimension_z, &b_B0ECalRecHits_dimension_z);
   fChain->SetBranchAddress("B0ECalRecHits.sector", B0ECalRecHits_sector, &b_B0ECalRecHits_sector);
   fChain->SetBranchAddress("B0ECalRecHits.layer", B0ECalRecHits_layer, &b_B0ECalRecHits_layer);
   fChain->SetBranchAddress("B0ECalRecHits.local.x", B0ECalRecHits_local_x, &b_B0ECalRecHits_local_x);
   fChain->SetBranchAddress("B0ECalRecHits.local.y", B0ECalRecHits_local_y, &b_B0ECalRecHits_local_y);
   fChain->SetBranchAddress("B0ECalRecHits.local.z", B0ECalRecHits_local_z, &b_B0ECalRecHits_local_z);
   fChain->SetBranchAddress("B0TrackerRecHits", &B0TrackerRecHits_, &b_B0TrackerRecHits_);
   fChain->SetBranchAddress("B0TrackerRecHits.cellID", B0TrackerRecHits_cellID, &b_B0TrackerRecHits_cellID);
   fChain->SetBranchAddress("B0TrackerRecHits.position.x", B0TrackerRecHits_position_x, &b_B0TrackerRecHits_position_x);
   fChain->SetBranchAddress("B0TrackerRecHits.position.y", B0TrackerRecHits_position_y, &b_B0TrackerRecHits_position_y);
   fChain->SetBranchAddress("B0TrackerRecHits.position.z", B0TrackerRecHits_position_z, &b_B0TrackerRecHits_position_z);
   fChain->SetBranchAddress("B0TrackerRecHits.positionError.xx", B0TrackerRecHits_positionError_xx, &b_B0TrackerRecHits_positionError_xx);
   fChain->SetBranchAddress("B0TrackerRecHits.positionError.yy", B0TrackerRecHits_positionError_yy, &b_B0TrackerRecHits_positionError_yy);
   fChain->SetBranchAddress("B0TrackerRecHits.positionError.zz", B0TrackerRecHits_positionError_zz, &b_B0TrackerRecHits_positionError_zz);
   fChain->SetBranchAddress("B0TrackerRecHits.time", B0TrackerRecHits_time, &b_B0TrackerRecHits_time);
   fChain->SetBranchAddress("B0TrackerRecHits.timeError", B0TrackerRecHits_timeError, &b_B0TrackerRecHits_timeError);
   fChain->SetBranchAddress("B0TrackerRecHits.edep", B0TrackerRecHits_edep, &b_B0TrackerRecHits_edep);
   fChain->SetBranchAddress("B0TrackerRecHits.edepError", B0TrackerRecHits_edepError, &b_B0TrackerRecHits_edepError);
   fChain->SetBranchAddress("BackwardMPGDEndcapRecHits", &BackwardMPGDEndcapRecHits_, &b_BackwardMPGDEndcapRecHits_);
   fChain->SetBranchAddress("BackwardMPGDEndcapRecHits.cellID", BackwardMPGDEndcapRecHits_cellID, &b_BackwardMPGDEndcapRecHits_cellID);
   fChain->SetBranchAddress("BackwardMPGDEndcapRecHits.position.x", BackwardMPGDEndcapRecHits_position_x, &b_BackwardMPGDEndcapRecHits_position_x);
   fChain->SetBranchAddress("BackwardMPGDEndcapRecHits.position.y", BackwardMPGDEndcapRecHits_position_y, &b_BackwardMPGDEndcapRecHits_position_y);
   fChain->SetBranchAddress("BackwardMPGDEndcapRecHits.position.z", BackwardMPGDEndcapRecHits_position_z, &b_BackwardMPGDEndcapRecHits_position_z);
   fChain->SetBranchAddress("BackwardMPGDEndcapRecHits.positionError.xx", BackwardMPGDEndcapRecHits_positionError_xx, &b_BackwardMPGDEndcapRecHits_positionError_xx);
   fChain->SetBranchAddress("BackwardMPGDEndcapRecHits.positionError.yy", BackwardMPGDEndcapRecHits_positionError_yy, &b_BackwardMPGDEndcapRecHits_positionError_yy);
   fChain->SetBranchAddress("BackwardMPGDEndcapRecHits.positionError.zz", BackwardMPGDEndcapRecHits_positionError_zz, &b_BackwardMPGDEndcapRecHits_positionError_zz);
   fChain->SetBranchAddress("BackwardMPGDEndcapRecHits.time", BackwardMPGDEndcapRecHits_time, &b_BackwardMPGDEndcapRecHits_time);
   fChain->SetBranchAddress("BackwardMPGDEndcapRecHits.timeError", BackwardMPGDEndcapRecHits_timeError, &b_BackwardMPGDEndcapRecHits_timeError);
   fChain->SetBranchAddress("BackwardMPGDEndcapRecHits.edep", BackwardMPGDEndcapRecHits_edep, &b_BackwardMPGDEndcapRecHits_edep);
   fChain->SetBranchAddress("BackwardMPGDEndcapRecHits.edepError", BackwardMPGDEndcapRecHits_edepError, &b_BackwardMPGDEndcapRecHits_edepError);
   fChain->SetBranchAddress("CalorimeterTrackProjections", &CalorimeterTrackProjections_, &b_CalorimeterTrackProjections_);
   fChain->SetBranchAddress("CalorimeterTrackProjections.length", CalorimeterTrackProjections_length, &b_CalorimeterTrackProjections_length);
   fChain->SetBranchAddress("CalorimeterTrackProjections.lengthError", CalorimeterTrackProjections_lengthError, &b_CalorimeterTrackProjections_lengthError);
   fChain->SetBranchAddress("CalorimeterTrackProjections.points_begin", CalorimeterTrackProjections_points_begin, &b_CalorimeterTrackProjections_points_begin);
   fChain->SetBranchAddress("CalorimeterTrackProjections.points_end", CalorimeterTrackProjections_points_end, &b_CalorimeterTrackProjections_points_end);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_track", &_CalorimeterTrackProjections_track_, &b__CalorimeterTrackProjections_track_);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_track.index", _CalorimeterTrackProjections_track_index, &b__CalorimeterTrackProjections_track_index);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_track.collectionID", _CalorimeterTrackProjections_track_collectionID, &b__CalorimeterTrackProjections_track_collectionID);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points", &_CalorimeterTrackProjections_points_, &b__CalorimeterTrackProjections_points_);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.surface", _CalorimeterTrackProjections_points_surface, &b__CalorimeterTrackProjections_points_surface);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.system", _CalorimeterTrackProjections_points_system, &b__CalorimeterTrackProjections_points_system);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.position.x", _CalorimeterTrackProjections_points_position_x, &b__CalorimeterTrackProjections_points_position_x);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.position.y", _CalorimeterTrackProjections_points_position_y, &b__CalorimeterTrackProjections_points_position_y);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.position.z", _CalorimeterTrackProjections_points_position_z, &b__CalorimeterTrackProjections_points_position_z);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.positionError.xx", _CalorimeterTrackProjections_points_positionError_xx, &b__CalorimeterTrackProjections_points_positionError_xx);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.positionError.yy", _CalorimeterTrackProjections_points_positionError_yy, &b__CalorimeterTrackProjections_points_positionError_yy);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.positionError.zz", _CalorimeterTrackProjections_points_positionError_zz, &b__CalorimeterTrackProjections_points_positionError_zz);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.positionError.xy", _CalorimeterTrackProjections_points_positionError_xy, &b__CalorimeterTrackProjections_points_positionError_xy);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.positionError.xz", _CalorimeterTrackProjections_points_positionError_xz, &b__CalorimeterTrackProjections_points_positionError_xz);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.positionError.yz", _CalorimeterTrackProjections_points_positionError_yz, &b__CalorimeterTrackProjections_points_positionError_yz);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.momentum.x", _CalorimeterTrackProjections_points_momentum_x, &b__CalorimeterTrackProjections_points_momentum_x);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.momentum.y", _CalorimeterTrackProjections_points_momentum_y, &b__CalorimeterTrackProjections_points_momentum_y);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.momentum.z", _CalorimeterTrackProjections_points_momentum_z, &b__CalorimeterTrackProjections_points_momentum_z);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.momentumError.xx", _CalorimeterTrackProjections_points_momentumError_xx, &b__CalorimeterTrackProjections_points_momentumError_xx);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.momentumError.yy", _CalorimeterTrackProjections_points_momentumError_yy, &b__CalorimeterTrackProjections_points_momentumError_yy);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.momentumError.zz", _CalorimeterTrackProjections_points_momentumError_zz, &b__CalorimeterTrackProjections_points_momentumError_zz);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.momentumError.xy", _CalorimeterTrackProjections_points_momentumError_xy, &b__CalorimeterTrackProjections_points_momentumError_xy);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.momentumError.xz", _CalorimeterTrackProjections_points_momentumError_xz, &b__CalorimeterTrackProjections_points_momentumError_xz);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.momentumError.yz", _CalorimeterTrackProjections_points_momentumError_yz, &b__CalorimeterTrackProjections_points_momentumError_yz);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.time", _CalorimeterTrackProjections_points_time, &b__CalorimeterTrackProjections_points_time);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.timeError", _CalorimeterTrackProjections_points_timeError, &b__CalorimeterTrackProjections_points_timeError);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.theta", _CalorimeterTrackProjections_points_theta, &b__CalorimeterTrackProjections_points_theta);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.phi", _CalorimeterTrackProjections_points_phi, &b__CalorimeterTrackProjections_points_phi);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.directionError.xx", _CalorimeterTrackProjections_points_directionError_xx, &b__CalorimeterTrackProjections_points_directionError_xx);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.directionError.yy", _CalorimeterTrackProjections_points_directionError_yy, &b__CalorimeterTrackProjections_points_directionError_yy);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.directionError.xy", _CalorimeterTrackProjections_points_directionError_xy, &b__CalorimeterTrackProjections_points_directionError_xy);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.pathlength", _CalorimeterTrackProjections_points_pathlength, &b__CalorimeterTrackProjections_points_pathlength);
   fChain->SetBranchAddress("_CalorimeterTrackProjections_points.pathlengthError", _CalorimeterTrackProjections_points_pathlengthError, &b__CalorimeterTrackProjections_points_pathlengthError);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters", &CentralCKFSeededTrackParameters_, &b_CentralCKFSeededTrackParameters_);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters.type", CentralCKFSeededTrackParameters_type, &b_CentralCKFSeededTrackParameters_type);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters.loc.a", CentralCKFSeededTrackParameters_loc_a, &b_CentralCKFSeededTrackParameters_loc_a);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters.loc.b", CentralCKFSeededTrackParameters_loc_b, &b_CentralCKFSeededTrackParameters_loc_b);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters.locError.xx", CentralCKFSeededTrackParameters_locError_xx, &b_CentralCKFSeededTrackParameters_locError_xx);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters.locError.yy", CentralCKFSeededTrackParameters_locError_yy, &b_CentralCKFSeededTrackParameters_locError_yy);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters.locError.xy", CentralCKFSeededTrackParameters_locError_xy, &b_CentralCKFSeededTrackParameters_locError_xy);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters.theta", CentralCKFSeededTrackParameters_theta, &b_CentralCKFSeededTrackParameters_theta);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters.phi", CentralCKFSeededTrackParameters_phi, &b_CentralCKFSeededTrackParameters_phi);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters.qOverP", CentralCKFSeededTrackParameters_qOverP, &b_CentralCKFSeededTrackParameters_qOverP);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters.momentumError.xx", CentralCKFSeededTrackParameters_momentumError_xx, &b_CentralCKFSeededTrackParameters_momentumError_xx);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters.momentumError.yy", CentralCKFSeededTrackParameters_momentumError_yy, &b_CentralCKFSeededTrackParameters_momentumError_yy);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters.momentumError.zz", CentralCKFSeededTrackParameters_momentumError_zz, &b_CentralCKFSeededTrackParameters_momentumError_zz);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters.momentumError.xy", CentralCKFSeededTrackParameters_momentumError_xy, &b_CentralCKFSeededTrackParameters_momentumError_xy);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters.momentumError.xz", CentralCKFSeededTrackParameters_momentumError_xz, &b_CentralCKFSeededTrackParameters_momentumError_xz);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters.momentumError.yz", CentralCKFSeededTrackParameters_momentumError_yz, &b_CentralCKFSeededTrackParameters_momentumError_yz);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters.time", CentralCKFSeededTrackParameters_time, &b_CentralCKFSeededTrackParameters_time);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters.timeError", CentralCKFSeededTrackParameters_timeError, &b_CentralCKFSeededTrackParameters_timeError);
   fChain->SetBranchAddress("CentralCKFSeededTrackParameters.charge", CentralCKFSeededTrackParameters_charge, &b_CentralCKFSeededTrackParameters_charge);
   fChain->SetBranchAddress("_CentralCKFSeededTrackParameters_trajectory", &_CentralCKFSeededTrackParameters_trajectory_, &b__CentralCKFSeededTrackParameters_trajectory_);
   fChain->SetBranchAddress("_CentralCKFSeededTrackParameters_trajectory.index", _CentralCKFSeededTrackParameters_trajectory_index, &b__CentralCKFSeededTrackParameters_trajectory_index);
   fChain->SetBranchAddress("_CentralCKFSeededTrackParameters_trajectory.collectionID", _CentralCKFSeededTrackParameters_trajectory_collectionID, &b__CentralCKFSeededTrackParameters_trajectory_collectionID);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories", &CentralCKFSeededTrajectories_, &b_CentralCKFSeededTrajectories_);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories.type", CentralCKFSeededTrajectories_type, &b_CentralCKFSeededTrajectories_type);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories.nStates", CentralCKFSeededTrajectories_nStates, &b_CentralCKFSeededTrajectories_nStates);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories.nMeasurements", CentralCKFSeededTrajectories_nMeasurements, &b_CentralCKFSeededTrajectories_nMeasurements);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories.nOutliers", CentralCKFSeededTrajectories_nOutliers, &b_CentralCKFSeededTrajectories_nOutliers);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories.nHoles", CentralCKFSeededTrajectories_nHoles, &b_CentralCKFSeededTrajectories_nHoles);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories.chi2", CentralCKFSeededTrajectories_chi2, &b_CentralCKFSeededTrajectories_chi2);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories.ndf", CentralCKFSeededTrajectories_ndf, &b_CentralCKFSeededTrajectories_ndf);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories.nSharedHits", CentralCKFSeededTrajectories_nSharedHits, &b_CentralCKFSeededTrajectories_nSharedHits);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories.measurementChi2_begin", CentralCKFSeededTrajectories_measurementChi2_begin, &b_CentralCKFSeededTrajectories_measurementChi2_begin);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories.measurementChi2_end", CentralCKFSeededTrajectories_measurementChi2_end, &b_CentralCKFSeededTrajectories_measurementChi2_end);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories.outlierChi2_begin", CentralCKFSeededTrajectories_outlierChi2_begin, &b_CentralCKFSeededTrajectories_outlierChi2_begin);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories.outlierChi2_end", CentralCKFSeededTrajectories_outlierChi2_end, &b_CentralCKFSeededTrajectories_outlierChi2_end);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories.trackParameters_begin", CentralCKFSeededTrajectories_trackParameters_begin, &b_CentralCKFSeededTrajectories_trackParameters_begin);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories.trackParameters_end", CentralCKFSeededTrajectories_trackParameters_end, &b_CentralCKFSeededTrajectories_trackParameters_end);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories.measurementHits_begin", CentralCKFSeededTrajectories_measurementHits_begin, &b_CentralCKFSeededTrajectories_measurementHits_begin);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories.measurementHits_end", CentralCKFSeededTrajectories_measurementHits_end, &b_CentralCKFSeededTrajectories_measurementHits_end);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories.outlierHits_begin", CentralCKFSeededTrajectories_outlierHits_begin, &b_CentralCKFSeededTrajectories_outlierHits_begin);
   fChain->SetBranchAddress("CentralCKFSeededTrajectories.outlierHits_end", CentralCKFSeededTrajectories_outlierHits_end, &b_CentralCKFSeededTrajectories_outlierHits_end);
   fChain->SetBranchAddress("_CentralCKFSeededTrajectories_trackParameters", &_CentralCKFSeededTrajectories_trackParameters_, &b__CentralCKFSeededTrajectories_trackParameters_);
   fChain->SetBranchAddress("_CentralCKFSeededTrajectories_trackParameters.index", _CentralCKFSeededTrajectories_trackParameters_index, &b__CentralCKFSeededTrajectories_trackParameters_index);
   fChain->SetBranchAddress("_CentralCKFSeededTrajectories_trackParameters.collectionID", _CentralCKFSeededTrajectories_trackParameters_collectionID, &b__CentralCKFSeededTrajectories_trackParameters_collectionID);
   fChain->SetBranchAddress("_CentralCKFSeededTrajectories_measurementHits", &_CentralCKFSeededTrajectories_measurementHits_, &b__CentralCKFSeededTrajectories_measurementHits_);
   fChain->SetBranchAddress("_CentralCKFSeededTrajectories_measurementHits.index", _CentralCKFSeededTrajectories_measurementHits_index, &b__CentralCKFSeededTrajectories_measurementHits_index);
   fChain->SetBranchAddress("_CentralCKFSeededTrajectories_measurementHits.collectionID", _CentralCKFSeededTrajectories_measurementHits_collectionID, &b__CentralCKFSeededTrajectories_measurementHits_collectionID);
   fChain->SetBranchAddress("_CentralCKFSeededTrajectories_outlierHits", &_CentralCKFSeededTrajectories_outlierHits_, &b__CentralCKFSeededTrajectories_outlierHits_);
   fChain->SetBranchAddress("_CentralCKFSeededTrajectories_outlierHits.index", _CentralCKFSeededTrajectories_outlierHits_index, &b__CentralCKFSeededTrajectories_outlierHits_index);
   fChain->SetBranchAddress("_CentralCKFSeededTrajectories_outlierHits.collectionID", _CentralCKFSeededTrajectories_outlierHits_collectionID, &b__CentralCKFSeededTrajectories_outlierHits_collectionID);
   fChain->SetBranchAddress("_CentralCKFSeededTrajectories_measurementChi2", &_CentralCKFSeededTrajectories_measurementChi2, &b__CentralCKFSeededTrajectories_measurementChi2);
   fChain->SetBranchAddress("_CentralCKFSeededTrajectories_outlierChi2", &_CentralCKFSeededTrajectories_outlierChi2, &b__CentralCKFSeededTrajectories_outlierChi2);
   fChain->SetBranchAddress("CentralCKFTrackParameters", &CentralCKFTrackParameters_, &b_CentralCKFTrackParameters_);
   fChain->SetBranchAddress("CentralCKFTrackParameters.type", CentralCKFTrackParameters_type, &b_CentralCKFTrackParameters_type);
   fChain->SetBranchAddress("CentralCKFTrackParameters.loc.a", CentralCKFTrackParameters_loc_a, &b_CentralCKFTrackParameters_loc_a);
   fChain->SetBranchAddress("CentralCKFTrackParameters.loc.b", CentralCKFTrackParameters_loc_b, &b_CentralCKFTrackParameters_loc_b);
   fChain->SetBranchAddress("CentralCKFTrackParameters.locError.xx", CentralCKFTrackParameters_locError_xx, &b_CentralCKFTrackParameters_locError_xx);
   fChain->SetBranchAddress("CentralCKFTrackParameters.locError.yy", CentralCKFTrackParameters_locError_yy, &b_CentralCKFTrackParameters_locError_yy);
   fChain->SetBranchAddress("CentralCKFTrackParameters.locError.xy", CentralCKFTrackParameters_locError_xy, &b_CentralCKFTrackParameters_locError_xy);
   fChain->SetBranchAddress("CentralCKFTrackParameters.theta", CentralCKFTrackParameters_theta, &b_CentralCKFTrackParameters_theta);
   fChain->SetBranchAddress("CentralCKFTrackParameters.phi", CentralCKFTrackParameters_phi, &b_CentralCKFTrackParameters_phi);
   fChain->SetBranchAddress("CentralCKFTrackParameters.qOverP", CentralCKFTrackParameters_qOverP, &b_CentralCKFTrackParameters_qOverP);
   fChain->SetBranchAddress("CentralCKFTrackParameters.momentumError.xx", CentralCKFTrackParameters_momentumError_xx, &b_CentralCKFTrackParameters_momentumError_xx);
   fChain->SetBranchAddress("CentralCKFTrackParameters.momentumError.yy", CentralCKFTrackParameters_momentumError_yy, &b_CentralCKFTrackParameters_momentumError_yy);
   fChain->SetBranchAddress("CentralCKFTrackParameters.momentumError.zz", CentralCKFTrackParameters_momentumError_zz, &b_CentralCKFTrackParameters_momentumError_zz);
   fChain->SetBranchAddress("CentralCKFTrackParameters.momentumError.xy", CentralCKFTrackParameters_momentumError_xy, &b_CentralCKFTrackParameters_momentumError_xy);
   fChain->SetBranchAddress("CentralCKFTrackParameters.momentumError.xz", CentralCKFTrackParameters_momentumError_xz, &b_CentralCKFTrackParameters_momentumError_xz);
   fChain->SetBranchAddress("CentralCKFTrackParameters.momentumError.yz", CentralCKFTrackParameters_momentumError_yz, &b_CentralCKFTrackParameters_momentumError_yz);
   fChain->SetBranchAddress("CentralCKFTrackParameters.time", CentralCKFTrackParameters_time, &b_CentralCKFTrackParameters_time);
   fChain->SetBranchAddress("CentralCKFTrackParameters.timeError", CentralCKFTrackParameters_timeError, &b_CentralCKFTrackParameters_timeError);
   fChain->SetBranchAddress("CentralCKFTrackParameters.charge", CentralCKFTrackParameters_charge, &b_CentralCKFTrackParameters_charge);
   fChain->SetBranchAddress("_CentralCKFTrackParameters_trajectory", &_CentralCKFTrackParameters_trajectory_, &b__CentralCKFTrackParameters_trajectory_);
   fChain->SetBranchAddress("_CentralCKFTrackParameters_trajectory.index", _CentralCKFTrackParameters_trajectory_index, &b__CentralCKFTrackParameters_trajectory_index);
   fChain->SetBranchAddress("_CentralCKFTrackParameters_trajectory.collectionID", _CentralCKFTrackParameters_trajectory_collectionID, &b__CentralCKFTrackParameters_trajectory_collectionID);
   fChain->SetBranchAddress("CentralCKFTrajectories", &CentralCKFTrajectories_, &b_CentralCKFTrajectories_);
   fChain->SetBranchAddress("CentralCKFTrajectories.type", CentralCKFTrajectories_type, &b_CentralCKFTrajectories_type);
   fChain->SetBranchAddress("CentralCKFTrajectories.nStates", CentralCKFTrajectories_nStates, &b_CentralCKFTrajectories_nStates);
   fChain->SetBranchAddress("CentralCKFTrajectories.nMeasurements", CentralCKFTrajectories_nMeasurements, &b_CentralCKFTrajectories_nMeasurements);
   fChain->SetBranchAddress("CentralCKFTrajectories.nOutliers", CentralCKFTrajectories_nOutliers, &b_CentralCKFTrajectories_nOutliers);
   fChain->SetBranchAddress("CentralCKFTrajectories.nHoles", CentralCKFTrajectories_nHoles, &b_CentralCKFTrajectories_nHoles);
   fChain->SetBranchAddress("CentralCKFTrajectories.chi2", CentralCKFTrajectories_chi2, &b_CentralCKFTrajectories_chi2);
   fChain->SetBranchAddress("CentralCKFTrajectories.ndf", CentralCKFTrajectories_ndf, &b_CentralCKFTrajectories_ndf);
   fChain->SetBranchAddress("CentralCKFTrajectories.nSharedHits", CentralCKFTrajectories_nSharedHits, &b_CentralCKFTrajectories_nSharedHits);
   fChain->SetBranchAddress("CentralCKFTrajectories.measurementChi2_begin", CentralCKFTrajectories_measurementChi2_begin, &b_CentralCKFTrajectories_measurementChi2_begin);
   fChain->SetBranchAddress("CentralCKFTrajectories.measurementChi2_end", CentralCKFTrajectories_measurementChi2_end, &b_CentralCKFTrajectories_measurementChi2_end);
   fChain->SetBranchAddress("CentralCKFTrajectories.outlierChi2_begin", CentralCKFTrajectories_outlierChi2_begin, &b_CentralCKFTrajectories_outlierChi2_begin);
   fChain->SetBranchAddress("CentralCKFTrajectories.outlierChi2_end", CentralCKFTrajectories_outlierChi2_end, &b_CentralCKFTrajectories_outlierChi2_end);
   fChain->SetBranchAddress("CentralCKFTrajectories.trackParameters_begin", CentralCKFTrajectories_trackParameters_begin, &b_CentralCKFTrajectories_trackParameters_begin);
   fChain->SetBranchAddress("CentralCKFTrajectories.trackParameters_end", CentralCKFTrajectories_trackParameters_end, &b_CentralCKFTrajectories_trackParameters_end);
   fChain->SetBranchAddress("CentralCKFTrajectories.measurementHits_begin", CentralCKFTrajectories_measurementHits_begin, &b_CentralCKFTrajectories_measurementHits_begin);
   fChain->SetBranchAddress("CentralCKFTrajectories.measurementHits_end", CentralCKFTrajectories_measurementHits_end, &b_CentralCKFTrajectories_measurementHits_end);
   fChain->SetBranchAddress("CentralCKFTrajectories.outlierHits_begin", CentralCKFTrajectories_outlierHits_begin, &b_CentralCKFTrajectories_outlierHits_begin);
   fChain->SetBranchAddress("CentralCKFTrajectories.outlierHits_end", CentralCKFTrajectories_outlierHits_end, &b_CentralCKFTrajectories_outlierHits_end);
   fChain->SetBranchAddress("_CentralCKFTrajectories_trackParameters", &_CentralCKFTrajectories_trackParameters_, &b__CentralCKFTrajectories_trackParameters_);
   fChain->SetBranchAddress("_CentralCKFTrajectories_trackParameters.index", _CentralCKFTrajectories_trackParameters_index, &b__CentralCKFTrajectories_trackParameters_index);
   fChain->SetBranchAddress("_CentralCKFTrajectories_trackParameters.collectionID", _CentralCKFTrajectories_trackParameters_collectionID, &b__CentralCKFTrajectories_trackParameters_collectionID);
   fChain->SetBranchAddress("_CentralCKFTrajectories_measurementHits", &_CentralCKFTrajectories_measurementHits_, &b__CentralCKFTrajectories_measurementHits_);
   fChain->SetBranchAddress("_CentralCKFTrajectories_measurementHits.index", _CentralCKFTrajectories_measurementHits_index, &b__CentralCKFTrajectories_measurementHits_index);
   fChain->SetBranchAddress("_CentralCKFTrajectories_measurementHits.collectionID", _CentralCKFTrajectories_measurementHits_collectionID, &b__CentralCKFTrajectories_measurementHits_collectionID);
   fChain->SetBranchAddress("_CentralCKFTrajectories_outlierHits", &_CentralCKFTrajectories_outlierHits_, &b__CentralCKFTrajectories_outlierHits_);
   fChain->SetBranchAddress("_CentralCKFTrajectories_outlierHits.index", _CentralCKFTrajectories_outlierHits_index, &b__CentralCKFTrajectories_outlierHits_index);
   fChain->SetBranchAddress("_CentralCKFTrajectories_outlierHits.collectionID", _CentralCKFTrajectories_outlierHits_collectionID, &b__CentralCKFTrajectories_outlierHits_collectionID);
   fChain->SetBranchAddress("_CentralCKFTrajectories_measurementChi2", &_CentralCKFTrajectories_measurementChi2, &b__CentralCKFTrajectories_measurementChi2);
   fChain->SetBranchAddress("_CentralCKFTrajectories_outlierChi2", &_CentralCKFTrajectories_outlierChi2, &b__CentralCKFTrajectories_outlierChi2);
   fChain->SetBranchAddress("CentralTrackerMeasurements", &CentralTrackerMeasurements_, &b_CentralTrackerMeasurements_);
   fChain->SetBranchAddress("CentralTrackerMeasurements.surface", CentralTrackerMeasurements_surface, &b_CentralTrackerMeasurements_surface);
   fChain->SetBranchAddress("CentralTrackerMeasurements.loc.a", CentralTrackerMeasurements_loc_a, &b_CentralTrackerMeasurements_loc_a);
   fChain->SetBranchAddress("CentralTrackerMeasurements.loc.b", CentralTrackerMeasurements_loc_b, &b_CentralTrackerMeasurements_loc_b);
   fChain->SetBranchAddress("CentralTrackerMeasurements.time", CentralTrackerMeasurements_time, &b_CentralTrackerMeasurements_time);
   fChain->SetBranchAddress("CentralTrackerMeasurements.covariance.xx", CentralTrackerMeasurements_covariance_xx, &b_CentralTrackerMeasurements_covariance_xx);
   fChain->SetBranchAddress("CentralTrackerMeasurements.covariance.yy", CentralTrackerMeasurements_covariance_yy, &b_CentralTrackerMeasurements_covariance_yy);
   fChain->SetBranchAddress("CentralTrackerMeasurements.covariance.zz", CentralTrackerMeasurements_covariance_zz, &b_CentralTrackerMeasurements_covariance_zz);
   fChain->SetBranchAddress("CentralTrackerMeasurements.covariance.xy", CentralTrackerMeasurements_covariance_xy, &b_CentralTrackerMeasurements_covariance_xy);
   fChain->SetBranchAddress("CentralTrackerMeasurements.covariance.xz", CentralTrackerMeasurements_covariance_xz, &b_CentralTrackerMeasurements_covariance_xz);
   fChain->SetBranchAddress("CentralTrackerMeasurements.covariance.yz", CentralTrackerMeasurements_covariance_yz, &b_CentralTrackerMeasurements_covariance_yz);
   fChain->SetBranchAddress("CentralTrackerMeasurements.weights_begin", CentralTrackerMeasurements_weights_begin, &b_CentralTrackerMeasurements_weights_begin);
   fChain->SetBranchAddress("CentralTrackerMeasurements.weights_end", CentralTrackerMeasurements_weights_end, &b_CentralTrackerMeasurements_weights_end);
   fChain->SetBranchAddress("CentralTrackerMeasurements.hits_begin", CentralTrackerMeasurements_hits_begin, &b_CentralTrackerMeasurements_hits_begin);
   fChain->SetBranchAddress("CentralTrackerMeasurements.hits_end", CentralTrackerMeasurements_hits_end, &b_CentralTrackerMeasurements_hits_end);
   fChain->SetBranchAddress("_CentralTrackerMeasurements_hits", &_CentralTrackerMeasurements_hits_, &b__CentralTrackerMeasurements_hits_);
   fChain->SetBranchAddress("_CentralTrackerMeasurements_hits.index", _CentralTrackerMeasurements_hits_index, &b__CentralTrackerMeasurements_hits_index);
   fChain->SetBranchAddress("_CentralTrackerMeasurements_hits.collectionID", _CentralTrackerMeasurements_hits_collectionID, &b__CentralTrackerMeasurements_hits_collectionID);
   fChain->SetBranchAddress("_CentralTrackerMeasurements_weights", &_CentralTrackerMeasurements_weights, &b__CentralTrackerMeasurements_weights);
   fChain->SetBranchAddress("CentralTrackingRecHits_objIdx", &CentralTrackingRecHits_objIdx_, &b_CentralTrackingRecHits_objIdx_);
   fChain->SetBranchAddress("CentralTrackingRecHits_objIdx.index", CentralTrackingRecHits_objIdx_index, &b_CentralTrackingRecHits_objIdx_index);
   fChain->SetBranchAddress("CentralTrackingRecHits_objIdx.collectionID", CentralTrackingRecHits_objIdx_collectionID, &b_CentralTrackingRecHits_objIdx_collectionID);
   fChain->SetBranchAddress("CentralTrackSeedingResults", &CentralTrackSeedingResults_, &b_CentralTrackSeedingResults_);
   fChain->SetBranchAddress("CentralTrackSeedingResults.type", CentralTrackSeedingResults_type, &b_CentralTrackSeedingResults_type);
   fChain->SetBranchAddress("CentralTrackSeedingResults.loc.a", CentralTrackSeedingResults_loc_a, &b_CentralTrackSeedingResults_loc_a);
   fChain->SetBranchAddress("CentralTrackSeedingResults.loc.b", CentralTrackSeedingResults_loc_b, &b_CentralTrackSeedingResults_loc_b);
   fChain->SetBranchAddress("CentralTrackSeedingResults.locError.xx", CentralTrackSeedingResults_locError_xx, &b_CentralTrackSeedingResults_locError_xx);
   fChain->SetBranchAddress("CentralTrackSeedingResults.locError.yy", CentralTrackSeedingResults_locError_yy, &b_CentralTrackSeedingResults_locError_yy);
   fChain->SetBranchAddress("CentralTrackSeedingResults.locError.xy", CentralTrackSeedingResults_locError_xy, &b_CentralTrackSeedingResults_locError_xy);
   fChain->SetBranchAddress("CentralTrackSeedingResults.theta", CentralTrackSeedingResults_theta, &b_CentralTrackSeedingResults_theta);
   fChain->SetBranchAddress("CentralTrackSeedingResults.phi", CentralTrackSeedingResults_phi, &b_CentralTrackSeedingResults_phi);
   fChain->SetBranchAddress("CentralTrackSeedingResults.qOverP", CentralTrackSeedingResults_qOverP, &b_CentralTrackSeedingResults_qOverP);
   fChain->SetBranchAddress("CentralTrackSeedingResults.momentumError.xx", CentralTrackSeedingResults_momentumError_xx, &b_CentralTrackSeedingResults_momentumError_xx);
   fChain->SetBranchAddress("CentralTrackSeedingResults.momentumError.yy", CentralTrackSeedingResults_momentumError_yy, &b_CentralTrackSeedingResults_momentumError_yy);
   fChain->SetBranchAddress("CentralTrackSeedingResults.momentumError.zz", CentralTrackSeedingResults_momentumError_zz, &b_CentralTrackSeedingResults_momentumError_zz);
   fChain->SetBranchAddress("CentralTrackSeedingResults.momentumError.xy", CentralTrackSeedingResults_momentumError_xy, &b_CentralTrackSeedingResults_momentumError_xy);
   fChain->SetBranchAddress("CentralTrackSeedingResults.momentumError.xz", CentralTrackSeedingResults_momentumError_xz, &b_CentralTrackSeedingResults_momentumError_xz);
   fChain->SetBranchAddress("CentralTrackSeedingResults.momentumError.yz", CentralTrackSeedingResults_momentumError_yz, &b_CentralTrackSeedingResults_momentumError_yz);
   fChain->SetBranchAddress("CentralTrackSeedingResults.time", CentralTrackSeedingResults_time, &b_CentralTrackSeedingResults_time);
   fChain->SetBranchAddress("CentralTrackSeedingResults.timeError", CentralTrackSeedingResults_timeError, &b_CentralTrackSeedingResults_timeError);
   fChain->SetBranchAddress("CentralTrackSeedingResults.charge", CentralTrackSeedingResults_charge, &b_CentralTrackSeedingResults_charge);
   fChain->SetBranchAddress("_CentralTrackSeedingResults_trajectory", &_CentralTrackSeedingResults_trajectory_, &b__CentralTrackSeedingResults_trajectory_);
   fChain->SetBranchAddress("_CentralTrackSeedingResults_trajectory.index", _CentralTrackSeedingResults_trajectory_index, &b__CentralTrackSeedingResults_trajectory_index);
   fChain->SetBranchAddress("_CentralTrackSeedingResults_trajectory.collectionID", _CentralTrackSeedingResults_trajectory_collectionID, &b__CentralTrackSeedingResults_trajectory_collectionID);
   fChain->SetBranchAddress("CentralTrackSegments", &CentralTrackSegments_, &b_CentralTrackSegments_);
   fChain->SetBranchAddress("CentralTrackSegments.length", CentralTrackSegments_length, &b_CentralTrackSegments_length);
   fChain->SetBranchAddress("CentralTrackSegments.lengthError", CentralTrackSegments_lengthError, &b_CentralTrackSegments_lengthError);
   fChain->SetBranchAddress("CentralTrackSegments.points_begin", CentralTrackSegments_points_begin, &b_CentralTrackSegments_points_begin);
   fChain->SetBranchAddress("CentralTrackSegments.points_end", CentralTrackSegments_points_end, &b_CentralTrackSegments_points_end);
   fChain->SetBranchAddress("_CentralTrackSegments_track", &_CentralTrackSegments_track_, &b__CentralTrackSegments_track_);
   fChain->SetBranchAddress("_CentralTrackSegments_track.index", _CentralTrackSegments_track_index, &b__CentralTrackSegments_track_index);
   fChain->SetBranchAddress("_CentralTrackSegments_track.collectionID", _CentralTrackSegments_track_collectionID, &b__CentralTrackSegments_track_collectionID);
   fChain->SetBranchAddress("_CentralTrackSegments_points", &_CentralTrackSegments_points_, &b__CentralTrackSegments_points_);
   fChain->SetBranchAddress("_CentralTrackSegments_points.surface", _CentralTrackSegments_points_surface, &b__CentralTrackSegments_points_surface);
   fChain->SetBranchAddress("_CentralTrackSegments_points.system", _CentralTrackSegments_points_system, &b__CentralTrackSegments_points_system);
   fChain->SetBranchAddress("_CentralTrackSegments_points.position.x", _CentralTrackSegments_points_position_x, &b__CentralTrackSegments_points_position_x);
   fChain->SetBranchAddress("_CentralTrackSegments_points.position.y", _CentralTrackSegments_points_position_y, &b__CentralTrackSegments_points_position_y);
   fChain->SetBranchAddress("_CentralTrackSegments_points.position.z", _CentralTrackSegments_points_position_z, &b__CentralTrackSegments_points_position_z);
   fChain->SetBranchAddress("_CentralTrackSegments_points.positionError.xx", _CentralTrackSegments_points_positionError_xx, &b__CentralTrackSegments_points_positionError_xx);
   fChain->SetBranchAddress("_CentralTrackSegments_points.positionError.yy", _CentralTrackSegments_points_positionError_yy, &b__CentralTrackSegments_points_positionError_yy);
   fChain->SetBranchAddress("_CentralTrackSegments_points.positionError.zz", _CentralTrackSegments_points_positionError_zz, &b__CentralTrackSegments_points_positionError_zz);
   fChain->SetBranchAddress("_CentralTrackSegments_points.positionError.xy", _CentralTrackSegments_points_positionError_xy, &b__CentralTrackSegments_points_positionError_xy);
   fChain->SetBranchAddress("_CentralTrackSegments_points.positionError.xz", _CentralTrackSegments_points_positionError_xz, &b__CentralTrackSegments_points_positionError_xz);
   fChain->SetBranchAddress("_CentralTrackSegments_points.positionError.yz", _CentralTrackSegments_points_positionError_yz, &b__CentralTrackSegments_points_positionError_yz);
   fChain->SetBranchAddress("_CentralTrackSegments_points.momentum.x", _CentralTrackSegments_points_momentum_x, &b__CentralTrackSegments_points_momentum_x);
   fChain->SetBranchAddress("_CentralTrackSegments_points.momentum.y", _CentralTrackSegments_points_momentum_y, &b__CentralTrackSegments_points_momentum_y);
   fChain->SetBranchAddress("_CentralTrackSegments_points.momentum.z", _CentralTrackSegments_points_momentum_z, &b__CentralTrackSegments_points_momentum_z);
   fChain->SetBranchAddress("_CentralTrackSegments_points.momentumError.xx", _CentralTrackSegments_points_momentumError_xx, &b__CentralTrackSegments_points_momentumError_xx);
   fChain->SetBranchAddress("_CentralTrackSegments_points.momentumError.yy", _CentralTrackSegments_points_momentumError_yy, &b__CentralTrackSegments_points_momentumError_yy);
   fChain->SetBranchAddress("_CentralTrackSegments_points.momentumError.zz", _CentralTrackSegments_points_momentumError_zz, &b__CentralTrackSegments_points_momentumError_zz);
   fChain->SetBranchAddress("_CentralTrackSegments_points.momentumError.xy", _CentralTrackSegments_points_momentumError_xy, &b__CentralTrackSegments_points_momentumError_xy);
   fChain->SetBranchAddress("_CentralTrackSegments_points.momentumError.xz", _CentralTrackSegments_points_momentumError_xz, &b__CentralTrackSegments_points_momentumError_xz);
   fChain->SetBranchAddress("_CentralTrackSegments_points.momentumError.yz", _CentralTrackSegments_points_momentumError_yz, &b__CentralTrackSegments_points_momentumError_yz);
   fChain->SetBranchAddress("_CentralTrackSegments_points.time", _CentralTrackSegments_points_time, &b__CentralTrackSegments_points_time);
   fChain->SetBranchAddress("_CentralTrackSegments_points.timeError", _CentralTrackSegments_points_timeError, &b__CentralTrackSegments_points_timeError);
   fChain->SetBranchAddress("_CentralTrackSegments_points.theta", _CentralTrackSegments_points_theta, &b__CentralTrackSegments_points_theta);
   fChain->SetBranchAddress("_CentralTrackSegments_points.phi", _CentralTrackSegments_points_phi, &b__CentralTrackSegments_points_phi);
   fChain->SetBranchAddress("_CentralTrackSegments_points.directionError.xx", _CentralTrackSegments_points_directionError_xx, &b__CentralTrackSegments_points_directionError_xx);
   fChain->SetBranchAddress("_CentralTrackSegments_points.directionError.yy", _CentralTrackSegments_points_directionError_yy, &b__CentralTrackSegments_points_directionError_yy);
   fChain->SetBranchAddress("_CentralTrackSegments_points.directionError.xy", _CentralTrackSegments_points_directionError_xy, &b__CentralTrackSegments_points_directionError_xy);
   fChain->SetBranchAddress("_CentralTrackSegments_points.pathlength", _CentralTrackSegments_points_pathlength, &b__CentralTrackSegments_points_pathlength);
   fChain->SetBranchAddress("_CentralTrackSegments_points.pathlengthError", _CentralTrackSegments_points_pathlengthError, &b__CentralTrackSegments_points_pathlengthError);
   fChain->SetBranchAddress("CentralTrackVertices", &CentralTrackVertices_, &b_CentralTrackVertices_);
   fChain->SetBranchAddress("CentralTrackVertices.primary", CentralTrackVertices_primary, &b_CentralTrackVertices_primary);
   fChain->SetBranchAddress("CentralTrackVertices.chi2", CentralTrackVertices_chi2, &b_CentralTrackVertices_chi2);
   fChain->SetBranchAddress("CentralTrackVertices.probability", CentralTrackVertices_probability, &b_CentralTrackVertices_probability);
   fChain->SetBranchAddress("CentralTrackVertices.position.x", CentralTrackVertices_position_x, &b_CentralTrackVertices_position_x);
   fChain->SetBranchAddress("CentralTrackVertices.position.y", CentralTrackVertices_position_y, &b_CentralTrackVertices_position_y);
   fChain->SetBranchAddress("CentralTrackVertices.position.z", CentralTrackVertices_position_z, &b_CentralTrackVertices_position_z);
   fChain->SetBranchAddress("CentralTrackVertices.positionError.xx", CentralTrackVertices_positionError_xx, &b_CentralTrackVertices_positionError_xx);
   fChain->SetBranchAddress("CentralTrackVertices.positionError.yy", CentralTrackVertices_positionError_yy, &b_CentralTrackVertices_positionError_yy);
   fChain->SetBranchAddress("CentralTrackVertices.positionError.zz", CentralTrackVertices_positionError_zz, &b_CentralTrackVertices_positionError_zz);
   fChain->SetBranchAddress("CentralTrackVertices.positionError.xy", CentralTrackVertices_positionError_xy, &b_CentralTrackVertices_positionError_xy);
   fChain->SetBranchAddress("CentralTrackVertices.positionError.xz", CentralTrackVertices_positionError_xz, &b_CentralTrackVertices_positionError_xz);
   fChain->SetBranchAddress("CentralTrackVertices.positionError.yz", CentralTrackVertices_positionError_yz, &b_CentralTrackVertices_positionError_yz);
   fChain->SetBranchAddress("CentralTrackVertices.algorithmType", CentralTrackVertices_algorithmType, &b_CentralTrackVertices_algorithmType);
   fChain->SetBranchAddress("CentralTrackVertices.time", CentralTrackVertices_time, &b_CentralTrackVertices_time);
   fChain->SetBranchAddress("CentralTrackVertices.parameters_begin", CentralTrackVertices_parameters_begin, &b_CentralTrackVertices_parameters_begin);
   fChain->SetBranchAddress("CentralTrackVertices.parameters_end", CentralTrackVertices_parameters_end, &b_CentralTrackVertices_parameters_end);
   fChain->SetBranchAddress("_CentralTrackVertices_associatedParticle", &_CentralTrackVertices_associatedParticle_, &b__CentralTrackVertices_associatedParticle_);
   fChain->SetBranchAddress("_CentralTrackVertices_associatedParticle.index", _CentralTrackVertices_associatedParticle_index, &b__CentralTrackVertices_associatedParticle_index);
   fChain->SetBranchAddress("_CentralTrackVertices_associatedParticle.collectionID", _CentralTrackVertices_associatedParticle_collectionID, &b__CentralTrackVertices_associatedParticle_collectionID);
   fChain->SetBranchAddress("_CentralTrackVertices_parameters", &_CentralTrackVertices_parameters, &b__CentralTrackVertices_parameters);
   fChain->SetBranchAddress("DIRCRawHits", &DIRCRawHits_, &b_DIRCRawHits_);
   fChain->SetBranchAddress("DIRCRawHits.cellID", &DIRCRawHits_cellID, &b_DIRCRawHits_cellID);
   fChain->SetBranchAddress("DIRCRawHits.charge", &DIRCRawHits_charge, &b_DIRCRawHits_charge);
   fChain->SetBranchAddress("DIRCRawHits.timeStamp", &DIRCRawHits_timeStamp, &b_DIRCRawHits_timeStamp);
   fChain->SetBranchAddress("DRICHAerogelIrtCherenkovParticleID", &DRICHAerogelIrtCherenkovParticleID_, &b_DRICHAerogelIrtCherenkovParticleID_);
   fChain->SetBranchAddress("DRICHAerogelIrtCherenkovParticleID.npe", DRICHAerogelIrtCherenkovParticleID_npe, &b_DRICHAerogelIrtCherenkovParticleID_npe);
   fChain->SetBranchAddress("DRICHAerogelIrtCherenkovParticleID.refractiveIndex", DRICHAerogelIrtCherenkovParticleID_refractiveIndex, &b_DRICHAerogelIrtCherenkovParticleID_refractiveIndex);
   fChain->SetBranchAddress("DRICHAerogelIrtCherenkovParticleID.photonEnergy", DRICHAerogelIrtCherenkovParticleID_photonEnergy, &b_DRICHAerogelIrtCherenkovParticleID_photonEnergy);
   fChain->SetBranchAddress("DRICHAerogelIrtCherenkovParticleID.hypotheses_begin", DRICHAerogelIrtCherenkovParticleID_hypotheses_begin, &b_DRICHAerogelIrtCherenkovParticleID_hypotheses_begin);
   fChain->SetBranchAddress("DRICHAerogelIrtCherenkovParticleID.hypotheses_end", DRICHAerogelIrtCherenkovParticleID_hypotheses_end, &b_DRICHAerogelIrtCherenkovParticleID_hypotheses_end);
   fChain->SetBranchAddress("DRICHAerogelIrtCherenkovParticleID.thetaPhiPhotons_begin", DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_begin, &b_DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_begin);
   fChain->SetBranchAddress("DRICHAerogelIrtCherenkovParticleID.thetaPhiPhotons_end", DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_end, &b_DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_end);
   fChain->SetBranchAddress("DRICHAerogelIrtCherenkovParticleID.rawHitAssociations_begin", DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_begin, &b_DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_begin);
   fChain->SetBranchAddress("DRICHAerogelIrtCherenkovParticleID.rawHitAssociations_end", DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_end, &b_DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_end);
   fChain->SetBranchAddress("_DRICHAerogelIrtCherenkovParticleID_rawHitAssociations", &_DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_, &b__DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_);
   fChain->SetBranchAddress("_DRICHAerogelIrtCherenkovParticleID_rawHitAssociations.index", _DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_index, &b__DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_index);
   fChain->SetBranchAddress("_DRICHAerogelIrtCherenkovParticleID_rawHitAssociations.collectionID", _DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_collectionID, &b__DRICHAerogelIrtCherenkovParticleID_rawHitAssociations_collectionID);
   fChain->SetBranchAddress("_DRICHAerogelIrtCherenkovParticleID_chargedParticle", &_DRICHAerogelIrtCherenkovParticleID_chargedParticle_, &b__DRICHAerogelIrtCherenkovParticleID_chargedParticle_);
   fChain->SetBranchAddress("_DRICHAerogelIrtCherenkovParticleID_chargedParticle.index", _DRICHAerogelIrtCherenkovParticleID_chargedParticle_index, &b__DRICHAerogelIrtCherenkovParticleID_chargedParticle_index);
   fChain->SetBranchAddress("_DRICHAerogelIrtCherenkovParticleID_chargedParticle.collectionID", _DRICHAerogelIrtCherenkovParticleID_chargedParticle_collectionID, &b__DRICHAerogelIrtCherenkovParticleID_chargedParticle_collectionID);
   fChain->SetBranchAddress("_DRICHAerogelIrtCherenkovParticleID_hypotheses", &_DRICHAerogelIrtCherenkovParticleID_hypotheses_, &b__DRICHAerogelIrtCherenkovParticleID_hypotheses_);
   fChain->SetBranchAddress("_DRICHAerogelIrtCherenkovParticleID_hypotheses.PDG", _DRICHAerogelIrtCherenkovParticleID_hypotheses_PDG, &b__DRICHAerogelIrtCherenkovParticleID_hypotheses_PDG);
   fChain->SetBranchAddress("_DRICHAerogelIrtCherenkovParticleID_hypotheses.npe", _DRICHAerogelIrtCherenkovParticleID_hypotheses_npe, &b__DRICHAerogelIrtCherenkovParticleID_hypotheses_npe);
   fChain->SetBranchAddress("_DRICHAerogelIrtCherenkovParticleID_hypotheses.weight", _DRICHAerogelIrtCherenkovParticleID_hypotheses_weight, &b__DRICHAerogelIrtCherenkovParticleID_hypotheses_weight);
   fChain->SetBranchAddress("_DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons", &_DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_, &b__DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_);
   fChain->SetBranchAddress("_DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons.a", _DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_a, &b__DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_a);
   fChain->SetBranchAddress("_DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons.b", _DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_b, &b__DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons_b);
   fChain->SetBranchAddress("DRICHAerogelTracks", &DRICHAerogelTracks_, &b_DRICHAerogelTracks_);
   fChain->SetBranchAddress("DRICHAerogelTracks.length", DRICHAerogelTracks_length, &b_DRICHAerogelTracks_length);
   fChain->SetBranchAddress("DRICHAerogelTracks.lengthError", DRICHAerogelTracks_lengthError, &b_DRICHAerogelTracks_lengthError);
   fChain->SetBranchAddress("DRICHAerogelTracks.points_begin", DRICHAerogelTracks_points_begin, &b_DRICHAerogelTracks_points_begin);
   fChain->SetBranchAddress("DRICHAerogelTracks.points_end", DRICHAerogelTracks_points_end, &b_DRICHAerogelTracks_points_end);
   fChain->SetBranchAddress("_DRICHAerogelTracks_track", &_DRICHAerogelTracks_track_, &b__DRICHAerogelTracks_track_);
   fChain->SetBranchAddress("_DRICHAerogelTracks_track.index", _DRICHAerogelTracks_track_index, &b__DRICHAerogelTracks_track_index);
   fChain->SetBranchAddress("_DRICHAerogelTracks_track.collectionID", _DRICHAerogelTracks_track_collectionID, &b__DRICHAerogelTracks_track_collectionID);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points", &_DRICHAerogelTracks_points_, &b__DRICHAerogelTracks_points_);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.surface", _DRICHAerogelTracks_points_surface, &b__DRICHAerogelTracks_points_surface);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.system", _DRICHAerogelTracks_points_system, &b__DRICHAerogelTracks_points_system);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.position.x", _DRICHAerogelTracks_points_position_x, &b__DRICHAerogelTracks_points_position_x);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.position.y", _DRICHAerogelTracks_points_position_y, &b__DRICHAerogelTracks_points_position_y);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.position.z", _DRICHAerogelTracks_points_position_z, &b__DRICHAerogelTracks_points_position_z);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.positionError.xx", _DRICHAerogelTracks_points_positionError_xx, &b__DRICHAerogelTracks_points_positionError_xx);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.positionError.yy", _DRICHAerogelTracks_points_positionError_yy, &b__DRICHAerogelTracks_points_positionError_yy);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.positionError.zz", _DRICHAerogelTracks_points_positionError_zz, &b__DRICHAerogelTracks_points_positionError_zz);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.positionError.xy", _DRICHAerogelTracks_points_positionError_xy, &b__DRICHAerogelTracks_points_positionError_xy);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.positionError.xz", _DRICHAerogelTracks_points_positionError_xz, &b__DRICHAerogelTracks_points_positionError_xz);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.positionError.yz", _DRICHAerogelTracks_points_positionError_yz, &b__DRICHAerogelTracks_points_positionError_yz);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.momentum.x", _DRICHAerogelTracks_points_momentum_x, &b__DRICHAerogelTracks_points_momentum_x);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.momentum.y", _DRICHAerogelTracks_points_momentum_y, &b__DRICHAerogelTracks_points_momentum_y);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.momentum.z", _DRICHAerogelTracks_points_momentum_z, &b__DRICHAerogelTracks_points_momentum_z);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.momentumError.xx", _DRICHAerogelTracks_points_momentumError_xx, &b__DRICHAerogelTracks_points_momentumError_xx);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.momentumError.yy", _DRICHAerogelTracks_points_momentumError_yy, &b__DRICHAerogelTracks_points_momentumError_yy);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.momentumError.zz", _DRICHAerogelTracks_points_momentumError_zz, &b__DRICHAerogelTracks_points_momentumError_zz);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.momentumError.xy", _DRICHAerogelTracks_points_momentumError_xy, &b__DRICHAerogelTracks_points_momentumError_xy);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.momentumError.xz", _DRICHAerogelTracks_points_momentumError_xz, &b__DRICHAerogelTracks_points_momentumError_xz);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.momentumError.yz", _DRICHAerogelTracks_points_momentumError_yz, &b__DRICHAerogelTracks_points_momentumError_yz);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.time", _DRICHAerogelTracks_points_time, &b__DRICHAerogelTracks_points_time);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.timeError", _DRICHAerogelTracks_points_timeError, &b__DRICHAerogelTracks_points_timeError);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.theta", _DRICHAerogelTracks_points_theta, &b__DRICHAerogelTracks_points_theta);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.phi", _DRICHAerogelTracks_points_phi, &b__DRICHAerogelTracks_points_phi);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.directionError.xx", _DRICHAerogelTracks_points_directionError_xx, &b__DRICHAerogelTracks_points_directionError_xx);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.directionError.yy", _DRICHAerogelTracks_points_directionError_yy, &b__DRICHAerogelTracks_points_directionError_yy);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.directionError.xy", _DRICHAerogelTracks_points_directionError_xy, &b__DRICHAerogelTracks_points_directionError_xy);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.pathlength", _DRICHAerogelTracks_points_pathlength, &b__DRICHAerogelTracks_points_pathlength);
   fChain->SetBranchAddress("_DRICHAerogelTracks_points.pathlengthError", _DRICHAerogelTracks_points_pathlengthError, &b__DRICHAerogelTracks_points_pathlengthError);
   fChain->SetBranchAddress("DRICHGasIrtCherenkovParticleID", &DRICHGasIrtCherenkovParticleID_, &b_DRICHGasIrtCherenkovParticleID_);
   fChain->SetBranchAddress("DRICHGasIrtCherenkovParticleID.npe", DRICHGasIrtCherenkovParticleID_npe, &b_DRICHGasIrtCherenkovParticleID_npe);
   fChain->SetBranchAddress("DRICHGasIrtCherenkovParticleID.refractiveIndex", DRICHGasIrtCherenkovParticleID_refractiveIndex, &b_DRICHGasIrtCherenkovParticleID_refractiveIndex);
   fChain->SetBranchAddress("DRICHGasIrtCherenkovParticleID.photonEnergy", DRICHGasIrtCherenkovParticleID_photonEnergy, &b_DRICHGasIrtCherenkovParticleID_photonEnergy);
   fChain->SetBranchAddress("DRICHGasIrtCherenkovParticleID.hypotheses_begin", DRICHGasIrtCherenkovParticleID_hypotheses_begin, &b_DRICHGasIrtCherenkovParticleID_hypotheses_begin);
   fChain->SetBranchAddress("DRICHGasIrtCherenkovParticleID.hypotheses_end", DRICHGasIrtCherenkovParticleID_hypotheses_end, &b_DRICHGasIrtCherenkovParticleID_hypotheses_end);
   fChain->SetBranchAddress("DRICHGasIrtCherenkovParticleID.thetaPhiPhotons_begin", DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_begin, &b_DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_begin);
   fChain->SetBranchAddress("DRICHGasIrtCherenkovParticleID.thetaPhiPhotons_end", DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_end, &b_DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_end);
   fChain->SetBranchAddress("DRICHGasIrtCherenkovParticleID.rawHitAssociations_begin", DRICHGasIrtCherenkovParticleID_rawHitAssociations_begin, &b_DRICHGasIrtCherenkovParticleID_rawHitAssociations_begin);
   fChain->SetBranchAddress("DRICHGasIrtCherenkovParticleID.rawHitAssociations_end", DRICHGasIrtCherenkovParticleID_rawHitAssociations_end, &b_DRICHGasIrtCherenkovParticleID_rawHitAssociations_end);
   fChain->SetBranchAddress("_DRICHGasIrtCherenkovParticleID_rawHitAssociations", &_DRICHGasIrtCherenkovParticleID_rawHitAssociations_, &b__DRICHGasIrtCherenkovParticleID_rawHitAssociations_);
   fChain->SetBranchAddress("_DRICHGasIrtCherenkovParticleID_rawHitAssociations.index", _DRICHGasIrtCherenkovParticleID_rawHitAssociations_index, &b__DRICHGasIrtCherenkovParticleID_rawHitAssociations_index);
   fChain->SetBranchAddress("_DRICHGasIrtCherenkovParticleID_rawHitAssociations.collectionID", _DRICHGasIrtCherenkovParticleID_rawHitAssociations_collectionID, &b__DRICHGasIrtCherenkovParticleID_rawHitAssociations_collectionID);
   fChain->SetBranchAddress("_DRICHGasIrtCherenkovParticleID_chargedParticle", &_DRICHGasIrtCherenkovParticleID_chargedParticle_, &b__DRICHGasIrtCherenkovParticleID_chargedParticle_);
   fChain->SetBranchAddress("_DRICHGasIrtCherenkovParticleID_chargedParticle.index", _DRICHGasIrtCherenkovParticleID_chargedParticle_index, &b__DRICHGasIrtCherenkovParticleID_chargedParticle_index);
   fChain->SetBranchAddress("_DRICHGasIrtCherenkovParticleID_chargedParticle.collectionID", _DRICHGasIrtCherenkovParticleID_chargedParticle_collectionID, &b__DRICHGasIrtCherenkovParticleID_chargedParticle_collectionID);
   fChain->SetBranchAddress("_DRICHGasIrtCherenkovParticleID_hypotheses", &_DRICHGasIrtCherenkovParticleID_hypotheses_, &b__DRICHGasIrtCherenkovParticleID_hypotheses_);
   fChain->SetBranchAddress("_DRICHGasIrtCherenkovParticleID_hypotheses.PDG", _DRICHGasIrtCherenkovParticleID_hypotheses_PDG, &b__DRICHGasIrtCherenkovParticleID_hypotheses_PDG);
   fChain->SetBranchAddress("_DRICHGasIrtCherenkovParticleID_hypotheses.npe", _DRICHGasIrtCherenkovParticleID_hypotheses_npe, &b__DRICHGasIrtCherenkovParticleID_hypotheses_npe);
   fChain->SetBranchAddress("_DRICHGasIrtCherenkovParticleID_hypotheses.weight", _DRICHGasIrtCherenkovParticleID_hypotheses_weight, &b__DRICHGasIrtCherenkovParticleID_hypotheses_weight);
   fChain->SetBranchAddress("_DRICHGasIrtCherenkovParticleID_thetaPhiPhotons", &_DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_, &b__DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_);
   fChain->SetBranchAddress("_DRICHGasIrtCherenkovParticleID_thetaPhiPhotons.a", _DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_a, &b__DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_a);
   fChain->SetBranchAddress("_DRICHGasIrtCherenkovParticleID_thetaPhiPhotons.b", _DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_b, &b__DRICHGasIrtCherenkovParticleID_thetaPhiPhotons_b);
   fChain->SetBranchAddress("DRICHGasTracks", &DRICHGasTracks_, &b_DRICHGasTracks_);
   fChain->SetBranchAddress("DRICHGasTracks.length", DRICHGasTracks_length, &b_DRICHGasTracks_length);
   fChain->SetBranchAddress("DRICHGasTracks.lengthError", DRICHGasTracks_lengthError, &b_DRICHGasTracks_lengthError);
   fChain->SetBranchAddress("DRICHGasTracks.points_begin", DRICHGasTracks_points_begin, &b_DRICHGasTracks_points_begin);
   fChain->SetBranchAddress("DRICHGasTracks.points_end", DRICHGasTracks_points_end, &b_DRICHGasTracks_points_end);
   fChain->SetBranchAddress("_DRICHGasTracks_track", &_DRICHGasTracks_track_, &b__DRICHGasTracks_track_);
   fChain->SetBranchAddress("_DRICHGasTracks_track.index", _DRICHGasTracks_track_index, &b__DRICHGasTracks_track_index);
   fChain->SetBranchAddress("_DRICHGasTracks_track.collectionID", _DRICHGasTracks_track_collectionID, &b__DRICHGasTracks_track_collectionID);
   fChain->SetBranchAddress("_DRICHGasTracks_points", &_DRICHGasTracks_points_, &b__DRICHGasTracks_points_);
   fChain->SetBranchAddress("_DRICHGasTracks_points.surface", _DRICHGasTracks_points_surface, &b__DRICHGasTracks_points_surface);
   fChain->SetBranchAddress("_DRICHGasTracks_points.system", _DRICHGasTracks_points_system, &b__DRICHGasTracks_points_system);
   fChain->SetBranchAddress("_DRICHGasTracks_points.position.x", _DRICHGasTracks_points_position_x, &b__DRICHGasTracks_points_position_x);
   fChain->SetBranchAddress("_DRICHGasTracks_points.position.y", _DRICHGasTracks_points_position_y, &b__DRICHGasTracks_points_position_y);
   fChain->SetBranchAddress("_DRICHGasTracks_points.position.z", _DRICHGasTracks_points_position_z, &b__DRICHGasTracks_points_position_z);
   fChain->SetBranchAddress("_DRICHGasTracks_points.positionError.xx", _DRICHGasTracks_points_positionError_xx, &b__DRICHGasTracks_points_positionError_xx);
   fChain->SetBranchAddress("_DRICHGasTracks_points.positionError.yy", _DRICHGasTracks_points_positionError_yy, &b__DRICHGasTracks_points_positionError_yy);
   fChain->SetBranchAddress("_DRICHGasTracks_points.positionError.zz", _DRICHGasTracks_points_positionError_zz, &b__DRICHGasTracks_points_positionError_zz);
   fChain->SetBranchAddress("_DRICHGasTracks_points.positionError.xy", _DRICHGasTracks_points_positionError_xy, &b__DRICHGasTracks_points_positionError_xy);
   fChain->SetBranchAddress("_DRICHGasTracks_points.positionError.xz", _DRICHGasTracks_points_positionError_xz, &b__DRICHGasTracks_points_positionError_xz);
   fChain->SetBranchAddress("_DRICHGasTracks_points.positionError.yz", _DRICHGasTracks_points_positionError_yz, &b__DRICHGasTracks_points_positionError_yz);
   fChain->SetBranchAddress("_DRICHGasTracks_points.momentum.x", _DRICHGasTracks_points_momentum_x, &b__DRICHGasTracks_points_momentum_x);
   fChain->SetBranchAddress("_DRICHGasTracks_points.momentum.y", _DRICHGasTracks_points_momentum_y, &b__DRICHGasTracks_points_momentum_y);
   fChain->SetBranchAddress("_DRICHGasTracks_points.momentum.z", _DRICHGasTracks_points_momentum_z, &b__DRICHGasTracks_points_momentum_z);
   fChain->SetBranchAddress("_DRICHGasTracks_points.momentumError.xx", _DRICHGasTracks_points_momentumError_xx, &b__DRICHGasTracks_points_momentumError_xx);
   fChain->SetBranchAddress("_DRICHGasTracks_points.momentumError.yy", _DRICHGasTracks_points_momentumError_yy, &b__DRICHGasTracks_points_momentumError_yy);
   fChain->SetBranchAddress("_DRICHGasTracks_points.momentumError.zz", _DRICHGasTracks_points_momentumError_zz, &b__DRICHGasTracks_points_momentumError_zz);
   fChain->SetBranchAddress("_DRICHGasTracks_points.momentumError.xy", _DRICHGasTracks_points_momentumError_xy, &b__DRICHGasTracks_points_momentumError_xy);
   fChain->SetBranchAddress("_DRICHGasTracks_points.momentumError.xz", _DRICHGasTracks_points_momentumError_xz, &b__DRICHGasTracks_points_momentumError_xz);
   fChain->SetBranchAddress("_DRICHGasTracks_points.momentumError.yz", _DRICHGasTracks_points_momentumError_yz, &b__DRICHGasTracks_points_momentumError_yz);
   fChain->SetBranchAddress("_DRICHGasTracks_points.time", _DRICHGasTracks_points_time, &b__DRICHGasTracks_points_time);
   fChain->SetBranchAddress("_DRICHGasTracks_points.timeError", _DRICHGasTracks_points_timeError, &b__DRICHGasTracks_points_timeError);
   fChain->SetBranchAddress("_DRICHGasTracks_points.theta", _DRICHGasTracks_points_theta, &b__DRICHGasTracks_points_theta);
   fChain->SetBranchAddress("_DRICHGasTracks_points.phi", _DRICHGasTracks_points_phi, &b__DRICHGasTracks_points_phi);
   fChain->SetBranchAddress("_DRICHGasTracks_points.directionError.xx", _DRICHGasTracks_points_directionError_xx, &b__DRICHGasTracks_points_directionError_xx);
   fChain->SetBranchAddress("_DRICHGasTracks_points.directionError.yy", _DRICHGasTracks_points_directionError_yy, &b__DRICHGasTracks_points_directionError_yy);
   fChain->SetBranchAddress("_DRICHGasTracks_points.directionError.xy", _DRICHGasTracks_points_directionError_xy, &b__DRICHGasTracks_points_directionError_xy);
   fChain->SetBranchAddress("_DRICHGasTracks_points.pathlength", _DRICHGasTracks_points_pathlength, &b__DRICHGasTracks_points_pathlength);
   fChain->SetBranchAddress("_DRICHGasTracks_points.pathlengthError", _DRICHGasTracks_points_pathlengthError, &b__DRICHGasTracks_points_pathlengthError);
   fChain->SetBranchAddress("DRICHRawHits", &DRICHRawHits_, &b_DRICHRawHits_);
   fChain->SetBranchAddress("DRICHRawHits.cellID", DRICHRawHits_cellID, &b_DRICHRawHits_cellID);
   fChain->SetBranchAddress("DRICHRawHits.charge", DRICHRawHits_charge, &b_DRICHRawHits_charge);
   fChain->SetBranchAddress("DRICHRawHits.timeStamp", DRICHRawHits_timeStamp, &b_DRICHRawHits_timeStamp);
   fChain->SetBranchAddress("DRICHRawHitsAssociations", &DRICHRawHitsAssociations_, &b_DRICHRawHitsAssociations_);
   fChain->SetBranchAddress("DRICHRawHitsAssociations.weight", DRICHRawHitsAssociations_weight, &b_DRICHRawHitsAssociations_weight);
   fChain->SetBranchAddress("DRICHRawHitsAssociations.simHits_begin", DRICHRawHitsAssociations_simHits_begin, &b_DRICHRawHitsAssociations_simHits_begin);
   fChain->SetBranchAddress("DRICHRawHitsAssociations.simHits_end", DRICHRawHitsAssociations_simHits_end, &b_DRICHRawHitsAssociations_simHits_end);
   fChain->SetBranchAddress("_DRICHRawHitsAssociations_simHits", &_DRICHRawHitsAssociations_simHits_, &b__DRICHRawHitsAssociations_simHits_);
   fChain->SetBranchAddress("_DRICHRawHitsAssociations_simHits.index", _DRICHRawHitsAssociations_simHits_index, &b__DRICHRawHitsAssociations_simHits_index);
   fChain->SetBranchAddress("_DRICHRawHitsAssociations_simHits.collectionID", _DRICHRawHitsAssociations_simHits_collectionID, &b__DRICHRawHitsAssociations_simHits_collectionID);
   fChain->SetBranchAddress("_DRICHRawHitsAssociations_rawHit", &_DRICHRawHitsAssociations_rawHit_, &b__DRICHRawHitsAssociations_rawHit_);
   fChain->SetBranchAddress("_DRICHRawHitsAssociations_rawHit.index", _DRICHRawHitsAssociations_rawHit_index, &b__DRICHRawHitsAssociations_rawHit_index);
   fChain->SetBranchAddress("_DRICHRawHitsAssociations_rawHit.collectionID", _DRICHRawHitsAssociations_rawHit_collectionID, &b__DRICHRawHitsAssociations_rawHit_collectionID);
   fChain->SetBranchAddress("EcalBarrelClusterAssociations", &EcalBarrelClusterAssociations_, &b_EcalBarrelClusterAssociations_);
   fChain->SetBranchAddress("EcalBarrelClusterAssociations.simID", EcalBarrelClusterAssociations_simID, &b_EcalBarrelClusterAssociations_simID);
   fChain->SetBranchAddress("EcalBarrelClusterAssociations.recID", EcalBarrelClusterAssociations_recID, &b_EcalBarrelClusterAssociations_recID);
   fChain->SetBranchAddress("EcalBarrelClusterAssociations.weight", EcalBarrelClusterAssociations_weight, &b_EcalBarrelClusterAssociations_weight);
   fChain->SetBranchAddress("_EcalBarrelClusterAssociations_rec", &_EcalBarrelClusterAssociations_rec_, &b__EcalBarrelClusterAssociations_rec_);
   fChain->SetBranchAddress("_EcalBarrelClusterAssociations_rec.index", _EcalBarrelClusterAssociations_rec_index, &b__EcalBarrelClusterAssociations_rec_index);
   fChain->SetBranchAddress("_EcalBarrelClusterAssociations_rec.collectionID", _EcalBarrelClusterAssociations_rec_collectionID, &b__EcalBarrelClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_EcalBarrelClusterAssociations_sim", &_EcalBarrelClusterAssociations_sim_, &b__EcalBarrelClusterAssociations_sim_);
   fChain->SetBranchAddress("_EcalBarrelClusterAssociations_sim.index", _EcalBarrelClusterAssociations_sim_index, &b__EcalBarrelClusterAssociations_sim_index);
   fChain->SetBranchAddress("_EcalBarrelClusterAssociations_sim.collectionID", _EcalBarrelClusterAssociations_sim_collectionID, &b__EcalBarrelClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("EcalBarrelClusters", &EcalBarrelClusters_, &b_EcalBarrelClusters_);
   fChain->SetBranchAddress("EcalBarrelClusters.type", EcalBarrelClusters_type, &b_EcalBarrelClusters_type);
   fChain->SetBranchAddress("EcalBarrelClusters.energy", EcalBarrelClusters_energy, &b_EcalBarrelClusters_energy);
   fChain->SetBranchAddress("EcalBarrelClusters.energyError", EcalBarrelClusters_energyError, &b_EcalBarrelClusters_energyError);
   fChain->SetBranchAddress("EcalBarrelClusters.time", EcalBarrelClusters_time, &b_EcalBarrelClusters_time);
   fChain->SetBranchAddress("EcalBarrelClusters.timeError", EcalBarrelClusters_timeError, &b_EcalBarrelClusters_timeError);
   fChain->SetBranchAddress("EcalBarrelClusters.nhits", EcalBarrelClusters_nhits, &b_EcalBarrelClusters_nhits);
   fChain->SetBranchAddress("EcalBarrelClusters.position.x", EcalBarrelClusters_position_x, &b_EcalBarrelClusters_position_x);
   fChain->SetBranchAddress("EcalBarrelClusters.position.y", EcalBarrelClusters_position_y, &b_EcalBarrelClusters_position_y);
   fChain->SetBranchAddress("EcalBarrelClusters.position.z", EcalBarrelClusters_position_z, &b_EcalBarrelClusters_position_z);
   fChain->SetBranchAddress("EcalBarrelClusters.positionError.xx", EcalBarrelClusters_positionError_xx, &b_EcalBarrelClusters_positionError_xx);
   fChain->SetBranchAddress("EcalBarrelClusters.positionError.yy", EcalBarrelClusters_positionError_yy, &b_EcalBarrelClusters_positionError_yy);
   fChain->SetBranchAddress("EcalBarrelClusters.positionError.zz", EcalBarrelClusters_positionError_zz, &b_EcalBarrelClusters_positionError_zz);
   fChain->SetBranchAddress("EcalBarrelClusters.positionError.xy", EcalBarrelClusters_positionError_xy, &b_EcalBarrelClusters_positionError_xy);
   fChain->SetBranchAddress("EcalBarrelClusters.positionError.xz", EcalBarrelClusters_positionError_xz, &b_EcalBarrelClusters_positionError_xz);
   fChain->SetBranchAddress("EcalBarrelClusters.positionError.yz", EcalBarrelClusters_positionError_yz, &b_EcalBarrelClusters_positionError_yz);
   fChain->SetBranchAddress("EcalBarrelClusters.intrinsicTheta", EcalBarrelClusters_intrinsicTheta, &b_EcalBarrelClusters_intrinsicTheta);
   fChain->SetBranchAddress("EcalBarrelClusters.intrinsicPhi", EcalBarrelClusters_intrinsicPhi, &b_EcalBarrelClusters_intrinsicPhi);
   fChain->SetBranchAddress("EcalBarrelClusters.intrinsicDirectionError.xx", EcalBarrelClusters_intrinsicDirectionError_xx, &b_EcalBarrelClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("EcalBarrelClusters.intrinsicDirectionError.yy", EcalBarrelClusters_intrinsicDirectionError_yy, &b_EcalBarrelClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("EcalBarrelClusters.intrinsicDirectionError.xy", EcalBarrelClusters_intrinsicDirectionError_xy, &b_EcalBarrelClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("EcalBarrelClusters.shapeParameters_begin", EcalBarrelClusters_shapeParameters_begin, &b_EcalBarrelClusters_shapeParameters_begin);
   fChain->SetBranchAddress("EcalBarrelClusters.shapeParameters_end", EcalBarrelClusters_shapeParameters_end, &b_EcalBarrelClusters_shapeParameters_end);
   fChain->SetBranchAddress("EcalBarrelClusters.hitContributions_begin", EcalBarrelClusters_hitContributions_begin, &b_EcalBarrelClusters_hitContributions_begin);
   fChain->SetBranchAddress("EcalBarrelClusters.hitContributions_end", EcalBarrelClusters_hitContributions_end, &b_EcalBarrelClusters_hitContributions_end);
   fChain->SetBranchAddress("EcalBarrelClusters.subdetectorEnergies_begin", EcalBarrelClusters_subdetectorEnergies_begin, &b_EcalBarrelClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("EcalBarrelClusters.subdetectorEnergies_end", EcalBarrelClusters_subdetectorEnergies_end, &b_EcalBarrelClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("EcalBarrelClusters.clusters_begin", EcalBarrelClusters_clusters_begin, &b_EcalBarrelClusters_clusters_begin);
   fChain->SetBranchAddress("EcalBarrelClusters.clusters_end", EcalBarrelClusters_clusters_end, &b_EcalBarrelClusters_clusters_end);
   fChain->SetBranchAddress("EcalBarrelClusters.hits_begin", EcalBarrelClusters_hits_begin, &b_EcalBarrelClusters_hits_begin);
   fChain->SetBranchAddress("EcalBarrelClusters.hits_end", EcalBarrelClusters_hits_end, &b_EcalBarrelClusters_hits_end);
   fChain->SetBranchAddress("EcalBarrelClusters.particleIDs_begin", EcalBarrelClusters_particleIDs_begin, &b_EcalBarrelClusters_particleIDs_begin);
   fChain->SetBranchAddress("EcalBarrelClusters.particleIDs_end", EcalBarrelClusters_particleIDs_end, &b_EcalBarrelClusters_particleIDs_end);
   fChain->SetBranchAddress("_EcalBarrelClusters_clusters", &_EcalBarrelClusters_clusters_, &b__EcalBarrelClusters_clusters_);
   fChain->SetBranchAddress("_EcalBarrelClusters_clusters.index", _EcalBarrelClusters_clusters_index, &b__EcalBarrelClusters_clusters_index);
   fChain->SetBranchAddress("_EcalBarrelClusters_clusters.collectionID", _EcalBarrelClusters_clusters_collectionID, &b__EcalBarrelClusters_clusters_collectionID);
   fChain->SetBranchAddress("_EcalBarrelClusters_hits", &_EcalBarrelClusters_hits_, &b__EcalBarrelClusters_hits_);
   fChain->SetBranchAddress("_EcalBarrelClusters_hits.index", &_EcalBarrelClusters_hits_index, &b__EcalBarrelClusters_hits_index);
   fChain->SetBranchAddress("_EcalBarrelClusters_hits.collectionID", &_EcalBarrelClusters_hits_collectionID, &b__EcalBarrelClusters_hits_collectionID);
   fChain->SetBranchAddress("_EcalBarrelClusters_particleIDs", &_EcalBarrelClusters_particleIDs_, &b__EcalBarrelClusters_particleIDs_);
   fChain->SetBranchAddress("_EcalBarrelClusters_particleIDs.index", &_EcalBarrelClusters_particleIDs_index, &b__EcalBarrelClusters_particleIDs_index);
   fChain->SetBranchAddress("_EcalBarrelClusters_particleIDs.collectionID", &_EcalBarrelClusters_particleIDs_collectionID, &b__EcalBarrelClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_EcalBarrelClusters_shapeParameters", &_EcalBarrelClusters_shapeParameters, &b__EcalBarrelClusters_shapeParameters);
   fChain->SetBranchAddress("_EcalBarrelClusters_hitContributions", &_EcalBarrelClusters_hitContributions, &b__EcalBarrelClusters_hitContributions);
   fChain->SetBranchAddress("_EcalBarrelClusters_subdetectorEnergies", &_EcalBarrelClusters_subdetectorEnergies, &b__EcalBarrelClusters_subdetectorEnergies);
   fChain->SetBranchAddress("EcalBarrelImagingClusterAssociations", &EcalBarrelImagingClusterAssociations_, &b_EcalBarrelImagingClusterAssociations_);
   fChain->SetBranchAddress("EcalBarrelImagingClusterAssociations.simID", EcalBarrelImagingClusterAssociations_simID, &b_EcalBarrelImagingClusterAssociations_simID);
   fChain->SetBranchAddress("EcalBarrelImagingClusterAssociations.recID", EcalBarrelImagingClusterAssociations_recID, &b_EcalBarrelImagingClusterAssociations_recID);
   fChain->SetBranchAddress("EcalBarrelImagingClusterAssociations.weight", EcalBarrelImagingClusterAssociations_weight, &b_EcalBarrelImagingClusterAssociations_weight);
   fChain->SetBranchAddress("_EcalBarrelImagingClusterAssociations_rec", &_EcalBarrelImagingClusterAssociations_rec_, &b__EcalBarrelImagingClusterAssociations_rec_);
   fChain->SetBranchAddress("_EcalBarrelImagingClusterAssociations_rec.index", _EcalBarrelImagingClusterAssociations_rec_index, &b__EcalBarrelImagingClusterAssociations_rec_index);
   fChain->SetBranchAddress("_EcalBarrelImagingClusterAssociations_rec.collectionID", _EcalBarrelImagingClusterAssociations_rec_collectionID, &b__EcalBarrelImagingClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_EcalBarrelImagingClusterAssociations_sim", &_EcalBarrelImagingClusterAssociations_sim_, &b__EcalBarrelImagingClusterAssociations_sim_);
   fChain->SetBranchAddress("_EcalBarrelImagingClusterAssociations_sim.index", _EcalBarrelImagingClusterAssociations_sim_index, &b__EcalBarrelImagingClusterAssociations_sim_index);
   fChain->SetBranchAddress("_EcalBarrelImagingClusterAssociations_sim.collectionID", _EcalBarrelImagingClusterAssociations_sim_collectionID, &b__EcalBarrelImagingClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("EcalBarrelImagingClusters", &EcalBarrelImagingClusters_, &b_EcalBarrelImagingClusters_);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.type", EcalBarrelImagingClusters_type, &b_EcalBarrelImagingClusters_type);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.energy", EcalBarrelImagingClusters_energy, &b_EcalBarrelImagingClusters_energy);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.energyError", EcalBarrelImagingClusters_energyError, &b_EcalBarrelImagingClusters_energyError);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.time", EcalBarrelImagingClusters_time, &b_EcalBarrelImagingClusters_time);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.timeError", EcalBarrelImagingClusters_timeError, &b_EcalBarrelImagingClusters_timeError);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.nhits", EcalBarrelImagingClusters_nhits, &b_EcalBarrelImagingClusters_nhits);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.position.x", EcalBarrelImagingClusters_position_x, &b_EcalBarrelImagingClusters_position_x);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.position.y", EcalBarrelImagingClusters_position_y, &b_EcalBarrelImagingClusters_position_y);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.position.z", EcalBarrelImagingClusters_position_z, &b_EcalBarrelImagingClusters_position_z);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.positionError.xx", EcalBarrelImagingClusters_positionError_xx, &b_EcalBarrelImagingClusters_positionError_xx);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.positionError.yy", EcalBarrelImagingClusters_positionError_yy, &b_EcalBarrelImagingClusters_positionError_yy);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.positionError.zz", EcalBarrelImagingClusters_positionError_zz, &b_EcalBarrelImagingClusters_positionError_zz);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.positionError.xy", EcalBarrelImagingClusters_positionError_xy, &b_EcalBarrelImagingClusters_positionError_xy);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.positionError.xz", EcalBarrelImagingClusters_positionError_xz, &b_EcalBarrelImagingClusters_positionError_xz);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.positionError.yz", EcalBarrelImagingClusters_positionError_yz, &b_EcalBarrelImagingClusters_positionError_yz);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.intrinsicTheta", EcalBarrelImagingClusters_intrinsicTheta, &b_EcalBarrelImagingClusters_intrinsicTheta);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.intrinsicPhi", EcalBarrelImagingClusters_intrinsicPhi, &b_EcalBarrelImagingClusters_intrinsicPhi);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.intrinsicDirectionError.xx", EcalBarrelImagingClusters_intrinsicDirectionError_xx, &b_EcalBarrelImagingClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.intrinsicDirectionError.yy", EcalBarrelImagingClusters_intrinsicDirectionError_yy, &b_EcalBarrelImagingClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.intrinsicDirectionError.xy", EcalBarrelImagingClusters_intrinsicDirectionError_xy, &b_EcalBarrelImagingClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.shapeParameters_begin", EcalBarrelImagingClusters_shapeParameters_begin, &b_EcalBarrelImagingClusters_shapeParameters_begin);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.shapeParameters_end", EcalBarrelImagingClusters_shapeParameters_end, &b_EcalBarrelImagingClusters_shapeParameters_end);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.hitContributions_begin", EcalBarrelImagingClusters_hitContributions_begin, &b_EcalBarrelImagingClusters_hitContributions_begin);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.hitContributions_end", EcalBarrelImagingClusters_hitContributions_end, &b_EcalBarrelImagingClusters_hitContributions_end);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.subdetectorEnergies_begin", EcalBarrelImagingClusters_subdetectorEnergies_begin, &b_EcalBarrelImagingClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.subdetectorEnergies_end", EcalBarrelImagingClusters_subdetectorEnergies_end, &b_EcalBarrelImagingClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.clusters_begin", EcalBarrelImagingClusters_clusters_begin, &b_EcalBarrelImagingClusters_clusters_begin);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.clusters_end", EcalBarrelImagingClusters_clusters_end, &b_EcalBarrelImagingClusters_clusters_end);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.hits_begin", EcalBarrelImagingClusters_hits_begin, &b_EcalBarrelImagingClusters_hits_begin);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.hits_end", EcalBarrelImagingClusters_hits_end, &b_EcalBarrelImagingClusters_hits_end);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.particleIDs_begin", EcalBarrelImagingClusters_particleIDs_begin, &b_EcalBarrelImagingClusters_particleIDs_begin);
   fChain->SetBranchAddress("EcalBarrelImagingClusters.particleIDs_end", EcalBarrelImagingClusters_particleIDs_end, &b_EcalBarrelImagingClusters_particleIDs_end);
   fChain->SetBranchAddress("_EcalBarrelImagingClusters_clusters", &_EcalBarrelImagingClusters_clusters_, &b__EcalBarrelImagingClusters_clusters_);
   fChain->SetBranchAddress("_EcalBarrelImagingClusters_clusters.index", _EcalBarrelImagingClusters_clusters_index, &b__EcalBarrelImagingClusters_clusters_index);
   fChain->SetBranchAddress("_EcalBarrelImagingClusters_clusters.collectionID", _EcalBarrelImagingClusters_clusters_collectionID, &b__EcalBarrelImagingClusters_clusters_collectionID);
   fChain->SetBranchAddress("_EcalBarrelImagingClusters_hits", &_EcalBarrelImagingClusters_hits_, &b__EcalBarrelImagingClusters_hits_);
   fChain->SetBranchAddress("_EcalBarrelImagingClusters_hits.index", _EcalBarrelImagingClusters_hits_index, &b__EcalBarrelImagingClusters_hits_index);
   fChain->SetBranchAddress("_EcalBarrelImagingClusters_hits.collectionID", _EcalBarrelImagingClusters_hits_collectionID, &b__EcalBarrelImagingClusters_hits_collectionID);
   fChain->SetBranchAddress("_EcalBarrelImagingClusters_particleIDs", &_EcalBarrelImagingClusters_particleIDs_, &b__EcalBarrelImagingClusters_particleIDs_);
   fChain->SetBranchAddress("_EcalBarrelImagingClusters_particleIDs.index", &_EcalBarrelImagingClusters_particleIDs_index, &b__EcalBarrelImagingClusters_particleIDs_index);
   fChain->SetBranchAddress("_EcalBarrelImagingClusters_particleIDs.collectionID", &_EcalBarrelImagingClusters_particleIDs_collectionID, &b__EcalBarrelImagingClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_EcalBarrelImagingClusters_shapeParameters", &_EcalBarrelImagingClusters_shapeParameters, &b__EcalBarrelImagingClusters_shapeParameters);
   fChain->SetBranchAddress("_EcalBarrelImagingClusters_hitContributions", &_EcalBarrelImagingClusters_hitContributions, &b__EcalBarrelImagingClusters_hitContributions);
   fChain->SetBranchAddress("_EcalBarrelImagingClusters_subdetectorEnergies", &_EcalBarrelImagingClusters_subdetectorEnergies, &b__EcalBarrelImagingClusters_subdetectorEnergies);
   fChain->SetBranchAddress("EcalBarrelImagingRawHits", &EcalBarrelImagingRawHits_, &b_EcalBarrelImagingRawHits_);
   fChain->SetBranchAddress("EcalBarrelImagingRawHits.cellID", EcalBarrelImagingRawHits_cellID, &b_EcalBarrelImagingRawHits_cellID);
   fChain->SetBranchAddress("EcalBarrelImagingRawHits.amplitude", EcalBarrelImagingRawHits_amplitude, &b_EcalBarrelImagingRawHits_amplitude);
   fChain->SetBranchAddress("EcalBarrelImagingRawHits.timeStamp", EcalBarrelImagingRawHits_timeStamp, &b_EcalBarrelImagingRawHits_timeStamp);
   fChain->SetBranchAddress("EcalBarrelImagingRecHits", &EcalBarrelImagingRecHits_, &b_EcalBarrelImagingRecHits_);
   fChain->SetBranchAddress("EcalBarrelImagingRecHits.cellID", EcalBarrelImagingRecHits_cellID, &b_EcalBarrelImagingRecHits_cellID);
   fChain->SetBranchAddress("EcalBarrelImagingRecHits.energy", EcalBarrelImagingRecHits_energy, &b_EcalBarrelImagingRecHits_energy);
   fChain->SetBranchAddress("EcalBarrelImagingRecHits.energyError", EcalBarrelImagingRecHits_energyError, &b_EcalBarrelImagingRecHits_energyError);
   fChain->SetBranchAddress("EcalBarrelImagingRecHits.time", EcalBarrelImagingRecHits_time, &b_EcalBarrelImagingRecHits_time);
   fChain->SetBranchAddress("EcalBarrelImagingRecHits.timeError", EcalBarrelImagingRecHits_timeError, &b_EcalBarrelImagingRecHits_timeError);
   fChain->SetBranchAddress("EcalBarrelImagingRecHits.position.x", EcalBarrelImagingRecHits_position_x, &b_EcalBarrelImagingRecHits_position_x);
   fChain->SetBranchAddress("EcalBarrelImagingRecHits.position.y", EcalBarrelImagingRecHits_position_y, &b_EcalBarrelImagingRecHits_position_y);
   fChain->SetBranchAddress("EcalBarrelImagingRecHits.position.z", EcalBarrelImagingRecHits_position_z, &b_EcalBarrelImagingRecHits_position_z);
   fChain->SetBranchAddress("EcalBarrelImagingRecHits.dimension.x", EcalBarrelImagingRecHits_dimension_x, &b_EcalBarrelImagingRecHits_dimension_x);
   fChain->SetBranchAddress("EcalBarrelImagingRecHits.dimension.y", EcalBarrelImagingRecHits_dimension_y, &b_EcalBarrelImagingRecHits_dimension_y);
   fChain->SetBranchAddress("EcalBarrelImagingRecHits.dimension.z", EcalBarrelImagingRecHits_dimension_z, &b_EcalBarrelImagingRecHits_dimension_z);
   fChain->SetBranchAddress("EcalBarrelImagingRecHits.sector", EcalBarrelImagingRecHits_sector, &b_EcalBarrelImagingRecHits_sector);
   fChain->SetBranchAddress("EcalBarrelImagingRecHits.layer", EcalBarrelImagingRecHits_layer, &b_EcalBarrelImagingRecHits_layer);
   fChain->SetBranchAddress("EcalBarrelImagingRecHits.local.x", EcalBarrelImagingRecHits_local_x, &b_EcalBarrelImagingRecHits_local_x);
   fChain->SetBranchAddress("EcalBarrelImagingRecHits.local.y", EcalBarrelImagingRecHits_local_y, &b_EcalBarrelImagingRecHits_local_y);
   fChain->SetBranchAddress("EcalBarrelImagingRecHits.local.z", EcalBarrelImagingRecHits_local_z, &b_EcalBarrelImagingRecHits_local_z);
   fChain->SetBranchAddress("EcalBarrelScFiClusterAssociations", &EcalBarrelScFiClusterAssociations_, &b_EcalBarrelScFiClusterAssociations_);
   fChain->SetBranchAddress("EcalBarrelScFiClusterAssociations.simID", EcalBarrelScFiClusterAssociations_simID, &b_EcalBarrelScFiClusterAssociations_simID);
   fChain->SetBranchAddress("EcalBarrelScFiClusterAssociations.recID", EcalBarrelScFiClusterAssociations_recID, &b_EcalBarrelScFiClusterAssociations_recID);
   fChain->SetBranchAddress("EcalBarrelScFiClusterAssociations.weight", EcalBarrelScFiClusterAssociations_weight, &b_EcalBarrelScFiClusterAssociations_weight);
   fChain->SetBranchAddress("_EcalBarrelScFiClusterAssociations_rec", &_EcalBarrelScFiClusterAssociations_rec_, &b__EcalBarrelScFiClusterAssociations_rec_);
   fChain->SetBranchAddress("_EcalBarrelScFiClusterAssociations_rec.index", _EcalBarrelScFiClusterAssociations_rec_index, &b__EcalBarrelScFiClusterAssociations_rec_index);
   fChain->SetBranchAddress("_EcalBarrelScFiClusterAssociations_rec.collectionID", _EcalBarrelScFiClusterAssociations_rec_collectionID, &b__EcalBarrelScFiClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_EcalBarrelScFiClusterAssociations_sim", &_EcalBarrelScFiClusterAssociations_sim_, &b__EcalBarrelScFiClusterAssociations_sim_);
   fChain->SetBranchAddress("_EcalBarrelScFiClusterAssociations_sim.index", _EcalBarrelScFiClusterAssociations_sim_index, &b__EcalBarrelScFiClusterAssociations_sim_index);
   fChain->SetBranchAddress("_EcalBarrelScFiClusterAssociations_sim.collectionID", _EcalBarrelScFiClusterAssociations_sim_collectionID, &b__EcalBarrelScFiClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("EcalBarrelScFiClusters", &EcalBarrelScFiClusters_, &b_EcalBarrelScFiClusters_);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.type", EcalBarrelScFiClusters_type, &b_EcalBarrelScFiClusters_type);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.energy", EcalBarrelScFiClusters_energy, &b_EcalBarrelScFiClusters_energy);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.energyError", EcalBarrelScFiClusters_energyError, &b_EcalBarrelScFiClusters_energyError);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.time", EcalBarrelScFiClusters_time, &b_EcalBarrelScFiClusters_time);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.timeError", EcalBarrelScFiClusters_timeError, &b_EcalBarrelScFiClusters_timeError);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.nhits", EcalBarrelScFiClusters_nhits, &b_EcalBarrelScFiClusters_nhits);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.position.x", EcalBarrelScFiClusters_position_x, &b_EcalBarrelScFiClusters_position_x);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.position.y", EcalBarrelScFiClusters_position_y, &b_EcalBarrelScFiClusters_position_y);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.position.z", EcalBarrelScFiClusters_position_z, &b_EcalBarrelScFiClusters_position_z);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.positionError.xx", EcalBarrelScFiClusters_positionError_xx, &b_EcalBarrelScFiClusters_positionError_xx);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.positionError.yy", EcalBarrelScFiClusters_positionError_yy, &b_EcalBarrelScFiClusters_positionError_yy);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.positionError.zz", EcalBarrelScFiClusters_positionError_zz, &b_EcalBarrelScFiClusters_positionError_zz);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.positionError.xy", EcalBarrelScFiClusters_positionError_xy, &b_EcalBarrelScFiClusters_positionError_xy);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.positionError.xz", EcalBarrelScFiClusters_positionError_xz, &b_EcalBarrelScFiClusters_positionError_xz);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.positionError.yz", EcalBarrelScFiClusters_positionError_yz, &b_EcalBarrelScFiClusters_positionError_yz);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.intrinsicTheta", EcalBarrelScFiClusters_intrinsicTheta, &b_EcalBarrelScFiClusters_intrinsicTheta);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.intrinsicPhi", EcalBarrelScFiClusters_intrinsicPhi, &b_EcalBarrelScFiClusters_intrinsicPhi);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.intrinsicDirectionError.xx", EcalBarrelScFiClusters_intrinsicDirectionError_xx, &b_EcalBarrelScFiClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.intrinsicDirectionError.yy", EcalBarrelScFiClusters_intrinsicDirectionError_yy, &b_EcalBarrelScFiClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.intrinsicDirectionError.xy", EcalBarrelScFiClusters_intrinsicDirectionError_xy, &b_EcalBarrelScFiClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.shapeParameters_begin", EcalBarrelScFiClusters_shapeParameters_begin, &b_EcalBarrelScFiClusters_shapeParameters_begin);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.shapeParameters_end", EcalBarrelScFiClusters_shapeParameters_end, &b_EcalBarrelScFiClusters_shapeParameters_end);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.hitContributions_begin", EcalBarrelScFiClusters_hitContributions_begin, &b_EcalBarrelScFiClusters_hitContributions_begin);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.hitContributions_end", EcalBarrelScFiClusters_hitContributions_end, &b_EcalBarrelScFiClusters_hitContributions_end);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.subdetectorEnergies_begin", EcalBarrelScFiClusters_subdetectorEnergies_begin, &b_EcalBarrelScFiClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.subdetectorEnergies_end", EcalBarrelScFiClusters_subdetectorEnergies_end, &b_EcalBarrelScFiClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.clusters_begin", EcalBarrelScFiClusters_clusters_begin, &b_EcalBarrelScFiClusters_clusters_begin);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.clusters_end", EcalBarrelScFiClusters_clusters_end, &b_EcalBarrelScFiClusters_clusters_end);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.hits_begin", EcalBarrelScFiClusters_hits_begin, &b_EcalBarrelScFiClusters_hits_begin);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.hits_end", EcalBarrelScFiClusters_hits_end, &b_EcalBarrelScFiClusters_hits_end);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.particleIDs_begin", EcalBarrelScFiClusters_particleIDs_begin, &b_EcalBarrelScFiClusters_particleIDs_begin);
   fChain->SetBranchAddress("EcalBarrelScFiClusters.particleIDs_end", EcalBarrelScFiClusters_particleIDs_end, &b_EcalBarrelScFiClusters_particleIDs_end);
   fChain->SetBranchAddress("_EcalBarrelScFiClusters_clusters", &_EcalBarrelScFiClusters_clusters_, &b__EcalBarrelScFiClusters_clusters_);
   fChain->SetBranchAddress("_EcalBarrelScFiClusters_clusters.index", &_EcalBarrelScFiClusters_clusters_index, &b__EcalBarrelScFiClusters_clusters_index);
   fChain->SetBranchAddress("_EcalBarrelScFiClusters_clusters.collectionID", &_EcalBarrelScFiClusters_clusters_collectionID, &b__EcalBarrelScFiClusters_clusters_collectionID);
   fChain->SetBranchAddress("_EcalBarrelScFiClusters_hits", &_EcalBarrelScFiClusters_hits_, &b__EcalBarrelScFiClusters_hits_);
   fChain->SetBranchAddress("_EcalBarrelScFiClusters_hits.index", &_EcalBarrelScFiClusters_hits_index, &b__EcalBarrelScFiClusters_hits_index);
   fChain->SetBranchAddress("_EcalBarrelScFiClusters_hits.collectionID", &_EcalBarrelScFiClusters_hits_collectionID, &b__EcalBarrelScFiClusters_hits_collectionID);
   fChain->SetBranchAddress("_EcalBarrelScFiClusters_particleIDs", &_EcalBarrelScFiClusters_particleIDs_, &b__EcalBarrelScFiClusters_particleIDs_);
   fChain->SetBranchAddress("_EcalBarrelScFiClusters_particleIDs.index", &_EcalBarrelScFiClusters_particleIDs_index, &b__EcalBarrelScFiClusters_particleIDs_index);
   fChain->SetBranchAddress("_EcalBarrelScFiClusters_particleIDs.collectionID", &_EcalBarrelScFiClusters_particleIDs_collectionID, &b__EcalBarrelScFiClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_EcalBarrelScFiClusters_shapeParameters", &_EcalBarrelScFiClusters_shapeParameters, &b__EcalBarrelScFiClusters_shapeParameters);
   fChain->SetBranchAddress("_EcalBarrelScFiClusters_hitContributions", &_EcalBarrelScFiClusters_hitContributions, &b__EcalBarrelScFiClusters_hitContributions);
   fChain->SetBranchAddress("_EcalBarrelScFiClusters_subdetectorEnergies", &_EcalBarrelScFiClusters_subdetectorEnergies, &b__EcalBarrelScFiClusters_subdetectorEnergies);
   fChain->SetBranchAddress("EcalBarrelScFiRawHits", &EcalBarrelScFiRawHits_, &b_EcalBarrelScFiRawHits_);
   fChain->SetBranchAddress("EcalBarrelScFiRawHits.cellID", EcalBarrelScFiRawHits_cellID, &b_EcalBarrelScFiRawHits_cellID);
   fChain->SetBranchAddress("EcalBarrelScFiRawHits.amplitude", EcalBarrelScFiRawHits_amplitude, &b_EcalBarrelScFiRawHits_amplitude);
   fChain->SetBranchAddress("EcalBarrelScFiRawHits.timeStamp", EcalBarrelScFiRawHits_timeStamp, &b_EcalBarrelScFiRawHits_timeStamp);
   fChain->SetBranchAddress("EcalBarrelScFiRecHits", &EcalBarrelScFiRecHits_, &b_EcalBarrelScFiRecHits_);
   fChain->SetBranchAddress("EcalBarrelScFiRecHits.cellID", EcalBarrelScFiRecHits_cellID, &b_EcalBarrelScFiRecHits_cellID);
   fChain->SetBranchAddress("EcalBarrelScFiRecHits.energy", EcalBarrelScFiRecHits_energy, &b_EcalBarrelScFiRecHits_energy);
   fChain->SetBranchAddress("EcalBarrelScFiRecHits.energyError", EcalBarrelScFiRecHits_energyError, &b_EcalBarrelScFiRecHits_energyError);
   fChain->SetBranchAddress("EcalBarrelScFiRecHits.time", EcalBarrelScFiRecHits_time, &b_EcalBarrelScFiRecHits_time);
   fChain->SetBranchAddress("EcalBarrelScFiRecHits.timeError", EcalBarrelScFiRecHits_timeError, &b_EcalBarrelScFiRecHits_timeError);
   fChain->SetBranchAddress("EcalBarrelScFiRecHits.position.x", EcalBarrelScFiRecHits_position_x, &b_EcalBarrelScFiRecHits_position_x);
   fChain->SetBranchAddress("EcalBarrelScFiRecHits.position.y", EcalBarrelScFiRecHits_position_y, &b_EcalBarrelScFiRecHits_position_y);
   fChain->SetBranchAddress("EcalBarrelScFiRecHits.position.z", EcalBarrelScFiRecHits_position_z, &b_EcalBarrelScFiRecHits_position_z);
   fChain->SetBranchAddress("EcalBarrelScFiRecHits.dimension.x", EcalBarrelScFiRecHits_dimension_x, &b_EcalBarrelScFiRecHits_dimension_x);
   fChain->SetBranchAddress("EcalBarrelScFiRecHits.dimension.y", EcalBarrelScFiRecHits_dimension_y, &b_EcalBarrelScFiRecHits_dimension_y);
   fChain->SetBranchAddress("EcalBarrelScFiRecHits.dimension.z", EcalBarrelScFiRecHits_dimension_z, &b_EcalBarrelScFiRecHits_dimension_z);
   fChain->SetBranchAddress("EcalBarrelScFiRecHits.sector", EcalBarrelScFiRecHits_sector, &b_EcalBarrelScFiRecHits_sector);
   fChain->SetBranchAddress("EcalBarrelScFiRecHits.layer", EcalBarrelScFiRecHits_layer, &b_EcalBarrelScFiRecHits_layer);
   fChain->SetBranchAddress("EcalBarrelScFiRecHits.local.x", EcalBarrelScFiRecHits_local_x, &b_EcalBarrelScFiRecHits_local_x);
   fChain->SetBranchAddress("EcalBarrelScFiRecHits.local.y", EcalBarrelScFiRecHits_local_y, &b_EcalBarrelScFiRecHits_local_y);
   fChain->SetBranchAddress("EcalBarrelScFiRecHits.local.z", EcalBarrelScFiRecHits_local_z, &b_EcalBarrelScFiRecHits_local_z);
   fChain->SetBranchAddress("EcalBarrelTruthClusterAssociations", &EcalBarrelTruthClusterAssociations_, &b_EcalBarrelTruthClusterAssociations_);
   fChain->SetBranchAddress("EcalBarrelTruthClusterAssociations.simID", EcalBarrelTruthClusterAssociations_simID, &b_EcalBarrelTruthClusterAssociations_simID);
   fChain->SetBranchAddress("EcalBarrelTruthClusterAssociations.recID", EcalBarrelTruthClusterAssociations_recID, &b_EcalBarrelTruthClusterAssociations_recID);
   fChain->SetBranchAddress("EcalBarrelTruthClusterAssociations.weight", EcalBarrelTruthClusterAssociations_weight, &b_EcalBarrelTruthClusterAssociations_weight);
   fChain->SetBranchAddress("_EcalBarrelTruthClusterAssociations_rec", &_EcalBarrelTruthClusterAssociations_rec_, &b__EcalBarrelTruthClusterAssociations_rec_);
   fChain->SetBranchAddress("_EcalBarrelTruthClusterAssociations_rec.index", _EcalBarrelTruthClusterAssociations_rec_index, &b__EcalBarrelTruthClusterAssociations_rec_index);
   fChain->SetBranchAddress("_EcalBarrelTruthClusterAssociations_rec.collectionID", _EcalBarrelTruthClusterAssociations_rec_collectionID, &b__EcalBarrelTruthClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_EcalBarrelTruthClusterAssociations_sim", &_EcalBarrelTruthClusterAssociations_sim_, &b__EcalBarrelTruthClusterAssociations_sim_);
   fChain->SetBranchAddress("_EcalBarrelTruthClusterAssociations_sim.index", _EcalBarrelTruthClusterAssociations_sim_index, &b__EcalBarrelTruthClusterAssociations_sim_index);
   fChain->SetBranchAddress("_EcalBarrelTruthClusterAssociations_sim.collectionID", _EcalBarrelTruthClusterAssociations_sim_collectionID, &b__EcalBarrelTruthClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("EcalBarrelTruthClusters", &EcalBarrelTruthClusters_, &b_EcalBarrelTruthClusters_);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.type", EcalBarrelTruthClusters_type, &b_EcalBarrelTruthClusters_type);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.energy", EcalBarrelTruthClusters_energy, &b_EcalBarrelTruthClusters_energy);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.energyError", EcalBarrelTruthClusters_energyError, &b_EcalBarrelTruthClusters_energyError);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.time", EcalBarrelTruthClusters_time, &b_EcalBarrelTruthClusters_time);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.timeError", EcalBarrelTruthClusters_timeError, &b_EcalBarrelTruthClusters_timeError);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.nhits", EcalBarrelTruthClusters_nhits, &b_EcalBarrelTruthClusters_nhits);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.position.x", EcalBarrelTruthClusters_position_x, &b_EcalBarrelTruthClusters_position_x);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.position.y", EcalBarrelTruthClusters_position_y, &b_EcalBarrelTruthClusters_position_y);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.position.z", EcalBarrelTruthClusters_position_z, &b_EcalBarrelTruthClusters_position_z);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.positionError.xx", EcalBarrelTruthClusters_positionError_xx, &b_EcalBarrelTruthClusters_positionError_xx);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.positionError.yy", EcalBarrelTruthClusters_positionError_yy, &b_EcalBarrelTruthClusters_positionError_yy);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.positionError.zz", EcalBarrelTruthClusters_positionError_zz, &b_EcalBarrelTruthClusters_positionError_zz);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.positionError.xy", EcalBarrelTruthClusters_positionError_xy, &b_EcalBarrelTruthClusters_positionError_xy);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.positionError.xz", EcalBarrelTruthClusters_positionError_xz, &b_EcalBarrelTruthClusters_positionError_xz);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.positionError.yz", EcalBarrelTruthClusters_positionError_yz, &b_EcalBarrelTruthClusters_positionError_yz);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.intrinsicTheta", EcalBarrelTruthClusters_intrinsicTheta, &b_EcalBarrelTruthClusters_intrinsicTheta);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.intrinsicPhi", EcalBarrelTruthClusters_intrinsicPhi, &b_EcalBarrelTruthClusters_intrinsicPhi);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.intrinsicDirectionError.xx", EcalBarrelTruthClusters_intrinsicDirectionError_xx, &b_EcalBarrelTruthClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.intrinsicDirectionError.yy", EcalBarrelTruthClusters_intrinsicDirectionError_yy, &b_EcalBarrelTruthClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.intrinsicDirectionError.xy", EcalBarrelTruthClusters_intrinsicDirectionError_xy, &b_EcalBarrelTruthClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.shapeParameters_begin", EcalBarrelTruthClusters_shapeParameters_begin, &b_EcalBarrelTruthClusters_shapeParameters_begin);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.shapeParameters_end", EcalBarrelTruthClusters_shapeParameters_end, &b_EcalBarrelTruthClusters_shapeParameters_end);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.hitContributions_begin", EcalBarrelTruthClusters_hitContributions_begin, &b_EcalBarrelTruthClusters_hitContributions_begin);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.hitContributions_end", EcalBarrelTruthClusters_hitContributions_end, &b_EcalBarrelTruthClusters_hitContributions_end);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.subdetectorEnergies_begin", EcalBarrelTruthClusters_subdetectorEnergies_begin, &b_EcalBarrelTruthClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.subdetectorEnergies_end", EcalBarrelTruthClusters_subdetectorEnergies_end, &b_EcalBarrelTruthClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.clusters_begin", EcalBarrelTruthClusters_clusters_begin, &b_EcalBarrelTruthClusters_clusters_begin);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.clusters_end", EcalBarrelTruthClusters_clusters_end, &b_EcalBarrelTruthClusters_clusters_end);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.hits_begin", EcalBarrelTruthClusters_hits_begin, &b_EcalBarrelTruthClusters_hits_begin);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.hits_end", EcalBarrelTruthClusters_hits_end, &b_EcalBarrelTruthClusters_hits_end);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.particleIDs_begin", EcalBarrelTruthClusters_particleIDs_begin, &b_EcalBarrelTruthClusters_particleIDs_begin);
   fChain->SetBranchAddress("EcalBarrelTruthClusters.particleIDs_end", EcalBarrelTruthClusters_particleIDs_end, &b_EcalBarrelTruthClusters_particleIDs_end);
   fChain->SetBranchAddress("_EcalBarrelTruthClusters_clusters", &_EcalBarrelTruthClusters_clusters_, &b__EcalBarrelTruthClusters_clusters_);
   fChain->SetBranchAddress("_EcalBarrelTruthClusters_clusters.index", _EcalBarrelTruthClusters_clusters_index, &b__EcalBarrelTruthClusters_clusters_index);
   fChain->SetBranchAddress("_EcalBarrelTruthClusters_clusters.collectionID", _EcalBarrelTruthClusters_clusters_collectionID, &b__EcalBarrelTruthClusters_clusters_collectionID);
   fChain->SetBranchAddress("_EcalBarrelTruthClusters_hits", &_EcalBarrelTruthClusters_hits_, &b__EcalBarrelTruthClusters_hits_);
   fChain->SetBranchAddress("_EcalBarrelTruthClusters_hits.index", _EcalBarrelTruthClusters_hits_index, &b__EcalBarrelTruthClusters_hits_index);
   fChain->SetBranchAddress("_EcalBarrelTruthClusters_hits.collectionID", _EcalBarrelTruthClusters_hits_collectionID, &b__EcalBarrelTruthClusters_hits_collectionID);
   fChain->SetBranchAddress("_EcalBarrelTruthClusters_particleIDs", &_EcalBarrelTruthClusters_particleIDs_, &b__EcalBarrelTruthClusters_particleIDs_);
   fChain->SetBranchAddress("_EcalBarrelTruthClusters_particleIDs.index", &_EcalBarrelTruthClusters_particleIDs_index, &b__EcalBarrelTruthClusters_particleIDs_index);
   fChain->SetBranchAddress("_EcalBarrelTruthClusters_particleIDs.collectionID", &_EcalBarrelTruthClusters_particleIDs_collectionID, &b__EcalBarrelTruthClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_EcalBarrelTruthClusters_shapeParameters", &_EcalBarrelTruthClusters_shapeParameters, &b__EcalBarrelTruthClusters_shapeParameters);
   fChain->SetBranchAddress("_EcalBarrelTruthClusters_hitContributions", &_EcalBarrelTruthClusters_hitContributions, &b__EcalBarrelTruthClusters_hitContributions);
   fChain->SetBranchAddress("_EcalBarrelTruthClusters_subdetectorEnergies", &_EcalBarrelTruthClusters_subdetectorEnergies, &b__EcalBarrelTruthClusters_subdetectorEnergies);
   fChain->SetBranchAddress("EcalEndcapNClusterAssociations", &EcalEndcapNClusterAssociations_, &b_EcalEndcapNClusterAssociations_);
   fChain->SetBranchAddress("EcalEndcapNClusterAssociations.simID", EcalEndcapNClusterAssociations_simID, &b_EcalEndcapNClusterAssociations_simID);
   fChain->SetBranchAddress("EcalEndcapNClusterAssociations.recID", EcalEndcapNClusterAssociations_recID, &b_EcalEndcapNClusterAssociations_recID);
   fChain->SetBranchAddress("EcalEndcapNClusterAssociations.weight", EcalEndcapNClusterAssociations_weight, &b_EcalEndcapNClusterAssociations_weight);
   fChain->SetBranchAddress("_EcalEndcapNClusterAssociations_rec", &_EcalEndcapNClusterAssociations_rec_, &b__EcalEndcapNClusterAssociations_rec_);
   fChain->SetBranchAddress("_EcalEndcapNClusterAssociations_rec.index", _EcalEndcapNClusterAssociations_rec_index, &b__EcalEndcapNClusterAssociations_rec_index);
   fChain->SetBranchAddress("_EcalEndcapNClusterAssociations_rec.collectionID", _EcalEndcapNClusterAssociations_rec_collectionID, &b__EcalEndcapNClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_EcalEndcapNClusterAssociations_sim", &_EcalEndcapNClusterAssociations_sim_, &b__EcalEndcapNClusterAssociations_sim_);
   fChain->SetBranchAddress("_EcalEndcapNClusterAssociations_sim.index", _EcalEndcapNClusterAssociations_sim_index, &b__EcalEndcapNClusterAssociations_sim_index);
   fChain->SetBranchAddress("_EcalEndcapNClusterAssociations_sim.collectionID", _EcalEndcapNClusterAssociations_sim_collectionID, &b__EcalEndcapNClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("EcalEndcapNClusters", &EcalEndcapNClusters_, &b_EcalEndcapNClusters_);
   fChain->SetBranchAddress("EcalEndcapNClusters.type", EcalEndcapNClusters_type, &b_EcalEndcapNClusters_type);
   fChain->SetBranchAddress("EcalEndcapNClusters.energy", EcalEndcapNClusters_energy, &b_EcalEndcapNClusters_energy);
   fChain->SetBranchAddress("EcalEndcapNClusters.energyError", EcalEndcapNClusters_energyError, &b_EcalEndcapNClusters_energyError);
   fChain->SetBranchAddress("EcalEndcapNClusters.time", EcalEndcapNClusters_time, &b_EcalEndcapNClusters_time);
   fChain->SetBranchAddress("EcalEndcapNClusters.timeError", EcalEndcapNClusters_timeError, &b_EcalEndcapNClusters_timeError);
   fChain->SetBranchAddress("EcalEndcapNClusters.nhits", EcalEndcapNClusters_nhits, &b_EcalEndcapNClusters_nhits);
   fChain->SetBranchAddress("EcalEndcapNClusters.position.x", EcalEndcapNClusters_position_x, &b_EcalEndcapNClusters_position_x);
   fChain->SetBranchAddress("EcalEndcapNClusters.position.y", EcalEndcapNClusters_position_y, &b_EcalEndcapNClusters_position_y);
   fChain->SetBranchAddress("EcalEndcapNClusters.position.z", EcalEndcapNClusters_position_z, &b_EcalEndcapNClusters_position_z);
   fChain->SetBranchAddress("EcalEndcapNClusters.positionError.xx", EcalEndcapNClusters_positionError_xx, &b_EcalEndcapNClusters_positionError_xx);
   fChain->SetBranchAddress("EcalEndcapNClusters.positionError.yy", EcalEndcapNClusters_positionError_yy, &b_EcalEndcapNClusters_positionError_yy);
   fChain->SetBranchAddress("EcalEndcapNClusters.positionError.zz", EcalEndcapNClusters_positionError_zz, &b_EcalEndcapNClusters_positionError_zz);
   fChain->SetBranchAddress("EcalEndcapNClusters.positionError.xy", EcalEndcapNClusters_positionError_xy, &b_EcalEndcapNClusters_positionError_xy);
   fChain->SetBranchAddress("EcalEndcapNClusters.positionError.xz", EcalEndcapNClusters_positionError_xz, &b_EcalEndcapNClusters_positionError_xz);
   fChain->SetBranchAddress("EcalEndcapNClusters.positionError.yz", EcalEndcapNClusters_positionError_yz, &b_EcalEndcapNClusters_positionError_yz);
   fChain->SetBranchAddress("EcalEndcapNClusters.intrinsicTheta", EcalEndcapNClusters_intrinsicTheta, &b_EcalEndcapNClusters_intrinsicTheta);
   fChain->SetBranchAddress("EcalEndcapNClusters.intrinsicPhi", EcalEndcapNClusters_intrinsicPhi, &b_EcalEndcapNClusters_intrinsicPhi);
   fChain->SetBranchAddress("EcalEndcapNClusters.intrinsicDirectionError.xx", EcalEndcapNClusters_intrinsicDirectionError_xx, &b_EcalEndcapNClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("EcalEndcapNClusters.intrinsicDirectionError.yy", EcalEndcapNClusters_intrinsicDirectionError_yy, &b_EcalEndcapNClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("EcalEndcapNClusters.intrinsicDirectionError.xy", EcalEndcapNClusters_intrinsicDirectionError_xy, &b_EcalEndcapNClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("EcalEndcapNClusters.shapeParameters_begin", EcalEndcapNClusters_shapeParameters_begin, &b_EcalEndcapNClusters_shapeParameters_begin);
   fChain->SetBranchAddress("EcalEndcapNClusters.shapeParameters_end", EcalEndcapNClusters_shapeParameters_end, &b_EcalEndcapNClusters_shapeParameters_end);
   fChain->SetBranchAddress("EcalEndcapNClusters.hitContributions_begin", EcalEndcapNClusters_hitContributions_begin, &b_EcalEndcapNClusters_hitContributions_begin);
   fChain->SetBranchAddress("EcalEndcapNClusters.hitContributions_end", EcalEndcapNClusters_hitContributions_end, &b_EcalEndcapNClusters_hitContributions_end);
   fChain->SetBranchAddress("EcalEndcapNClusters.subdetectorEnergies_begin", EcalEndcapNClusters_subdetectorEnergies_begin, &b_EcalEndcapNClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("EcalEndcapNClusters.subdetectorEnergies_end", EcalEndcapNClusters_subdetectorEnergies_end, &b_EcalEndcapNClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("EcalEndcapNClusters.clusters_begin", EcalEndcapNClusters_clusters_begin, &b_EcalEndcapNClusters_clusters_begin);
   fChain->SetBranchAddress("EcalEndcapNClusters.clusters_end", EcalEndcapNClusters_clusters_end, &b_EcalEndcapNClusters_clusters_end);
   fChain->SetBranchAddress("EcalEndcapNClusters.hits_begin", EcalEndcapNClusters_hits_begin, &b_EcalEndcapNClusters_hits_begin);
   fChain->SetBranchAddress("EcalEndcapNClusters.hits_end", EcalEndcapNClusters_hits_end, &b_EcalEndcapNClusters_hits_end);
   fChain->SetBranchAddress("EcalEndcapNClusters.particleIDs_begin", EcalEndcapNClusters_particleIDs_begin, &b_EcalEndcapNClusters_particleIDs_begin);
   fChain->SetBranchAddress("EcalEndcapNClusters.particleIDs_end", EcalEndcapNClusters_particleIDs_end, &b_EcalEndcapNClusters_particleIDs_end);
   fChain->SetBranchAddress("_EcalEndcapNClusters_clusters", &_EcalEndcapNClusters_clusters_, &b__EcalEndcapNClusters_clusters_);
   fChain->SetBranchAddress("_EcalEndcapNClusters_clusters.index", &_EcalEndcapNClusters_clusters_index, &b__EcalEndcapNClusters_clusters_index);
   fChain->SetBranchAddress("_EcalEndcapNClusters_clusters.collectionID", &_EcalEndcapNClusters_clusters_collectionID, &b__EcalEndcapNClusters_clusters_collectionID);
   fChain->SetBranchAddress("_EcalEndcapNClusters_hits", &_EcalEndcapNClusters_hits_, &b__EcalEndcapNClusters_hits_);
   fChain->SetBranchAddress("_EcalEndcapNClusters_hits.index", &_EcalEndcapNClusters_hits_index, &b__EcalEndcapNClusters_hits_index);
   fChain->SetBranchAddress("_EcalEndcapNClusters_hits.collectionID", &_EcalEndcapNClusters_hits_collectionID, &b__EcalEndcapNClusters_hits_collectionID);
   fChain->SetBranchAddress("_EcalEndcapNClusters_particleIDs", &_EcalEndcapNClusters_particleIDs_, &b__EcalEndcapNClusters_particleIDs_);
   fChain->SetBranchAddress("_EcalEndcapNClusters_particleIDs.index", &_EcalEndcapNClusters_particleIDs_index, &b__EcalEndcapNClusters_particleIDs_index);
   fChain->SetBranchAddress("_EcalEndcapNClusters_particleIDs.collectionID", &_EcalEndcapNClusters_particleIDs_collectionID, &b__EcalEndcapNClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_EcalEndcapNClusters_shapeParameters", &_EcalEndcapNClusters_shapeParameters, &b__EcalEndcapNClusters_shapeParameters);
   fChain->SetBranchAddress("_EcalEndcapNClusters_hitContributions", &_EcalEndcapNClusters_hitContributions, &b__EcalEndcapNClusters_hitContributions);
   fChain->SetBranchAddress("_EcalEndcapNClusters_subdetectorEnergies", &_EcalEndcapNClusters_subdetectorEnergies, &b__EcalEndcapNClusters_subdetectorEnergies);
   fChain->SetBranchAddress("EcalEndcapNRawHits", &EcalEndcapNRawHits_, &b_EcalEndcapNRawHits_);
   fChain->SetBranchAddress("EcalEndcapNRawHits.cellID", EcalEndcapNRawHits_cellID, &b_EcalEndcapNRawHits_cellID);
   fChain->SetBranchAddress("EcalEndcapNRawHits.amplitude", EcalEndcapNRawHits_amplitude, &b_EcalEndcapNRawHits_amplitude);
   fChain->SetBranchAddress("EcalEndcapNRawHits.timeStamp", EcalEndcapNRawHits_timeStamp, &b_EcalEndcapNRawHits_timeStamp);
   fChain->SetBranchAddress("EcalEndcapNRecHits", &EcalEndcapNRecHits_, &b_EcalEndcapNRecHits_);
   fChain->SetBranchAddress("EcalEndcapNRecHits.cellID", EcalEndcapNRecHits_cellID, &b_EcalEndcapNRecHits_cellID);
   fChain->SetBranchAddress("EcalEndcapNRecHits.energy", EcalEndcapNRecHits_energy, &b_EcalEndcapNRecHits_energy);
   fChain->SetBranchAddress("EcalEndcapNRecHits.energyError", EcalEndcapNRecHits_energyError, &b_EcalEndcapNRecHits_energyError);
   fChain->SetBranchAddress("EcalEndcapNRecHits.time", EcalEndcapNRecHits_time, &b_EcalEndcapNRecHits_time);
   fChain->SetBranchAddress("EcalEndcapNRecHits.timeError", EcalEndcapNRecHits_timeError, &b_EcalEndcapNRecHits_timeError);
   fChain->SetBranchAddress("EcalEndcapNRecHits.position.x", EcalEndcapNRecHits_position_x, &b_EcalEndcapNRecHits_position_x);
   fChain->SetBranchAddress("EcalEndcapNRecHits.position.y", EcalEndcapNRecHits_position_y, &b_EcalEndcapNRecHits_position_y);
   fChain->SetBranchAddress("EcalEndcapNRecHits.position.z", EcalEndcapNRecHits_position_z, &b_EcalEndcapNRecHits_position_z);
   fChain->SetBranchAddress("EcalEndcapNRecHits.dimension.x", EcalEndcapNRecHits_dimension_x, &b_EcalEndcapNRecHits_dimension_x);
   fChain->SetBranchAddress("EcalEndcapNRecHits.dimension.y", EcalEndcapNRecHits_dimension_y, &b_EcalEndcapNRecHits_dimension_y);
   fChain->SetBranchAddress("EcalEndcapNRecHits.dimension.z", EcalEndcapNRecHits_dimension_z, &b_EcalEndcapNRecHits_dimension_z);
   fChain->SetBranchAddress("EcalEndcapNRecHits.sector", EcalEndcapNRecHits_sector, &b_EcalEndcapNRecHits_sector);
   fChain->SetBranchAddress("EcalEndcapNRecHits.layer", EcalEndcapNRecHits_layer, &b_EcalEndcapNRecHits_layer);
   fChain->SetBranchAddress("EcalEndcapNRecHits.local.x", EcalEndcapNRecHits_local_x, &b_EcalEndcapNRecHits_local_x);
   fChain->SetBranchAddress("EcalEndcapNRecHits.local.y", EcalEndcapNRecHits_local_y, &b_EcalEndcapNRecHits_local_y);
   fChain->SetBranchAddress("EcalEndcapNRecHits.local.z", EcalEndcapNRecHits_local_z, &b_EcalEndcapNRecHits_local_z);
   fChain->SetBranchAddress("EcalEndcapNTruthClusterAssociations", &EcalEndcapNTruthClusterAssociations_, &b_EcalEndcapNTruthClusterAssociations_);
   fChain->SetBranchAddress("EcalEndcapNTruthClusterAssociations.simID", EcalEndcapNTruthClusterAssociations_simID, &b_EcalEndcapNTruthClusterAssociations_simID);
   fChain->SetBranchAddress("EcalEndcapNTruthClusterAssociations.recID", EcalEndcapNTruthClusterAssociations_recID, &b_EcalEndcapNTruthClusterAssociations_recID);
   fChain->SetBranchAddress("EcalEndcapNTruthClusterAssociations.weight", EcalEndcapNTruthClusterAssociations_weight, &b_EcalEndcapNTruthClusterAssociations_weight);
   fChain->SetBranchAddress("_EcalEndcapNTruthClusterAssociations_rec", &_EcalEndcapNTruthClusterAssociations_rec_, &b__EcalEndcapNTruthClusterAssociations_rec_);
   fChain->SetBranchAddress("_EcalEndcapNTruthClusterAssociations_rec.index", _EcalEndcapNTruthClusterAssociations_rec_index, &b__EcalEndcapNTruthClusterAssociations_rec_index);
   fChain->SetBranchAddress("_EcalEndcapNTruthClusterAssociations_rec.collectionID", _EcalEndcapNTruthClusterAssociations_rec_collectionID, &b__EcalEndcapNTruthClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_EcalEndcapNTruthClusterAssociations_sim", &_EcalEndcapNTruthClusterAssociations_sim_, &b__EcalEndcapNTruthClusterAssociations_sim_);
   fChain->SetBranchAddress("_EcalEndcapNTruthClusterAssociations_sim.index", _EcalEndcapNTruthClusterAssociations_sim_index, &b__EcalEndcapNTruthClusterAssociations_sim_index);
   fChain->SetBranchAddress("_EcalEndcapNTruthClusterAssociations_sim.collectionID", _EcalEndcapNTruthClusterAssociations_sim_collectionID, &b__EcalEndcapNTruthClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters", &EcalEndcapNTruthClusters_, &b_EcalEndcapNTruthClusters_);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.type", EcalEndcapNTruthClusters_type, &b_EcalEndcapNTruthClusters_type);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.energy", EcalEndcapNTruthClusters_energy, &b_EcalEndcapNTruthClusters_energy);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.energyError", EcalEndcapNTruthClusters_energyError, &b_EcalEndcapNTruthClusters_energyError);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.time", EcalEndcapNTruthClusters_time, &b_EcalEndcapNTruthClusters_time);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.timeError", EcalEndcapNTruthClusters_timeError, &b_EcalEndcapNTruthClusters_timeError);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.nhits", EcalEndcapNTruthClusters_nhits, &b_EcalEndcapNTruthClusters_nhits);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.position.x", EcalEndcapNTruthClusters_position_x, &b_EcalEndcapNTruthClusters_position_x);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.position.y", EcalEndcapNTruthClusters_position_y, &b_EcalEndcapNTruthClusters_position_y);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.position.z", EcalEndcapNTruthClusters_position_z, &b_EcalEndcapNTruthClusters_position_z);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.positionError.xx", EcalEndcapNTruthClusters_positionError_xx, &b_EcalEndcapNTruthClusters_positionError_xx);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.positionError.yy", EcalEndcapNTruthClusters_positionError_yy, &b_EcalEndcapNTruthClusters_positionError_yy);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.positionError.zz", EcalEndcapNTruthClusters_positionError_zz, &b_EcalEndcapNTruthClusters_positionError_zz);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.positionError.xy", EcalEndcapNTruthClusters_positionError_xy, &b_EcalEndcapNTruthClusters_positionError_xy);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.positionError.xz", EcalEndcapNTruthClusters_positionError_xz, &b_EcalEndcapNTruthClusters_positionError_xz);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.positionError.yz", EcalEndcapNTruthClusters_positionError_yz, &b_EcalEndcapNTruthClusters_positionError_yz);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.intrinsicTheta", EcalEndcapNTruthClusters_intrinsicTheta, &b_EcalEndcapNTruthClusters_intrinsicTheta);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.intrinsicPhi", EcalEndcapNTruthClusters_intrinsicPhi, &b_EcalEndcapNTruthClusters_intrinsicPhi);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.intrinsicDirectionError.xx", EcalEndcapNTruthClusters_intrinsicDirectionError_xx, &b_EcalEndcapNTruthClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.intrinsicDirectionError.yy", EcalEndcapNTruthClusters_intrinsicDirectionError_yy, &b_EcalEndcapNTruthClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.intrinsicDirectionError.xy", EcalEndcapNTruthClusters_intrinsicDirectionError_xy, &b_EcalEndcapNTruthClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.shapeParameters_begin", EcalEndcapNTruthClusters_shapeParameters_begin, &b_EcalEndcapNTruthClusters_shapeParameters_begin);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.shapeParameters_end", EcalEndcapNTruthClusters_shapeParameters_end, &b_EcalEndcapNTruthClusters_shapeParameters_end);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.hitContributions_begin", EcalEndcapNTruthClusters_hitContributions_begin, &b_EcalEndcapNTruthClusters_hitContributions_begin);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.hitContributions_end", EcalEndcapNTruthClusters_hitContributions_end, &b_EcalEndcapNTruthClusters_hitContributions_end);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.subdetectorEnergies_begin", EcalEndcapNTruthClusters_subdetectorEnergies_begin, &b_EcalEndcapNTruthClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.subdetectorEnergies_end", EcalEndcapNTruthClusters_subdetectorEnergies_end, &b_EcalEndcapNTruthClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.clusters_begin", EcalEndcapNTruthClusters_clusters_begin, &b_EcalEndcapNTruthClusters_clusters_begin);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.clusters_end", EcalEndcapNTruthClusters_clusters_end, &b_EcalEndcapNTruthClusters_clusters_end);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.hits_begin", EcalEndcapNTruthClusters_hits_begin, &b_EcalEndcapNTruthClusters_hits_begin);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.hits_end", EcalEndcapNTruthClusters_hits_end, &b_EcalEndcapNTruthClusters_hits_end);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.particleIDs_begin", EcalEndcapNTruthClusters_particleIDs_begin, &b_EcalEndcapNTruthClusters_particleIDs_begin);
   fChain->SetBranchAddress("EcalEndcapNTruthClusters.particleIDs_end", EcalEndcapNTruthClusters_particleIDs_end, &b_EcalEndcapNTruthClusters_particleIDs_end);
   fChain->SetBranchAddress("_EcalEndcapNTruthClusters_clusters", &_EcalEndcapNTruthClusters_clusters_, &b__EcalEndcapNTruthClusters_clusters_);
   fChain->SetBranchAddress("_EcalEndcapNTruthClusters_clusters.index", &_EcalEndcapNTruthClusters_clusters_index, &b__EcalEndcapNTruthClusters_clusters_index);
   fChain->SetBranchAddress("_EcalEndcapNTruthClusters_clusters.collectionID", &_EcalEndcapNTruthClusters_clusters_collectionID, &b__EcalEndcapNTruthClusters_clusters_collectionID);
   fChain->SetBranchAddress("_EcalEndcapNTruthClusters_hits", &_EcalEndcapNTruthClusters_hits_, &b__EcalEndcapNTruthClusters_hits_);
   fChain->SetBranchAddress("_EcalEndcapNTruthClusters_hits.index", &_EcalEndcapNTruthClusters_hits_index, &b__EcalEndcapNTruthClusters_hits_index);
   fChain->SetBranchAddress("_EcalEndcapNTruthClusters_hits.collectionID", &_EcalEndcapNTruthClusters_hits_collectionID, &b__EcalEndcapNTruthClusters_hits_collectionID);
   fChain->SetBranchAddress("_EcalEndcapNTruthClusters_particleIDs", &_EcalEndcapNTruthClusters_particleIDs_, &b__EcalEndcapNTruthClusters_particleIDs_);
   fChain->SetBranchAddress("_EcalEndcapNTruthClusters_particleIDs.index", &_EcalEndcapNTruthClusters_particleIDs_index, &b__EcalEndcapNTruthClusters_particleIDs_index);
   fChain->SetBranchAddress("_EcalEndcapNTruthClusters_particleIDs.collectionID", &_EcalEndcapNTruthClusters_particleIDs_collectionID, &b__EcalEndcapNTruthClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_EcalEndcapNTruthClusters_shapeParameters", &_EcalEndcapNTruthClusters_shapeParameters, &b__EcalEndcapNTruthClusters_shapeParameters);
   fChain->SetBranchAddress("_EcalEndcapNTruthClusters_hitContributions", &_EcalEndcapNTruthClusters_hitContributions, &b__EcalEndcapNTruthClusters_hitContributions);
   fChain->SetBranchAddress("_EcalEndcapNTruthClusters_subdetectorEnergies", &_EcalEndcapNTruthClusters_subdetectorEnergies, &b__EcalEndcapNTruthClusters_subdetectorEnergies);
   fChain->SetBranchAddress("EcalEndcapPClusterAssociations", &EcalEndcapPClusterAssociations_, &b_EcalEndcapPClusterAssociations_);
   fChain->SetBranchAddress("EcalEndcapPClusterAssociations.simID", EcalEndcapPClusterAssociations_simID, &b_EcalEndcapPClusterAssociations_simID);
   fChain->SetBranchAddress("EcalEndcapPClusterAssociations.recID", EcalEndcapPClusterAssociations_recID, &b_EcalEndcapPClusterAssociations_recID);
   fChain->SetBranchAddress("EcalEndcapPClusterAssociations.weight", EcalEndcapPClusterAssociations_weight, &b_EcalEndcapPClusterAssociations_weight);
   fChain->SetBranchAddress("_EcalEndcapPClusterAssociations_rec", &_EcalEndcapPClusterAssociations_rec_, &b__EcalEndcapPClusterAssociations_rec_);
   fChain->SetBranchAddress("_EcalEndcapPClusterAssociations_rec.index", _EcalEndcapPClusterAssociations_rec_index, &b__EcalEndcapPClusterAssociations_rec_index);
   fChain->SetBranchAddress("_EcalEndcapPClusterAssociations_rec.collectionID", _EcalEndcapPClusterAssociations_rec_collectionID, &b__EcalEndcapPClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_EcalEndcapPClusterAssociations_sim", &_EcalEndcapPClusterAssociations_sim_, &b__EcalEndcapPClusterAssociations_sim_);
   fChain->SetBranchAddress("_EcalEndcapPClusterAssociations_sim.index", _EcalEndcapPClusterAssociations_sim_index, &b__EcalEndcapPClusterAssociations_sim_index);
   fChain->SetBranchAddress("_EcalEndcapPClusterAssociations_sim.collectionID", _EcalEndcapPClusterAssociations_sim_collectionID, &b__EcalEndcapPClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("EcalEndcapPClusters", &EcalEndcapPClusters_, &b_EcalEndcapPClusters_);
   fChain->SetBranchAddress("EcalEndcapPClusters.type", EcalEndcapPClusters_type, &b_EcalEndcapPClusters_type);
   fChain->SetBranchAddress("EcalEndcapPClusters.energy", EcalEndcapPClusters_energy, &b_EcalEndcapPClusters_energy);
   fChain->SetBranchAddress("EcalEndcapPClusters.energyError", EcalEndcapPClusters_energyError, &b_EcalEndcapPClusters_energyError);
   fChain->SetBranchAddress("EcalEndcapPClusters.time", EcalEndcapPClusters_time, &b_EcalEndcapPClusters_time);
   fChain->SetBranchAddress("EcalEndcapPClusters.timeError", EcalEndcapPClusters_timeError, &b_EcalEndcapPClusters_timeError);
   fChain->SetBranchAddress("EcalEndcapPClusters.nhits", EcalEndcapPClusters_nhits, &b_EcalEndcapPClusters_nhits);
   fChain->SetBranchAddress("EcalEndcapPClusters.position.x", EcalEndcapPClusters_position_x, &b_EcalEndcapPClusters_position_x);
   fChain->SetBranchAddress("EcalEndcapPClusters.position.y", EcalEndcapPClusters_position_y, &b_EcalEndcapPClusters_position_y);
   fChain->SetBranchAddress("EcalEndcapPClusters.position.z", EcalEndcapPClusters_position_z, &b_EcalEndcapPClusters_position_z);
   fChain->SetBranchAddress("EcalEndcapPClusters.positionError.xx", EcalEndcapPClusters_positionError_xx, &b_EcalEndcapPClusters_positionError_xx);
   fChain->SetBranchAddress("EcalEndcapPClusters.positionError.yy", EcalEndcapPClusters_positionError_yy, &b_EcalEndcapPClusters_positionError_yy);
   fChain->SetBranchAddress("EcalEndcapPClusters.positionError.zz", EcalEndcapPClusters_positionError_zz, &b_EcalEndcapPClusters_positionError_zz);
   fChain->SetBranchAddress("EcalEndcapPClusters.positionError.xy", EcalEndcapPClusters_positionError_xy, &b_EcalEndcapPClusters_positionError_xy);
   fChain->SetBranchAddress("EcalEndcapPClusters.positionError.xz", EcalEndcapPClusters_positionError_xz, &b_EcalEndcapPClusters_positionError_xz);
   fChain->SetBranchAddress("EcalEndcapPClusters.positionError.yz", EcalEndcapPClusters_positionError_yz, &b_EcalEndcapPClusters_positionError_yz);
   fChain->SetBranchAddress("EcalEndcapPClusters.intrinsicTheta", EcalEndcapPClusters_intrinsicTheta, &b_EcalEndcapPClusters_intrinsicTheta);
   fChain->SetBranchAddress("EcalEndcapPClusters.intrinsicPhi", EcalEndcapPClusters_intrinsicPhi, &b_EcalEndcapPClusters_intrinsicPhi);
   fChain->SetBranchAddress("EcalEndcapPClusters.intrinsicDirectionError.xx", EcalEndcapPClusters_intrinsicDirectionError_xx, &b_EcalEndcapPClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("EcalEndcapPClusters.intrinsicDirectionError.yy", EcalEndcapPClusters_intrinsicDirectionError_yy, &b_EcalEndcapPClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("EcalEndcapPClusters.intrinsicDirectionError.xy", EcalEndcapPClusters_intrinsicDirectionError_xy, &b_EcalEndcapPClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("EcalEndcapPClusters.shapeParameters_begin", EcalEndcapPClusters_shapeParameters_begin, &b_EcalEndcapPClusters_shapeParameters_begin);
   fChain->SetBranchAddress("EcalEndcapPClusters.shapeParameters_end", EcalEndcapPClusters_shapeParameters_end, &b_EcalEndcapPClusters_shapeParameters_end);
   fChain->SetBranchAddress("EcalEndcapPClusters.hitContributions_begin", EcalEndcapPClusters_hitContributions_begin, &b_EcalEndcapPClusters_hitContributions_begin);
   fChain->SetBranchAddress("EcalEndcapPClusters.hitContributions_end", EcalEndcapPClusters_hitContributions_end, &b_EcalEndcapPClusters_hitContributions_end);
   fChain->SetBranchAddress("EcalEndcapPClusters.subdetectorEnergies_begin", EcalEndcapPClusters_subdetectorEnergies_begin, &b_EcalEndcapPClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("EcalEndcapPClusters.subdetectorEnergies_end", EcalEndcapPClusters_subdetectorEnergies_end, &b_EcalEndcapPClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("EcalEndcapPClusters.clusters_begin", EcalEndcapPClusters_clusters_begin, &b_EcalEndcapPClusters_clusters_begin);
   fChain->SetBranchAddress("EcalEndcapPClusters.clusters_end", EcalEndcapPClusters_clusters_end, &b_EcalEndcapPClusters_clusters_end);
   fChain->SetBranchAddress("EcalEndcapPClusters.hits_begin", EcalEndcapPClusters_hits_begin, &b_EcalEndcapPClusters_hits_begin);
   fChain->SetBranchAddress("EcalEndcapPClusters.hits_end", EcalEndcapPClusters_hits_end, &b_EcalEndcapPClusters_hits_end);
   fChain->SetBranchAddress("EcalEndcapPClusters.particleIDs_begin", EcalEndcapPClusters_particleIDs_begin, &b_EcalEndcapPClusters_particleIDs_begin);
   fChain->SetBranchAddress("EcalEndcapPClusters.particleIDs_end", EcalEndcapPClusters_particleIDs_end, &b_EcalEndcapPClusters_particleIDs_end);
   fChain->SetBranchAddress("_EcalEndcapPClusters_clusters", &_EcalEndcapPClusters_clusters_, &b__EcalEndcapPClusters_clusters_);
   fChain->SetBranchAddress("_EcalEndcapPClusters_clusters.index", &_EcalEndcapPClusters_clusters_index, &b__EcalEndcapPClusters_clusters_index);
   fChain->SetBranchAddress("_EcalEndcapPClusters_clusters.collectionID", &_EcalEndcapPClusters_clusters_collectionID, &b__EcalEndcapPClusters_clusters_collectionID);
   fChain->SetBranchAddress("_EcalEndcapPClusters_hits", &_EcalEndcapPClusters_hits_, &b__EcalEndcapPClusters_hits_);
   fChain->SetBranchAddress("_EcalEndcapPClusters_hits.index", &_EcalEndcapPClusters_hits_index, &b__EcalEndcapPClusters_hits_index);
   fChain->SetBranchAddress("_EcalEndcapPClusters_hits.collectionID", &_EcalEndcapPClusters_hits_collectionID, &b__EcalEndcapPClusters_hits_collectionID);
   fChain->SetBranchAddress("_EcalEndcapPClusters_particleIDs", &_EcalEndcapPClusters_particleIDs_, &b__EcalEndcapPClusters_particleIDs_);
   fChain->SetBranchAddress("_EcalEndcapPClusters_particleIDs.index", &_EcalEndcapPClusters_particleIDs_index, &b__EcalEndcapPClusters_particleIDs_index);
   fChain->SetBranchAddress("_EcalEndcapPClusters_particleIDs.collectionID", &_EcalEndcapPClusters_particleIDs_collectionID, &b__EcalEndcapPClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_EcalEndcapPClusters_shapeParameters", &_EcalEndcapPClusters_shapeParameters, &b__EcalEndcapPClusters_shapeParameters);
   fChain->SetBranchAddress("_EcalEndcapPClusters_hitContributions", &_EcalEndcapPClusters_hitContributions, &b__EcalEndcapPClusters_hitContributions);
   fChain->SetBranchAddress("_EcalEndcapPClusters_subdetectorEnergies", &_EcalEndcapPClusters_subdetectorEnergies, &b__EcalEndcapPClusters_subdetectorEnergies);
   fChain->SetBranchAddress("EcalEndcapPInsertClusterAssociations", &EcalEndcapPInsertClusterAssociations_, &b_EcalEndcapPInsertClusterAssociations_);
   fChain->SetBranchAddress("EcalEndcapPInsertClusterAssociations.simID", EcalEndcapPInsertClusterAssociations_simID, &b_EcalEndcapPInsertClusterAssociations_simID);
   fChain->SetBranchAddress("EcalEndcapPInsertClusterAssociations.recID", EcalEndcapPInsertClusterAssociations_recID, &b_EcalEndcapPInsertClusterAssociations_recID);
   fChain->SetBranchAddress("EcalEndcapPInsertClusterAssociations.weight", EcalEndcapPInsertClusterAssociations_weight, &b_EcalEndcapPInsertClusterAssociations_weight);
   fChain->SetBranchAddress("_EcalEndcapPInsertClusterAssociations_rec", &_EcalEndcapPInsertClusterAssociations_rec_, &b__EcalEndcapPInsertClusterAssociations_rec_);
   fChain->SetBranchAddress("_EcalEndcapPInsertClusterAssociations_rec.index", _EcalEndcapPInsertClusterAssociations_rec_index, &b__EcalEndcapPInsertClusterAssociations_rec_index);
   fChain->SetBranchAddress("_EcalEndcapPInsertClusterAssociations_rec.collectionID", _EcalEndcapPInsertClusterAssociations_rec_collectionID, &b__EcalEndcapPInsertClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_EcalEndcapPInsertClusterAssociations_sim", &_EcalEndcapPInsertClusterAssociations_sim_, &b__EcalEndcapPInsertClusterAssociations_sim_);
   fChain->SetBranchAddress("_EcalEndcapPInsertClusterAssociations_sim.index", _EcalEndcapPInsertClusterAssociations_sim_index, &b__EcalEndcapPInsertClusterAssociations_sim_index);
   fChain->SetBranchAddress("_EcalEndcapPInsertClusterAssociations_sim.collectionID", _EcalEndcapPInsertClusterAssociations_sim_collectionID, &b__EcalEndcapPInsertClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters", &EcalEndcapPInsertClusters_, &b_EcalEndcapPInsertClusters_);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.type", EcalEndcapPInsertClusters_type, &b_EcalEndcapPInsertClusters_type);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.energy", EcalEndcapPInsertClusters_energy, &b_EcalEndcapPInsertClusters_energy);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.energyError", EcalEndcapPInsertClusters_energyError, &b_EcalEndcapPInsertClusters_energyError);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.time", EcalEndcapPInsertClusters_time, &b_EcalEndcapPInsertClusters_time);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.timeError", EcalEndcapPInsertClusters_timeError, &b_EcalEndcapPInsertClusters_timeError);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.nhits", EcalEndcapPInsertClusters_nhits, &b_EcalEndcapPInsertClusters_nhits);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.position.x", EcalEndcapPInsertClusters_position_x, &b_EcalEndcapPInsertClusters_position_x);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.position.y", EcalEndcapPInsertClusters_position_y, &b_EcalEndcapPInsertClusters_position_y);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.position.z", EcalEndcapPInsertClusters_position_z, &b_EcalEndcapPInsertClusters_position_z);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.positionError.xx", EcalEndcapPInsertClusters_positionError_xx, &b_EcalEndcapPInsertClusters_positionError_xx);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.positionError.yy", EcalEndcapPInsertClusters_positionError_yy, &b_EcalEndcapPInsertClusters_positionError_yy);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.positionError.zz", EcalEndcapPInsertClusters_positionError_zz, &b_EcalEndcapPInsertClusters_positionError_zz);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.positionError.xy", EcalEndcapPInsertClusters_positionError_xy, &b_EcalEndcapPInsertClusters_positionError_xy);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.positionError.xz", EcalEndcapPInsertClusters_positionError_xz, &b_EcalEndcapPInsertClusters_positionError_xz);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.positionError.yz", EcalEndcapPInsertClusters_positionError_yz, &b_EcalEndcapPInsertClusters_positionError_yz);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.intrinsicTheta", EcalEndcapPInsertClusters_intrinsicTheta, &b_EcalEndcapPInsertClusters_intrinsicTheta);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.intrinsicPhi", EcalEndcapPInsertClusters_intrinsicPhi, &b_EcalEndcapPInsertClusters_intrinsicPhi);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.intrinsicDirectionError.xx", EcalEndcapPInsertClusters_intrinsicDirectionError_xx, &b_EcalEndcapPInsertClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.intrinsicDirectionError.yy", EcalEndcapPInsertClusters_intrinsicDirectionError_yy, &b_EcalEndcapPInsertClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.intrinsicDirectionError.xy", EcalEndcapPInsertClusters_intrinsicDirectionError_xy, &b_EcalEndcapPInsertClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.shapeParameters_begin", EcalEndcapPInsertClusters_shapeParameters_begin, &b_EcalEndcapPInsertClusters_shapeParameters_begin);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.shapeParameters_end", EcalEndcapPInsertClusters_shapeParameters_end, &b_EcalEndcapPInsertClusters_shapeParameters_end);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.hitContributions_begin", EcalEndcapPInsertClusters_hitContributions_begin, &b_EcalEndcapPInsertClusters_hitContributions_begin);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.hitContributions_end", EcalEndcapPInsertClusters_hitContributions_end, &b_EcalEndcapPInsertClusters_hitContributions_end);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.subdetectorEnergies_begin", EcalEndcapPInsertClusters_subdetectorEnergies_begin, &b_EcalEndcapPInsertClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.subdetectorEnergies_end", EcalEndcapPInsertClusters_subdetectorEnergies_end, &b_EcalEndcapPInsertClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.clusters_begin", EcalEndcapPInsertClusters_clusters_begin, &b_EcalEndcapPInsertClusters_clusters_begin);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.clusters_end", EcalEndcapPInsertClusters_clusters_end, &b_EcalEndcapPInsertClusters_clusters_end);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.hits_begin", EcalEndcapPInsertClusters_hits_begin, &b_EcalEndcapPInsertClusters_hits_begin);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.hits_end", EcalEndcapPInsertClusters_hits_end, &b_EcalEndcapPInsertClusters_hits_end);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.particleIDs_begin", EcalEndcapPInsertClusters_particleIDs_begin, &b_EcalEndcapPInsertClusters_particleIDs_begin);
   fChain->SetBranchAddress("EcalEndcapPInsertClusters.particleIDs_end", EcalEndcapPInsertClusters_particleIDs_end, &b_EcalEndcapPInsertClusters_particleIDs_end);
   fChain->SetBranchAddress("_EcalEndcapPInsertClusters_clusters", &_EcalEndcapPInsertClusters_clusters_, &b__EcalEndcapPInsertClusters_clusters_);
   fChain->SetBranchAddress("_EcalEndcapPInsertClusters_clusters.index", &_EcalEndcapPInsertClusters_clusters_index, &b__EcalEndcapPInsertClusters_clusters_index);
   fChain->SetBranchAddress("_EcalEndcapPInsertClusters_clusters.collectionID", &_EcalEndcapPInsertClusters_clusters_collectionID, &b__EcalEndcapPInsertClusters_clusters_collectionID);
   fChain->SetBranchAddress("_EcalEndcapPInsertClusters_hits", &_EcalEndcapPInsertClusters_hits_, &b__EcalEndcapPInsertClusters_hits_);
   fChain->SetBranchAddress("_EcalEndcapPInsertClusters_hits.index", &_EcalEndcapPInsertClusters_hits_index, &b__EcalEndcapPInsertClusters_hits_index);
   fChain->SetBranchAddress("_EcalEndcapPInsertClusters_hits.collectionID", &_EcalEndcapPInsertClusters_hits_collectionID, &b__EcalEndcapPInsertClusters_hits_collectionID);
   fChain->SetBranchAddress("_EcalEndcapPInsertClusters_particleIDs", &_EcalEndcapPInsertClusters_particleIDs_, &b__EcalEndcapPInsertClusters_particleIDs_);
   fChain->SetBranchAddress("_EcalEndcapPInsertClusters_particleIDs.index", &_EcalEndcapPInsertClusters_particleIDs_index, &b__EcalEndcapPInsertClusters_particleIDs_index);
   fChain->SetBranchAddress("_EcalEndcapPInsertClusters_particleIDs.collectionID", &_EcalEndcapPInsertClusters_particleIDs_collectionID, &b__EcalEndcapPInsertClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_EcalEndcapPInsertClusters_shapeParameters", &_EcalEndcapPInsertClusters_shapeParameters, &b__EcalEndcapPInsertClusters_shapeParameters);
   fChain->SetBranchAddress("_EcalEndcapPInsertClusters_hitContributions", &_EcalEndcapPInsertClusters_hitContributions, &b__EcalEndcapPInsertClusters_hitContributions);
   fChain->SetBranchAddress("_EcalEndcapPInsertClusters_subdetectorEnergies", &_EcalEndcapPInsertClusters_subdetectorEnergies, &b__EcalEndcapPInsertClusters_subdetectorEnergies);
   fChain->SetBranchAddress("EcalEndcapPInsertRawHits", &EcalEndcapPInsertRawHits_, &b_EcalEndcapPInsertRawHits_);
   fChain->SetBranchAddress("EcalEndcapPInsertRawHits.cellID", EcalEndcapPInsertRawHits_cellID, &b_EcalEndcapPInsertRawHits_cellID);
   fChain->SetBranchAddress("EcalEndcapPInsertRawHits.amplitude", EcalEndcapPInsertRawHits_amplitude, &b_EcalEndcapPInsertRawHits_amplitude);
   fChain->SetBranchAddress("EcalEndcapPInsertRawHits.timeStamp", EcalEndcapPInsertRawHits_timeStamp, &b_EcalEndcapPInsertRawHits_timeStamp);
   fChain->SetBranchAddress("EcalEndcapPInsertRecHits", &EcalEndcapPInsertRecHits_, &b_EcalEndcapPInsertRecHits_);
   fChain->SetBranchAddress("EcalEndcapPInsertRecHits.cellID", EcalEndcapPInsertRecHits_cellID, &b_EcalEndcapPInsertRecHits_cellID);
   fChain->SetBranchAddress("EcalEndcapPInsertRecHits.energy", EcalEndcapPInsertRecHits_energy, &b_EcalEndcapPInsertRecHits_energy);
   fChain->SetBranchAddress("EcalEndcapPInsertRecHits.energyError", EcalEndcapPInsertRecHits_energyError, &b_EcalEndcapPInsertRecHits_energyError);
   fChain->SetBranchAddress("EcalEndcapPInsertRecHits.time", EcalEndcapPInsertRecHits_time, &b_EcalEndcapPInsertRecHits_time);
   fChain->SetBranchAddress("EcalEndcapPInsertRecHits.timeError", EcalEndcapPInsertRecHits_timeError, &b_EcalEndcapPInsertRecHits_timeError);
   fChain->SetBranchAddress("EcalEndcapPInsertRecHits.position.x", EcalEndcapPInsertRecHits_position_x, &b_EcalEndcapPInsertRecHits_position_x);
   fChain->SetBranchAddress("EcalEndcapPInsertRecHits.position.y", EcalEndcapPInsertRecHits_position_y, &b_EcalEndcapPInsertRecHits_position_y);
   fChain->SetBranchAddress("EcalEndcapPInsertRecHits.position.z", EcalEndcapPInsertRecHits_position_z, &b_EcalEndcapPInsertRecHits_position_z);
   fChain->SetBranchAddress("EcalEndcapPInsertRecHits.dimension.x", EcalEndcapPInsertRecHits_dimension_x, &b_EcalEndcapPInsertRecHits_dimension_x);
   fChain->SetBranchAddress("EcalEndcapPInsertRecHits.dimension.y", EcalEndcapPInsertRecHits_dimension_y, &b_EcalEndcapPInsertRecHits_dimension_y);
   fChain->SetBranchAddress("EcalEndcapPInsertRecHits.dimension.z", EcalEndcapPInsertRecHits_dimension_z, &b_EcalEndcapPInsertRecHits_dimension_z);
   fChain->SetBranchAddress("EcalEndcapPInsertRecHits.sector", EcalEndcapPInsertRecHits_sector, &b_EcalEndcapPInsertRecHits_sector);
   fChain->SetBranchAddress("EcalEndcapPInsertRecHits.layer", EcalEndcapPInsertRecHits_layer, &b_EcalEndcapPInsertRecHits_layer);
   fChain->SetBranchAddress("EcalEndcapPInsertRecHits.local.x", EcalEndcapPInsertRecHits_local_x, &b_EcalEndcapPInsertRecHits_local_x);
   fChain->SetBranchAddress("EcalEndcapPInsertRecHits.local.y", EcalEndcapPInsertRecHits_local_y, &b_EcalEndcapPInsertRecHits_local_y);
   fChain->SetBranchAddress("EcalEndcapPInsertRecHits.local.z", EcalEndcapPInsertRecHits_local_z, &b_EcalEndcapPInsertRecHits_local_z);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusterAssociations", &EcalEndcapPInsertTruthClusterAssociations_, &b_EcalEndcapPInsertTruthClusterAssociations_);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusterAssociations.simID", EcalEndcapPInsertTruthClusterAssociations_simID, &b_EcalEndcapPInsertTruthClusterAssociations_simID);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusterAssociations.recID", EcalEndcapPInsertTruthClusterAssociations_recID, &b_EcalEndcapPInsertTruthClusterAssociations_recID);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusterAssociations.weight", EcalEndcapPInsertTruthClusterAssociations_weight, &b_EcalEndcapPInsertTruthClusterAssociations_weight);
   fChain->SetBranchAddress("_EcalEndcapPInsertTruthClusterAssociations_rec", &_EcalEndcapPInsertTruthClusterAssociations_rec_, &b__EcalEndcapPInsertTruthClusterAssociations_rec_);
   fChain->SetBranchAddress("_EcalEndcapPInsertTruthClusterAssociations_rec.index", _EcalEndcapPInsertTruthClusterAssociations_rec_index, &b__EcalEndcapPInsertTruthClusterAssociations_rec_index);
   fChain->SetBranchAddress("_EcalEndcapPInsertTruthClusterAssociations_rec.collectionID", _EcalEndcapPInsertTruthClusterAssociations_rec_collectionID, &b__EcalEndcapPInsertTruthClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_EcalEndcapPInsertTruthClusterAssociations_sim", &_EcalEndcapPInsertTruthClusterAssociations_sim_, &b__EcalEndcapPInsertTruthClusterAssociations_sim_);
   fChain->SetBranchAddress("_EcalEndcapPInsertTruthClusterAssociations_sim.index", _EcalEndcapPInsertTruthClusterAssociations_sim_index, &b__EcalEndcapPInsertTruthClusterAssociations_sim_index);
   fChain->SetBranchAddress("_EcalEndcapPInsertTruthClusterAssociations_sim.collectionID", _EcalEndcapPInsertTruthClusterAssociations_sim_collectionID, &b__EcalEndcapPInsertTruthClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters", &EcalEndcapPInsertTruthClusters_, &b_EcalEndcapPInsertTruthClusters_);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.type", EcalEndcapPInsertTruthClusters_type, &b_EcalEndcapPInsertTruthClusters_type);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.energy", EcalEndcapPInsertTruthClusters_energy, &b_EcalEndcapPInsertTruthClusters_energy);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.energyError", EcalEndcapPInsertTruthClusters_energyError, &b_EcalEndcapPInsertTruthClusters_energyError);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.time", EcalEndcapPInsertTruthClusters_time, &b_EcalEndcapPInsertTruthClusters_time);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.timeError", EcalEndcapPInsertTruthClusters_timeError, &b_EcalEndcapPInsertTruthClusters_timeError);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.nhits", EcalEndcapPInsertTruthClusters_nhits, &b_EcalEndcapPInsertTruthClusters_nhits);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.position.x", EcalEndcapPInsertTruthClusters_position_x, &b_EcalEndcapPInsertTruthClusters_position_x);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.position.y", EcalEndcapPInsertTruthClusters_position_y, &b_EcalEndcapPInsertTruthClusters_position_y);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.position.z", EcalEndcapPInsertTruthClusters_position_z, &b_EcalEndcapPInsertTruthClusters_position_z);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.positionError.xx", EcalEndcapPInsertTruthClusters_positionError_xx, &b_EcalEndcapPInsertTruthClusters_positionError_xx);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.positionError.yy", EcalEndcapPInsertTruthClusters_positionError_yy, &b_EcalEndcapPInsertTruthClusters_positionError_yy);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.positionError.zz", EcalEndcapPInsertTruthClusters_positionError_zz, &b_EcalEndcapPInsertTruthClusters_positionError_zz);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.positionError.xy", EcalEndcapPInsertTruthClusters_positionError_xy, &b_EcalEndcapPInsertTruthClusters_positionError_xy);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.positionError.xz", EcalEndcapPInsertTruthClusters_positionError_xz, &b_EcalEndcapPInsertTruthClusters_positionError_xz);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.positionError.yz", EcalEndcapPInsertTruthClusters_positionError_yz, &b_EcalEndcapPInsertTruthClusters_positionError_yz);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.intrinsicTheta", EcalEndcapPInsertTruthClusters_intrinsicTheta, &b_EcalEndcapPInsertTruthClusters_intrinsicTheta);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.intrinsicPhi", EcalEndcapPInsertTruthClusters_intrinsicPhi, &b_EcalEndcapPInsertTruthClusters_intrinsicPhi);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.intrinsicDirectionError.xx", EcalEndcapPInsertTruthClusters_intrinsicDirectionError_xx, &b_EcalEndcapPInsertTruthClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.intrinsicDirectionError.yy", EcalEndcapPInsertTruthClusters_intrinsicDirectionError_yy, &b_EcalEndcapPInsertTruthClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.intrinsicDirectionError.xy", EcalEndcapPInsertTruthClusters_intrinsicDirectionError_xy, &b_EcalEndcapPInsertTruthClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.shapeParameters_begin", EcalEndcapPInsertTruthClusters_shapeParameters_begin, &b_EcalEndcapPInsertTruthClusters_shapeParameters_begin);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.shapeParameters_end", EcalEndcapPInsertTruthClusters_shapeParameters_end, &b_EcalEndcapPInsertTruthClusters_shapeParameters_end);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.hitContributions_begin", EcalEndcapPInsertTruthClusters_hitContributions_begin, &b_EcalEndcapPInsertTruthClusters_hitContributions_begin);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.hitContributions_end", EcalEndcapPInsertTruthClusters_hitContributions_end, &b_EcalEndcapPInsertTruthClusters_hitContributions_end);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.subdetectorEnergies_begin", EcalEndcapPInsertTruthClusters_subdetectorEnergies_begin, &b_EcalEndcapPInsertTruthClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.subdetectorEnergies_end", EcalEndcapPInsertTruthClusters_subdetectorEnergies_end, &b_EcalEndcapPInsertTruthClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.clusters_begin", EcalEndcapPInsertTruthClusters_clusters_begin, &b_EcalEndcapPInsertTruthClusters_clusters_begin);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.clusters_end", EcalEndcapPInsertTruthClusters_clusters_end, &b_EcalEndcapPInsertTruthClusters_clusters_end);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.hits_begin", EcalEndcapPInsertTruthClusters_hits_begin, &b_EcalEndcapPInsertTruthClusters_hits_begin);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.hits_end", EcalEndcapPInsertTruthClusters_hits_end, &b_EcalEndcapPInsertTruthClusters_hits_end);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.particleIDs_begin", EcalEndcapPInsertTruthClusters_particleIDs_begin, &b_EcalEndcapPInsertTruthClusters_particleIDs_begin);
   fChain->SetBranchAddress("EcalEndcapPInsertTruthClusters.particleIDs_end", EcalEndcapPInsertTruthClusters_particleIDs_end, &b_EcalEndcapPInsertTruthClusters_particleIDs_end);
   fChain->SetBranchAddress("_EcalEndcapPInsertTruthClusters_clusters", &_EcalEndcapPInsertTruthClusters_clusters_, &b__EcalEndcapPInsertTruthClusters_clusters_);
   fChain->SetBranchAddress("_EcalEndcapPInsertTruthClusters_clusters.index", &_EcalEndcapPInsertTruthClusters_clusters_index, &b__EcalEndcapPInsertTruthClusters_clusters_index);
   fChain->SetBranchAddress("_EcalEndcapPInsertTruthClusters_clusters.collectionID", &_EcalEndcapPInsertTruthClusters_clusters_collectionID, &b__EcalEndcapPInsertTruthClusters_clusters_collectionID);
   fChain->SetBranchAddress("_EcalEndcapPInsertTruthClusters_hits", &_EcalEndcapPInsertTruthClusters_hits_, &b__EcalEndcapPInsertTruthClusters_hits_);
   fChain->SetBranchAddress("_EcalEndcapPInsertTruthClusters_hits.index", &_EcalEndcapPInsertTruthClusters_hits_index, &b__EcalEndcapPInsertTruthClusters_hits_index);
   fChain->SetBranchAddress("_EcalEndcapPInsertTruthClusters_hits.collectionID", &_EcalEndcapPInsertTruthClusters_hits_collectionID, &b__EcalEndcapPInsertTruthClusters_hits_collectionID);
   fChain->SetBranchAddress("_EcalEndcapPInsertTruthClusters_particleIDs", &_EcalEndcapPInsertTruthClusters_particleIDs_, &b__EcalEndcapPInsertTruthClusters_particleIDs_);
   fChain->SetBranchAddress("_EcalEndcapPInsertTruthClusters_particleIDs.index", &_EcalEndcapPInsertTruthClusters_particleIDs_index, &b__EcalEndcapPInsertTruthClusters_particleIDs_index);
   fChain->SetBranchAddress("_EcalEndcapPInsertTruthClusters_particleIDs.collectionID", &_EcalEndcapPInsertTruthClusters_particleIDs_collectionID, &b__EcalEndcapPInsertTruthClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_EcalEndcapPInsertTruthClusters_shapeParameters", &_EcalEndcapPInsertTruthClusters_shapeParameters, &b__EcalEndcapPInsertTruthClusters_shapeParameters);
   fChain->SetBranchAddress("_EcalEndcapPInsertTruthClusters_hitContributions", &_EcalEndcapPInsertTruthClusters_hitContributions, &b__EcalEndcapPInsertTruthClusters_hitContributions);
   fChain->SetBranchAddress("_EcalEndcapPInsertTruthClusters_subdetectorEnergies", &_EcalEndcapPInsertTruthClusters_subdetectorEnergies, &b__EcalEndcapPInsertTruthClusters_subdetectorEnergies);
   fChain->SetBranchAddress("EcalEndcapPRawHits", &EcalEndcapPRawHits_, &b_EcalEndcapPRawHits_);
   fChain->SetBranchAddress("EcalEndcapPRawHits.cellID", EcalEndcapPRawHits_cellID, &b_EcalEndcapPRawHits_cellID);
   fChain->SetBranchAddress("EcalEndcapPRawHits.amplitude", EcalEndcapPRawHits_amplitude, &b_EcalEndcapPRawHits_amplitude);
   fChain->SetBranchAddress("EcalEndcapPRawHits.timeStamp", EcalEndcapPRawHits_timeStamp, &b_EcalEndcapPRawHits_timeStamp);
   fChain->SetBranchAddress("EcalEndcapPRecHits", &EcalEndcapPRecHits_, &b_EcalEndcapPRecHits_);
   fChain->SetBranchAddress("EcalEndcapPRecHits.cellID", EcalEndcapPRecHits_cellID, &b_EcalEndcapPRecHits_cellID);
   fChain->SetBranchAddress("EcalEndcapPRecHits.energy", EcalEndcapPRecHits_energy, &b_EcalEndcapPRecHits_energy);
   fChain->SetBranchAddress("EcalEndcapPRecHits.energyError", EcalEndcapPRecHits_energyError, &b_EcalEndcapPRecHits_energyError);
   fChain->SetBranchAddress("EcalEndcapPRecHits.time", EcalEndcapPRecHits_time, &b_EcalEndcapPRecHits_time);
   fChain->SetBranchAddress("EcalEndcapPRecHits.timeError", EcalEndcapPRecHits_timeError, &b_EcalEndcapPRecHits_timeError);
   fChain->SetBranchAddress("EcalEndcapPRecHits.position.x", EcalEndcapPRecHits_position_x, &b_EcalEndcapPRecHits_position_x);
   fChain->SetBranchAddress("EcalEndcapPRecHits.position.y", EcalEndcapPRecHits_position_y, &b_EcalEndcapPRecHits_position_y);
   fChain->SetBranchAddress("EcalEndcapPRecHits.position.z", EcalEndcapPRecHits_position_z, &b_EcalEndcapPRecHits_position_z);
   fChain->SetBranchAddress("EcalEndcapPRecHits.dimension.x", EcalEndcapPRecHits_dimension_x, &b_EcalEndcapPRecHits_dimension_x);
   fChain->SetBranchAddress("EcalEndcapPRecHits.dimension.y", EcalEndcapPRecHits_dimension_y, &b_EcalEndcapPRecHits_dimension_y);
   fChain->SetBranchAddress("EcalEndcapPRecHits.dimension.z", EcalEndcapPRecHits_dimension_z, &b_EcalEndcapPRecHits_dimension_z);
   fChain->SetBranchAddress("EcalEndcapPRecHits.sector", EcalEndcapPRecHits_sector, &b_EcalEndcapPRecHits_sector);
   fChain->SetBranchAddress("EcalEndcapPRecHits.layer", EcalEndcapPRecHits_layer, &b_EcalEndcapPRecHits_layer);
   fChain->SetBranchAddress("EcalEndcapPRecHits.local.x", EcalEndcapPRecHits_local_x, &b_EcalEndcapPRecHits_local_x);
   fChain->SetBranchAddress("EcalEndcapPRecHits.local.y", EcalEndcapPRecHits_local_y, &b_EcalEndcapPRecHits_local_y);
   fChain->SetBranchAddress("EcalEndcapPRecHits.local.z", EcalEndcapPRecHits_local_z, &b_EcalEndcapPRecHits_local_z);
   fChain->SetBranchAddress("EcalEndcapPTruthClusterAssociations", &EcalEndcapPTruthClusterAssociations_, &b_EcalEndcapPTruthClusterAssociations_);
   fChain->SetBranchAddress("EcalEndcapPTruthClusterAssociations.simID", EcalEndcapPTruthClusterAssociations_simID, &b_EcalEndcapPTruthClusterAssociations_simID);
   fChain->SetBranchAddress("EcalEndcapPTruthClusterAssociations.recID", EcalEndcapPTruthClusterAssociations_recID, &b_EcalEndcapPTruthClusterAssociations_recID);
   fChain->SetBranchAddress("EcalEndcapPTruthClusterAssociations.weight", EcalEndcapPTruthClusterAssociations_weight, &b_EcalEndcapPTruthClusterAssociations_weight);
   fChain->SetBranchAddress("_EcalEndcapPTruthClusterAssociations_rec", &_EcalEndcapPTruthClusterAssociations_rec_, &b__EcalEndcapPTruthClusterAssociations_rec_);
   fChain->SetBranchAddress("_EcalEndcapPTruthClusterAssociations_rec.index", _EcalEndcapPTruthClusterAssociations_rec_index, &b__EcalEndcapPTruthClusterAssociations_rec_index);
   fChain->SetBranchAddress("_EcalEndcapPTruthClusterAssociations_rec.collectionID", _EcalEndcapPTruthClusterAssociations_rec_collectionID, &b__EcalEndcapPTruthClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_EcalEndcapPTruthClusterAssociations_sim", &_EcalEndcapPTruthClusterAssociations_sim_, &b__EcalEndcapPTruthClusterAssociations_sim_);
   fChain->SetBranchAddress("_EcalEndcapPTruthClusterAssociations_sim.index", _EcalEndcapPTruthClusterAssociations_sim_index, &b__EcalEndcapPTruthClusterAssociations_sim_index);
   fChain->SetBranchAddress("_EcalEndcapPTruthClusterAssociations_sim.collectionID", _EcalEndcapPTruthClusterAssociations_sim_collectionID, &b__EcalEndcapPTruthClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters", &EcalEndcapPTruthClusters_, &b_EcalEndcapPTruthClusters_);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.type", EcalEndcapPTruthClusters_type, &b_EcalEndcapPTruthClusters_type);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.energy", EcalEndcapPTruthClusters_energy, &b_EcalEndcapPTruthClusters_energy);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.energyError", EcalEndcapPTruthClusters_energyError, &b_EcalEndcapPTruthClusters_energyError);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.time", EcalEndcapPTruthClusters_time, &b_EcalEndcapPTruthClusters_time);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.timeError", EcalEndcapPTruthClusters_timeError, &b_EcalEndcapPTruthClusters_timeError);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.nhits", EcalEndcapPTruthClusters_nhits, &b_EcalEndcapPTruthClusters_nhits);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.position.x", EcalEndcapPTruthClusters_position_x, &b_EcalEndcapPTruthClusters_position_x);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.position.y", EcalEndcapPTruthClusters_position_y, &b_EcalEndcapPTruthClusters_position_y);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.position.z", EcalEndcapPTruthClusters_position_z, &b_EcalEndcapPTruthClusters_position_z);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.positionError.xx", EcalEndcapPTruthClusters_positionError_xx, &b_EcalEndcapPTruthClusters_positionError_xx);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.positionError.yy", EcalEndcapPTruthClusters_positionError_yy, &b_EcalEndcapPTruthClusters_positionError_yy);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.positionError.zz", EcalEndcapPTruthClusters_positionError_zz, &b_EcalEndcapPTruthClusters_positionError_zz);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.positionError.xy", EcalEndcapPTruthClusters_positionError_xy, &b_EcalEndcapPTruthClusters_positionError_xy);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.positionError.xz", EcalEndcapPTruthClusters_positionError_xz, &b_EcalEndcapPTruthClusters_positionError_xz);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.positionError.yz", EcalEndcapPTruthClusters_positionError_yz, &b_EcalEndcapPTruthClusters_positionError_yz);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.intrinsicTheta", EcalEndcapPTruthClusters_intrinsicTheta, &b_EcalEndcapPTruthClusters_intrinsicTheta);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.intrinsicPhi", EcalEndcapPTruthClusters_intrinsicPhi, &b_EcalEndcapPTruthClusters_intrinsicPhi);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.intrinsicDirectionError.xx", EcalEndcapPTruthClusters_intrinsicDirectionError_xx, &b_EcalEndcapPTruthClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.intrinsicDirectionError.yy", EcalEndcapPTruthClusters_intrinsicDirectionError_yy, &b_EcalEndcapPTruthClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.intrinsicDirectionError.xy", EcalEndcapPTruthClusters_intrinsicDirectionError_xy, &b_EcalEndcapPTruthClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.shapeParameters_begin", EcalEndcapPTruthClusters_shapeParameters_begin, &b_EcalEndcapPTruthClusters_shapeParameters_begin);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.shapeParameters_end", EcalEndcapPTruthClusters_shapeParameters_end, &b_EcalEndcapPTruthClusters_shapeParameters_end);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.hitContributions_begin", EcalEndcapPTruthClusters_hitContributions_begin, &b_EcalEndcapPTruthClusters_hitContributions_begin);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.hitContributions_end", EcalEndcapPTruthClusters_hitContributions_end, &b_EcalEndcapPTruthClusters_hitContributions_end);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.subdetectorEnergies_begin", EcalEndcapPTruthClusters_subdetectorEnergies_begin, &b_EcalEndcapPTruthClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.subdetectorEnergies_end", EcalEndcapPTruthClusters_subdetectorEnergies_end, &b_EcalEndcapPTruthClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.clusters_begin", EcalEndcapPTruthClusters_clusters_begin, &b_EcalEndcapPTruthClusters_clusters_begin);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.clusters_end", EcalEndcapPTruthClusters_clusters_end, &b_EcalEndcapPTruthClusters_clusters_end);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.hits_begin", EcalEndcapPTruthClusters_hits_begin, &b_EcalEndcapPTruthClusters_hits_begin);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.hits_end", EcalEndcapPTruthClusters_hits_end, &b_EcalEndcapPTruthClusters_hits_end);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.particleIDs_begin", EcalEndcapPTruthClusters_particleIDs_begin, &b_EcalEndcapPTruthClusters_particleIDs_begin);
   fChain->SetBranchAddress("EcalEndcapPTruthClusters.particleIDs_end", EcalEndcapPTruthClusters_particleIDs_end, &b_EcalEndcapPTruthClusters_particleIDs_end);
   fChain->SetBranchAddress("_EcalEndcapPTruthClusters_clusters", &_EcalEndcapPTruthClusters_clusters_, &b__EcalEndcapPTruthClusters_clusters_);
   fChain->SetBranchAddress("_EcalEndcapPTruthClusters_clusters.index", &_EcalEndcapPTruthClusters_clusters_index, &b__EcalEndcapPTruthClusters_clusters_index);
   fChain->SetBranchAddress("_EcalEndcapPTruthClusters_clusters.collectionID", &_EcalEndcapPTruthClusters_clusters_collectionID, &b__EcalEndcapPTruthClusters_clusters_collectionID);
   fChain->SetBranchAddress("_EcalEndcapPTruthClusters_hits", &_EcalEndcapPTruthClusters_hits_, &b__EcalEndcapPTruthClusters_hits_);
   fChain->SetBranchAddress("_EcalEndcapPTruthClusters_hits.index", &_EcalEndcapPTruthClusters_hits_index, &b__EcalEndcapPTruthClusters_hits_index);
   fChain->SetBranchAddress("_EcalEndcapPTruthClusters_hits.collectionID", &_EcalEndcapPTruthClusters_hits_collectionID, &b__EcalEndcapPTruthClusters_hits_collectionID);
   fChain->SetBranchAddress("_EcalEndcapPTruthClusters_particleIDs", &_EcalEndcapPTruthClusters_particleIDs_, &b__EcalEndcapPTruthClusters_particleIDs_);
   fChain->SetBranchAddress("_EcalEndcapPTruthClusters_particleIDs.index", &_EcalEndcapPTruthClusters_particleIDs_index, &b__EcalEndcapPTruthClusters_particleIDs_index);
   fChain->SetBranchAddress("_EcalEndcapPTruthClusters_particleIDs.collectionID", &_EcalEndcapPTruthClusters_particleIDs_collectionID, &b__EcalEndcapPTruthClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_EcalEndcapPTruthClusters_shapeParameters", &_EcalEndcapPTruthClusters_shapeParameters, &b__EcalEndcapPTruthClusters_shapeParameters);
   fChain->SetBranchAddress("_EcalEndcapPTruthClusters_hitContributions", &_EcalEndcapPTruthClusters_hitContributions, &b__EcalEndcapPTruthClusters_hitContributions);
   fChain->SetBranchAddress("_EcalEndcapPTruthClusters_subdetectorEnergies", &_EcalEndcapPTruthClusters_subdetectorEnergies, &b__EcalEndcapPTruthClusters_subdetectorEnergies);
   fChain->SetBranchAddress("EcalLumiSpecClusterAssociations", &EcalLumiSpecClusterAssociations_, &b_EcalLumiSpecClusterAssociations_);
   fChain->SetBranchAddress("EcalLumiSpecClusterAssociations.simID", EcalLumiSpecClusterAssociations_simID, &b_EcalLumiSpecClusterAssociations_simID);
   fChain->SetBranchAddress("EcalLumiSpecClusterAssociations.recID", EcalLumiSpecClusterAssociations_recID, &b_EcalLumiSpecClusterAssociations_recID);
   fChain->SetBranchAddress("EcalLumiSpecClusterAssociations.weight", EcalLumiSpecClusterAssociations_weight, &b_EcalLumiSpecClusterAssociations_weight);
   fChain->SetBranchAddress("_EcalLumiSpecClusterAssociations_rec", &_EcalLumiSpecClusterAssociations_rec_, &b__EcalLumiSpecClusterAssociations_rec_);
   fChain->SetBranchAddress("_EcalLumiSpecClusterAssociations_rec.index", _EcalLumiSpecClusterAssociations_rec_index, &b__EcalLumiSpecClusterAssociations_rec_index);
   fChain->SetBranchAddress("_EcalLumiSpecClusterAssociations_rec.collectionID", _EcalLumiSpecClusterAssociations_rec_collectionID, &b__EcalLumiSpecClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_EcalLumiSpecClusterAssociations_sim", &_EcalLumiSpecClusterAssociations_sim_, &b__EcalLumiSpecClusterAssociations_sim_);
   fChain->SetBranchAddress("_EcalLumiSpecClusterAssociations_sim.index", _EcalLumiSpecClusterAssociations_sim_index, &b__EcalLumiSpecClusterAssociations_sim_index);
   fChain->SetBranchAddress("_EcalLumiSpecClusterAssociations_sim.collectionID", _EcalLumiSpecClusterAssociations_sim_collectionID, &b__EcalLumiSpecClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("EcalLumiSpecClusters", &EcalLumiSpecClusters_, &b_EcalLumiSpecClusters_);
   fChain->SetBranchAddress("EcalLumiSpecClusters.type", EcalLumiSpecClusters_type, &b_EcalLumiSpecClusters_type);
   fChain->SetBranchAddress("EcalLumiSpecClusters.energy", EcalLumiSpecClusters_energy, &b_EcalLumiSpecClusters_energy);
   fChain->SetBranchAddress("EcalLumiSpecClusters.energyError", EcalLumiSpecClusters_energyError, &b_EcalLumiSpecClusters_energyError);
   fChain->SetBranchAddress("EcalLumiSpecClusters.time", EcalLumiSpecClusters_time, &b_EcalLumiSpecClusters_time);
   fChain->SetBranchAddress("EcalLumiSpecClusters.timeError", EcalLumiSpecClusters_timeError, &b_EcalLumiSpecClusters_timeError);
   fChain->SetBranchAddress("EcalLumiSpecClusters.nhits", EcalLumiSpecClusters_nhits, &b_EcalLumiSpecClusters_nhits);
   fChain->SetBranchAddress("EcalLumiSpecClusters.position.x", EcalLumiSpecClusters_position_x, &b_EcalLumiSpecClusters_position_x);
   fChain->SetBranchAddress("EcalLumiSpecClusters.position.y", EcalLumiSpecClusters_position_y, &b_EcalLumiSpecClusters_position_y);
   fChain->SetBranchAddress("EcalLumiSpecClusters.position.z", EcalLumiSpecClusters_position_z, &b_EcalLumiSpecClusters_position_z);
   fChain->SetBranchAddress("EcalLumiSpecClusters.positionError.xx", EcalLumiSpecClusters_positionError_xx, &b_EcalLumiSpecClusters_positionError_xx);
   fChain->SetBranchAddress("EcalLumiSpecClusters.positionError.yy", EcalLumiSpecClusters_positionError_yy, &b_EcalLumiSpecClusters_positionError_yy);
   fChain->SetBranchAddress("EcalLumiSpecClusters.positionError.zz", EcalLumiSpecClusters_positionError_zz, &b_EcalLumiSpecClusters_positionError_zz);
   fChain->SetBranchAddress("EcalLumiSpecClusters.positionError.xy", EcalLumiSpecClusters_positionError_xy, &b_EcalLumiSpecClusters_positionError_xy);
   fChain->SetBranchAddress("EcalLumiSpecClusters.positionError.xz", EcalLumiSpecClusters_positionError_xz, &b_EcalLumiSpecClusters_positionError_xz);
   fChain->SetBranchAddress("EcalLumiSpecClusters.positionError.yz", EcalLumiSpecClusters_positionError_yz, &b_EcalLumiSpecClusters_positionError_yz);
   fChain->SetBranchAddress("EcalLumiSpecClusters.intrinsicTheta", EcalLumiSpecClusters_intrinsicTheta, &b_EcalLumiSpecClusters_intrinsicTheta);
   fChain->SetBranchAddress("EcalLumiSpecClusters.intrinsicPhi", EcalLumiSpecClusters_intrinsicPhi, &b_EcalLumiSpecClusters_intrinsicPhi);
   fChain->SetBranchAddress("EcalLumiSpecClusters.intrinsicDirectionError.xx", EcalLumiSpecClusters_intrinsicDirectionError_xx, &b_EcalLumiSpecClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("EcalLumiSpecClusters.intrinsicDirectionError.yy", EcalLumiSpecClusters_intrinsicDirectionError_yy, &b_EcalLumiSpecClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("EcalLumiSpecClusters.intrinsicDirectionError.xy", EcalLumiSpecClusters_intrinsicDirectionError_xy, &b_EcalLumiSpecClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("EcalLumiSpecClusters.shapeParameters_begin", EcalLumiSpecClusters_shapeParameters_begin, &b_EcalLumiSpecClusters_shapeParameters_begin);
   fChain->SetBranchAddress("EcalLumiSpecClusters.shapeParameters_end", EcalLumiSpecClusters_shapeParameters_end, &b_EcalLumiSpecClusters_shapeParameters_end);
   fChain->SetBranchAddress("EcalLumiSpecClusters.hitContributions_begin", EcalLumiSpecClusters_hitContributions_begin, &b_EcalLumiSpecClusters_hitContributions_begin);
   fChain->SetBranchAddress("EcalLumiSpecClusters.hitContributions_end", EcalLumiSpecClusters_hitContributions_end, &b_EcalLumiSpecClusters_hitContributions_end);
   fChain->SetBranchAddress("EcalLumiSpecClusters.subdetectorEnergies_begin", EcalLumiSpecClusters_subdetectorEnergies_begin, &b_EcalLumiSpecClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("EcalLumiSpecClusters.subdetectorEnergies_end", EcalLumiSpecClusters_subdetectorEnergies_end, &b_EcalLumiSpecClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("EcalLumiSpecClusters.clusters_begin", EcalLumiSpecClusters_clusters_begin, &b_EcalLumiSpecClusters_clusters_begin);
   fChain->SetBranchAddress("EcalLumiSpecClusters.clusters_end", EcalLumiSpecClusters_clusters_end, &b_EcalLumiSpecClusters_clusters_end);
   fChain->SetBranchAddress("EcalLumiSpecClusters.hits_begin", EcalLumiSpecClusters_hits_begin, &b_EcalLumiSpecClusters_hits_begin);
   fChain->SetBranchAddress("EcalLumiSpecClusters.hits_end", EcalLumiSpecClusters_hits_end, &b_EcalLumiSpecClusters_hits_end);
   fChain->SetBranchAddress("EcalLumiSpecClusters.particleIDs_begin", EcalLumiSpecClusters_particleIDs_begin, &b_EcalLumiSpecClusters_particleIDs_begin);
   fChain->SetBranchAddress("EcalLumiSpecClusters.particleIDs_end", EcalLumiSpecClusters_particleIDs_end, &b_EcalLumiSpecClusters_particleIDs_end);
   fChain->SetBranchAddress("_EcalLumiSpecClusters_clusters", &_EcalLumiSpecClusters_clusters_, &b__EcalLumiSpecClusters_clusters_);
   fChain->SetBranchAddress("_EcalLumiSpecClusters_clusters.index", &_EcalLumiSpecClusters_clusters_index, &b__EcalLumiSpecClusters_clusters_index);
   fChain->SetBranchAddress("_EcalLumiSpecClusters_clusters.collectionID", &_EcalLumiSpecClusters_clusters_collectionID, &b__EcalLumiSpecClusters_clusters_collectionID);
   fChain->SetBranchAddress("_EcalLumiSpecClusters_hits", &_EcalLumiSpecClusters_hits_, &b__EcalLumiSpecClusters_hits_);
   fChain->SetBranchAddress("_EcalLumiSpecClusters_hits.index", &_EcalLumiSpecClusters_hits_index, &b__EcalLumiSpecClusters_hits_index);
   fChain->SetBranchAddress("_EcalLumiSpecClusters_hits.collectionID", &_EcalLumiSpecClusters_hits_collectionID, &b__EcalLumiSpecClusters_hits_collectionID);
   fChain->SetBranchAddress("_EcalLumiSpecClusters_particleIDs", &_EcalLumiSpecClusters_particleIDs_, &b__EcalLumiSpecClusters_particleIDs_);
   fChain->SetBranchAddress("_EcalLumiSpecClusters_particleIDs.index", &_EcalLumiSpecClusters_particleIDs_index, &b__EcalLumiSpecClusters_particleIDs_index);
   fChain->SetBranchAddress("_EcalLumiSpecClusters_particleIDs.collectionID", &_EcalLumiSpecClusters_particleIDs_collectionID, &b__EcalLumiSpecClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_EcalLumiSpecClusters_shapeParameters", &_EcalLumiSpecClusters_shapeParameters, &b__EcalLumiSpecClusters_shapeParameters);
   fChain->SetBranchAddress("_EcalLumiSpecClusters_hitContributions", &_EcalLumiSpecClusters_hitContributions, &b__EcalLumiSpecClusters_hitContributions);
   fChain->SetBranchAddress("_EcalLumiSpecClusters_subdetectorEnergies", &_EcalLumiSpecClusters_subdetectorEnergies, &b__EcalLumiSpecClusters_subdetectorEnergies);
   fChain->SetBranchAddress("EcalLumiSpecRawHits", &EcalLumiSpecRawHits_, &b_EcalLumiSpecRawHits_);
   fChain->SetBranchAddress("EcalLumiSpecRawHits.cellID", EcalLumiSpecRawHits_cellID, &b_EcalLumiSpecRawHits_cellID);
   fChain->SetBranchAddress("EcalLumiSpecRawHits.amplitude", EcalLumiSpecRawHits_amplitude, &b_EcalLumiSpecRawHits_amplitude);
   fChain->SetBranchAddress("EcalLumiSpecRawHits.timeStamp", EcalLumiSpecRawHits_timeStamp, &b_EcalLumiSpecRawHits_timeStamp);
   fChain->SetBranchAddress("EcalLumiSpecRecHits", &EcalLumiSpecRecHits_, &b_EcalLumiSpecRecHits_);
   fChain->SetBranchAddress("EcalLumiSpecRecHits.cellID", EcalLumiSpecRecHits_cellID, &b_EcalLumiSpecRecHits_cellID);
   fChain->SetBranchAddress("EcalLumiSpecRecHits.energy", EcalLumiSpecRecHits_energy, &b_EcalLumiSpecRecHits_energy);
   fChain->SetBranchAddress("EcalLumiSpecRecHits.energyError", EcalLumiSpecRecHits_energyError, &b_EcalLumiSpecRecHits_energyError);
   fChain->SetBranchAddress("EcalLumiSpecRecHits.time", EcalLumiSpecRecHits_time, &b_EcalLumiSpecRecHits_time);
   fChain->SetBranchAddress("EcalLumiSpecRecHits.timeError", EcalLumiSpecRecHits_timeError, &b_EcalLumiSpecRecHits_timeError);
   fChain->SetBranchAddress("EcalLumiSpecRecHits.position.x", EcalLumiSpecRecHits_position_x, &b_EcalLumiSpecRecHits_position_x);
   fChain->SetBranchAddress("EcalLumiSpecRecHits.position.y", EcalLumiSpecRecHits_position_y, &b_EcalLumiSpecRecHits_position_y);
   fChain->SetBranchAddress("EcalLumiSpecRecHits.position.z", EcalLumiSpecRecHits_position_z, &b_EcalLumiSpecRecHits_position_z);
   fChain->SetBranchAddress("EcalLumiSpecRecHits.dimension.x", EcalLumiSpecRecHits_dimension_x, &b_EcalLumiSpecRecHits_dimension_x);
   fChain->SetBranchAddress("EcalLumiSpecRecHits.dimension.y", EcalLumiSpecRecHits_dimension_y, &b_EcalLumiSpecRecHits_dimension_y);
   fChain->SetBranchAddress("EcalLumiSpecRecHits.dimension.z", EcalLumiSpecRecHits_dimension_z, &b_EcalLumiSpecRecHits_dimension_z);
   fChain->SetBranchAddress("EcalLumiSpecRecHits.sector", EcalLumiSpecRecHits_sector, &b_EcalLumiSpecRecHits_sector);
   fChain->SetBranchAddress("EcalLumiSpecRecHits.layer", EcalLumiSpecRecHits_layer, &b_EcalLumiSpecRecHits_layer);
   fChain->SetBranchAddress("EcalLumiSpecRecHits.local.x", EcalLumiSpecRecHits_local_x, &b_EcalLumiSpecRecHits_local_x);
   fChain->SetBranchAddress("EcalLumiSpecRecHits.local.y", EcalLumiSpecRecHits_local_y, &b_EcalLumiSpecRecHits_local_y);
   fChain->SetBranchAddress("EcalLumiSpecRecHits.local.z", EcalLumiSpecRecHits_local_z, &b_EcalLumiSpecRecHits_local_z);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusterAssociations", &EcalLumiSpecTruthClusterAssociations_, &b_EcalLumiSpecTruthClusterAssociations_);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusterAssociations.simID", EcalLumiSpecTruthClusterAssociations_simID, &b_EcalLumiSpecTruthClusterAssociations_simID);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusterAssociations.recID", EcalLumiSpecTruthClusterAssociations_recID, &b_EcalLumiSpecTruthClusterAssociations_recID);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusterAssociations.weight", EcalLumiSpecTruthClusterAssociations_weight, &b_EcalLumiSpecTruthClusterAssociations_weight);
   fChain->SetBranchAddress("_EcalLumiSpecTruthClusterAssociations_rec", &_EcalLumiSpecTruthClusterAssociations_rec_, &b__EcalLumiSpecTruthClusterAssociations_rec_);
   fChain->SetBranchAddress("_EcalLumiSpecTruthClusterAssociations_rec.index", _EcalLumiSpecTruthClusterAssociations_rec_index, &b__EcalLumiSpecTruthClusterAssociations_rec_index);
   fChain->SetBranchAddress("_EcalLumiSpecTruthClusterAssociations_rec.collectionID", _EcalLumiSpecTruthClusterAssociations_rec_collectionID, &b__EcalLumiSpecTruthClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_EcalLumiSpecTruthClusterAssociations_sim", &_EcalLumiSpecTruthClusterAssociations_sim_, &b__EcalLumiSpecTruthClusterAssociations_sim_);
   fChain->SetBranchAddress("_EcalLumiSpecTruthClusterAssociations_sim.index", _EcalLumiSpecTruthClusterAssociations_sim_index, &b__EcalLumiSpecTruthClusterAssociations_sim_index);
   fChain->SetBranchAddress("_EcalLumiSpecTruthClusterAssociations_sim.collectionID", _EcalLumiSpecTruthClusterAssociations_sim_collectionID, &b__EcalLumiSpecTruthClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters", &EcalLumiSpecTruthClusters_, &b_EcalLumiSpecTruthClusters_);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.type", EcalLumiSpecTruthClusters_type, &b_EcalLumiSpecTruthClusters_type);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.energy", EcalLumiSpecTruthClusters_energy, &b_EcalLumiSpecTruthClusters_energy);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.energyError", EcalLumiSpecTruthClusters_energyError, &b_EcalLumiSpecTruthClusters_energyError);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.time", EcalLumiSpecTruthClusters_time, &b_EcalLumiSpecTruthClusters_time);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.timeError", EcalLumiSpecTruthClusters_timeError, &b_EcalLumiSpecTruthClusters_timeError);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.nhits", EcalLumiSpecTruthClusters_nhits, &b_EcalLumiSpecTruthClusters_nhits);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.position.x", EcalLumiSpecTruthClusters_position_x, &b_EcalLumiSpecTruthClusters_position_x);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.position.y", EcalLumiSpecTruthClusters_position_y, &b_EcalLumiSpecTruthClusters_position_y);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.position.z", EcalLumiSpecTruthClusters_position_z, &b_EcalLumiSpecTruthClusters_position_z);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.positionError.xx", EcalLumiSpecTruthClusters_positionError_xx, &b_EcalLumiSpecTruthClusters_positionError_xx);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.positionError.yy", EcalLumiSpecTruthClusters_positionError_yy, &b_EcalLumiSpecTruthClusters_positionError_yy);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.positionError.zz", EcalLumiSpecTruthClusters_positionError_zz, &b_EcalLumiSpecTruthClusters_positionError_zz);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.positionError.xy", EcalLumiSpecTruthClusters_positionError_xy, &b_EcalLumiSpecTruthClusters_positionError_xy);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.positionError.xz", EcalLumiSpecTruthClusters_positionError_xz, &b_EcalLumiSpecTruthClusters_positionError_xz);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.positionError.yz", EcalLumiSpecTruthClusters_positionError_yz, &b_EcalLumiSpecTruthClusters_positionError_yz);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.intrinsicTheta", EcalLumiSpecTruthClusters_intrinsicTheta, &b_EcalLumiSpecTruthClusters_intrinsicTheta);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.intrinsicPhi", EcalLumiSpecTruthClusters_intrinsicPhi, &b_EcalLumiSpecTruthClusters_intrinsicPhi);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.intrinsicDirectionError.xx", EcalLumiSpecTruthClusters_intrinsicDirectionError_xx, &b_EcalLumiSpecTruthClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.intrinsicDirectionError.yy", EcalLumiSpecTruthClusters_intrinsicDirectionError_yy, &b_EcalLumiSpecTruthClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.intrinsicDirectionError.xy", EcalLumiSpecTruthClusters_intrinsicDirectionError_xy, &b_EcalLumiSpecTruthClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.shapeParameters_begin", EcalLumiSpecTruthClusters_shapeParameters_begin, &b_EcalLumiSpecTruthClusters_shapeParameters_begin);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.shapeParameters_end", EcalLumiSpecTruthClusters_shapeParameters_end, &b_EcalLumiSpecTruthClusters_shapeParameters_end);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.hitContributions_begin", EcalLumiSpecTruthClusters_hitContributions_begin, &b_EcalLumiSpecTruthClusters_hitContributions_begin);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.hitContributions_end", EcalLumiSpecTruthClusters_hitContributions_end, &b_EcalLumiSpecTruthClusters_hitContributions_end);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.subdetectorEnergies_begin", EcalLumiSpecTruthClusters_subdetectorEnergies_begin, &b_EcalLumiSpecTruthClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.subdetectorEnergies_end", EcalLumiSpecTruthClusters_subdetectorEnergies_end, &b_EcalLumiSpecTruthClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.clusters_begin", EcalLumiSpecTruthClusters_clusters_begin, &b_EcalLumiSpecTruthClusters_clusters_begin);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.clusters_end", EcalLumiSpecTruthClusters_clusters_end, &b_EcalLumiSpecTruthClusters_clusters_end);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.hits_begin", EcalLumiSpecTruthClusters_hits_begin, &b_EcalLumiSpecTruthClusters_hits_begin);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.hits_end", EcalLumiSpecTruthClusters_hits_end, &b_EcalLumiSpecTruthClusters_hits_end);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.particleIDs_begin", EcalLumiSpecTruthClusters_particleIDs_begin, &b_EcalLumiSpecTruthClusters_particleIDs_begin);
   fChain->SetBranchAddress("EcalLumiSpecTruthClusters.particleIDs_end", EcalLumiSpecTruthClusters_particleIDs_end, &b_EcalLumiSpecTruthClusters_particleIDs_end);
   fChain->SetBranchAddress("_EcalLumiSpecTruthClusters_clusters", &_EcalLumiSpecTruthClusters_clusters_, &b__EcalLumiSpecTruthClusters_clusters_);
   fChain->SetBranchAddress("_EcalLumiSpecTruthClusters_clusters.index", &_EcalLumiSpecTruthClusters_clusters_index, &b__EcalLumiSpecTruthClusters_clusters_index);
   fChain->SetBranchAddress("_EcalLumiSpecTruthClusters_clusters.collectionID", &_EcalLumiSpecTruthClusters_clusters_collectionID, &b__EcalLumiSpecTruthClusters_clusters_collectionID);
   fChain->SetBranchAddress("_EcalLumiSpecTruthClusters_hits", &_EcalLumiSpecTruthClusters_hits_, &b__EcalLumiSpecTruthClusters_hits_);
   fChain->SetBranchAddress("_EcalLumiSpecTruthClusters_hits.index", &_EcalLumiSpecTruthClusters_hits_index, &b__EcalLumiSpecTruthClusters_hits_index);
   fChain->SetBranchAddress("_EcalLumiSpecTruthClusters_hits.collectionID", &_EcalLumiSpecTruthClusters_hits_collectionID, &b__EcalLumiSpecTruthClusters_hits_collectionID);
   fChain->SetBranchAddress("_EcalLumiSpecTruthClusters_particleIDs", &_EcalLumiSpecTruthClusters_particleIDs_, &b__EcalLumiSpecTruthClusters_particleIDs_);
   fChain->SetBranchAddress("_EcalLumiSpecTruthClusters_particleIDs.index", &_EcalLumiSpecTruthClusters_particleIDs_index, &b__EcalLumiSpecTruthClusters_particleIDs_index);
   fChain->SetBranchAddress("_EcalLumiSpecTruthClusters_particleIDs.collectionID", &_EcalLumiSpecTruthClusters_particleIDs_collectionID, &b__EcalLumiSpecTruthClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_EcalLumiSpecTruthClusters_shapeParameters", &_EcalLumiSpecTruthClusters_shapeParameters, &b__EcalLumiSpecTruthClusters_shapeParameters);
   fChain->SetBranchAddress("_EcalLumiSpecTruthClusters_hitContributions", &_EcalLumiSpecTruthClusters_hitContributions, &b__EcalLumiSpecTruthClusters_hitContributions);
   fChain->SetBranchAddress("_EcalLumiSpecTruthClusters_subdetectorEnergies", &_EcalLumiSpecTruthClusters_subdetectorEnergies, &b__EcalLumiSpecTruthClusters_subdetectorEnergies);
   fChain->SetBranchAddress("EventHeader", &EventHeader_, &b_EventHeader_);
   fChain->SetBranchAddress("EventHeader.eventNumber", EventHeader_eventNumber, &b_EventHeader_eventNumber);
   fChain->SetBranchAddress("EventHeader.runNumber", EventHeader_runNumber, &b_EventHeader_runNumber);
   fChain->SetBranchAddress("EventHeader.timeStamp", EventHeader_timeStamp, &b_EventHeader_timeStamp);
   fChain->SetBranchAddress("EventHeader.weight", EventHeader_weight, &b_EventHeader_weight);
   fChain->SetBranchAddress("ForwardMPGDEndcapRecHits", &ForwardMPGDEndcapRecHits_, &b_ForwardMPGDEndcapRecHits_);
   fChain->SetBranchAddress("ForwardMPGDEndcapRecHits.cellID", ForwardMPGDEndcapRecHits_cellID, &b_ForwardMPGDEndcapRecHits_cellID);
   fChain->SetBranchAddress("ForwardMPGDEndcapRecHits.position.x", ForwardMPGDEndcapRecHits_position_x, &b_ForwardMPGDEndcapRecHits_position_x);
   fChain->SetBranchAddress("ForwardMPGDEndcapRecHits.position.y", ForwardMPGDEndcapRecHits_position_y, &b_ForwardMPGDEndcapRecHits_position_y);
   fChain->SetBranchAddress("ForwardMPGDEndcapRecHits.position.z", ForwardMPGDEndcapRecHits_position_z, &b_ForwardMPGDEndcapRecHits_position_z);
   fChain->SetBranchAddress("ForwardMPGDEndcapRecHits.positionError.xx", ForwardMPGDEndcapRecHits_positionError_xx, &b_ForwardMPGDEndcapRecHits_positionError_xx);
   fChain->SetBranchAddress("ForwardMPGDEndcapRecHits.positionError.yy", ForwardMPGDEndcapRecHits_positionError_yy, &b_ForwardMPGDEndcapRecHits_positionError_yy);
   fChain->SetBranchAddress("ForwardMPGDEndcapRecHits.positionError.zz", ForwardMPGDEndcapRecHits_positionError_zz, &b_ForwardMPGDEndcapRecHits_positionError_zz);
   fChain->SetBranchAddress("ForwardMPGDEndcapRecHits.time", ForwardMPGDEndcapRecHits_time, &b_ForwardMPGDEndcapRecHits_time);
   fChain->SetBranchAddress("ForwardMPGDEndcapRecHits.timeError", ForwardMPGDEndcapRecHits_timeError, &b_ForwardMPGDEndcapRecHits_timeError);
   fChain->SetBranchAddress("ForwardMPGDEndcapRecHits.edep", ForwardMPGDEndcapRecHits_edep, &b_ForwardMPGDEndcapRecHits_edep);
   fChain->SetBranchAddress("ForwardMPGDEndcapRecHits.edepError", ForwardMPGDEndcapRecHits_edepError, &b_ForwardMPGDEndcapRecHits_edepError);
   fChain->SetBranchAddress("ForwardOffMRecParticles", &ForwardOffMRecParticles_, &b_ForwardOffMRecParticles_);
   fChain->SetBranchAddress("ForwardOffMRecParticles.type", ForwardOffMRecParticles_type, &b_ForwardOffMRecParticles_type);
   fChain->SetBranchAddress("ForwardOffMRecParticles.energy", ForwardOffMRecParticles_energy, &b_ForwardOffMRecParticles_energy);
   fChain->SetBranchAddress("ForwardOffMRecParticles.momentum.x", ForwardOffMRecParticles_momentum_x, &b_ForwardOffMRecParticles_momentum_x);
   fChain->SetBranchAddress("ForwardOffMRecParticles.momentum.y", ForwardOffMRecParticles_momentum_y, &b_ForwardOffMRecParticles_momentum_y);
   fChain->SetBranchAddress("ForwardOffMRecParticles.momentum.z", ForwardOffMRecParticles_momentum_z, &b_ForwardOffMRecParticles_momentum_z);
   fChain->SetBranchAddress("ForwardOffMRecParticles.referencePoint.x", ForwardOffMRecParticles_referencePoint_x, &b_ForwardOffMRecParticles_referencePoint_x);
   fChain->SetBranchAddress("ForwardOffMRecParticles.referencePoint.y", ForwardOffMRecParticles_referencePoint_y, &b_ForwardOffMRecParticles_referencePoint_y);
   fChain->SetBranchAddress("ForwardOffMRecParticles.referencePoint.z", ForwardOffMRecParticles_referencePoint_z, &b_ForwardOffMRecParticles_referencePoint_z);
   fChain->SetBranchAddress("ForwardOffMRecParticles.charge", ForwardOffMRecParticles_charge, &b_ForwardOffMRecParticles_charge);
   fChain->SetBranchAddress("ForwardOffMRecParticles.mass", ForwardOffMRecParticles_mass, &b_ForwardOffMRecParticles_mass);
   fChain->SetBranchAddress("ForwardOffMRecParticles.goodnessOfPID", ForwardOffMRecParticles_goodnessOfPID, &b_ForwardOffMRecParticles_goodnessOfPID);
   fChain->SetBranchAddress("ForwardOffMRecParticles.covMatrix.xx", ForwardOffMRecParticles_covMatrix_xx, &b_ForwardOffMRecParticles_covMatrix_xx);
   fChain->SetBranchAddress("ForwardOffMRecParticles.covMatrix.yy", ForwardOffMRecParticles_covMatrix_yy, &b_ForwardOffMRecParticles_covMatrix_yy);
   fChain->SetBranchAddress("ForwardOffMRecParticles.covMatrix.zz", ForwardOffMRecParticles_covMatrix_zz, &b_ForwardOffMRecParticles_covMatrix_zz);
   fChain->SetBranchAddress("ForwardOffMRecParticles.covMatrix.tt", ForwardOffMRecParticles_covMatrix_tt, &b_ForwardOffMRecParticles_covMatrix_tt);
   fChain->SetBranchAddress("ForwardOffMRecParticles.covMatrix.xy", ForwardOffMRecParticles_covMatrix_xy, &b_ForwardOffMRecParticles_covMatrix_xy);
   fChain->SetBranchAddress("ForwardOffMRecParticles.covMatrix.xz", ForwardOffMRecParticles_covMatrix_xz, &b_ForwardOffMRecParticles_covMatrix_xz);
   fChain->SetBranchAddress("ForwardOffMRecParticles.covMatrix.xt", ForwardOffMRecParticles_covMatrix_xt, &b_ForwardOffMRecParticles_covMatrix_xt);
   fChain->SetBranchAddress("ForwardOffMRecParticles.covMatrix.yz", ForwardOffMRecParticles_covMatrix_yz, &b_ForwardOffMRecParticles_covMatrix_yz);
   fChain->SetBranchAddress("ForwardOffMRecParticles.covMatrix.yt", ForwardOffMRecParticles_covMatrix_yt, &b_ForwardOffMRecParticles_covMatrix_yt);
   fChain->SetBranchAddress("ForwardOffMRecParticles.covMatrix.zt", ForwardOffMRecParticles_covMatrix_zt, &b_ForwardOffMRecParticles_covMatrix_zt);
   fChain->SetBranchAddress("ForwardOffMRecParticles.PDG", ForwardOffMRecParticles_PDG, &b_ForwardOffMRecParticles_PDG);
   fChain->SetBranchAddress("ForwardOffMRecParticles.clusters_begin", ForwardOffMRecParticles_clusters_begin, &b_ForwardOffMRecParticles_clusters_begin);
   fChain->SetBranchAddress("ForwardOffMRecParticles.clusters_end", ForwardOffMRecParticles_clusters_end, &b_ForwardOffMRecParticles_clusters_end);
   fChain->SetBranchAddress("ForwardOffMRecParticles.tracks_begin", ForwardOffMRecParticles_tracks_begin, &b_ForwardOffMRecParticles_tracks_begin);
   fChain->SetBranchAddress("ForwardOffMRecParticles.tracks_end", ForwardOffMRecParticles_tracks_end, &b_ForwardOffMRecParticles_tracks_end);
   fChain->SetBranchAddress("ForwardOffMRecParticles.particles_begin", ForwardOffMRecParticles_particles_begin, &b_ForwardOffMRecParticles_particles_begin);
   fChain->SetBranchAddress("ForwardOffMRecParticles.particles_end", ForwardOffMRecParticles_particles_end, &b_ForwardOffMRecParticles_particles_end);
   fChain->SetBranchAddress("ForwardOffMRecParticles.particleIDs_begin", ForwardOffMRecParticles_particleIDs_begin, &b_ForwardOffMRecParticles_particleIDs_begin);
   fChain->SetBranchAddress("ForwardOffMRecParticles.particleIDs_end", ForwardOffMRecParticles_particleIDs_end, &b_ForwardOffMRecParticles_particleIDs_end);
   fChain->SetBranchAddress("_ForwardOffMRecParticles_clusters", &_ForwardOffMRecParticles_clusters_, &b__ForwardOffMRecParticles_clusters_);
   fChain->SetBranchAddress("_ForwardOffMRecParticles_clusters.index", &_ForwardOffMRecParticles_clusters_index, &b__ForwardOffMRecParticles_clusters_index);
   fChain->SetBranchAddress("_ForwardOffMRecParticles_clusters.collectionID", &_ForwardOffMRecParticles_clusters_collectionID, &b__ForwardOffMRecParticles_clusters_collectionID);
   fChain->SetBranchAddress("_ForwardOffMRecParticles_tracks", &_ForwardOffMRecParticles_tracks_, &b__ForwardOffMRecParticles_tracks_);
   fChain->SetBranchAddress("_ForwardOffMRecParticles_tracks.index", &_ForwardOffMRecParticles_tracks_index, &b__ForwardOffMRecParticles_tracks_index);
   fChain->SetBranchAddress("_ForwardOffMRecParticles_tracks.collectionID", &_ForwardOffMRecParticles_tracks_collectionID, &b__ForwardOffMRecParticles_tracks_collectionID);
   fChain->SetBranchAddress("_ForwardOffMRecParticles_particles", &_ForwardOffMRecParticles_particles_, &b__ForwardOffMRecParticles_particles_);
   fChain->SetBranchAddress("_ForwardOffMRecParticles_particles.index", &_ForwardOffMRecParticles_particles_index, &b__ForwardOffMRecParticles_particles_index);
   fChain->SetBranchAddress("_ForwardOffMRecParticles_particles.collectionID", &_ForwardOffMRecParticles_particles_collectionID, &b__ForwardOffMRecParticles_particles_collectionID);
   fChain->SetBranchAddress("_ForwardOffMRecParticles_particleIDs", &_ForwardOffMRecParticles_particleIDs_, &b__ForwardOffMRecParticles_particleIDs_);
   fChain->SetBranchAddress("_ForwardOffMRecParticles_particleIDs.index", &_ForwardOffMRecParticles_particleIDs_index, &b__ForwardOffMRecParticles_particleIDs_index);
   fChain->SetBranchAddress("_ForwardOffMRecParticles_particleIDs.collectionID", &_ForwardOffMRecParticles_particleIDs_collectionID, &b__ForwardOffMRecParticles_particleIDs_collectionID);
   fChain->SetBranchAddress("_ForwardOffMRecParticles_startVertex", &_ForwardOffMRecParticles_startVertex_, &b__ForwardOffMRecParticles_startVertex_);
   fChain->SetBranchAddress("_ForwardOffMRecParticles_startVertex.index", _ForwardOffMRecParticles_startVertex_index, &b__ForwardOffMRecParticles_startVertex_index);
   fChain->SetBranchAddress("_ForwardOffMRecParticles_startVertex.collectionID", _ForwardOffMRecParticles_startVertex_collectionID, &b__ForwardOffMRecParticles_startVertex_collectionID);
   fChain->SetBranchAddress("_ForwardOffMRecParticles_particleIDUsed", &_ForwardOffMRecParticles_particleIDUsed_, &b__ForwardOffMRecParticles_particleIDUsed_);
   fChain->SetBranchAddress("_ForwardOffMRecParticles_particleIDUsed.index", _ForwardOffMRecParticles_particleIDUsed_index, &b__ForwardOffMRecParticles_particleIDUsed_index);
   fChain->SetBranchAddress("_ForwardOffMRecParticles_particleIDUsed.collectionID", _ForwardOffMRecParticles_particleIDUsed_collectionID, &b__ForwardOffMRecParticles_particleIDUsed_collectionID);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles", &ForwardRomanPotRecParticles_, &b_ForwardRomanPotRecParticles_);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.type", ForwardRomanPotRecParticles_type, &b_ForwardRomanPotRecParticles_type);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.energy", ForwardRomanPotRecParticles_energy, &b_ForwardRomanPotRecParticles_energy);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.momentum.x", ForwardRomanPotRecParticles_momentum_x, &b_ForwardRomanPotRecParticles_momentum_x);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.momentum.y", ForwardRomanPotRecParticles_momentum_y, &b_ForwardRomanPotRecParticles_momentum_y);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.momentum.z", ForwardRomanPotRecParticles_momentum_z, &b_ForwardRomanPotRecParticles_momentum_z);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.referencePoint.x", ForwardRomanPotRecParticles_referencePoint_x, &b_ForwardRomanPotRecParticles_referencePoint_x);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.referencePoint.y", ForwardRomanPotRecParticles_referencePoint_y, &b_ForwardRomanPotRecParticles_referencePoint_y);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.referencePoint.z", ForwardRomanPotRecParticles_referencePoint_z, &b_ForwardRomanPotRecParticles_referencePoint_z);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.charge", ForwardRomanPotRecParticles_charge, &b_ForwardRomanPotRecParticles_charge);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.mass", ForwardRomanPotRecParticles_mass, &b_ForwardRomanPotRecParticles_mass);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.goodnessOfPID", ForwardRomanPotRecParticles_goodnessOfPID, &b_ForwardRomanPotRecParticles_goodnessOfPID);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.covMatrix.xx", ForwardRomanPotRecParticles_covMatrix_xx, &b_ForwardRomanPotRecParticles_covMatrix_xx);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.covMatrix.yy", ForwardRomanPotRecParticles_covMatrix_yy, &b_ForwardRomanPotRecParticles_covMatrix_yy);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.covMatrix.zz", ForwardRomanPotRecParticles_covMatrix_zz, &b_ForwardRomanPotRecParticles_covMatrix_zz);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.covMatrix.tt", ForwardRomanPotRecParticles_covMatrix_tt, &b_ForwardRomanPotRecParticles_covMatrix_tt);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.covMatrix.xy", ForwardRomanPotRecParticles_covMatrix_xy, &b_ForwardRomanPotRecParticles_covMatrix_xy);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.covMatrix.xz", ForwardRomanPotRecParticles_covMatrix_xz, &b_ForwardRomanPotRecParticles_covMatrix_xz);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.covMatrix.xt", ForwardRomanPotRecParticles_covMatrix_xt, &b_ForwardRomanPotRecParticles_covMatrix_xt);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.covMatrix.yz", ForwardRomanPotRecParticles_covMatrix_yz, &b_ForwardRomanPotRecParticles_covMatrix_yz);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.covMatrix.yt", ForwardRomanPotRecParticles_covMatrix_yt, &b_ForwardRomanPotRecParticles_covMatrix_yt);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.covMatrix.zt", ForwardRomanPotRecParticles_covMatrix_zt, &b_ForwardRomanPotRecParticles_covMatrix_zt);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.PDG", ForwardRomanPotRecParticles_PDG, &b_ForwardRomanPotRecParticles_PDG);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.clusters_begin", ForwardRomanPotRecParticles_clusters_begin, &b_ForwardRomanPotRecParticles_clusters_begin);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.clusters_end", ForwardRomanPotRecParticles_clusters_end, &b_ForwardRomanPotRecParticles_clusters_end);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.tracks_begin", ForwardRomanPotRecParticles_tracks_begin, &b_ForwardRomanPotRecParticles_tracks_begin);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.tracks_end", ForwardRomanPotRecParticles_tracks_end, &b_ForwardRomanPotRecParticles_tracks_end);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.particles_begin", ForwardRomanPotRecParticles_particles_begin, &b_ForwardRomanPotRecParticles_particles_begin);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.particles_end", ForwardRomanPotRecParticles_particles_end, &b_ForwardRomanPotRecParticles_particles_end);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.particleIDs_begin", ForwardRomanPotRecParticles_particleIDs_begin, &b_ForwardRomanPotRecParticles_particleIDs_begin);
   fChain->SetBranchAddress("ForwardRomanPotRecParticles.particleIDs_end", ForwardRomanPotRecParticles_particleIDs_end, &b_ForwardRomanPotRecParticles_particleIDs_end);
   fChain->SetBranchAddress("_ForwardRomanPotRecParticles_clusters", &_ForwardRomanPotRecParticles_clusters_, &b__ForwardRomanPotRecParticles_clusters_);
   fChain->SetBranchAddress("_ForwardRomanPotRecParticles_clusters.index", &_ForwardRomanPotRecParticles_clusters_index, &b__ForwardRomanPotRecParticles_clusters_index);
   fChain->SetBranchAddress("_ForwardRomanPotRecParticles_clusters.collectionID", &_ForwardRomanPotRecParticles_clusters_collectionID, &b__ForwardRomanPotRecParticles_clusters_collectionID);
   fChain->SetBranchAddress("_ForwardRomanPotRecParticles_tracks", &_ForwardRomanPotRecParticles_tracks_, &b__ForwardRomanPotRecParticles_tracks_);
   fChain->SetBranchAddress("_ForwardRomanPotRecParticles_tracks.index", &_ForwardRomanPotRecParticles_tracks_index, &b__ForwardRomanPotRecParticles_tracks_index);
   fChain->SetBranchAddress("_ForwardRomanPotRecParticles_tracks.collectionID", &_ForwardRomanPotRecParticles_tracks_collectionID, &b__ForwardRomanPotRecParticles_tracks_collectionID);
   fChain->SetBranchAddress("_ForwardRomanPotRecParticles_particles", &_ForwardRomanPotRecParticles_particles_, &b__ForwardRomanPotRecParticles_particles_);
   fChain->SetBranchAddress("_ForwardRomanPotRecParticles_particles.index", &_ForwardRomanPotRecParticles_particles_index, &b__ForwardRomanPotRecParticles_particles_index);
   fChain->SetBranchAddress("_ForwardRomanPotRecParticles_particles.collectionID", &_ForwardRomanPotRecParticles_particles_collectionID, &b__ForwardRomanPotRecParticles_particles_collectionID);
   fChain->SetBranchAddress("_ForwardRomanPotRecParticles_particleIDs", &_ForwardRomanPotRecParticles_particleIDs_, &b__ForwardRomanPotRecParticles_particleIDs_);
   fChain->SetBranchAddress("_ForwardRomanPotRecParticles_particleIDs.index", &_ForwardRomanPotRecParticles_particleIDs_index, &b__ForwardRomanPotRecParticles_particleIDs_index);
   fChain->SetBranchAddress("_ForwardRomanPotRecParticles_particleIDs.collectionID", &_ForwardRomanPotRecParticles_particleIDs_collectionID, &b__ForwardRomanPotRecParticles_particleIDs_collectionID);
   fChain->SetBranchAddress("_ForwardRomanPotRecParticles_startVertex", &_ForwardRomanPotRecParticles_startVertex_, &b__ForwardRomanPotRecParticles_startVertex_);
   fChain->SetBranchAddress("_ForwardRomanPotRecParticles_startVertex.index", _ForwardRomanPotRecParticles_startVertex_index, &b__ForwardRomanPotRecParticles_startVertex_index);
   fChain->SetBranchAddress("_ForwardRomanPotRecParticles_startVertex.collectionID", _ForwardRomanPotRecParticles_startVertex_collectionID, &b__ForwardRomanPotRecParticles_startVertex_collectionID);
   fChain->SetBranchAddress("_ForwardRomanPotRecParticles_particleIDUsed", &_ForwardRomanPotRecParticles_particleIDUsed_, &b__ForwardRomanPotRecParticles_particleIDUsed_);
   fChain->SetBranchAddress("_ForwardRomanPotRecParticles_particleIDUsed.index", _ForwardRomanPotRecParticles_particleIDUsed_index, &b__ForwardRomanPotRecParticles_particleIDUsed_index);
   fChain->SetBranchAddress("_ForwardRomanPotRecParticles_particleIDUsed.collectionID", _ForwardRomanPotRecParticles_particleIDUsed_collectionID, &b__ForwardRomanPotRecParticles_particleIDUsed_collectionID);
   fChain->SetBranchAddress("GeneratedChargedJets", &GeneratedChargedJets_, &b_GeneratedChargedJets_);
   fChain->SetBranchAddress("GeneratedChargedJets.type", GeneratedChargedJets_type, &b_GeneratedChargedJets_type);
   fChain->SetBranchAddress("GeneratedChargedJets.energy", GeneratedChargedJets_energy, &b_GeneratedChargedJets_energy);
   fChain->SetBranchAddress("GeneratedChargedJets.momentum.x", GeneratedChargedJets_momentum_x, &b_GeneratedChargedJets_momentum_x);
   fChain->SetBranchAddress("GeneratedChargedJets.momentum.y", GeneratedChargedJets_momentum_y, &b_GeneratedChargedJets_momentum_y);
   fChain->SetBranchAddress("GeneratedChargedJets.momentum.z", GeneratedChargedJets_momentum_z, &b_GeneratedChargedJets_momentum_z);
   fChain->SetBranchAddress("GeneratedChargedJets.referencePoint.x", GeneratedChargedJets_referencePoint_x, &b_GeneratedChargedJets_referencePoint_x);
   fChain->SetBranchAddress("GeneratedChargedJets.referencePoint.y", GeneratedChargedJets_referencePoint_y, &b_GeneratedChargedJets_referencePoint_y);
   fChain->SetBranchAddress("GeneratedChargedJets.referencePoint.z", GeneratedChargedJets_referencePoint_z, &b_GeneratedChargedJets_referencePoint_z);
   fChain->SetBranchAddress("GeneratedChargedJets.charge", GeneratedChargedJets_charge, &b_GeneratedChargedJets_charge);
   fChain->SetBranchAddress("GeneratedChargedJets.mass", GeneratedChargedJets_mass, &b_GeneratedChargedJets_mass);
   fChain->SetBranchAddress("GeneratedChargedJets.goodnessOfPID", GeneratedChargedJets_goodnessOfPID, &b_GeneratedChargedJets_goodnessOfPID);
   fChain->SetBranchAddress("GeneratedChargedJets.covMatrix.xx", GeneratedChargedJets_covMatrix_xx, &b_GeneratedChargedJets_covMatrix_xx);
   fChain->SetBranchAddress("GeneratedChargedJets.covMatrix.yy", GeneratedChargedJets_covMatrix_yy, &b_GeneratedChargedJets_covMatrix_yy);
   fChain->SetBranchAddress("GeneratedChargedJets.covMatrix.zz", GeneratedChargedJets_covMatrix_zz, &b_GeneratedChargedJets_covMatrix_zz);
   fChain->SetBranchAddress("GeneratedChargedJets.covMatrix.tt", GeneratedChargedJets_covMatrix_tt, &b_GeneratedChargedJets_covMatrix_tt);
   fChain->SetBranchAddress("GeneratedChargedJets.covMatrix.xy", GeneratedChargedJets_covMatrix_xy, &b_GeneratedChargedJets_covMatrix_xy);
   fChain->SetBranchAddress("GeneratedChargedJets.covMatrix.xz", GeneratedChargedJets_covMatrix_xz, &b_GeneratedChargedJets_covMatrix_xz);
   fChain->SetBranchAddress("GeneratedChargedJets.covMatrix.xt", GeneratedChargedJets_covMatrix_xt, &b_GeneratedChargedJets_covMatrix_xt);
   fChain->SetBranchAddress("GeneratedChargedJets.covMatrix.yz", GeneratedChargedJets_covMatrix_yz, &b_GeneratedChargedJets_covMatrix_yz);
   fChain->SetBranchAddress("GeneratedChargedJets.covMatrix.yt", GeneratedChargedJets_covMatrix_yt, &b_GeneratedChargedJets_covMatrix_yt);
   fChain->SetBranchAddress("GeneratedChargedJets.covMatrix.zt", GeneratedChargedJets_covMatrix_zt, &b_GeneratedChargedJets_covMatrix_zt);
   fChain->SetBranchAddress("GeneratedChargedJets.PDG", GeneratedChargedJets_PDG, &b_GeneratedChargedJets_PDG);
   fChain->SetBranchAddress("GeneratedChargedJets.clusters_begin", GeneratedChargedJets_clusters_begin, &b_GeneratedChargedJets_clusters_begin);
   fChain->SetBranchAddress("GeneratedChargedJets.clusters_end", GeneratedChargedJets_clusters_end, &b_GeneratedChargedJets_clusters_end);
   fChain->SetBranchAddress("GeneratedChargedJets.tracks_begin", GeneratedChargedJets_tracks_begin, &b_GeneratedChargedJets_tracks_begin);
   fChain->SetBranchAddress("GeneratedChargedJets.tracks_end", GeneratedChargedJets_tracks_end, &b_GeneratedChargedJets_tracks_end);
   fChain->SetBranchAddress("GeneratedChargedJets.particles_begin", GeneratedChargedJets_particles_begin, &b_GeneratedChargedJets_particles_begin);
   fChain->SetBranchAddress("GeneratedChargedJets.particles_end", GeneratedChargedJets_particles_end, &b_GeneratedChargedJets_particles_end);
   fChain->SetBranchAddress("GeneratedChargedJets.particleIDs_begin", GeneratedChargedJets_particleIDs_begin, &b_GeneratedChargedJets_particleIDs_begin);
   fChain->SetBranchAddress("GeneratedChargedJets.particleIDs_end", GeneratedChargedJets_particleIDs_end, &b_GeneratedChargedJets_particleIDs_end);
   fChain->SetBranchAddress("_GeneratedChargedJets_clusters", &_GeneratedChargedJets_clusters_, &b__GeneratedChargedJets_clusters_);
   fChain->SetBranchAddress("_GeneratedChargedJets_clusters.index", &_GeneratedChargedJets_clusters_index, &b__GeneratedChargedJets_clusters_index);
   fChain->SetBranchAddress("_GeneratedChargedJets_clusters.collectionID", &_GeneratedChargedJets_clusters_collectionID, &b__GeneratedChargedJets_clusters_collectionID);
   fChain->SetBranchAddress("_GeneratedChargedJets_tracks", &_GeneratedChargedJets_tracks_, &b__GeneratedChargedJets_tracks_);
   fChain->SetBranchAddress("_GeneratedChargedJets_tracks.index", &_GeneratedChargedJets_tracks_index, &b__GeneratedChargedJets_tracks_index);
   fChain->SetBranchAddress("_GeneratedChargedJets_tracks.collectionID", &_GeneratedChargedJets_tracks_collectionID, &b__GeneratedChargedJets_tracks_collectionID);
   fChain->SetBranchAddress("_GeneratedChargedJets_particles", &_GeneratedChargedJets_particles_, &b__GeneratedChargedJets_particles_);
   fChain->SetBranchAddress("_GeneratedChargedJets_particles.index", &_GeneratedChargedJets_particles_index, &b__GeneratedChargedJets_particles_index);
   fChain->SetBranchAddress("_GeneratedChargedJets_particles.collectionID", &_GeneratedChargedJets_particles_collectionID, &b__GeneratedChargedJets_particles_collectionID);
   fChain->SetBranchAddress("_GeneratedChargedJets_particleIDs", &_GeneratedChargedJets_particleIDs_, &b__GeneratedChargedJets_particleIDs_);
   fChain->SetBranchAddress("_GeneratedChargedJets_particleIDs.index", &_GeneratedChargedJets_particleIDs_index, &b__GeneratedChargedJets_particleIDs_index);
   fChain->SetBranchAddress("_GeneratedChargedJets_particleIDs.collectionID", &_GeneratedChargedJets_particleIDs_collectionID, &b__GeneratedChargedJets_particleIDs_collectionID);
   fChain->SetBranchAddress("_GeneratedChargedJets_startVertex", &_GeneratedChargedJets_startVertex_, &b__GeneratedChargedJets_startVertex_);
   fChain->SetBranchAddress("_GeneratedChargedJets_startVertex.index", _GeneratedChargedJets_startVertex_index, &b__GeneratedChargedJets_startVertex_index);
   fChain->SetBranchAddress("_GeneratedChargedJets_startVertex.collectionID", _GeneratedChargedJets_startVertex_collectionID, &b__GeneratedChargedJets_startVertex_collectionID);
   fChain->SetBranchAddress("_GeneratedChargedJets_particleIDUsed", &_GeneratedChargedJets_particleIDUsed_, &b__GeneratedChargedJets_particleIDUsed_);
   fChain->SetBranchAddress("_GeneratedChargedJets_particleIDUsed.index", _GeneratedChargedJets_particleIDUsed_index, &b__GeneratedChargedJets_particleIDUsed_index);
   fChain->SetBranchAddress("_GeneratedChargedJets_particleIDUsed.collectionID", _GeneratedChargedJets_particleIDUsed_collectionID, &b__GeneratedChargedJets_particleIDUsed_collectionID);
   fChain->SetBranchAddress("GeneratedJets", &GeneratedJets_, &b_GeneratedJets_);
   fChain->SetBranchAddress("GeneratedJets.type", GeneratedJets_type, &b_GeneratedJets_type);
   fChain->SetBranchAddress("GeneratedJets.energy", GeneratedJets_energy, &b_GeneratedJets_energy);
   fChain->SetBranchAddress("GeneratedJets.momentum.x", GeneratedJets_momentum_x, &b_GeneratedJets_momentum_x);
   fChain->SetBranchAddress("GeneratedJets.momentum.y", GeneratedJets_momentum_y, &b_GeneratedJets_momentum_y);
   fChain->SetBranchAddress("GeneratedJets.momentum.z", GeneratedJets_momentum_z, &b_GeneratedJets_momentum_z);
   fChain->SetBranchAddress("GeneratedJets.referencePoint.x", GeneratedJets_referencePoint_x, &b_GeneratedJets_referencePoint_x);
   fChain->SetBranchAddress("GeneratedJets.referencePoint.y", GeneratedJets_referencePoint_y, &b_GeneratedJets_referencePoint_y);
   fChain->SetBranchAddress("GeneratedJets.referencePoint.z", GeneratedJets_referencePoint_z, &b_GeneratedJets_referencePoint_z);
   fChain->SetBranchAddress("GeneratedJets.charge", GeneratedJets_charge, &b_GeneratedJets_charge);
   fChain->SetBranchAddress("GeneratedJets.mass", GeneratedJets_mass, &b_GeneratedJets_mass);
   fChain->SetBranchAddress("GeneratedJets.goodnessOfPID", GeneratedJets_goodnessOfPID, &b_GeneratedJets_goodnessOfPID);
   fChain->SetBranchAddress("GeneratedJets.covMatrix.xx", GeneratedJets_covMatrix_xx, &b_GeneratedJets_covMatrix_xx);
   fChain->SetBranchAddress("GeneratedJets.covMatrix.yy", GeneratedJets_covMatrix_yy, &b_GeneratedJets_covMatrix_yy);
   fChain->SetBranchAddress("GeneratedJets.covMatrix.zz", GeneratedJets_covMatrix_zz, &b_GeneratedJets_covMatrix_zz);
   fChain->SetBranchAddress("GeneratedJets.covMatrix.tt", GeneratedJets_covMatrix_tt, &b_GeneratedJets_covMatrix_tt);
   fChain->SetBranchAddress("GeneratedJets.covMatrix.xy", GeneratedJets_covMatrix_xy, &b_GeneratedJets_covMatrix_xy);
   fChain->SetBranchAddress("GeneratedJets.covMatrix.xz", GeneratedJets_covMatrix_xz, &b_GeneratedJets_covMatrix_xz);
   fChain->SetBranchAddress("GeneratedJets.covMatrix.xt", GeneratedJets_covMatrix_xt, &b_GeneratedJets_covMatrix_xt);
   fChain->SetBranchAddress("GeneratedJets.covMatrix.yz", GeneratedJets_covMatrix_yz, &b_GeneratedJets_covMatrix_yz);
   fChain->SetBranchAddress("GeneratedJets.covMatrix.yt", GeneratedJets_covMatrix_yt, &b_GeneratedJets_covMatrix_yt);
   fChain->SetBranchAddress("GeneratedJets.covMatrix.zt", GeneratedJets_covMatrix_zt, &b_GeneratedJets_covMatrix_zt);
   fChain->SetBranchAddress("GeneratedJets.PDG", GeneratedJets_PDG, &b_GeneratedJets_PDG);
   fChain->SetBranchAddress("GeneratedJets.clusters_begin", GeneratedJets_clusters_begin, &b_GeneratedJets_clusters_begin);
   fChain->SetBranchAddress("GeneratedJets.clusters_end", GeneratedJets_clusters_end, &b_GeneratedJets_clusters_end);
   fChain->SetBranchAddress("GeneratedJets.tracks_begin", GeneratedJets_tracks_begin, &b_GeneratedJets_tracks_begin);
   fChain->SetBranchAddress("GeneratedJets.tracks_end", GeneratedJets_tracks_end, &b_GeneratedJets_tracks_end);
   fChain->SetBranchAddress("GeneratedJets.particles_begin", GeneratedJets_particles_begin, &b_GeneratedJets_particles_begin);
   fChain->SetBranchAddress("GeneratedJets.particles_end", GeneratedJets_particles_end, &b_GeneratedJets_particles_end);
   fChain->SetBranchAddress("GeneratedJets.particleIDs_begin", GeneratedJets_particleIDs_begin, &b_GeneratedJets_particleIDs_begin);
   fChain->SetBranchAddress("GeneratedJets.particleIDs_end", GeneratedJets_particleIDs_end, &b_GeneratedJets_particleIDs_end);
   fChain->SetBranchAddress("_GeneratedJets_clusters", &_GeneratedJets_clusters_, &b__GeneratedJets_clusters_);
   fChain->SetBranchAddress("_GeneratedJets_clusters.index", &_GeneratedJets_clusters_index, &b__GeneratedJets_clusters_index);
   fChain->SetBranchAddress("_GeneratedJets_clusters.collectionID", &_GeneratedJets_clusters_collectionID, &b__GeneratedJets_clusters_collectionID);
   fChain->SetBranchAddress("_GeneratedJets_tracks", &_GeneratedJets_tracks_, &b__GeneratedJets_tracks_);
   fChain->SetBranchAddress("_GeneratedJets_tracks.index", &_GeneratedJets_tracks_index, &b__GeneratedJets_tracks_index);
   fChain->SetBranchAddress("_GeneratedJets_tracks.collectionID", &_GeneratedJets_tracks_collectionID, &b__GeneratedJets_tracks_collectionID);
   fChain->SetBranchAddress("_GeneratedJets_particles", &_GeneratedJets_particles_, &b__GeneratedJets_particles_);
   fChain->SetBranchAddress("_GeneratedJets_particles.index", &_GeneratedJets_particles_index, &b__GeneratedJets_particles_index);
   fChain->SetBranchAddress("_GeneratedJets_particles.collectionID", &_GeneratedJets_particles_collectionID, &b__GeneratedJets_particles_collectionID);
   fChain->SetBranchAddress("_GeneratedJets_particleIDs", &_GeneratedJets_particleIDs_, &b__GeneratedJets_particleIDs_);
   fChain->SetBranchAddress("_GeneratedJets_particleIDs.index", &_GeneratedJets_particleIDs_index, &b__GeneratedJets_particleIDs_index);
   fChain->SetBranchAddress("_GeneratedJets_particleIDs.collectionID", &_GeneratedJets_particleIDs_collectionID, &b__GeneratedJets_particleIDs_collectionID);
   fChain->SetBranchAddress("_GeneratedJets_startVertex", &_GeneratedJets_startVertex_, &b__GeneratedJets_startVertex_);
   fChain->SetBranchAddress("_GeneratedJets_startVertex.index", _GeneratedJets_startVertex_index, &b__GeneratedJets_startVertex_index);
   fChain->SetBranchAddress("_GeneratedJets_startVertex.collectionID", _GeneratedJets_startVertex_collectionID, &b__GeneratedJets_startVertex_collectionID);
   fChain->SetBranchAddress("_GeneratedJets_particleIDUsed", &_GeneratedJets_particleIDUsed_, &b__GeneratedJets_particleIDUsed_);
   fChain->SetBranchAddress("_GeneratedJets_particleIDUsed.index", _GeneratedJets_particleIDUsed_index, &b__GeneratedJets_particleIDUsed_index);
   fChain->SetBranchAddress("_GeneratedJets_particleIDUsed.collectionID", _GeneratedJets_particleIDUsed_collectionID, &b__GeneratedJets_particleIDUsed_collectionID);
   fChain->SetBranchAddress("GeneratedParticles", &GeneratedParticles_, &b_GeneratedParticles_);
   fChain->SetBranchAddress("GeneratedParticles.type", GeneratedParticles_type, &b_GeneratedParticles_type);
   fChain->SetBranchAddress("GeneratedParticles.energy", GeneratedParticles_energy, &b_GeneratedParticles_energy);
   fChain->SetBranchAddress("GeneratedParticles.momentum.x", GeneratedParticles_momentum_x, &b_GeneratedParticles_momentum_x);
   fChain->SetBranchAddress("GeneratedParticles.momentum.y", GeneratedParticles_momentum_y, &b_GeneratedParticles_momentum_y);
   fChain->SetBranchAddress("GeneratedParticles.momentum.z", GeneratedParticles_momentum_z, &b_GeneratedParticles_momentum_z);
   fChain->SetBranchAddress("GeneratedParticles.referencePoint.x", GeneratedParticles_referencePoint_x, &b_GeneratedParticles_referencePoint_x);
   fChain->SetBranchAddress("GeneratedParticles.referencePoint.y", GeneratedParticles_referencePoint_y, &b_GeneratedParticles_referencePoint_y);
   fChain->SetBranchAddress("GeneratedParticles.referencePoint.z", GeneratedParticles_referencePoint_z, &b_GeneratedParticles_referencePoint_z);
   fChain->SetBranchAddress("GeneratedParticles.charge", GeneratedParticles_charge, &b_GeneratedParticles_charge);
   fChain->SetBranchAddress("GeneratedParticles.mass", GeneratedParticles_mass, &b_GeneratedParticles_mass);
   fChain->SetBranchAddress("GeneratedParticles.goodnessOfPID", GeneratedParticles_goodnessOfPID, &b_GeneratedParticles_goodnessOfPID);
   fChain->SetBranchAddress("GeneratedParticles.covMatrix.xx", GeneratedParticles_covMatrix_xx, &b_GeneratedParticles_covMatrix_xx);
   fChain->SetBranchAddress("GeneratedParticles.covMatrix.yy", GeneratedParticles_covMatrix_yy, &b_GeneratedParticles_covMatrix_yy);
   fChain->SetBranchAddress("GeneratedParticles.covMatrix.zz", GeneratedParticles_covMatrix_zz, &b_GeneratedParticles_covMatrix_zz);
   fChain->SetBranchAddress("GeneratedParticles.covMatrix.tt", GeneratedParticles_covMatrix_tt, &b_GeneratedParticles_covMatrix_tt);
   fChain->SetBranchAddress("GeneratedParticles.covMatrix.xy", GeneratedParticles_covMatrix_xy, &b_GeneratedParticles_covMatrix_xy);
   fChain->SetBranchAddress("GeneratedParticles.covMatrix.xz", GeneratedParticles_covMatrix_xz, &b_GeneratedParticles_covMatrix_xz);
   fChain->SetBranchAddress("GeneratedParticles.covMatrix.xt", GeneratedParticles_covMatrix_xt, &b_GeneratedParticles_covMatrix_xt);
   fChain->SetBranchAddress("GeneratedParticles.covMatrix.yz", GeneratedParticles_covMatrix_yz, &b_GeneratedParticles_covMatrix_yz);
   fChain->SetBranchAddress("GeneratedParticles.covMatrix.yt", GeneratedParticles_covMatrix_yt, &b_GeneratedParticles_covMatrix_yt);
   fChain->SetBranchAddress("GeneratedParticles.covMatrix.zt", GeneratedParticles_covMatrix_zt, &b_GeneratedParticles_covMatrix_zt);
   fChain->SetBranchAddress("GeneratedParticles.PDG", GeneratedParticles_PDG, &b_GeneratedParticles_PDG);
   fChain->SetBranchAddress("GeneratedParticles.clusters_begin", GeneratedParticles_clusters_begin, &b_GeneratedParticles_clusters_begin);
   fChain->SetBranchAddress("GeneratedParticles.clusters_end", GeneratedParticles_clusters_end, &b_GeneratedParticles_clusters_end);
   fChain->SetBranchAddress("GeneratedParticles.tracks_begin", GeneratedParticles_tracks_begin, &b_GeneratedParticles_tracks_begin);
   fChain->SetBranchAddress("GeneratedParticles.tracks_end", GeneratedParticles_tracks_end, &b_GeneratedParticles_tracks_end);
   fChain->SetBranchAddress("GeneratedParticles.particles_begin", GeneratedParticles_particles_begin, &b_GeneratedParticles_particles_begin);
   fChain->SetBranchAddress("GeneratedParticles.particles_end", GeneratedParticles_particles_end, &b_GeneratedParticles_particles_end);
   fChain->SetBranchAddress("GeneratedParticles.particleIDs_begin", GeneratedParticles_particleIDs_begin, &b_GeneratedParticles_particleIDs_begin);
   fChain->SetBranchAddress("GeneratedParticles.particleIDs_end", GeneratedParticles_particleIDs_end, &b_GeneratedParticles_particleIDs_end);
   fChain->SetBranchAddress("_GeneratedParticles_clusters", &_GeneratedParticles_clusters_, &b__GeneratedParticles_clusters_);
   fChain->SetBranchAddress("_GeneratedParticles_clusters.index", &_GeneratedParticles_clusters_index, &b__GeneratedParticles_clusters_index);
   fChain->SetBranchAddress("_GeneratedParticles_clusters.collectionID", &_GeneratedParticles_clusters_collectionID, &b__GeneratedParticles_clusters_collectionID);
   fChain->SetBranchAddress("_GeneratedParticles_tracks", &_GeneratedParticles_tracks_, &b__GeneratedParticles_tracks_);
   fChain->SetBranchAddress("_GeneratedParticles_tracks.index", &_GeneratedParticles_tracks_index, &b__GeneratedParticles_tracks_index);
   fChain->SetBranchAddress("_GeneratedParticles_tracks.collectionID", &_GeneratedParticles_tracks_collectionID, &b__GeneratedParticles_tracks_collectionID);
   fChain->SetBranchAddress("_GeneratedParticles_particles", &_GeneratedParticles_particles_, &b__GeneratedParticles_particles_);
   fChain->SetBranchAddress("_GeneratedParticles_particles.index", &_GeneratedParticles_particles_index, &b__GeneratedParticles_particles_index);
   fChain->SetBranchAddress("_GeneratedParticles_particles.collectionID", &_GeneratedParticles_particles_collectionID, &b__GeneratedParticles_particles_collectionID);
   fChain->SetBranchAddress("_GeneratedParticles_particleIDs", &_GeneratedParticles_particleIDs_, &b__GeneratedParticles_particleIDs_);
   fChain->SetBranchAddress("_GeneratedParticles_particleIDs.index", &_GeneratedParticles_particleIDs_index, &b__GeneratedParticles_particleIDs_index);
   fChain->SetBranchAddress("_GeneratedParticles_particleIDs.collectionID", &_GeneratedParticles_particleIDs_collectionID, &b__GeneratedParticles_particleIDs_collectionID);
   fChain->SetBranchAddress("_GeneratedParticles_startVertex", &_GeneratedParticles_startVertex_, &b__GeneratedParticles_startVertex_);
   fChain->SetBranchAddress("_GeneratedParticles_startVertex.index", _GeneratedParticles_startVertex_index, &b__GeneratedParticles_startVertex_index);
   fChain->SetBranchAddress("_GeneratedParticles_startVertex.collectionID", _GeneratedParticles_startVertex_collectionID, &b__GeneratedParticles_startVertex_collectionID);
   fChain->SetBranchAddress("_GeneratedParticles_particleIDUsed", &_GeneratedParticles_particleIDUsed_, &b__GeneratedParticles_particleIDUsed_);
   fChain->SetBranchAddress("_GeneratedParticles_particleIDUsed.index", _GeneratedParticles_particleIDUsed_index, &b__GeneratedParticles_particleIDUsed_index);
   fChain->SetBranchAddress("_GeneratedParticles_particleIDUsed.collectionID", _GeneratedParticles_particleIDUsed_collectionID, &b__GeneratedParticles_particleIDUsed_collectionID);
   fChain->SetBranchAddress("HcalBarrelClusterAssociations", &HcalBarrelClusterAssociations_, &b_HcalBarrelClusterAssociations_);
   fChain->SetBranchAddress("HcalBarrelClusterAssociations.simID", HcalBarrelClusterAssociations_simID, &b_HcalBarrelClusterAssociations_simID);
   fChain->SetBranchAddress("HcalBarrelClusterAssociations.recID", HcalBarrelClusterAssociations_recID, &b_HcalBarrelClusterAssociations_recID);
   fChain->SetBranchAddress("HcalBarrelClusterAssociations.weight", HcalBarrelClusterAssociations_weight, &b_HcalBarrelClusterAssociations_weight);
   fChain->SetBranchAddress("_HcalBarrelClusterAssociations_rec", &_HcalBarrelClusterAssociations_rec_, &b__HcalBarrelClusterAssociations_rec_);
   fChain->SetBranchAddress("_HcalBarrelClusterAssociations_rec.index", _HcalBarrelClusterAssociations_rec_index, &b__HcalBarrelClusterAssociations_rec_index);
   fChain->SetBranchAddress("_HcalBarrelClusterAssociations_rec.collectionID", _HcalBarrelClusterAssociations_rec_collectionID, &b__HcalBarrelClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_HcalBarrelClusterAssociations_sim", &_HcalBarrelClusterAssociations_sim_, &b__HcalBarrelClusterAssociations_sim_);
   fChain->SetBranchAddress("_HcalBarrelClusterAssociations_sim.index", _HcalBarrelClusterAssociations_sim_index, &b__HcalBarrelClusterAssociations_sim_index);
   fChain->SetBranchAddress("_HcalBarrelClusterAssociations_sim.collectionID", _HcalBarrelClusterAssociations_sim_collectionID, &b__HcalBarrelClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("HcalBarrelClusters", &HcalBarrelClusters_, &b_HcalBarrelClusters_);
   fChain->SetBranchAddress("HcalBarrelClusters.type", HcalBarrelClusters_type, &b_HcalBarrelClusters_type);
   fChain->SetBranchAddress("HcalBarrelClusters.energy", HcalBarrelClusters_energy, &b_HcalBarrelClusters_energy);
   fChain->SetBranchAddress("HcalBarrelClusters.energyError", HcalBarrelClusters_energyError, &b_HcalBarrelClusters_energyError);
   fChain->SetBranchAddress("HcalBarrelClusters.time", HcalBarrelClusters_time, &b_HcalBarrelClusters_time);
   fChain->SetBranchAddress("HcalBarrelClusters.timeError", HcalBarrelClusters_timeError, &b_HcalBarrelClusters_timeError);
   fChain->SetBranchAddress("HcalBarrelClusters.nhits", HcalBarrelClusters_nhits, &b_HcalBarrelClusters_nhits);
   fChain->SetBranchAddress("HcalBarrelClusters.position.x", HcalBarrelClusters_position_x, &b_HcalBarrelClusters_position_x);
   fChain->SetBranchAddress("HcalBarrelClusters.position.y", HcalBarrelClusters_position_y, &b_HcalBarrelClusters_position_y);
   fChain->SetBranchAddress("HcalBarrelClusters.position.z", HcalBarrelClusters_position_z, &b_HcalBarrelClusters_position_z);
   fChain->SetBranchAddress("HcalBarrelClusters.positionError.xx", HcalBarrelClusters_positionError_xx, &b_HcalBarrelClusters_positionError_xx);
   fChain->SetBranchAddress("HcalBarrelClusters.positionError.yy", HcalBarrelClusters_positionError_yy, &b_HcalBarrelClusters_positionError_yy);
   fChain->SetBranchAddress("HcalBarrelClusters.positionError.zz", HcalBarrelClusters_positionError_zz, &b_HcalBarrelClusters_positionError_zz);
   fChain->SetBranchAddress("HcalBarrelClusters.positionError.xy", HcalBarrelClusters_positionError_xy, &b_HcalBarrelClusters_positionError_xy);
   fChain->SetBranchAddress("HcalBarrelClusters.positionError.xz", HcalBarrelClusters_positionError_xz, &b_HcalBarrelClusters_positionError_xz);
   fChain->SetBranchAddress("HcalBarrelClusters.positionError.yz", HcalBarrelClusters_positionError_yz, &b_HcalBarrelClusters_positionError_yz);
   fChain->SetBranchAddress("HcalBarrelClusters.intrinsicTheta", HcalBarrelClusters_intrinsicTheta, &b_HcalBarrelClusters_intrinsicTheta);
   fChain->SetBranchAddress("HcalBarrelClusters.intrinsicPhi", HcalBarrelClusters_intrinsicPhi, &b_HcalBarrelClusters_intrinsicPhi);
   fChain->SetBranchAddress("HcalBarrelClusters.intrinsicDirectionError.xx", HcalBarrelClusters_intrinsicDirectionError_xx, &b_HcalBarrelClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("HcalBarrelClusters.intrinsicDirectionError.yy", HcalBarrelClusters_intrinsicDirectionError_yy, &b_HcalBarrelClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("HcalBarrelClusters.intrinsicDirectionError.xy", HcalBarrelClusters_intrinsicDirectionError_xy, &b_HcalBarrelClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("HcalBarrelClusters.shapeParameters_begin", HcalBarrelClusters_shapeParameters_begin, &b_HcalBarrelClusters_shapeParameters_begin);
   fChain->SetBranchAddress("HcalBarrelClusters.shapeParameters_end", HcalBarrelClusters_shapeParameters_end, &b_HcalBarrelClusters_shapeParameters_end);
   fChain->SetBranchAddress("HcalBarrelClusters.hitContributions_begin", HcalBarrelClusters_hitContributions_begin, &b_HcalBarrelClusters_hitContributions_begin);
   fChain->SetBranchAddress("HcalBarrelClusters.hitContributions_end", HcalBarrelClusters_hitContributions_end, &b_HcalBarrelClusters_hitContributions_end);
   fChain->SetBranchAddress("HcalBarrelClusters.subdetectorEnergies_begin", HcalBarrelClusters_subdetectorEnergies_begin, &b_HcalBarrelClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("HcalBarrelClusters.subdetectorEnergies_end", HcalBarrelClusters_subdetectorEnergies_end, &b_HcalBarrelClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("HcalBarrelClusters.clusters_begin", HcalBarrelClusters_clusters_begin, &b_HcalBarrelClusters_clusters_begin);
   fChain->SetBranchAddress("HcalBarrelClusters.clusters_end", HcalBarrelClusters_clusters_end, &b_HcalBarrelClusters_clusters_end);
   fChain->SetBranchAddress("HcalBarrelClusters.hits_begin", HcalBarrelClusters_hits_begin, &b_HcalBarrelClusters_hits_begin);
   fChain->SetBranchAddress("HcalBarrelClusters.hits_end", HcalBarrelClusters_hits_end, &b_HcalBarrelClusters_hits_end);
   fChain->SetBranchAddress("HcalBarrelClusters.particleIDs_begin", HcalBarrelClusters_particleIDs_begin, &b_HcalBarrelClusters_particleIDs_begin);
   fChain->SetBranchAddress("HcalBarrelClusters.particleIDs_end", HcalBarrelClusters_particleIDs_end, &b_HcalBarrelClusters_particleIDs_end);
   fChain->SetBranchAddress("_HcalBarrelClusters_clusters", &_HcalBarrelClusters_clusters_, &b__HcalBarrelClusters_clusters_);
   fChain->SetBranchAddress("_HcalBarrelClusters_clusters.index", &_HcalBarrelClusters_clusters_index, &b__HcalBarrelClusters_clusters_index);
   fChain->SetBranchAddress("_HcalBarrelClusters_clusters.collectionID", &_HcalBarrelClusters_clusters_collectionID, &b__HcalBarrelClusters_clusters_collectionID);
   fChain->SetBranchAddress("_HcalBarrelClusters_hits", &_HcalBarrelClusters_hits_, &b__HcalBarrelClusters_hits_);
   fChain->SetBranchAddress("_HcalBarrelClusters_hits.index", &_HcalBarrelClusters_hits_index, &b__HcalBarrelClusters_hits_index);
   fChain->SetBranchAddress("_HcalBarrelClusters_hits.collectionID", &_HcalBarrelClusters_hits_collectionID, &b__HcalBarrelClusters_hits_collectionID);
   fChain->SetBranchAddress("_HcalBarrelClusters_particleIDs", &_HcalBarrelClusters_particleIDs_, &b__HcalBarrelClusters_particleIDs_);
   fChain->SetBranchAddress("_HcalBarrelClusters_particleIDs.index", &_HcalBarrelClusters_particleIDs_index, &b__HcalBarrelClusters_particleIDs_index);
   fChain->SetBranchAddress("_HcalBarrelClusters_particleIDs.collectionID", &_HcalBarrelClusters_particleIDs_collectionID, &b__HcalBarrelClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_HcalBarrelClusters_shapeParameters", &_HcalBarrelClusters_shapeParameters, &b__HcalBarrelClusters_shapeParameters);
   fChain->SetBranchAddress("_HcalBarrelClusters_hitContributions", &_HcalBarrelClusters_hitContributions, &b__HcalBarrelClusters_hitContributions);
   fChain->SetBranchAddress("_HcalBarrelClusters_subdetectorEnergies", &_HcalBarrelClusters_subdetectorEnergies, &b__HcalBarrelClusters_subdetectorEnergies);
   fChain->SetBranchAddress("HcalBarrelRawHits", &HcalBarrelRawHits_, &b_HcalBarrelRawHits_);
   fChain->SetBranchAddress("HcalBarrelRawHits.cellID", HcalBarrelRawHits_cellID, &b_HcalBarrelRawHits_cellID);
   fChain->SetBranchAddress("HcalBarrelRawHits.amplitude", HcalBarrelRawHits_amplitude, &b_HcalBarrelRawHits_amplitude);
   fChain->SetBranchAddress("HcalBarrelRawHits.timeStamp", HcalBarrelRawHits_timeStamp, &b_HcalBarrelRawHits_timeStamp);
   fChain->SetBranchAddress("HcalBarrelRecHits", &HcalBarrelRecHits_, &b_HcalBarrelRecHits_);
   fChain->SetBranchAddress("HcalBarrelRecHits.cellID", HcalBarrelRecHits_cellID, &b_HcalBarrelRecHits_cellID);
   fChain->SetBranchAddress("HcalBarrelRecHits.energy", HcalBarrelRecHits_energy, &b_HcalBarrelRecHits_energy);
   fChain->SetBranchAddress("HcalBarrelRecHits.energyError", HcalBarrelRecHits_energyError, &b_HcalBarrelRecHits_energyError);
   fChain->SetBranchAddress("HcalBarrelRecHits.time", HcalBarrelRecHits_time, &b_HcalBarrelRecHits_time);
   fChain->SetBranchAddress("HcalBarrelRecHits.timeError", HcalBarrelRecHits_timeError, &b_HcalBarrelRecHits_timeError);
   fChain->SetBranchAddress("HcalBarrelRecHits.position.x", HcalBarrelRecHits_position_x, &b_HcalBarrelRecHits_position_x);
   fChain->SetBranchAddress("HcalBarrelRecHits.position.y", HcalBarrelRecHits_position_y, &b_HcalBarrelRecHits_position_y);
   fChain->SetBranchAddress("HcalBarrelRecHits.position.z", HcalBarrelRecHits_position_z, &b_HcalBarrelRecHits_position_z);
   fChain->SetBranchAddress("HcalBarrelRecHits.dimension.x", HcalBarrelRecHits_dimension_x, &b_HcalBarrelRecHits_dimension_x);
   fChain->SetBranchAddress("HcalBarrelRecHits.dimension.y", HcalBarrelRecHits_dimension_y, &b_HcalBarrelRecHits_dimension_y);
   fChain->SetBranchAddress("HcalBarrelRecHits.dimension.z", HcalBarrelRecHits_dimension_z, &b_HcalBarrelRecHits_dimension_z);
   fChain->SetBranchAddress("HcalBarrelRecHits.sector", HcalBarrelRecHits_sector, &b_HcalBarrelRecHits_sector);
   fChain->SetBranchAddress("HcalBarrelRecHits.layer", HcalBarrelRecHits_layer, &b_HcalBarrelRecHits_layer);
   fChain->SetBranchAddress("HcalBarrelRecHits.local.x", HcalBarrelRecHits_local_x, &b_HcalBarrelRecHits_local_x);
   fChain->SetBranchAddress("HcalBarrelRecHits.local.y", HcalBarrelRecHits_local_y, &b_HcalBarrelRecHits_local_y);
   fChain->SetBranchAddress("HcalBarrelRecHits.local.z", HcalBarrelRecHits_local_z, &b_HcalBarrelRecHits_local_z);
   fChain->SetBranchAddress("HcalBarrelTruthClusterAssociations", &HcalBarrelTruthClusterAssociations_, &b_HcalBarrelTruthClusterAssociations_);
   fChain->SetBranchAddress("HcalBarrelTruthClusterAssociations.simID", HcalBarrelTruthClusterAssociations_simID, &b_HcalBarrelTruthClusterAssociations_simID);
   fChain->SetBranchAddress("HcalBarrelTruthClusterAssociations.recID", HcalBarrelTruthClusterAssociations_recID, &b_HcalBarrelTruthClusterAssociations_recID);
   fChain->SetBranchAddress("HcalBarrelTruthClusterAssociations.weight", HcalBarrelTruthClusterAssociations_weight, &b_HcalBarrelTruthClusterAssociations_weight);
   fChain->SetBranchAddress("_HcalBarrelTruthClusterAssociations_rec", &_HcalBarrelTruthClusterAssociations_rec_, &b__HcalBarrelTruthClusterAssociations_rec_);
   fChain->SetBranchAddress("_HcalBarrelTruthClusterAssociations_rec.index", _HcalBarrelTruthClusterAssociations_rec_index, &b__HcalBarrelTruthClusterAssociations_rec_index);
   fChain->SetBranchAddress("_HcalBarrelTruthClusterAssociations_rec.collectionID", _HcalBarrelTruthClusterAssociations_rec_collectionID, &b__HcalBarrelTruthClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_HcalBarrelTruthClusterAssociations_sim", &_HcalBarrelTruthClusterAssociations_sim_, &b__HcalBarrelTruthClusterAssociations_sim_);
   fChain->SetBranchAddress("_HcalBarrelTruthClusterAssociations_sim.index", _HcalBarrelTruthClusterAssociations_sim_index, &b__HcalBarrelTruthClusterAssociations_sim_index);
   fChain->SetBranchAddress("_HcalBarrelTruthClusterAssociations_sim.collectionID", _HcalBarrelTruthClusterAssociations_sim_collectionID, &b__HcalBarrelTruthClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("HcalBarrelTruthClusters", &HcalBarrelTruthClusters_, &b_HcalBarrelTruthClusters_);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.type", HcalBarrelTruthClusters_type, &b_HcalBarrelTruthClusters_type);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.energy", HcalBarrelTruthClusters_energy, &b_HcalBarrelTruthClusters_energy);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.energyError", HcalBarrelTruthClusters_energyError, &b_HcalBarrelTruthClusters_energyError);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.time", HcalBarrelTruthClusters_time, &b_HcalBarrelTruthClusters_time);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.timeError", HcalBarrelTruthClusters_timeError, &b_HcalBarrelTruthClusters_timeError);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.nhits", HcalBarrelTruthClusters_nhits, &b_HcalBarrelTruthClusters_nhits);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.position.x", HcalBarrelTruthClusters_position_x, &b_HcalBarrelTruthClusters_position_x);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.position.y", HcalBarrelTruthClusters_position_y, &b_HcalBarrelTruthClusters_position_y);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.position.z", HcalBarrelTruthClusters_position_z, &b_HcalBarrelTruthClusters_position_z);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.positionError.xx", HcalBarrelTruthClusters_positionError_xx, &b_HcalBarrelTruthClusters_positionError_xx);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.positionError.yy", HcalBarrelTruthClusters_positionError_yy, &b_HcalBarrelTruthClusters_positionError_yy);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.positionError.zz", HcalBarrelTruthClusters_positionError_zz, &b_HcalBarrelTruthClusters_positionError_zz);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.positionError.xy", HcalBarrelTruthClusters_positionError_xy, &b_HcalBarrelTruthClusters_positionError_xy);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.positionError.xz", HcalBarrelTruthClusters_positionError_xz, &b_HcalBarrelTruthClusters_positionError_xz);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.positionError.yz", HcalBarrelTruthClusters_positionError_yz, &b_HcalBarrelTruthClusters_positionError_yz);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.intrinsicTheta", HcalBarrelTruthClusters_intrinsicTheta, &b_HcalBarrelTruthClusters_intrinsicTheta);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.intrinsicPhi", HcalBarrelTruthClusters_intrinsicPhi, &b_HcalBarrelTruthClusters_intrinsicPhi);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.intrinsicDirectionError.xx", HcalBarrelTruthClusters_intrinsicDirectionError_xx, &b_HcalBarrelTruthClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.intrinsicDirectionError.yy", HcalBarrelTruthClusters_intrinsicDirectionError_yy, &b_HcalBarrelTruthClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.intrinsicDirectionError.xy", HcalBarrelTruthClusters_intrinsicDirectionError_xy, &b_HcalBarrelTruthClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.shapeParameters_begin", HcalBarrelTruthClusters_shapeParameters_begin, &b_HcalBarrelTruthClusters_shapeParameters_begin);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.shapeParameters_end", HcalBarrelTruthClusters_shapeParameters_end, &b_HcalBarrelTruthClusters_shapeParameters_end);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.hitContributions_begin", HcalBarrelTruthClusters_hitContributions_begin, &b_HcalBarrelTruthClusters_hitContributions_begin);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.hitContributions_end", HcalBarrelTruthClusters_hitContributions_end, &b_HcalBarrelTruthClusters_hitContributions_end);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.subdetectorEnergies_begin", HcalBarrelTruthClusters_subdetectorEnergies_begin, &b_HcalBarrelTruthClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.subdetectorEnergies_end", HcalBarrelTruthClusters_subdetectorEnergies_end, &b_HcalBarrelTruthClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.clusters_begin", HcalBarrelTruthClusters_clusters_begin, &b_HcalBarrelTruthClusters_clusters_begin);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.clusters_end", HcalBarrelTruthClusters_clusters_end, &b_HcalBarrelTruthClusters_clusters_end);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.hits_begin", HcalBarrelTruthClusters_hits_begin, &b_HcalBarrelTruthClusters_hits_begin);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.hits_end", HcalBarrelTruthClusters_hits_end, &b_HcalBarrelTruthClusters_hits_end);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.particleIDs_begin", HcalBarrelTruthClusters_particleIDs_begin, &b_HcalBarrelTruthClusters_particleIDs_begin);
   fChain->SetBranchAddress("HcalBarrelTruthClusters.particleIDs_end", HcalBarrelTruthClusters_particleIDs_end, &b_HcalBarrelTruthClusters_particleIDs_end);
   fChain->SetBranchAddress("_HcalBarrelTruthClusters_clusters", &_HcalBarrelTruthClusters_clusters_, &b__HcalBarrelTruthClusters_clusters_);
   fChain->SetBranchAddress("_HcalBarrelTruthClusters_clusters.index", &_HcalBarrelTruthClusters_clusters_index, &b__HcalBarrelTruthClusters_clusters_index);
   fChain->SetBranchAddress("_HcalBarrelTruthClusters_clusters.collectionID", &_HcalBarrelTruthClusters_clusters_collectionID, &b__HcalBarrelTruthClusters_clusters_collectionID);
   fChain->SetBranchAddress("_HcalBarrelTruthClusters_hits", &_HcalBarrelTruthClusters_hits_, &b__HcalBarrelTruthClusters_hits_);
   fChain->SetBranchAddress("_HcalBarrelTruthClusters_hits.index", &_HcalBarrelTruthClusters_hits_index, &b__HcalBarrelTruthClusters_hits_index);
   fChain->SetBranchAddress("_HcalBarrelTruthClusters_hits.collectionID", &_HcalBarrelTruthClusters_hits_collectionID, &b__HcalBarrelTruthClusters_hits_collectionID);
   fChain->SetBranchAddress("_HcalBarrelTruthClusters_particleIDs", &_HcalBarrelTruthClusters_particleIDs_, &b__HcalBarrelTruthClusters_particleIDs_);
   fChain->SetBranchAddress("_HcalBarrelTruthClusters_particleIDs.index", &_HcalBarrelTruthClusters_particleIDs_index, &b__HcalBarrelTruthClusters_particleIDs_index);
   fChain->SetBranchAddress("_HcalBarrelTruthClusters_particleIDs.collectionID", &_HcalBarrelTruthClusters_particleIDs_collectionID, &b__HcalBarrelTruthClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_HcalBarrelTruthClusters_shapeParameters", &_HcalBarrelTruthClusters_shapeParameters, &b__HcalBarrelTruthClusters_shapeParameters);
   fChain->SetBranchAddress("_HcalBarrelTruthClusters_hitContributions", &_HcalBarrelTruthClusters_hitContributions, &b__HcalBarrelTruthClusters_hitContributions);
   fChain->SetBranchAddress("_HcalBarrelTruthClusters_subdetectorEnergies", &_HcalBarrelTruthClusters_subdetectorEnergies, &b__HcalBarrelTruthClusters_subdetectorEnergies);
   fChain->SetBranchAddress("HcalEndcapNClusterAssociations", &HcalEndcapNClusterAssociations_, &b_HcalEndcapNClusterAssociations_);
   fChain->SetBranchAddress("HcalEndcapNClusterAssociations.simID", HcalEndcapNClusterAssociations_simID, &b_HcalEndcapNClusterAssociations_simID);
   fChain->SetBranchAddress("HcalEndcapNClusterAssociations.recID", HcalEndcapNClusterAssociations_recID, &b_HcalEndcapNClusterAssociations_recID);
   fChain->SetBranchAddress("HcalEndcapNClusterAssociations.weight", HcalEndcapNClusterAssociations_weight, &b_HcalEndcapNClusterAssociations_weight);
   fChain->SetBranchAddress("_HcalEndcapNClusterAssociations_rec", &_HcalEndcapNClusterAssociations_rec_, &b__HcalEndcapNClusterAssociations_rec_);
   fChain->SetBranchAddress("_HcalEndcapNClusterAssociations_rec.index", _HcalEndcapNClusterAssociations_rec_index, &b__HcalEndcapNClusterAssociations_rec_index);
   fChain->SetBranchAddress("_HcalEndcapNClusterAssociations_rec.collectionID", _HcalEndcapNClusterAssociations_rec_collectionID, &b__HcalEndcapNClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_HcalEndcapNClusterAssociations_sim", &_HcalEndcapNClusterAssociations_sim_, &b__HcalEndcapNClusterAssociations_sim_);
   fChain->SetBranchAddress("_HcalEndcapNClusterAssociations_sim.index", _HcalEndcapNClusterAssociations_sim_index, &b__HcalEndcapNClusterAssociations_sim_index);
   fChain->SetBranchAddress("_HcalEndcapNClusterAssociations_sim.collectionID", _HcalEndcapNClusterAssociations_sim_collectionID, &b__HcalEndcapNClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("HcalEndcapNClusters", &HcalEndcapNClusters_, &b_HcalEndcapNClusters_);
   fChain->SetBranchAddress("HcalEndcapNClusters.type", HcalEndcapNClusters_type, &b_HcalEndcapNClusters_type);
   fChain->SetBranchAddress("HcalEndcapNClusters.energy", HcalEndcapNClusters_energy, &b_HcalEndcapNClusters_energy);
   fChain->SetBranchAddress("HcalEndcapNClusters.energyError", HcalEndcapNClusters_energyError, &b_HcalEndcapNClusters_energyError);
   fChain->SetBranchAddress("HcalEndcapNClusters.time", HcalEndcapNClusters_time, &b_HcalEndcapNClusters_time);
   fChain->SetBranchAddress("HcalEndcapNClusters.timeError", HcalEndcapNClusters_timeError, &b_HcalEndcapNClusters_timeError);
   fChain->SetBranchAddress("HcalEndcapNClusters.nhits", HcalEndcapNClusters_nhits, &b_HcalEndcapNClusters_nhits);
   fChain->SetBranchAddress("HcalEndcapNClusters.position.x", HcalEndcapNClusters_position_x, &b_HcalEndcapNClusters_position_x);
   fChain->SetBranchAddress("HcalEndcapNClusters.position.y", HcalEndcapNClusters_position_y, &b_HcalEndcapNClusters_position_y);
   fChain->SetBranchAddress("HcalEndcapNClusters.position.z", HcalEndcapNClusters_position_z, &b_HcalEndcapNClusters_position_z);
   fChain->SetBranchAddress("HcalEndcapNClusters.positionError.xx", HcalEndcapNClusters_positionError_xx, &b_HcalEndcapNClusters_positionError_xx);
   fChain->SetBranchAddress("HcalEndcapNClusters.positionError.yy", HcalEndcapNClusters_positionError_yy, &b_HcalEndcapNClusters_positionError_yy);
   fChain->SetBranchAddress("HcalEndcapNClusters.positionError.zz", HcalEndcapNClusters_positionError_zz, &b_HcalEndcapNClusters_positionError_zz);
   fChain->SetBranchAddress("HcalEndcapNClusters.positionError.xy", HcalEndcapNClusters_positionError_xy, &b_HcalEndcapNClusters_positionError_xy);
   fChain->SetBranchAddress("HcalEndcapNClusters.positionError.xz", HcalEndcapNClusters_positionError_xz, &b_HcalEndcapNClusters_positionError_xz);
   fChain->SetBranchAddress("HcalEndcapNClusters.positionError.yz", HcalEndcapNClusters_positionError_yz, &b_HcalEndcapNClusters_positionError_yz);
   fChain->SetBranchAddress("HcalEndcapNClusters.intrinsicTheta", HcalEndcapNClusters_intrinsicTheta, &b_HcalEndcapNClusters_intrinsicTheta);
   fChain->SetBranchAddress("HcalEndcapNClusters.intrinsicPhi", HcalEndcapNClusters_intrinsicPhi, &b_HcalEndcapNClusters_intrinsicPhi);
   fChain->SetBranchAddress("HcalEndcapNClusters.intrinsicDirectionError.xx", HcalEndcapNClusters_intrinsicDirectionError_xx, &b_HcalEndcapNClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("HcalEndcapNClusters.intrinsicDirectionError.yy", HcalEndcapNClusters_intrinsicDirectionError_yy, &b_HcalEndcapNClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("HcalEndcapNClusters.intrinsicDirectionError.xy", HcalEndcapNClusters_intrinsicDirectionError_xy, &b_HcalEndcapNClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("HcalEndcapNClusters.shapeParameters_begin", HcalEndcapNClusters_shapeParameters_begin, &b_HcalEndcapNClusters_shapeParameters_begin);
   fChain->SetBranchAddress("HcalEndcapNClusters.shapeParameters_end", HcalEndcapNClusters_shapeParameters_end, &b_HcalEndcapNClusters_shapeParameters_end);
   fChain->SetBranchAddress("HcalEndcapNClusters.hitContributions_begin", HcalEndcapNClusters_hitContributions_begin, &b_HcalEndcapNClusters_hitContributions_begin);
   fChain->SetBranchAddress("HcalEndcapNClusters.hitContributions_end", HcalEndcapNClusters_hitContributions_end, &b_HcalEndcapNClusters_hitContributions_end);
   fChain->SetBranchAddress("HcalEndcapNClusters.subdetectorEnergies_begin", HcalEndcapNClusters_subdetectorEnergies_begin, &b_HcalEndcapNClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("HcalEndcapNClusters.subdetectorEnergies_end", HcalEndcapNClusters_subdetectorEnergies_end, &b_HcalEndcapNClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("HcalEndcapNClusters.clusters_begin", HcalEndcapNClusters_clusters_begin, &b_HcalEndcapNClusters_clusters_begin);
   fChain->SetBranchAddress("HcalEndcapNClusters.clusters_end", HcalEndcapNClusters_clusters_end, &b_HcalEndcapNClusters_clusters_end);
   fChain->SetBranchAddress("HcalEndcapNClusters.hits_begin", HcalEndcapNClusters_hits_begin, &b_HcalEndcapNClusters_hits_begin);
   fChain->SetBranchAddress("HcalEndcapNClusters.hits_end", HcalEndcapNClusters_hits_end, &b_HcalEndcapNClusters_hits_end);
   fChain->SetBranchAddress("HcalEndcapNClusters.particleIDs_begin", HcalEndcapNClusters_particleIDs_begin, &b_HcalEndcapNClusters_particleIDs_begin);
   fChain->SetBranchAddress("HcalEndcapNClusters.particleIDs_end", HcalEndcapNClusters_particleIDs_end, &b_HcalEndcapNClusters_particleIDs_end);
   fChain->SetBranchAddress("_HcalEndcapNClusters_clusters", &_HcalEndcapNClusters_clusters_, &b__HcalEndcapNClusters_clusters_);
   fChain->SetBranchAddress("_HcalEndcapNClusters_clusters.index", &_HcalEndcapNClusters_clusters_index, &b__HcalEndcapNClusters_clusters_index);
   fChain->SetBranchAddress("_HcalEndcapNClusters_clusters.collectionID", &_HcalEndcapNClusters_clusters_collectionID, &b__HcalEndcapNClusters_clusters_collectionID);
   fChain->SetBranchAddress("_HcalEndcapNClusters_hits", &_HcalEndcapNClusters_hits_, &b__HcalEndcapNClusters_hits_);
   fChain->SetBranchAddress("_HcalEndcapNClusters_hits.index", &_HcalEndcapNClusters_hits_index, &b__HcalEndcapNClusters_hits_index);
   fChain->SetBranchAddress("_HcalEndcapNClusters_hits.collectionID", &_HcalEndcapNClusters_hits_collectionID, &b__HcalEndcapNClusters_hits_collectionID);
   fChain->SetBranchAddress("_HcalEndcapNClusters_particleIDs", &_HcalEndcapNClusters_particleIDs_, &b__HcalEndcapNClusters_particleIDs_);
   fChain->SetBranchAddress("_HcalEndcapNClusters_particleIDs.index", &_HcalEndcapNClusters_particleIDs_index, &b__HcalEndcapNClusters_particleIDs_index);
   fChain->SetBranchAddress("_HcalEndcapNClusters_particleIDs.collectionID", &_HcalEndcapNClusters_particleIDs_collectionID, &b__HcalEndcapNClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_HcalEndcapNClusters_shapeParameters", &_HcalEndcapNClusters_shapeParameters, &b__HcalEndcapNClusters_shapeParameters);
   fChain->SetBranchAddress("_HcalEndcapNClusters_hitContributions", &_HcalEndcapNClusters_hitContributions, &b__HcalEndcapNClusters_hitContributions);
   fChain->SetBranchAddress("_HcalEndcapNClusters_subdetectorEnergies", &_HcalEndcapNClusters_subdetectorEnergies, &b__HcalEndcapNClusters_subdetectorEnergies);
   fChain->SetBranchAddress("HcalEndcapNMergedHits", &HcalEndcapNMergedHits_, &b_HcalEndcapNMergedHits_);
   fChain->SetBranchAddress("HcalEndcapNMergedHits.cellID", HcalEndcapNMergedHits_cellID, &b_HcalEndcapNMergedHits_cellID);
   fChain->SetBranchAddress("HcalEndcapNMergedHits.energy", HcalEndcapNMergedHits_energy, &b_HcalEndcapNMergedHits_energy);
   fChain->SetBranchAddress("HcalEndcapNMergedHits.energyError", HcalEndcapNMergedHits_energyError, &b_HcalEndcapNMergedHits_energyError);
   fChain->SetBranchAddress("HcalEndcapNMergedHits.time", HcalEndcapNMergedHits_time, &b_HcalEndcapNMergedHits_time);
   fChain->SetBranchAddress("HcalEndcapNMergedHits.timeError", HcalEndcapNMergedHits_timeError, &b_HcalEndcapNMergedHits_timeError);
   fChain->SetBranchAddress("HcalEndcapNMergedHits.position.x", HcalEndcapNMergedHits_position_x, &b_HcalEndcapNMergedHits_position_x);
   fChain->SetBranchAddress("HcalEndcapNMergedHits.position.y", HcalEndcapNMergedHits_position_y, &b_HcalEndcapNMergedHits_position_y);
   fChain->SetBranchAddress("HcalEndcapNMergedHits.position.z", HcalEndcapNMergedHits_position_z, &b_HcalEndcapNMergedHits_position_z);
   fChain->SetBranchAddress("HcalEndcapNMergedHits.dimension.x", HcalEndcapNMergedHits_dimension_x, &b_HcalEndcapNMergedHits_dimension_x);
   fChain->SetBranchAddress("HcalEndcapNMergedHits.dimension.y", HcalEndcapNMergedHits_dimension_y, &b_HcalEndcapNMergedHits_dimension_y);
   fChain->SetBranchAddress("HcalEndcapNMergedHits.dimension.z", HcalEndcapNMergedHits_dimension_z, &b_HcalEndcapNMergedHits_dimension_z);
   fChain->SetBranchAddress("HcalEndcapNMergedHits.sector", HcalEndcapNMergedHits_sector, &b_HcalEndcapNMergedHits_sector);
   fChain->SetBranchAddress("HcalEndcapNMergedHits.layer", HcalEndcapNMergedHits_layer, &b_HcalEndcapNMergedHits_layer);
   fChain->SetBranchAddress("HcalEndcapNMergedHits.local.x", HcalEndcapNMergedHits_local_x, &b_HcalEndcapNMergedHits_local_x);
   fChain->SetBranchAddress("HcalEndcapNMergedHits.local.y", HcalEndcapNMergedHits_local_y, &b_HcalEndcapNMergedHits_local_y);
   fChain->SetBranchAddress("HcalEndcapNMergedHits.local.z", HcalEndcapNMergedHits_local_z, &b_HcalEndcapNMergedHits_local_z);
   fChain->SetBranchAddress("HcalEndcapNRawHits", &HcalEndcapNRawHits_, &b_HcalEndcapNRawHits_);
   fChain->SetBranchAddress("HcalEndcapNRawHits.cellID", HcalEndcapNRawHits_cellID, &b_HcalEndcapNRawHits_cellID);
   fChain->SetBranchAddress("HcalEndcapNRawHits.amplitude", HcalEndcapNRawHits_amplitude, &b_HcalEndcapNRawHits_amplitude);
   fChain->SetBranchAddress("HcalEndcapNRawHits.timeStamp", HcalEndcapNRawHits_timeStamp, &b_HcalEndcapNRawHits_timeStamp);
   fChain->SetBranchAddress("HcalEndcapNRecHits", &HcalEndcapNRecHits_, &b_HcalEndcapNRecHits_);
   fChain->SetBranchAddress("HcalEndcapNRecHits.cellID", HcalEndcapNRecHits_cellID, &b_HcalEndcapNRecHits_cellID);
   fChain->SetBranchAddress("HcalEndcapNRecHits.energy", HcalEndcapNRecHits_energy, &b_HcalEndcapNRecHits_energy);
   fChain->SetBranchAddress("HcalEndcapNRecHits.energyError", HcalEndcapNRecHits_energyError, &b_HcalEndcapNRecHits_energyError);
   fChain->SetBranchAddress("HcalEndcapNRecHits.time", HcalEndcapNRecHits_time, &b_HcalEndcapNRecHits_time);
   fChain->SetBranchAddress("HcalEndcapNRecHits.timeError", HcalEndcapNRecHits_timeError, &b_HcalEndcapNRecHits_timeError);
   fChain->SetBranchAddress("HcalEndcapNRecHits.position.x", HcalEndcapNRecHits_position_x, &b_HcalEndcapNRecHits_position_x);
   fChain->SetBranchAddress("HcalEndcapNRecHits.position.y", HcalEndcapNRecHits_position_y, &b_HcalEndcapNRecHits_position_y);
   fChain->SetBranchAddress("HcalEndcapNRecHits.position.z", HcalEndcapNRecHits_position_z, &b_HcalEndcapNRecHits_position_z);
   fChain->SetBranchAddress("HcalEndcapNRecHits.dimension.x", HcalEndcapNRecHits_dimension_x, &b_HcalEndcapNRecHits_dimension_x);
   fChain->SetBranchAddress("HcalEndcapNRecHits.dimension.y", HcalEndcapNRecHits_dimension_y, &b_HcalEndcapNRecHits_dimension_y);
   fChain->SetBranchAddress("HcalEndcapNRecHits.dimension.z", HcalEndcapNRecHits_dimension_z, &b_HcalEndcapNRecHits_dimension_z);
   fChain->SetBranchAddress("HcalEndcapNRecHits.sector", HcalEndcapNRecHits_sector, &b_HcalEndcapNRecHits_sector);
   fChain->SetBranchAddress("HcalEndcapNRecHits.layer", HcalEndcapNRecHits_layer, &b_HcalEndcapNRecHits_layer);
   fChain->SetBranchAddress("HcalEndcapNRecHits.local.x", HcalEndcapNRecHits_local_x, &b_HcalEndcapNRecHits_local_x);
   fChain->SetBranchAddress("HcalEndcapNRecHits.local.y", HcalEndcapNRecHits_local_y, &b_HcalEndcapNRecHits_local_y);
   fChain->SetBranchAddress("HcalEndcapNRecHits.local.z", HcalEndcapNRecHits_local_z, &b_HcalEndcapNRecHits_local_z);
   fChain->SetBranchAddress("HcalEndcapNTruthClusterAssociations", &HcalEndcapNTruthClusterAssociations_, &b_HcalEndcapNTruthClusterAssociations_);
   fChain->SetBranchAddress("HcalEndcapNTruthClusterAssociations.simID", HcalEndcapNTruthClusterAssociations_simID, &b_HcalEndcapNTruthClusterAssociations_simID);
   fChain->SetBranchAddress("HcalEndcapNTruthClusterAssociations.recID", HcalEndcapNTruthClusterAssociations_recID, &b_HcalEndcapNTruthClusterAssociations_recID);
   fChain->SetBranchAddress("HcalEndcapNTruthClusterAssociations.weight", HcalEndcapNTruthClusterAssociations_weight, &b_HcalEndcapNTruthClusterAssociations_weight);
   fChain->SetBranchAddress("_HcalEndcapNTruthClusterAssociations_rec", &_HcalEndcapNTruthClusterAssociations_rec_, &b__HcalEndcapNTruthClusterAssociations_rec_);
   fChain->SetBranchAddress("_HcalEndcapNTruthClusterAssociations_rec.index", _HcalEndcapNTruthClusterAssociations_rec_index, &b__HcalEndcapNTruthClusterAssociations_rec_index);
   fChain->SetBranchAddress("_HcalEndcapNTruthClusterAssociations_rec.collectionID", _HcalEndcapNTruthClusterAssociations_rec_collectionID, &b__HcalEndcapNTruthClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_HcalEndcapNTruthClusterAssociations_sim", &_HcalEndcapNTruthClusterAssociations_sim_, &b__HcalEndcapNTruthClusterAssociations_sim_);
   fChain->SetBranchAddress("_HcalEndcapNTruthClusterAssociations_sim.index", _HcalEndcapNTruthClusterAssociations_sim_index, &b__HcalEndcapNTruthClusterAssociations_sim_index);
   fChain->SetBranchAddress("_HcalEndcapNTruthClusterAssociations_sim.collectionID", _HcalEndcapNTruthClusterAssociations_sim_collectionID, &b__HcalEndcapNTruthClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters", &HcalEndcapNTruthClusters_, &b_HcalEndcapNTruthClusters_);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.type", HcalEndcapNTruthClusters_type, &b_HcalEndcapNTruthClusters_type);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.energy", HcalEndcapNTruthClusters_energy, &b_HcalEndcapNTruthClusters_energy);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.energyError", HcalEndcapNTruthClusters_energyError, &b_HcalEndcapNTruthClusters_energyError);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.time", HcalEndcapNTruthClusters_time, &b_HcalEndcapNTruthClusters_time);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.timeError", HcalEndcapNTruthClusters_timeError, &b_HcalEndcapNTruthClusters_timeError);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.nhits", HcalEndcapNTruthClusters_nhits, &b_HcalEndcapNTruthClusters_nhits);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.position.x", HcalEndcapNTruthClusters_position_x, &b_HcalEndcapNTruthClusters_position_x);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.position.y", HcalEndcapNTruthClusters_position_y, &b_HcalEndcapNTruthClusters_position_y);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.position.z", HcalEndcapNTruthClusters_position_z, &b_HcalEndcapNTruthClusters_position_z);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.positionError.xx", HcalEndcapNTruthClusters_positionError_xx, &b_HcalEndcapNTruthClusters_positionError_xx);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.positionError.yy", HcalEndcapNTruthClusters_positionError_yy, &b_HcalEndcapNTruthClusters_positionError_yy);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.positionError.zz", HcalEndcapNTruthClusters_positionError_zz, &b_HcalEndcapNTruthClusters_positionError_zz);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.positionError.xy", HcalEndcapNTruthClusters_positionError_xy, &b_HcalEndcapNTruthClusters_positionError_xy);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.positionError.xz", HcalEndcapNTruthClusters_positionError_xz, &b_HcalEndcapNTruthClusters_positionError_xz);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.positionError.yz", HcalEndcapNTruthClusters_positionError_yz, &b_HcalEndcapNTruthClusters_positionError_yz);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.intrinsicTheta", HcalEndcapNTruthClusters_intrinsicTheta, &b_HcalEndcapNTruthClusters_intrinsicTheta);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.intrinsicPhi", HcalEndcapNTruthClusters_intrinsicPhi, &b_HcalEndcapNTruthClusters_intrinsicPhi);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.intrinsicDirectionError.xx", HcalEndcapNTruthClusters_intrinsicDirectionError_xx, &b_HcalEndcapNTruthClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.intrinsicDirectionError.yy", HcalEndcapNTruthClusters_intrinsicDirectionError_yy, &b_HcalEndcapNTruthClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.intrinsicDirectionError.xy", HcalEndcapNTruthClusters_intrinsicDirectionError_xy, &b_HcalEndcapNTruthClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.shapeParameters_begin", HcalEndcapNTruthClusters_shapeParameters_begin, &b_HcalEndcapNTruthClusters_shapeParameters_begin);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.shapeParameters_end", HcalEndcapNTruthClusters_shapeParameters_end, &b_HcalEndcapNTruthClusters_shapeParameters_end);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.hitContributions_begin", HcalEndcapNTruthClusters_hitContributions_begin, &b_HcalEndcapNTruthClusters_hitContributions_begin);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.hitContributions_end", HcalEndcapNTruthClusters_hitContributions_end, &b_HcalEndcapNTruthClusters_hitContributions_end);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.subdetectorEnergies_begin", HcalEndcapNTruthClusters_subdetectorEnergies_begin, &b_HcalEndcapNTruthClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.subdetectorEnergies_end", HcalEndcapNTruthClusters_subdetectorEnergies_end, &b_HcalEndcapNTruthClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.clusters_begin", HcalEndcapNTruthClusters_clusters_begin, &b_HcalEndcapNTruthClusters_clusters_begin);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.clusters_end", HcalEndcapNTruthClusters_clusters_end, &b_HcalEndcapNTruthClusters_clusters_end);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.hits_begin", HcalEndcapNTruthClusters_hits_begin, &b_HcalEndcapNTruthClusters_hits_begin);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.hits_end", HcalEndcapNTruthClusters_hits_end, &b_HcalEndcapNTruthClusters_hits_end);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.particleIDs_begin", HcalEndcapNTruthClusters_particleIDs_begin, &b_HcalEndcapNTruthClusters_particleIDs_begin);
   fChain->SetBranchAddress("HcalEndcapNTruthClusters.particleIDs_end", HcalEndcapNTruthClusters_particleIDs_end, &b_HcalEndcapNTruthClusters_particleIDs_end);
   fChain->SetBranchAddress("_HcalEndcapNTruthClusters_clusters", &_HcalEndcapNTruthClusters_clusters_, &b__HcalEndcapNTruthClusters_clusters_);
   fChain->SetBranchAddress("_HcalEndcapNTruthClusters_clusters.index", &_HcalEndcapNTruthClusters_clusters_index, &b__HcalEndcapNTruthClusters_clusters_index);
   fChain->SetBranchAddress("_HcalEndcapNTruthClusters_clusters.collectionID", &_HcalEndcapNTruthClusters_clusters_collectionID, &b__HcalEndcapNTruthClusters_clusters_collectionID);
   fChain->SetBranchAddress("_HcalEndcapNTruthClusters_hits", &_HcalEndcapNTruthClusters_hits_, &b__HcalEndcapNTruthClusters_hits_);
   fChain->SetBranchAddress("_HcalEndcapNTruthClusters_hits.index", &_HcalEndcapNTruthClusters_hits_index, &b__HcalEndcapNTruthClusters_hits_index);
   fChain->SetBranchAddress("_HcalEndcapNTruthClusters_hits.collectionID", &_HcalEndcapNTruthClusters_hits_collectionID, &b__HcalEndcapNTruthClusters_hits_collectionID);
   fChain->SetBranchAddress("_HcalEndcapNTruthClusters_particleIDs", &_HcalEndcapNTruthClusters_particleIDs_, &b__HcalEndcapNTruthClusters_particleIDs_);
   fChain->SetBranchAddress("_HcalEndcapNTruthClusters_particleIDs.index", &_HcalEndcapNTruthClusters_particleIDs_index, &b__HcalEndcapNTruthClusters_particleIDs_index);
   fChain->SetBranchAddress("_HcalEndcapNTruthClusters_particleIDs.collectionID", &_HcalEndcapNTruthClusters_particleIDs_collectionID, &b__HcalEndcapNTruthClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_HcalEndcapNTruthClusters_shapeParameters", &_HcalEndcapNTruthClusters_shapeParameters, &b__HcalEndcapNTruthClusters_shapeParameters);
   fChain->SetBranchAddress("_HcalEndcapNTruthClusters_hitContributions", &_HcalEndcapNTruthClusters_hitContributions, &b__HcalEndcapNTruthClusters_hitContributions);
   fChain->SetBranchAddress("_HcalEndcapNTruthClusters_subdetectorEnergies", &_HcalEndcapNTruthClusters_subdetectorEnergies, &b__HcalEndcapNTruthClusters_subdetectorEnergies);
   fChain->SetBranchAddress("HcalEndcapPInsertClusterAssociations", &HcalEndcapPInsertClusterAssociations_, &b_HcalEndcapPInsertClusterAssociations_);
   fChain->SetBranchAddress("HcalEndcapPInsertClusterAssociations.simID", HcalEndcapPInsertClusterAssociations_simID, &b_HcalEndcapPInsertClusterAssociations_simID);
   fChain->SetBranchAddress("HcalEndcapPInsertClusterAssociations.recID", HcalEndcapPInsertClusterAssociations_recID, &b_HcalEndcapPInsertClusterAssociations_recID);
   fChain->SetBranchAddress("HcalEndcapPInsertClusterAssociations.weight", HcalEndcapPInsertClusterAssociations_weight, &b_HcalEndcapPInsertClusterAssociations_weight);
   fChain->SetBranchAddress("_HcalEndcapPInsertClusterAssociations_rec", &_HcalEndcapPInsertClusterAssociations_rec_, &b__HcalEndcapPInsertClusterAssociations_rec_);
   fChain->SetBranchAddress("_HcalEndcapPInsertClusterAssociations_rec.index", _HcalEndcapPInsertClusterAssociations_rec_index, &b__HcalEndcapPInsertClusterAssociations_rec_index);
   fChain->SetBranchAddress("_HcalEndcapPInsertClusterAssociations_rec.collectionID", _HcalEndcapPInsertClusterAssociations_rec_collectionID, &b__HcalEndcapPInsertClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_HcalEndcapPInsertClusterAssociations_sim", &_HcalEndcapPInsertClusterAssociations_sim_, &b__HcalEndcapPInsertClusterAssociations_sim_);
   fChain->SetBranchAddress("_HcalEndcapPInsertClusterAssociations_sim.index", _HcalEndcapPInsertClusterAssociations_sim_index, &b__HcalEndcapPInsertClusterAssociations_sim_index);
   fChain->SetBranchAddress("_HcalEndcapPInsertClusterAssociations_sim.collectionID", _HcalEndcapPInsertClusterAssociations_sim_collectionID, &b__HcalEndcapPInsertClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters", &HcalEndcapPInsertClusters_, &b_HcalEndcapPInsertClusters_);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.type", HcalEndcapPInsertClusters_type, &b_HcalEndcapPInsertClusters_type);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.energy", HcalEndcapPInsertClusters_energy, &b_HcalEndcapPInsertClusters_energy);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.energyError", HcalEndcapPInsertClusters_energyError, &b_HcalEndcapPInsertClusters_energyError);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.time", HcalEndcapPInsertClusters_time, &b_HcalEndcapPInsertClusters_time);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.timeError", HcalEndcapPInsertClusters_timeError, &b_HcalEndcapPInsertClusters_timeError);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.nhits", HcalEndcapPInsertClusters_nhits, &b_HcalEndcapPInsertClusters_nhits);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.position.x", HcalEndcapPInsertClusters_position_x, &b_HcalEndcapPInsertClusters_position_x);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.position.y", HcalEndcapPInsertClusters_position_y, &b_HcalEndcapPInsertClusters_position_y);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.position.z", HcalEndcapPInsertClusters_position_z, &b_HcalEndcapPInsertClusters_position_z);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.positionError.xx", HcalEndcapPInsertClusters_positionError_xx, &b_HcalEndcapPInsertClusters_positionError_xx);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.positionError.yy", HcalEndcapPInsertClusters_positionError_yy, &b_HcalEndcapPInsertClusters_positionError_yy);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.positionError.zz", HcalEndcapPInsertClusters_positionError_zz, &b_HcalEndcapPInsertClusters_positionError_zz);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.positionError.xy", HcalEndcapPInsertClusters_positionError_xy, &b_HcalEndcapPInsertClusters_positionError_xy);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.positionError.xz", HcalEndcapPInsertClusters_positionError_xz, &b_HcalEndcapPInsertClusters_positionError_xz);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.positionError.yz", HcalEndcapPInsertClusters_positionError_yz, &b_HcalEndcapPInsertClusters_positionError_yz);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.intrinsicTheta", HcalEndcapPInsertClusters_intrinsicTheta, &b_HcalEndcapPInsertClusters_intrinsicTheta);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.intrinsicPhi", HcalEndcapPInsertClusters_intrinsicPhi, &b_HcalEndcapPInsertClusters_intrinsicPhi);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.intrinsicDirectionError.xx", HcalEndcapPInsertClusters_intrinsicDirectionError_xx, &b_HcalEndcapPInsertClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.intrinsicDirectionError.yy", HcalEndcapPInsertClusters_intrinsicDirectionError_yy, &b_HcalEndcapPInsertClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.intrinsicDirectionError.xy", HcalEndcapPInsertClusters_intrinsicDirectionError_xy, &b_HcalEndcapPInsertClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.shapeParameters_begin", HcalEndcapPInsertClusters_shapeParameters_begin, &b_HcalEndcapPInsertClusters_shapeParameters_begin);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.shapeParameters_end", HcalEndcapPInsertClusters_shapeParameters_end, &b_HcalEndcapPInsertClusters_shapeParameters_end);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.hitContributions_begin", HcalEndcapPInsertClusters_hitContributions_begin, &b_HcalEndcapPInsertClusters_hitContributions_begin);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.hitContributions_end", HcalEndcapPInsertClusters_hitContributions_end, &b_HcalEndcapPInsertClusters_hitContributions_end);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.subdetectorEnergies_begin", HcalEndcapPInsertClusters_subdetectorEnergies_begin, &b_HcalEndcapPInsertClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.subdetectorEnergies_end", HcalEndcapPInsertClusters_subdetectorEnergies_end, &b_HcalEndcapPInsertClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.clusters_begin", HcalEndcapPInsertClusters_clusters_begin, &b_HcalEndcapPInsertClusters_clusters_begin);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.clusters_end", HcalEndcapPInsertClusters_clusters_end, &b_HcalEndcapPInsertClusters_clusters_end);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.hits_begin", HcalEndcapPInsertClusters_hits_begin, &b_HcalEndcapPInsertClusters_hits_begin);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.hits_end", HcalEndcapPInsertClusters_hits_end, &b_HcalEndcapPInsertClusters_hits_end);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.particleIDs_begin", HcalEndcapPInsertClusters_particleIDs_begin, &b_HcalEndcapPInsertClusters_particleIDs_begin);
   fChain->SetBranchAddress("HcalEndcapPInsertClusters.particleIDs_end", HcalEndcapPInsertClusters_particleIDs_end, &b_HcalEndcapPInsertClusters_particleIDs_end);
   fChain->SetBranchAddress("_HcalEndcapPInsertClusters_clusters", &_HcalEndcapPInsertClusters_clusters_, &b__HcalEndcapPInsertClusters_clusters_);
   fChain->SetBranchAddress("_HcalEndcapPInsertClusters_clusters.index", &_HcalEndcapPInsertClusters_clusters_index, &b__HcalEndcapPInsertClusters_clusters_index);
   fChain->SetBranchAddress("_HcalEndcapPInsertClusters_clusters.collectionID", &_HcalEndcapPInsertClusters_clusters_collectionID, &b__HcalEndcapPInsertClusters_clusters_collectionID);
   fChain->SetBranchAddress("_HcalEndcapPInsertClusters_hits", &_HcalEndcapPInsertClusters_hits_, &b__HcalEndcapPInsertClusters_hits_);
   fChain->SetBranchAddress("_HcalEndcapPInsertClusters_hits.index", &_HcalEndcapPInsertClusters_hits_index, &b__HcalEndcapPInsertClusters_hits_index);
   fChain->SetBranchAddress("_HcalEndcapPInsertClusters_hits.collectionID", &_HcalEndcapPInsertClusters_hits_collectionID, &b__HcalEndcapPInsertClusters_hits_collectionID);
   fChain->SetBranchAddress("_HcalEndcapPInsertClusters_particleIDs", &_HcalEndcapPInsertClusters_particleIDs_, &b__HcalEndcapPInsertClusters_particleIDs_);
   fChain->SetBranchAddress("_HcalEndcapPInsertClusters_particleIDs.index", &_HcalEndcapPInsertClusters_particleIDs_index, &b__HcalEndcapPInsertClusters_particleIDs_index);
   fChain->SetBranchAddress("_HcalEndcapPInsertClusters_particleIDs.collectionID", &_HcalEndcapPInsertClusters_particleIDs_collectionID, &b__HcalEndcapPInsertClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_HcalEndcapPInsertClusters_shapeParameters", &_HcalEndcapPInsertClusters_shapeParameters, &b__HcalEndcapPInsertClusters_shapeParameters);
   fChain->SetBranchAddress("_HcalEndcapPInsertClusters_hitContributions", &_HcalEndcapPInsertClusters_hitContributions, &b__HcalEndcapPInsertClusters_hitContributions);
   fChain->SetBranchAddress("_HcalEndcapPInsertClusters_subdetectorEnergies", &_HcalEndcapPInsertClusters_subdetectorEnergies, &b__HcalEndcapPInsertClusters_subdetectorEnergies);
   fChain->SetBranchAddress("HcalEndcapPInsertMergedHits", &HcalEndcapPInsertMergedHits_, &b_HcalEndcapPInsertMergedHits_);
   fChain->SetBranchAddress("HcalEndcapPInsertMergedHits.cellID", HcalEndcapPInsertMergedHits_cellID, &b_HcalEndcapPInsertMergedHits_cellID);
   fChain->SetBranchAddress("HcalEndcapPInsertMergedHits.energy", HcalEndcapPInsertMergedHits_energy, &b_HcalEndcapPInsertMergedHits_energy);
   fChain->SetBranchAddress("HcalEndcapPInsertMergedHits.energyError", HcalEndcapPInsertMergedHits_energyError, &b_HcalEndcapPInsertMergedHits_energyError);
   fChain->SetBranchAddress("HcalEndcapPInsertMergedHits.time", HcalEndcapPInsertMergedHits_time, &b_HcalEndcapPInsertMergedHits_time);
   fChain->SetBranchAddress("HcalEndcapPInsertMergedHits.timeError", HcalEndcapPInsertMergedHits_timeError, &b_HcalEndcapPInsertMergedHits_timeError);
   fChain->SetBranchAddress("HcalEndcapPInsertMergedHits.position.x", HcalEndcapPInsertMergedHits_position_x, &b_HcalEndcapPInsertMergedHits_position_x);
   fChain->SetBranchAddress("HcalEndcapPInsertMergedHits.position.y", HcalEndcapPInsertMergedHits_position_y, &b_HcalEndcapPInsertMergedHits_position_y);
   fChain->SetBranchAddress("HcalEndcapPInsertMergedHits.position.z", HcalEndcapPInsertMergedHits_position_z, &b_HcalEndcapPInsertMergedHits_position_z);
   fChain->SetBranchAddress("HcalEndcapPInsertMergedHits.dimension.x", HcalEndcapPInsertMergedHits_dimension_x, &b_HcalEndcapPInsertMergedHits_dimension_x);
   fChain->SetBranchAddress("HcalEndcapPInsertMergedHits.dimension.y", HcalEndcapPInsertMergedHits_dimension_y, &b_HcalEndcapPInsertMergedHits_dimension_y);
   fChain->SetBranchAddress("HcalEndcapPInsertMergedHits.dimension.z", HcalEndcapPInsertMergedHits_dimension_z, &b_HcalEndcapPInsertMergedHits_dimension_z);
   fChain->SetBranchAddress("HcalEndcapPInsertMergedHits.sector", HcalEndcapPInsertMergedHits_sector, &b_HcalEndcapPInsertMergedHits_sector);
   fChain->SetBranchAddress("HcalEndcapPInsertMergedHits.layer", HcalEndcapPInsertMergedHits_layer, &b_HcalEndcapPInsertMergedHits_layer);
   fChain->SetBranchAddress("HcalEndcapPInsertMergedHits.local.x", HcalEndcapPInsertMergedHits_local_x, &b_HcalEndcapPInsertMergedHits_local_x);
   fChain->SetBranchAddress("HcalEndcapPInsertMergedHits.local.y", HcalEndcapPInsertMergedHits_local_y, &b_HcalEndcapPInsertMergedHits_local_y);
   fChain->SetBranchAddress("HcalEndcapPInsertMergedHits.local.z", HcalEndcapPInsertMergedHits_local_z, &b_HcalEndcapPInsertMergedHits_local_z);
   fChain->SetBranchAddress("HcalEndcapPInsertRawHits", &HcalEndcapPInsertRawHits_, &b_HcalEndcapPInsertRawHits_);
   fChain->SetBranchAddress("HcalEndcapPInsertRawHits.cellID", HcalEndcapPInsertRawHits_cellID, &b_HcalEndcapPInsertRawHits_cellID);
   fChain->SetBranchAddress("HcalEndcapPInsertRawHits.amplitude", HcalEndcapPInsertRawHits_amplitude, &b_HcalEndcapPInsertRawHits_amplitude);
   fChain->SetBranchAddress("HcalEndcapPInsertRawHits.timeStamp", HcalEndcapPInsertRawHits_timeStamp, &b_HcalEndcapPInsertRawHits_timeStamp);
   fChain->SetBranchAddress("HcalEndcapPInsertRecHits", &HcalEndcapPInsertRecHits_, &b_HcalEndcapPInsertRecHits_);
   fChain->SetBranchAddress("HcalEndcapPInsertRecHits.cellID", HcalEndcapPInsertRecHits_cellID, &b_HcalEndcapPInsertRecHits_cellID);
   fChain->SetBranchAddress("HcalEndcapPInsertRecHits.energy", HcalEndcapPInsertRecHits_energy, &b_HcalEndcapPInsertRecHits_energy);
   fChain->SetBranchAddress("HcalEndcapPInsertRecHits.energyError", HcalEndcapPInsertRecHits_energyError, &b_HcalEndcapPInsertRecHits_energyError);
   fChain->SetBranchAddress("HcalEndcapPInsertRecHits.time", HcalEndcapPInsertRecHits_time, &b_HcalEndcapPInsertRecHits_time);
   fChain->SetBranchAddress("HcalEndcapPInsertRecHits.timeError", HcalEndcapPInsertRecHits_timeError, &b_HcalEndcapPInsertRecHits_timeError);
   fChain->SetBranchAddress("HcalEndcapPInsertRecHits.position.x", HcalEndcapPInsertRecHits_position_x, &b_HcalEndcapPInsertRecHits_position_x);
   fChain->SetBranchAddress("HcalEndcapPInsertRecHits.position.y", HcalEndcapPInsertRecHits_position_y, &b_HcalEndcapPInsertRecHits_position_y);
   fChain->SetBranchAddress("HcalEndcapPInsertRecHits.position.z", HcalEndcapPInsertRecHits_position_z, &b_HcalEndcapPInsertRecHits_position_z);
   fChain->SetBranchAddress("HcalEndcapPInsertRecHits.dimension.x", HcalEndcapPInsertRecHits_dimension_x, &b_HcalEndcapPInsertRecHits_dimension_x);
   fChain->SetBranchAddress("HcalEndcapPInsertRecHits.dimension.y", HcalEndcapPInsertRecHits_dimension_y, &b_HcalEndcapPInsertRecHits_dimension_y);
   fChain->SetBranchAddress("HcalEndcapPInsertRecHits.dimension.z", HcalEndcapPInsertRecHits_dimension_z, &b_HcalEndcapPInsertRecHits_dimension_z);
   fChain->SetBranchAddress("HcalEndcapPInsertRecHits.sector", HcalEndcapPInsertRecHits_sector, &b_HcalEndcapPInsertRecHits_sector);
   fChain->SetBranchAddress("HcalEndcapPInsertRecHits.layer", HcalEndcapPInsertRecHits_layer, &b_HcalEndcapPInsertRecHits_layer);
   fChain->SetBranchAddress("HcalEndcapPInsertRecHits.local.x", HcalEndcapPInsertRecHits_local_x, &b_HcalEndcapPInsertRecHits_local_x);
   fChain->SetBranchAddress("HcalEndcapPInsertRecHits.local.y", HcalEndcapPInsertRecHits_local_y, &b_HcalEndcapPInsertRecHits_local_y);
   fChain->SetBranchAddress("HcalEndcapPInsertRecHits.local.z", HcalEndcapPInsertRecHits_local_z, &b_HcalEndcapPInsertRecHits_local_z);
   fChain->SetBranchAddress("InclusiveKinematicsDA", &InclusiveKinematicsDA_, &b_InclusiveKinematicsDA_);
   fChain->SetBranchAddress("InclusiveKinematicsDA.x", InclusiveKinematicsDA_x, &b_InclusiveKinematicsDA_x);
   fChain->SetBranchAddress("InclusiveKinematicsDA.Q2", InclusiveKinematicsDA_Q2, &b_InclusiveKinematicsDA_Q2);
   fChain->SetBranchAddress("InclusiveKinematicsDA.W", InclusiveKinematicsDA_W, &b_InclusiveKinematicsDA_W);
   fChain->SetBranchAddress("InclusiveKinematicsDA.y", InclusiveKinematicsDA_y, &b_InclusiveKinematicsDA_y);
   fChain->SetBranchAddress("InclusiveKinematicsDA.nu", InclusiveKinematicsDA_nu, &b_InclusiveKinematicsDA_nu);
   fChain->SetBranchAddress("_InclusiveKinematicsDA_scat", &_InclusiveKinematicsDA_scat_, &b__InclusiveKinematicsDA_scat_);
   fChain->SetBranchAddress("_InclusiveKinematicsDA_scat.index", _InclusiveKinematicsDA_scat_index, &b__InclusiveKinematicsDA_scat_index);
   fChain->SetBranchAddress("_InclusiveKinematicsDA_scat.collectionID", _InclusiveKinematicsDA_scat_collectionID, &b__InclusiveKinematicsDA_scat_collectionID);
   fChain->SetBranchAddress("InclusiveKinematicsElectron", &InclusiveKinematicsElectron_, &b_InclusiveKinematicsElectron_);
   fChain->SetBranchAddress("InclusiveKinematicsElectron.x", InclusiveKinematicsElectron_x, &b_InclusiveKinematicsElectron_x);
   fChain->SetBranchAddress("InclusiveKinematicsElectron.Q2", InclusiveKinematicsElectron_Q2, &b_InclusiveKinematicsElectron_Q2);
   fChain->SetBranchAddress("InclusiveKinematicsElectron.W", InclusiveKinematicsElectron_W, &b_InclusiveKinematicsElectron_W);
   fChain->SetBranchAddress("InclusiveKinematicsElectron.y", InclusiveKinematicsElectron_y, &b_InclusiveKinematicsElectron_y);
   fChain->SetBranchAddress("InclusiveKinematicsElectron.nu", InclusiveKinematicsElectron_nu, &b_InclusiveKinematicsElectron_nu);
   fChain->SetBranchAddress("_InclusiveKinematicsElectron_scat", &_InclusiveKinematicsElectron_scat_, &b__InclusiveKinematicsElectron_scat_);
   fChain->SetBranchAddress("_InclusiveKinematicsElectron_scat.index", _InclusiveKinematicsElectron_scat_index, &b__InclusiveKinematicsElectron_scat_index);
   fChain->SetBranchAddress("_InclusiveKinematicsElectron_scat.collectionID", _InclusiveKinematicsElectron_scat_collectionID, &b__InclusiveKinematicsElectron_scat_collectionID);
   fChain->SetBranchAddress("InclusiveKinematicseSigma", &InclusiveKinematicseSigma_, &b_InclusiveKinematicseSigma_);
   fChain->SetBranchAddress("InclusiveKinematicseSigma.x", InclusiveKinematicseSigma_x, &b_InclusiveKinematicseSigma_x);
   fChain->SetBranchAddress("InclusiveKinematicseSigma.Q2", InclusiveKinematicseSigma_Q2, &b_InclusiveKinematicseSigma_Q2);
   fChain->SetBranchAddress("InclusiveKinematicseSigma.W", InclusiveKinematicseSigma_W, &b_InclusiveKinematicseSigma_W);
   fChain->SetBranchAddress("InclusiveKinematicseSigma.y", InclusiveKinematicseSigma_y, &b_InclusiveKinematicseSigma_y);
   fChain->SetBranchAddress("InclusiveKinematicseSigma.nu", InclusiveKinematicseSigma_nu, &b_InclusiveKinematicseSigma_nu);
   fChain->SetBranchAddress("_InclusiveKinematicseSigma_scat", &_InclusiveKinematicseSigma_scat_, &b__InclusiveKinematicseSigma_scat_);
   fChain->SetBranchAddress("_InclusiveKinematicseSigma_scat.index", _InclusiveKinematicseSigma_scat_index, &b__InclusiveKinematicseSigma_scat_index);
   fChain->SetBranchAddress("_InclusiveKinematicseSigma_scat.collectionID", _InclusiveKinematicseSigma_scat_collectionID, &b__InclusiveKinematicseSigma_scat_collectionID);
   fChain->SetBranchAddress("InclusiveKinematicsJB", &InclusiveKinematicsJB_, &b_InclusiveKinematicsJB_);
   fChain->SetBranchAddress("InclusiveKinematicsJB.x", InclusiveKinematicsJB_x, &b_InclusiveKinematicsJB_x);
   fChain->SetBranchAddress("InclusiveKinematicsJB.Q2", InclusiveKinematicsJB_Q2, &b_InclusiveKinematicsJB_Q2);
   fChain->SetBranchAddress("InclusiveKinematicsJB.W", InclusiveKinematicsJB_W, &b_InclusiveKinematicsJB_W);
   fChain->SetBranchAddress("InclusiveKinematicsJB.y", InclusiveKinematicsJB_y, &b_InclusiveKinematicsJB_y);
   fChain->SetBranchAddress("InclusiveKinematicsJB.nu", InclusiveKinematicsJB_nu, &b_InclusiveKinematicsJB_nu);
   fChain->SetBranchAddress("_InclusiveKinematicsJB_scat", &_InclusiveKinematicsJB_scat_, &b__InclusiveKinematicsJB_scat_);
   fChain->SetBranchAddress("_InclusiveKinematicsJB_scat.index", _InclusiveKinematicsJB_scat_index, &b__InclusiveKinematicsJB_scat_index);
   fChain->SetBranchAddress("_InclusiveKinematicsJB_scat.collectionID", _InclusiveKinematicsJB_scat_collectionID, &b__InclusiveKinematicsJB_scat_collectionID);
   fChain->SetBranchAddress("InclusiveKinematicsSigma", &InclusiveKinematicsSigma_, &b_InclusiveKinematicsSigma_);
   fChain->SetBranchAddress("InclusiveKinematicsSigma.x", InclusiveKinematicsSigma_x, &b_InclusiveKinematicsSigma_x);
   fChain->SetBranchAddress("InclusiveKinematicsSigma.Q2", InclusiveKinematicsSigma_Q2, &b_InclusiveKinematicsSigma_Q2);
   fChain->SetBranchAddress("InclusiveKinematicsSigma.W", InclusiveKinematicsSigma_W, &b_InclusiveKinematicsSigma_W);
   fChain->SetBranchAddress("InclusiveKinematicsSigma.y", InclusiveKinematicsSigma_y, &b_InclusiveKinematicsSigma_y);
   fChain->SetBranchAddress("InclusiveKinematicsSigma.nu", InclusiveKinematicsSigma_nu, &b_InclusiveKinematicsSigma_nu);
   fChain->SetBranchAddress("_InclusiveKinematicsSigma_scat", &_InclusiveKinematicsSigma_scat_, &b__InclusiveKinematicsSigma_scat_);
   fChain->SetBranchAddress("_InclusiveKinematicsSigma_scat.index", _InclusiveKinematicsSigma_scat_index, &b__InclusiveKinematicsSigma_scat_index);
   fChain->SetBranchAddress("_InclusiveKinematicsSigma_scat.collectionID", _InclusiveKinematicsSigma_scat_collectionID, &b__InclusiveKinematicsSigma_scat_collectionID);
   fChain->SetBranchAddress("InclusiveKinematicsTruth", &InclusiveKinematicsTruth_, &b_InclusiveKinematicsTruth_);
   fChain->SetBranchAddress("InclusiveKinematicsTruth.x", InclusiveKinematicsTruth_x, &b_InclusiveKinematicsTruth_x);
   fChain->SetBranchAddress("InclusiveKinematicsTruth.Q2", InclusiveKinematicsTruth_Q2, &b_InclusiveKinematicsTruth_Q2);
   fChain->SetBranchAddress("InclusiveKinematicsTruth.W", InclusiveKinematicsTruth_W, &b_InclusiveKinematicsTruth_W);
   fChain->SetBranchAddress("InclusiveKinematicsTruth.y", InclusiveKinematicsTruth_y, &b_InclusiveKinematicsTruth_y);
   fChain->SetBranchAddress("InclusiveKinematicsTruth.nu", InclusiveKinematicsTruth_nu, &b_InclusiveKinematicsTruth_nu);
   fChain->SetBranchAddress("_InclusiveKinematicsTruth_scat", &_InclusiveKinematicsTruth_scat_, &b__InclusiveKinematicsTruth_scat_);
   fChain->SetBranchAddress("_InclusiveKinematicsTruth_scat.index", _InclusiveKinematicsTruth_scat_index, &b__InclusiveKinematicsTruth_scat_index);
   fChain->SetBranchAddress("_InclusiveKinematicsTruth_scat.collectionID", _InclusiveKinematicsTruth_scat_collectionID, &b__InclusiveKinematicsTruth_scat_collectionID);
   fChain->SetBranchAddress("LFHCALClusterAssociations", &LFHCALClusterAssociations_, &b_LFHCALClusterAssociations_);
   fChain->SetBranchAddress("LFHCALClusterAssociations.simID", LFHCALClusterAssociations_simID, &b_LFHCALClusterAssociations_simID);
   fChain->SetBranchAddress("LFHCALClusterAssociations.recID", LFHCALClusterAssociations_recID, &b_LFHCALClusterAssociations_recID);
   fChain->SetBranchAddress("LFHCALClusterAssociations.weight", LFHCALClusterAssociations_weight, &b_LFHCALClusterAssociations_weight);
   fChain->SetBranchAddress("_LFHCALClusterAssociations_rec", &_LFHCALClusterAssociations_rec_, &b__LFHCALClusterAssociations_rec_);
   fChain->SetBranchAddress("_LFHCALClusterAssociations_rec.index", _LFHCALClusterAssociations_rec_index, &b__LFHCALClusterAssociations_rec_index);
   fChain->SetBranchAddress("_LFHCALClusterAssociations_rec.collectionID", _LFHCALClusterAssociations_rec_collectionID, &b__LFHCALClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_LFHCALClusterAssociations_sim", &_LFHCALClusterAssociations_sim_, &b__LFHCALClusterAssociations_sim_);
   fChain->SetBranchAddress("_LFHCALClusterAssociations_sim.index", _LFHCALClusterAssociations_sim_index, &b__LFHCALClusterAssociations_sim_index);
   fChain->SetBranchAddress("_LFHCALClusterAssociations_sim.collectionID", _LFHCALClusterAssociations_sim_collectionID, &b__LFHCALClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("LFHCALClusters", &LFHCALClusters_, &b_LFHCALClusters_);
   fChain->SetBranchAddress("LFHCALClusters.type", LFHCALClusters_type, &b_LFHCALClusters_type);
   fChain->SetBranchAddress("LFHCALClusters.energy", LFHCALClusters_energy, &b_LFHCALClusters_energy);
   fChain->SetBranchAddress("LFHCALClusters.energyError", LFHCALClusters_energyError, &b_LFHCALClusters_energyError);
   fChain->SetBranchAddress("LFHCALClusters.time", LFHCALClusters_time, &b_LFHCALClusters_time);
   fChain->SetBranchAddress("LFHCALClusters.timeError", LFHCALClusters_timeError, &b_LFHCALClusters_timeError);
   fChain->SetBranchAddress("LFHCALClusters.nhits", LFHCALClusters_nhits, &b_LFHCALClusters_nhits);
   fChain->SetBranchAddress("LFHCALClusters.position.x", LFHCALClusters_position_x, &b_LFHCALClusters_position_x);
   fChain->SetBranchAddress("LFHCALClusters.position.y", LFHCALClusters_position_y, &b_LFHCALClusters_position_y);
   fChain->SetBranchAddress("LFHCALClusters.position.z", LFHCALClusters_position_z, &b_LFHCALClusters_position_z);
   fChain->SetBranchAddress("LFHCALClusters.positionError.xx", LFHCALClusters_positionError_xx, &b_LFHCALClusters_positionError_xx);
   fChain->SetBranchAddress("LFHCALClusters.positionError.yy", LFHCALClusters_positionError_yy, &b_LFHCALClusters_positionError_yy);
   fChain->SetBranchAddress("LFHCALClusters.positionError.zz", LFHCALClusters_positionError_zz, &b_LFHCALClusters_positionError_zz);
   fChain->SetBranchAddress("LFHCALClusters.positionError.xy", LFHCALClusters_positionError_xy, &b_LFHCALClusters_positionError_xy);
   fChain->SetBranchAddress("LFHCALClusters.positionError.xz", LFHCALClusters_positionError_xz, &b_LFHCALClusters_positionError_xz);
   fChain->SetBranchAddress("LFHCALClusters.positionError.yz", LFHCALClusters_positionError_yz, &b_LFHCALClusters_positionError_yz);
   fChain->SetBranchAddress("LFHCALClusters.intrinsicTheta", LFHCALClusters_intrinsicTheta, &b_LFHCALClusters_intrinsicTheta);
   fChain->SetBranchAddress("LFHCALClusters.intrinsicPhi", LFHCALClusters_intrinsicPhi, &b_LFHCALClusters_intrinsicPhi);
   fChain->SetBranchAddress("LFHCALClusters.intrinsicDirectionError.xx", LFHCALClusters_intrinsicDirectionError_xx, &b_LFHCALClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("LFHCALClusters.intrinsicDirectionError.yy", LFHCALClusters_intrinsicDirectionError_yy, &b_LFHCALClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("LFHCALClusters.intrinsicDirectionError.xy", LFHCALClusters_intrinsicDirectionError_xy, &b_LFHCALClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("LFHCALClusters.shapeParameters_begin", LFHCALClusters_shapeParameters_begin, &b_LFHCALClusters_shapeParameters_begin);
   fChain->SetBranchAddress("LFHCALClusters.shapeParameters_end", LFHCALClusters_shapeParameters_end, &b_LFHCALClusters_shapeParameters_end);
   fChain->SetBranchAddress("LFHCALClusters.hitContributions_begin", LFHCALClusters_hitContributions_begin, &b_LFHCALClusters_hitContributions_begin);
   fChain->SetBranchAddress("LFHCALClusters.hitContributions_end", LFHCALClusters_hitContributions_end, &b_LFHCALClusters_hitContributions_end);
   fChain->SetBranchAddress("LFHCALClusters.subdetectorEnergies_begin", LFHCALClusters_subdetectorEnergies_begin, &b_LFHCALClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("LFHCALClusters.subdetectorEnergies_end", LFHCALClusters_subdetectorEnergies_end, &b_LFHCALClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("LFHCALClusters.clusters_begin", LFHCALClusters_clusters_begin, &b_LFHCALClusters_clusters_begin);
   fChain->SetBranchAddress("LFHCALClusters.clusters_end", LFHCALClusters_clusters_end, &b_LFHCALClusters_clusters_end);
   fChain->SetBranchAddress("LFHCALClusters.hits_begin", LFHCALClusters_hits_begin, &b_LFHCALClusters_hits_begin);
   fChain->SetBranchAddress("LFHCALClusters.hits_end", LFHCALClusters_hits_end, &b_LFHCALClusters_hits_end);
   fChain->SetBranchAddress("LFHCALClusters.particleIDs_begin", LFHCALClusters_particleIDs_begin, &b_LFHCALClusters_particleIDs_begin);
   fChain->SetBranchAddress("LFHCALClusters.particleIDs_end", LFHCALClusters_particleIDs_end, &b_LFHCALClusters_particleIDs_end);
   fChain->SetBranchAddress("_LFHCALClusters_clusters", &_LFHCALClusters_clusters_, &b__LFHCALClusters_clusters_);
   fChain->SetBranchAddress("_LFHCALClusters_clusters.index", &_LFHCALClusters_clusters_index, &b__LFHCALClusters_clusters_index);
   fChain->SetBranchAddress("_LFHCALClusters_clusters.collectionID", &_LFHCALClusters_clusters_collectionID, &b__LFHCALClusters_clusters_collectionID);
   fChain->SetBranchAddress("_LFHCALClusters_hits", &_LFHCALClusters_hits_, &b__LFHCALClusters_hits_);
   fChain->SetBranchAddress("_LFHCALClusters_hits.index", &_LFHCALClusters_hits_index, &b__LFHCALClusters_hits_index);
   fChain->SetBranchAddress("_LFHCALClusters_hits.collectionID", &_LFHCALClusters_hits_collectionID, &b__LFHCALClusters_hits_collectionID);
   fChain->SetBranchAddress("_LFHCALClusters_particleIDs", &_LFHCALClusters_particleIDs_, &b__LFHCALClusters_particleIDs_);
   fChain->SetBranchAddress("_LFHCALClusters_particleIDs.index", &_LFHCALClusters_particleIDs_index, &b__LFHCALClusters_particleIDs_index);
   fChain->SetBranchAddress("_LFHCALClusters_particleIDs.collectionID", &_LFHCALClusters_particleIDs_collectionID, &b__LFHCALClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_LFHCALClusters_shapeParameters", &_LFHCALClusters_shapeParameters, &b__LFHCALClusters_shapeParameters);
   fChain->SetBranchAddress("_LFHCALClusters_hitContributions", &_LFHCALClusters_hitContributions, &b__LFHCALClusters_hitContributions);
   fChain->SetBranchAddress("_LFHCALClusters_subdetectorEnergies", &_LFHCALClusters_subdetectorEnergies, &b__LFHCALClusters_subdetectorEnergies);
   fChain->SetBranchAddress("LFHCALRawHits", &LFHCALRawHits_, &b_LFHCALRawHits_);
   fChain->SetBranchAddress("LFHCALRawHits.cellID", LFHCALRawHits_cellID, &b_LFHCALRawHits_cellID);
   fChain->SetBranchAddress("LFHCALRawHits.amplitude", LFHCALRawHits_amplitude, &b_LFHCALRawHits_amplitude);
   fChain->SetBranchAddress("LFHCALRawHits.timeStamp", LFHCALRawHits_timeStamp, &b_LFHCALRawHits_timeStamp);
   fChain->SetBranchAddress("LFHCALRecHits", &LFHCALRecHits_, &b_LFHCALRecHits_);
   fChain->SetBranchAddress("LFHCALRecHits.cellID", LFHCALRecHits_cellID, &b_LFHCALRecHits_cellID);
   fChain->SetBranchAddress("LFHCALRecHits.energy", LFHCALRecHits_energy, &b_LFHCALRecHits_energy);
   fChain->SetBranchAddress("LFHCALRecHits.energyError", LFHCALRecHits_energyError, &b_LFHCALRecHits_energyError);
   fChain->SetBranchAddress("LFHCALRecHits.time", LFHCALRecHits_time, &b_LFHCALRecHits_time);
   fChain->SetBranchAddress("LFHCALRecHits.timeError", LFHCALRecHits_timeError, &b_LFHCALRecHits_timeError);
   fChain->SetBranchAddress("LFHCALRecHits.position.x", LFHCALRecHits_position_x, &b_LFHCALRecHits_position_x);
   fChain->SetBranchAddress("LFHCALRecHits.position.y", LFHCALRecHits_position_y, &b_LFHCALRecHits_position_y);
   fChain->SetBranchAddress("LFHCALRecHits.position.z", LFHCALRecHits_position_z, &b_LFHCALRecHits_position_z);
   fChain->SetBranchAddress("LFHCALRecHits.dimension.x", LFHCALRecHits_dimension_x, &b_LFHCALRecHits_dimension_x);
   fChain->SetBranchAddress("LFHCALRecHits.dimension.y", LFHCALRecHits_dimension_y, &b_LFHCALRecHits_dimension_y);
   fChain->SetBranchAddress("LFHCALRecHits.dimension.z", LFHCALRecHits_dimension_z, &b_LFHCALRecHits_dimension_z);
   fChain->SetBranchAddress("LFHCALRecHits.sector", LFHCALRecHits_sector, &b_LFHCALRecHits_sector);
   fChain->SetBranchAddress("LFHCALRecHits.layer", LFHCALRecHits_layer, &b_LFHCALRecHits_layer);
   fChain->SetBranchAddress("LFHCALRecHits.local.x", LFHCALRecHits_local_x, &b_LFHCALRecHits_local_x);
   fChain->SetBranchAddress("LFHCALRecHits.local.y", LFHCALRecHits_local_y, &b_LFHCALRecHits_local_y);
   fChain->SetBranchAddress("LFHCALRecHits.local.z", LFHCALRecHits_local_z, &b_LFHCALRecHits_local_z);
   fChain->SetBranchAddress("MCParticles", &MCParticles_, &b_MCParticles_);
   fChain->SetBranchAddress("MCParticles.PDG", MCParticles_PDG, &b_MCParticles_PDG);
   fChain->SetBranchAddress("MCParticles.generatorStatus", MCParticles_generatorStatus, &b_MCParticles_generatorStatus);
   fChain->SetBranchAddress("MCParticles.simulatorStatus", MCParticles_simulatorStatus, &b_MCParticles_simulatorStatus);
   fChain->SetBranchAddress("MCParticles.charge", MCParticles_charge, &b_MCParticles_charge);
   fChain->SetBranchAddress("MCParticles.time", MCParticles_time, &b_MCParticles_time);
   fChain->SetBranchAddress("MCParticles.mass", MCParticles_mass, &b_MCParticles_mass);
   fChain->SetBranchAddress("MCParticles.vertex.x", MCParticles_vertex_x, &b_MCParticles_vertex_x);
   fChain->SetBranchAddress("MCParticles.vertex.y", MCParticles_vertex_y, &b_MCParticles_vertex_y);
   fChain->SetBranchAddress("MCParticles.vertex.z", MCParticles_vertex_z, &b_MCParticles_vertex_z);
   fChain->SetBranchAddress("MCParticles.endpoint.x", MCParticles_endpoint_x, &b_MCParticles_endpoint_x);
   fChain->SetBranchAddress("MCParticles.endpoint.y", MCParticles_endpoint_y, &b_MCParticles_endpoint_y);
   fChain->SetBranchAddress("MCParticles.endpoint.z", MCParticles_endpoint_z, &b_MCParticles_endpoint_z);
   fChain->SetBranchAddress("MCParticles.momentum.x", MCParticles_momentum_x, &b_MCParticles_momentum_x);
   fChain->SetBranchAddress("MCParticles.momentum.y", MCParticles_momentum_y, &b_MCParticles_momentum_y);
   fChain->SetBranchAddress("MCParticles.momentum.z", MCParticles_momentum_z, &b_MCParticles_momentum_z);
   fChain->SetBranchAddress("MCParticles.momentumAtEndpoint.x", MCParticles_momentumAtEndpoint_x, &b_MCParticles_momentumAtEndpoint_x);
   fChain->SetBranchAddress("MCParticles.momentumAtEndpoint.y", MCParticles_momentumAtEndpoint_y, &b_MCParticles_momentumAtEndpoint_y);
   fChain->SetBranchAddress("MCParticles.momentumAtEndpoint.z", MCParticles_momentumAtEndpoint_z, &b_MCParticles_momentumAtEndpoint_z);
   fChain->SetBranchAddress("MCParticles.spin.x", MCParticles_spin_x, &b_MCParticles_spin_x);
   fChain->SetBranchAddress("MCParticles.spin.y", MCParticles_spin_y, &b_MCParticles_spin_y);
   fChain->SetBranchAddress("MCParticles.spin.z", MCParticles_spin_z, &b_MCParticles_spin_z);
   fChain->SetBranchAddress("MCParticles.colorFlow.a", MCParticles_colorFlow_a, &b_MCParticles_colorFlow_a);
   fChain->SetBranchAddress("MCParticles.colorFlow.b", MCParticles_colorFlow_b, &b_MCParticles_colorFlow_b);
   fChain->SetBranchAddress("MCParticles.parents_begin", MCParticles_parents_begin, &b_MCParticles_parents_begin);
   fChain->SetBranchAddress("MCParticles.parents_end", MCParticles_parents_end, &b_MCParticles_parents_end);
   fChain->SetBranchAddress("MCParticles.daughters_begin", MCParticles_daughters_begin, &b_MCParticles_daughters_begin);
   fChain->SetBranchAddress("MCParticles.daughters_end", MCParticles_daughters_end, &b_MCParticles_daughters_end);
   fChain->SetBranchAddress("_MCParticles_parents", &_MCParticles_parents_, &b__MCParticles_parents_);
   fChain->SetBranchAddress("_MCParticles_parents.index", _MCParticles_parents_index, &b__MCParticles_parents_index);
   fChain->SetBranchAddress("_MCParticles_parents.collectionID", _MCParticles_parents_collectionID, &b__MCParticles_parents_collectionID);
   fChain->SetBranchAddress("_MCParticles_daughters", &_MCParticles_daughters_, &b__MCParticles_daughters_);
   fChain->SetBranchAddress("_MCParticles_daughters.index", _MCParticles_daughters_index, &b__MCParticles_daughters_index);
   fChain->SetBranchAddress("_MCParticles_daughters.collectionID", _MCParticles_daughters_collectionID, &b__MCParticles_daughters_collectionID);
   fChain->SetBranchAddress("MPGDBarrelRecHits", &MPGDBarrelRecHits_, &b_MPGDBarrelRecHits_);
   fChain->SetBranchAddress("MPGDBarrelRecHits.cellID", MPGDBarrelRecHits_cellID, &b_MPGDBarrelRecHits_cellID);
   fChain->SetBranchAddress("MPGDBarrelRecHits.position.x", MPGDBarrelRecHits_position_x, &b_MPGDBarrelRecHits_position_x);
   fChain->SetBranchAddress("MPGDBarrelRecHits.position.y", MPGDBarrelRecHits_position_y, &b_MPGDBarrelRecHits_position_y);
   fChain->SetBranchAddress("MPGDBarrelRecHits.position.z", MPGDBarrelRecHits_position_z, &b_MPGDBarrelRecHits_position_z);
   fChain->SetBranchAddress("MPGDBarrelRecHits.positionError.xx", MPGDBarrelRecHits_positionError_xx, &b_MPGDBarrelRecHits_positionError_xx);
   fChain->SetBranchAddress("MPGDBarrelRecHits.positionError.yy", MPGDBarrelRecHits_positionError_yy, &b_MPGDBarrelRecHits_positionError_yy);
   fChain->SetBranchAddress("MPGDBarrelRecHits.positionError.zz", MPGDBarrelRecHits_positionError_zz, &b_MPGDBarrelRecHits_positionError_zz);
   fChain->SetBranchAddress("MPGDBarrelRecHits.time", MPGDBarrelRecHits_time, &b_MPGDBarrelRecHits_time);
   fChain->SetBranchAddress("MPGDBarrelRecHits.timeError", MPGDBarrelRecHits_timeError, &b_MPGDBarrelRecHits_timeError);
   fChain->SetBranchAddress("MPGDBarrelRecHits.edep", MPGDBarrelRecHits_edep, &b_MPGDBarrelRecHits_edep);
   fChain->SetBranchAddress("MPGDBarrelRecHits.edepError", MPGDBarrelRecHits_edepError, &b_MPGDBarrelRecHits_edepError);
   fChain->SetBranchAddress("MPGDDIRCRecHits", &MPGDDIRCRecHits_, &b_MPGDDIRCRecHits_);
   fChain->SetBranchAddress("MPGDDIRCRecHits.cellID", &MPGDDIRCRecHits_cellID, &b_MPGDDIRCRecHits_cellID);
   fChain->SetBranchAddress("MPGDDIRCRecHits.position.x", &MPGDDIRCRecHits_position_x, &b_MPGDDIRCRecHits_position_x);
   fChain->SetBranchAddress("MPGDDIRCRecHits.position.y", &MPGDDIRCRecHits_position_y, &b_MPGDDIRCRecHits_position_y);
   fChain->SetBranchAddress("MPGDDIRCRecHits.position.z", &MPGDDIRCRecHits_position_z, &b_MPGDDIRCRecHits_position_z);
   fChain->SetBranchAddress("MPGDDIRCRecHits.positionError.xx", &MPGDDIRCRecHits_positionError_xx, &b_MPGDDIRCRecHits_positionError_xx);
   fChain->SetBranchAddress("MPGDDIRCRecHits.positionError.yy", &MPGDDIRCRecHits_positionError_yy, &b_MPGDDIRCRecHits_positionError_yy);
   fChain->SetBranchAddress("MPGDDIRCRecHits.positionError.zz", &MPGDDIRCRecHits_positionError_zz, &b_MPGDDIRCRecHits_positionError_zz);
   fChain->SetBranchAddress("MPGDDIRCRecHits.time", &MPGDDIRCRecHits_time, &b_MPGDDIRCRecHits_time);
   fChain->SetBranchAddress("MPGDDIRCRecHits.timeError", &MPGDDIRCRecHits_timeError, &b_MPGDDIRCRecHits_timeError);
   fChain->SetBranchAddress("MPGDDIRCRecHits.edep", &MPGDDIRCRecHits_edep, &b_MPGDDIRCRecHits_edep);
   fChain->SetBranchAddress("MPGDDIRCRecHits.edepError", &MPGDDIRCRecHits_edepError, &b_MPGDDIRCRecHits_edepError);
   fChain->SetBranchAddress("OuterMPGDBarrelRecHits", &OuterMPGDBarrelRecHits_, &b_OuterMPGDBarrelRecHits_);
   fChain->SetBranchAddress("OuterMPGDBarrelRecHits.cellID", OuterMPGDBarrelRecHits_cellID, &b_OuterMPGDBarrelRecHits_cellID);
   fChain->SetBranchAddress("OuterMPGDBarrelRecHits.position.x", OuterMPGDBarrelRecHits_position_x, &b_OuterMPGDBarrelRecHits_position_x);
   fChain->SetBranchAddress("OuterMPGDBarrelRecHits.position.y", OuterMPGDBarrelRecHits_position_y, &b_OuterMPGDBarrelRecHits_position_y);
   fChain->SetBranchAddress("OuterMPGDBarrelRecHits.position.z", OuterMPGDBarrelRecHits_position_z, &b_OuterMPGDBarrelRecHits_position_z);
   fChain->SetBranchAddress("OuterMPGDBarrelRecHits.positionError.xx", OuterMPGDBarrelRecHits_positionError_xx, &b_OuterMPGDBarrelRecHits_positionError_xx);
   fChain->SetBranchAddress("OuterMPGDBarrelRecHits.positionError.yy", OuterMPGDBarrelRecHits_positionError_yy, &b_OuterMPGDBarrelRecHits_positionError_yy);
   fChain->SetBranchAddress("OuterMPGDBarrelRecHits.positionError.zz", OuterMPGDBarrelRecHits_positionError_zz, &b_OuterMPGDBarrelRecHits_positionError_zz);
   fChain->SetBranchAddress("OuterMPGDBarrelRecHits.time", OuterMPGDBarrelRecHits_time, &b_OuterMPGDBarrelRecHits_time);
   fChain->SetBranchAddress("OuterMPGDBarrelRecHits.timeError", OuterMPGDBarrelRecHits_timeError, &b_OuterMPGDBarrelRecHits_timeError);
   fChain->SetBranchAddress("OuterMPGDBarrelRecHits.edep", OuterMPGDBarrelRecHits_edep, &b_OuterMPGDBarrelRecHits_edep);
   fChain->SetBranchAddress("OuterMPGDBarrelRecHits.edepError", OuterMPGDBarrelRecHits_edepError, &b_OuterMPGDBarrelRecHits_edepError);
   fChain->SetBranchAddress("ReconstructedChargedJets", &ReconstructedChargedJets_, &b_ReconstructedChargedJets_);
   fChain->SetBranchAddress("ReconstructedChargedJets.type", ReconstructedChargedJets_type, &b_ReconstructedChargedJets_type);
   fChain->SetBranchAddress("ReconstructedChargedJets.energy", ReconstructedChargedJets_energy, &b_ReconstructedChargedJets_energy);
   fChain->SetBranchAddress("ReconstructedChargedJets.momentum.x", ReconstructedChargedJets_momentum_x, &b_ReconstructedChargedJets_momentum_x);
   fChain->SetBranchAddress("ReconstructedChargedJets.momentum.y", ReconstructedChargedJets_momentum_y, &b_ReconstructedChargedJets_momentum_y);
   fChain->SetBranchAddress("ReconstructedChargedJets.momentum.z", ReconstructedChargedJets_momentum_z, &b_ReconstructedChargedJets_momentum_z);
   fChain->SetBranchAddress("ReconstructedChargedJets.referencePoint.x", ReconstructedChargedJets_referencePoint_x, &b_ReconstructedChargedJets_referencePoint_x);
   fChain->SetBranchAddress("ReconstructedChargedJets.referencePoint.y", ReconstructedChargedJets_referencePoint_y, &b_ReconstructedChargedJets_referencePoint_y);
   fChain->SetBranchAddress("ReconstructedChargedJets.referencePoint.z", ReconstructedChargedJets_referencePoint_z, &b_ReconstructedChargedJets_referencePoint_z);
   fChain->SetBranchAddress("ReconstructedChargedJets.charge", ReconstructedChargedJets_charge, &b_ReconstructedChargedJets_charge);
   fChain->SetBranchAddress("ReconstructedChargedJets.mass", ReconstructedChargedJets_mass, &b_ReconstructedChargedJets_mass);
   fChain->SetBranchAddress("ReconstructedChargedJets.goodnessOfPID", ReconstructedChargedJets_goodnessOfPID, &b_ReconstructedChargedJets_goodnessOfPID);
   fChain->SetBranchAddress("ReconstructedChargedJets.covMatrix.xx", ReconstructedChargedJets_covMatrix_xx, &b_ReconstructedChargedJets_covMatrix_xx);
   fChain->SetBranchAddress("ReconstructedChargedJets.covMatrix.yy", ReconstructedChargedJets_covMatrix_yy, &b_ReconstructedChargedJets_covMatrix_yy);
   fChain->SetBranchAddress("ReconstructedChargedJets.covMatrix.zz", ReconstructedChargedJets_covMatrix_zz, &b_ReconstructedChargedJets_covMatrix_zz);
   fChain->SetBranchAddress("ReconstructedChargedJets.covMatrix.tt", ReconstructedChargedJets_covMatrix_tt, &b_ReconstructedChargedJets_covMatrix_tt);
   fChain->SetBranchAddress("ReconstructedChargedJets.covMatrix.xy", ReconstructedChargedJets_covMatrix_xy, &b_ReconstructedChargedJets_covMatrix_xy);
   fChain->SetBranchAddress("ReconstructedChargedJets.covMatrix.xz", ReconstructedChargedJets_covMatrix_xz, &b_ReconstructedChargedJets_covMatrix_xz);
   fChain->SetBranchAddress("ReconstructedChargedJets.covMatrix.xt", ReconstructedChargedJets_covMatrix_xt, &b_ReconstructedChargedJets_covMatrix_xt);
   fChain->SetBranchAddress("ReconstructedChargedJets.covMatrix.yz", ReconstructedChargedJets_covMatrix_yz, &b_ReconstructedChargedJets_covMatrix_yz);
   fChain->SetBranchAddress("ReconstructedChargedJets.covMatrix.yt", ReconstructedChargedJets_covMatrix_yt, &b_ReconstructedChargedJets_covMatrix_yt);
   fChain->SetBranchAddress("ReconstructedChargedJets.covMatrix.zt", ReconstructedChargedJets_covMatrix_zt, &b_ReconstructedChargedJets_covMatrix_zt);
   fChain->SetBranchAddress("ReconstructedChargedJets.PDG", ReconstructedChargedJets_PDG, &b_ReconstructedChargedJets_PDG);
   fChain->SetBranchAddress("ReconstructedChargedJets.clusters_begin", ReconstructedChargedJets_clusters_begin, &b_ReconstructedChargedJets_clusters_begin);
   fChain->SetBranchAddress("ReconstructedChargedJets.clusters_end", ReconstructedChargedJets_clusters_end, &b_ReconstructedChargedJets_clusters_end);
   fChain->SetBranchAddress("ReconstructedChargedJets.tracks_begin", ReconstructedChargedJets_tracks_begin, &b_ReconstructedChargedJets_tracks_begin);
   fChain->SetBranchAddress("ReconstructedChargedJets.tracks_end", ReconstructedChargedJets_tracks_end, &b_ReconstructedChargedJets_tracks_end);
   fChain->SetBranchAddress("ReconstructedChargedJets.particles_begin", ReconstructedChargedJets_particles_begin, &b_ReconstructedChargedJets_particles_begin);
   fChain->SetBranchAddress("ReconstructedChargedJets.particles_end", ReconstructedChargedJets_particles_end, &b_ReconstructedChargedJets_particles_end);
   fChain->SetBranchAddress("ReconstructedChargedJets.particleIDs_begin", ReconstructedChargedJets_particleIDs_begin, &b_ReconstructedChargedJets_particleIDs_begin);
   fChain->SetBranchAddress("ReconstructedChargedJets.particleIDs_end", ReconstructedChargedJets_particleIDs_end, &b_ReconstructedChargedJets_particleIDs_end);
   fChain->SetBranchAddress("_ReconstructedChargedJets_clusters", &_ReconstructedChargedJets_clusters_, &b__ReconstructedChargedJets_clusters_);
   fChain->SetBranchAddress("_ReconstructedChargedJets_clusters.index", &_ReconstructedChargedJets_clusters_index, &b__ReconstructedChargedJets_clusters_index);
   fChain->SetBranchAddress("_ReconstructedChargedJets_clusters.collectionID", &_ReconstructedChargedJets_clusters_collectionID, &b__ReconstructedChargedJets_clusters_collectionID);
   fChain->SetBranchAddress("_ReconstructedChargedJets_tracks", &_ReconstructedChargedJets_tracks_, &b__ReconstructedChargedJets_tracks_);
   fChain->SetBranchAddress("_ReconstructedChargedJets_tracks.index", &_ReconstructedChargedJets_tracks_index, &b__ReconstructedChargedJets_tracks_index);
   fChain->SetBranchAddress("_ReconstructedChargedJets_tracks.collectionID", &_ReconstructedChargedJets_tracks_collectionID, &b__ReconstructedChargedJets_tracks_collectionID);
   fChain->SetBranchAddress("_ReconstructedChargedJets_particles", &_ReconstructedChargedJets_particles_, &b__ReconstructedChargedJets_particles_);
   fChain->SetBranchAddress("_ReconstructedChargedJets_particles.index", &_ReconstructedChargedJets_particles_index, &b__ReconstructedChargedJets_particles_index);
   fChain->SetBranchAddress("_ReconstructedChargedJets_particles.collectionID", &_ReconstructedChargedJets_particles_collectionID, &b__ReconstructedChargedJets_particles_collectionID);
   fChain->SetBranchAddress("_ReconstructedChargedJets_particleIDs", &_ReconstructedChargedJets_particleIDs_, &b__ReconstructedChargedJets_particleIDs_);
   fChain->SetBranchAddress("_ReconstructedChargedJets_particleIDs.index", &_ReconstructedChargedJets_particleIDs_index, &b__ReconstructedChargedJets_particleIDs_index);
   fChain->SetBranchAddress("_ReconstructedChargedJets_particleIDs.collectionID", &_ReconstructedChargedJets_particleIDs_collectionID, &b__ReconstructedChargedJets_particleIDs_collectionID);
   fChain->SetBranchAddress("_ReconstructedChargedJets_startVertex", &_ReconstructedChargedJets_startVertex_, &b__ReconstructedChargedJets_startVertex_);
   fChain->SetBranchAddress("_ReconstructedChargedJets_startVertex.index", _ReconstructedChargedJets_startVertex_index, &b__ReconstructedChargedJets_startVertex_index);
   fChain->SetBranchAddress("_ReconstructedChargedJets_startVertex.collectionID", _ReconstructedChargedJets_startVertex_collectionID, &b__ReconstructedChargedJets_startVertex_collectionID);
   fChain->SetBranchAddress("_ReconstructedChargedJets_particleIDUsed", &_ReconstructedChargedJets_particleIDUsed_, &b__ReconstructedChargedJets_particleIDUsed_);
   fChain->SetBranchAddress("_ReconstructedChargedJets_particleIDUsed.index", _ReconstructedChargedJets_particleIDUsed_index, &b__ReconstructedChargedJets_particleIDUsed_index);
   fChain->SetBranchAddress("_ReconstructedChargedJets_particleIDUsed.collectionID", _ReconstructedChargedJets_particleIDUsed_collectionID, &b__ReconstructedChargedJets_particleIDUsed_collectionID);
   fChain->SetBranchAddress("ReconstructedChargedParticleAssociations", &ReconstructedChargedParticleAssociations_, &b_ReconstructedChargedParticleAssociations_);
   fChain->SetBranchAddress("ReconstructedChargedParticleAssociations.simID", ReconstructedChargedParticleAssociations_simID, &b_ReconstructedChargedParticleAssociations_simID);
   fChain->SetBranchAddress("ReconstructedChargedParticleAssociations.recID", ReconstructedChargedParticleAssociations_recID, &b_ReconstructedChargedParticleAssociations_recID);
   fChain->SetBranchAddress("ReconstructedChargedParticleAssociations.weight", ReconstructedChargedParticleAssociations_weight, &b_ReconstructedChargedParticleAssociations_weight);
   fChain->SetBranchAddress("_ReconstructedChargedParticleAssociations_rec", &_ReconstructedChargedParticleAssociations_rec_, &b__ReconstructedChargedParticleAssociations_rec_);
   fChain->SetBranchAddress("_ReconstructedChargedParticleAssociations_rec.index", _ReconstructedChargedParticleAssociations_rec_index, &b__ReconstructedChargedParticleAssociations_rec_index);
   fChain->SetBranchAddress("_ReconstructedChargedParticleAssociations_rec.collectionID", _ReconstructedChargedParticleAssociations_rec_collectionID, &b__ReconstructedChargedParticleAssociations_rec_collectionID);
   fChain->SetBranchAddress("_ReconstructedChargedParticleAssociations_sim", &_ReconstructedChargedParticleAssociations_sim_, &b__ReconstructedChargedParticleAssociations_sim_);
   fChain->SetBranchAddress("_ReconstructedChargedParticleAssociations_sim.index", _ReconstructedChargedParticleAssociations_sim_index, &b__ReconstructedChargedParticleAssociations_sim_index);
   fChain->SetBranchAddress("_ReconstructedChargedParticleAssociations_sim.collectionID", _ReconstructedChargedParticleAssociations_sim_collectionID, &b__ReconstructedChargedParticleAssociations_sim_collectionID);
   fChain->SetBranchAddress("ReconstructedChargedParticleIDs", &ReconstructedChargedParticleIDs_, &b_ReconstructedChargedParticleIDs_);
   fChain->SetBranchAddress("ReconstructedChargedParticleIDs.type", ReconstructedChargedParticleIDs_type, &b_ReconstructedChargedParticleIDs_type);
   fChain->SetBranchAddress("ReconstructedChargedParticleIDs.PDG", ReconstructedChargedParticleIDs_PDG, &b_ReconstructedChargedParticleIDs_PDG);
   fChain->SetBranchAddress("ReconstructedChargedParticleIDs.algorithmType", ReconstructedChargedParticleIDs_algorithmType, &b_ReconstructedChargedParticleIDs_algorithmType);
   fChain->SetBranchAddress("ReconstructedChargedParticleIDs.likelihood", ReconstructedChargedParticleIDs_likelihood, &b_ReconstructedChargedParticleIDs_likelihood);
   fChain->SetBranchAddress("ReconstructedChargedParticleIDs.parameters_begin", ReconstructedChargedParticleIDs_parameters_begin, &b_ReconstructedChargedParticleIDs_parameters_begin);
   fChain->SetBranchAddress("ReconstructedChargedParticleIDs.parameters_end", ReconstructedChargedParticleIDs_parameters_end, &b_ReconstructedChargedParticleIDs_parameters_end);
   fChain->SetBranchAddress("_ReconstructedChargedParticleIDs_parameters", &_ReconstructedChargedParticleIDs_parameters, &b__ReconstructedChargedParticleIDs_parameters);
   fChain->SetBranchAddress("ReconstructedChargedParticles", &ReconstructedChargedParticles_, &b_ReconstructedChargedParticles_);
   fChain->SetBranchAddress("ReconstructedChargedParticles.type", ReconstructedChargedParticles_type, &b_ReconstructedChargedParticles_type);
   fChain->SetBranchAddress("ReconstructedChargedParticles.energy", ReconstructedChargedParticles_energy, &b_ReconstructedChargedParticles_energy);
   fChain->SetBranchAddress("ReconstructedChargedParticles.momentum.x", ReconstructedChargedParticles_momentum_x, &b_ReconstructedChargedParticles_momentum_x);
   fChain->SetBranchAddress("ReconstructedChargedParticles.momentum.y", ReconstructedChargedParticles_momentum_y, &b_ReconstructedChargedParticles_momentum_y);
   fChain->SetBranchAddress("ReconstructedChargedParticles.momentum.z", ReconstructedChargedParticles_momentum_z, &b_ReconstructedChargedParticles_momentum_z);
   fChain->SetBranchAddress("ReconstructedChargedParticles.referencePoint.x", ReconstructedChargedParticles_referencePoint_x, &b_ReconstructedChargedParticles_referencePoint_x);
   fChain->SetBranchAddress("ReconstructedChargedParticles.referencePoint.y", ReconstructedChargedParticles_referencePoint_y, &b_ReconstructedChargedParticles_referencePoint_y);
   fChain->SetBranchAddress("ReconstructedChargedParticles.referencePoint.z", ReconstructedChargedParticles_referencePoint_z, &b_ReconstructedChargedParticles_referencePoint_z);
   fChain->SetBranchAddress("ReconstructedChargedParticles.charge", ReconstructedChargedParticles_charge, &b_ReconstructedChargedParticles_charge);
   fChain->SetBranchAddress("ReconstructedChargedParticles.mass", ReconstructedChargedParticles_mass, &b_ReconstructedChargedParticles_mass);
   fChain->SetBranchAddress("ReconstructedChargedParticles.goodnessOfPID", ReconstructedChargedParticles_goodnessOfPID, &b_ReconstructedChargedParticles_goodnessOfPID);
   fChain->SetBranchAddress("ReconstructedChargedParticles.covMatrix.xx", ReconstructedChargedParticles_covMatrix_xx, &b_ReconstructedChargedParticles_covMatrix_xx);
   fChain->SetBranchAddress("ReconstructedChargedParticles.covMatrix.yy", ReconstructedChargedParticles_covMatrix_yy, &b_ReconstructedChargedParticles_covMatrix_yy);
   fChain->SetBranchAddress("ReconstructedChargedParticles.covMatrix.zz", ReconstructedChargedParticles_covMatrix_zz, &b_ReconstructedChargedParticles_covMatrix_zz);
   fChain->SetBranchAddress("ReconstructedChargedParticles.covMatrix.tt", ReconstructedChargedParticles_covMatrix_tt, &b_ReconstructedChargedParticles_covMatrix_tt);
   fChain->SetBranchAddress("ReconstructedChargedParticles.covMatrix.xy", ReconstructedChargedParticles_covMatrix_xy, &b_ReconstructedChargedParticles_covMatrix_xy);
   fChain->SetBranchAddress("ReconstructedChargedParticles.covMatrix.xz", ReconstructedChargedParticles_covMatrix_xz, &b_ReconstructedChargedParticles_covMatrix_xz);
   fChain->SetBranchAddress("ReconstructedChargedParticles.covMatrix.xt", ReconstructedChargedParticles_covMatrix_xt, &b_ReconstructedChargedParticles_covMatrix_xt);
   fChain->SetBranchAddress("ReconstructedChargedParticles.covMatrix.yz", ReconstructedChargedParticles_covMatrix_yz, &b_ReconstructedChargedParticles_covMatrix_yz);
   fChain->SetBranchAddress("ReconstructedChargedParticles.covMatrix.yt", ReconstructedChargedParticles_covMatrix_yt, &b_ReconstructedChargedParticles_covMatrix_yt);
   fChain->SetBranchAddress("ReconstructedChargedParticles.covMatrix.zt", ReconstructedChargedParticles_covMatrix_zt, &b_ReconstructedChargedParticles_covMatrix_zt);
   fChain->SetBranchAddress("ReconstructedChargedParticles.PDG", ReconstructedChargedParticles_PDG, &b_ReconstructedChargedParticles_PDG);
   fChain->SetBranchAddress("ReconstructedChargedParticles.clusters_begin", ReconstructedChargedParticles_clusters_begin, &b_ReconstructedChargedParticles_clusters_begin);
   fChain->SetBranchAddress("ReconstructedChargedParticles.clusters_end", ReconstructedChargedParticles_clusters_end, &b_ReconstructedChargedParticles_clusters_end);
   fChain->SetBranchAddress("ReconstructedChargedParticles.tracks_begin", ReconstructedChargedParticles_tracks_begin, &b_ReconstructedChargedParticles_tracks_begin);
   fChain->SetBranchAddress("ReconstructedChargedParticles.tracks_end", ReconstructedChargedParticles_tracks_end, &b_ReconstructedChargedParticles_tracks_end);
   fChain->SetBranchAddress("ReconstructedChargedParticles.particles_begin", ReconstructedChargedParticles_particles_begin, &b_ReconstructedChargedParticles_particles_begin);
   fChain->SetBranchAddress("ReconstructedChargedParticles.particles_end", ReconstructedChargedParticles_particles_end, &b_ReconstructedChargedParticles_particles_end);
   fChain->SetBranchAddress("ReconstructedChargedParticles.particleIDs_begin", ReconstructedChargedParticles_particleIDs_begin, &b_ReconstructedChargedParticles_particleIDs_begin);
   fChain->SetBranchAddress("ReconstructedChargedParticles.particleIDs_end", ReconstructedChargedParticles_particleIDs_end, &b_ReconstructedChargedParticles_particleIDs_end);
   fChain->SetBranchAddress("_ReconstructedChargedParticles_clusters", &_ReconstructedChargedParticles_clusters_, &b__ReconstructedChargedParticles_clusters_);
   fChain->SetBranchAddress("_ReconstructedChargedParticles_clusters.index", &_ReconstructedChargedParticles_clusters_index, &b__ReconstructedChargedParticles_clusters_index);
   fChain->SetBranchAddress("_ReconstructedChargedParticles_clusters.collectionID", &_ReconstructedChargedParticles_clusters_collectionID, &b__ReconstructedChargedParticles_clusters_collectionID);
   fChain->SetBranchAddress("_ReconstructedChargedParticles_tracks", &_ReconstructedChargedParticles_tracks_, &b__ReconstructedChargedParticles_tracks_);
   fChain->SetBranchAddress("_ReconstructedChargedParticles_tracks.index", &_ReconstructedChargedParticles_tracks_index, &b__ReconstructedChargedParticles_tracks_index);
   fChain->SetBranchAddress("_ReconstructedChargedParticles_tracks.collectionID", &_ReconstructedChargedParticles_tracks_collectionID, &b__ReconstructedChargedParticles_tracks_collectionID);
   fChain->SetBranchAddress("_ReconstructedChargedParticles_particles", &_ReconstructedChargedParticles_particles_, &b__ReconstructedChargedParticles_particles_);
   fChain->SetBranchAddress("_ReconstructedChargedParticles_particles.index", &_ReconstructedChargedParticles_particles_index, &b__ReconstructedChargedParticles_particles_index);
   fChain->SetBranchAddress("_ReconstructedChargedParticles_particles.collectionID", &_ReconstructedChargedParticles_particles_collectionID, &b__ReconstructedChargedParticles_particles_collectionID);
   fChain->SetBranchAddress("_ReconstructedChargedParticles_particleIDs", &_ReconstructedChargedParticles_particleIDs_, &b__ReconstructedChargedParticles_particleIDs_);
   fChain->SetBranchAddress("_ReconstructedChargedParticles_particleIDs.index", _ReconstructedChargedParticles_particleIDs_index, &b__ReconstructedChargedParticles_particleIDs_index);
   fChain->SetBranchAddress("_ReconstructedChargedParticles_particleIDs.collectionID", _ReconstructedChargedParticles_particleIDs_collectionID, &b__ReconstructedChargedParticles_particleIDs_collectionID);
   fChain->SetBranchAddress("_ReconstructedChargedParticles_startVertex", &_ReconstructedChargedParticles_startVertex_, &b__ReconstructedChargedParticles_startVertex_);
   fChain->SetBranchAddress("_ReconstructedChargedParticles_startVertex.index", _ReconstructedChargedParticles_startVertex_index, &b__ReconstructedChargedParticles_startVertex_index);
   fChain->SetBranchAddress("_ReconstructedChargedParticles_startVertex.collectionID", _ReconstructedChargedParticles_startVertex_collectionID, &b__ReconstructedChargedParticles_startVertex_collectionID);
   fChain->SetBranchAddress("_ReconstructedChargedParticles_particleIDUsed", &_ReconstructedChargedParticles_particleIDUsed_, &b__ReconstructedChargedParticles_particleIDUsed_);
   fChain->SetBranchAddress("_ReconstructedChargedParticles_particleIDUsed.index", _ReconstructedChargedParticles_particleIDUsed_index, &b__ReconstructedChargedParticles_particleIDUsed_index);
   fChain->SetBranchAddress("_ReconstructedChargedParticles_particleIDUsed.collectionID", _ReconstructedChargedParticles_particleIDUsed_collectionID, &b__ReconstructedChargedParticles_particleIDUsed_collectionID);
   fChain->SetBranchAddress("ReconstructedElectrons", &ReconstructedElectrons_, &b_ReconstructedElectrons_);
   fChain->SetBranchAddress("ReconstructedElectrons.type", ReconstructedElectrons_type, &b_ReconstructedElectrons_type);
   fChain->SetBranchAddress("ReconstructedElectrons.energy", ReconstructedElectrons_energy, &b_ReconstructedElectrons_energy);
   fChain->SetBranchAddress("ReconstructedElectrons.momentum.x", ReconstructedElectrons_momentum_x, &b_ReconstructedElectrons_momentum_x);
   fChain->SetBranchAddress("ReconstructedElectrons.momentum.y", ReconstructedElectrons_momentum_y, &b_ReconstructedElectrons_momentum_y);
   fChain->SetBranchAddress("ReconstructedElectrons.momentum.z", ReconstructedElectrons_momentum_z, &b_ReconstructedElectrons_momentum_z);
   fChain->SetBranchAddress("ReconstructedElectrons.referencePoint.x", ReconstructedElectrons_referencePoint_x, &b_ReconstructedElectrons_referencePoint_x);
   fChain->SetBranchAddress("ReconstructedElectrons.referencePoint.y", ReconstructedElectrons_referencePoint_y, &b_ReconstructedElectrons_referencePoint_y);
   fChain->SetBranchAddress("ReconstructedElectrons.referencePoint.z", ReconstructedElectrons_referencePoint_z, &b_ReconstructedElectrons_referencePoint_z);
   fChain->SetBranchAddress("ReconstructedElectrons.charge", ReconstructedElectrons_charge, &b_ReconstructedElectrons_charge);
   fChain->SetBranchAddress("ReconstructedElectrons.mass", ReconstructedElectrons_mass, &b_ReconstructedElectrons_mass);
   fChain->SetBranchAddress("ReconstructedElectrons.goodnessOfPID", ReconstructedElectrons_goodnessOfPID, &b_ReconstructedElectrons_goodnessOfPID);
   fChain->SetBranchAddress("ReconstructedElectrons.covMatrix.xx", ReconstructedElectrons_covMatrix_xx, &b_ReconstructedElectrons_covMatrix_xx);
   fChain->SetBranchAddress("ReconstructedElectrons.covMatrix.yy", ReconstructedElectrons_covMatrix_yy, &b_ReconstructedElectrons_covMatrix_yy);
   fChain->SetBranchAddress("ReconstructedElectrons.covMatrix.zz", ReconstructedElectrons_covMatrix_zz, &b_ReconstructedElectrons_covMatrix_zz);
   fChain->SetBranchAddress("ReconstructedElectrons.covMatrix.tt", ReconstructedElectrons_covMatrix_tt, &b_ReconstructedElectrons_covMatrix_tt);
   fChain->SetBranchAddress("ReconstructedElectrons.covMatrix.xy", ReconstructedElectrons_covMatrix_xy, &b_ReconstructedElectrons_covMatrix_xy);
   fChain->SetBranchAddress("ReconstructedElectrons.covMatrix.xz", ReconstructedElectrons_covMatrix_xz, &b_ReconstructedElectrons_covMatrix_xz);
   fChain->SetBranchAddress("ReconstructedElectrons.covMatrix.xt", ReconstructedElectrons_covMatrix_xt, &b_ReconstructedElectrons_covMatrix_xt);
   fChain->SetBranchAddress("ReconstructedElectrons.covMatrix.yz", ReconstructedElectrons_covMatrix_yz, &b_ReconstructedElectrons_covMatrix_yz);
   fChain->SetBranchAddress("ReconstructedElectrons.covMatrix.yt", ReconstructedElectrons_covMatrix_yt, &b_ReconstructedElectrons_covMatrix_yt);
   fChain->SetBranchAddress("ReconstructedElectrons.covMatrix.zt", ReconstructedElectrons_covMatrix_zt, &b_ReconstructedElectrons_covMatrix_zt);
   fChain->SetBranchAddress("ReconstructedElectrons.PDG", ReconstructedElectrons_PDG, &b_ReconstructedElectrons_PDG);
   fChain->SetBranchAddress("ReconstructedElectrons.clusters_begin", ReconstructedElectrons_clusters_begin, &b_ReconstructedElectrons_clusters_begin);
   fChain->SetBranchAddress("ReconstructedElectrons.clusters_end", ReconstructedElectrons_clusters_end, &b_ReconstructedElectrons_clusters_end);
   fChain->SetBranchAddress("ReconstructedElectrons.tracks_begin", ReconstructedElectrons_tracks_begin, &b_ReconstructedElectrons_tracks_begin);
   fChain->SetBranchAddress("ReconstructedElectrons.tracks_end", ReconstructedElectrons_tracks_end, &b_ReconstructedElectrons_tracks_end);
   fChain->SetBranchAddress("ReconstructedElectrons.particles_begin", ReconstructedElectrons_particles_begin, &b_ReconstructedElectrons_particles_begin);
   fChain->SetBranchAddress("ReconstructedElectrons.particles_end", ReconstructedElectrons_particles_end, &b_ReconstructedElectrons_particles_end);
   fChain->SetBranchAddress("ReconstructedElectrons.particleIDs_begin", ReconstructedElectrons_particleIDs_begin, &b_ReconstructedElectrons_particleIDs_begin);
   fChain->SetBranchAddress("ReconstructedElectrons.particleIDs_end", ReconstructedElectrons_particleIDs_end, &b_ReconstructedElectrons_particleIDs_end);
   fChain->SetBranchAddress("_ReconstructedElectrons_clusters", &_ReconstructedElectrons_clusters_, &b__ReconstructedElectrons_clusters_);
   fChain->SetBranchAddress("_ReconstructedElectrons_clusters.index", &_ReconstructedElectrons_clusters_index, &b__ReconstructedElectrons_clusters_index);
   fChain->SetBranchAddress("_ReconstructedElectrons_clusters.collectionID", &_ReconstructedElectrons_clusters_collectionID, &b__ReconstructedElectrons_clusters_collectionID);
   fChain->SetBranchAddress("_ReconstructedElectrons_tracks", &_ReconstructedElectrons_tracks_, &b__ReconstructedElectrons_tracks_);
   fChain->SetBranchAddress("_ReconstructedElectrons_tracks.index", &_ReconstructedElectrons_tracks_index, &b__ReconstructedElectrons_tracks_index);
   fChain->SetBranchAddress("_ReconstructedElectrons_tracks.collectionID", &_ReconstructedElectrons_tracks_collectionID, &b__ReconstructedElectrons_tracks_collectionID);
   fChain->SetBranchAddress("_ReconstructedElectrons_particles", &_ReconstructedElectrons_particles_, &b__ReconstructedElectrons_particles_);
   fChain->SetBranchAddress("_ReconstructedElectrons_particles.index", &_ReconstructedElectrons_particles_index, &b__ReconstructedElectrons_particles_index);
   fChain->SetBranchAddress("_ReconstructedElectrons_particles.collectionID", &_ReconstructedElectrons_particles_collectionID, &b__ReconstructedElectrons_particles_collectionID);
   fChain->SetBranchAddress("_ReconstructedElectrons_particleIDs", &_ReconstructedElectrons_particleIDs_, &b__ReconstructedElectrons_particleIDs_);
   fChain->SetBranchAddress("_ReconstructedElectrons_particleIDs.index", _ReconstructedElectrons_particleIDs_index, &b__ReconstructedElectrons_particleIDs_index);
   fChain->SetBranchAddress("_ReconstructedElectrons_particleIDs.collectionID", _ReconstructedElectrons_particleIDs_collectionID, &b__ReconstructedElectrons_particleIDs_collectionID);
   fChain->SetBranchAddress("_ReconstructedElectrons_startVertex", &_ReconstructedElectrons_startVertex_, &b__ReconstructedElectrons_startVertex_);
   fChain->SetBranchAddress("_ReconstructedElectrons_startVertex.index", _ReconstructedElectrons_startVertex_index, &b__ReconstructedElectrons_startVertex_index);
   fChain->SetBranchAddress("_ReconstructedElectrons_startVertex.collectionID", _ReconstructedElectrons_startVertex_collectionID, &b__ReconstructedElectrons_startVertex_collectionID);
   fChain->SetBranchAddress("_ReconstructedElectrons_particleIDUsed", &_ReconstructedElectrons_particleIDUsed_, &b__ReconstructedElectrons_particleIDUsed_);
   fChain->SetBranchAddress("_ReconstructedElectrons_particleIDUsed.index", _ReconstructedElectrons_particleIDUsed_index, &b__ReconstructedElectrons_particleIDUsed_index);
   fChain->SetBranchAddress("_ReconstructedElectrons_particleIDUsed.collectionID", _ReconstructedElectrons_particleIDUsed_collectionID, &b__ReconstructedElectrons_particleIDUsed_collectionID);
   fChain->SetBranchAddress("ReconstructedJets", &ReconstructedJets_, &b_ReconstructedJets_);
   fChain->SetBranchAddress("ReconstructedJets.type", ReconstructedJets_type, &b_ReconstructedJets_type);
   fChain->SetBranchAddress("ReconstructedJets.energy", ReconstructedJets_energy, &b_ReconstructedJets_energy);
   fChain->SetBranchAddress("ReconstructedJets.momentum.x", ReconstructedJets_momentum_x, &b_ReconstructedJets_momentum_x);
   fChain->SetBranchAddress("ReconstructedJets.momentum.y", ReconstructedJets_momentum_y, &b_ReconstructedJets_momentum_y);
   fChain->SetBranchAddress("ReconstructedJets.momentum.z", ReconstructedJets_momentum_z, &b_ReconstructedJets_momentum_z);
   fChain->SetBranchAddress("ReconstructedJets.referencePoint.x", ReconstructedJets_referencePoint_x, &b_ReconstructedJets_referencePoint_x);
   fChain->SetBranchAddress("ReconstructedJets.referencePoint.y", ReconstructedJets_referencePoint_y, &b_ReconstructedJets_referencePoint_y);
   fChain->SetBranchAddress("ReconstructedJets.referencePoint.z", ReconstructedJets_referencePoint_z, &b_ReconstructedJets_referencePoint_z);
   fChain->SetBranchAddress("ReconstructedJets.charge", ReconstructedJets_charge, &b_ReconstructedJets_charge);
   fChain->SetBranchAddress("ReconstructedJets.mass", ReconstructedJets_mass, &b_ReconstructedJets_mass);
   fChain->SetBranchAddress("ReconstructedJets.goodnessOfPID", ReconstructedJets_goodnessOfPID, &b_ReconstructedJets_goodnessOfPID);
   fChain->SetBranchAddress("ReconstructedJets.covMatrix.xx", ReconstructedJets_covMatrix_xx, &b_ReconstructedJets_covMatrix_xx);
   fChain->SetBranchAddress("ReconstructedJets.covMatrix.yy", ReconstructedJets_covMatrix_yy, &b_ReconstructedJets_covMatrix_yy);
   fChain->SetBranchAddress("ReconstructedJets.covMatrix.zz", ReconstructedJets_covMatrix_zz, &b_ReconstructedJets_covMatrix_zz);
   fChain->SetBranchAddress("ReconstructedJets.covMatrix.tt", ReconstructedJets_covMatrix_tt, &b_ReconstructedJets_covMatrix_tt);
   fChain->SetBranchAddress("ReconstructedJets.covMatrix.xy", ReconstructedJets_covMatrix_xy, &b_ReconstructedJets_covMatrix_xy);
   fChain->SetBranchAddress("ReconstructedJets.covMatrix.xz", ReconstructedJets_covMatrix_xz, &b_ReconstructedJets_covMatrix_xz);
   fChain->SetBranchAddress("ReconstructedJets.covMatrix.xt", ReconstructedJets_covMatrix_xt, &b_ReconstructedJets_covMatrix_xt);
   fChain->SetBranchAddress("ReconstructedJets.covMatrix.yz", ReconstructedJets_covMatrix_yz, &b_ReconstructedJets_covMatrix_yz);
   fChain->SetBranchAddress("ReconstructedJets.covMatrix.yt", ReconstructedJets_covMatrix_yt, &b_ReconstructedJets_covMatrix_yt);
   fChain->SetBranchAddress("ReconstructedJets.covMatrix.zt", ReconstructedJets_covMatrix_zt, &b_ReconstructedJets_covMatrix_zt);
   fChain->SetBranchAddress("ReconstructedJets.PDG", ReconstructedJets_PDG, &b_ReconstructedJets_PDG);
   fChain->SetBranchAddress("ReconstructedJets.clusters_begin", ReconstructedJets_clusters_begin, &b_ReconstructedJets_clusters_begin);
   fChain->SetBranchAddress("ReconstructedJets.clusters_end", ReconstructedJets_clusters_end, &b_ReconstructedJets_clusters_end);
   fChain->SetBranchAddress("ReconstructedJets.tracks_begin", ReconstructedJets_tracks_begin, &b_ReconstructedJets_tracks_begin);
   fChain->SetBranchAddress("ReconstructedJets.tracks_end", ReconstructedJets_tracks_end, &b_ReconstructedJets_tracks_end);
   fChain->SetBranchAddress("ReconstructedJets.particles_begin", ReconstructedJets_particles_begin, &b_ReconstructedJets_particles_begin);
   fChain->SetBranchAddress("ReconstructedJets.particles_end", ReconstructedJets_particles_end, &b_ReconstructedJets_particles_end);
   fChain->SetBranchAddress("ReconstructedJets.particleIDs_begin", ReconstructedJets_particleIDs_begin, &b_ReconstructedJets_particleIDs_begin);
   fChain->SetBranchAddress("ReconstructedJets.particleIDs_end", ReconstructedJets_particleIDs_end, &b_ReconstructedJets_particleIDs_end);
   fChain->SetBranchAddress("_ReconstructedJets_clusters", &_ReconstructedJets_clusters_, &b__ReconstructedJets_clusters_);
   fChain->SetBranchAddress("_ReconstructedJets_clusters.index", &_ReconstructedJets_clusters_index, &b__ReconstructedJets_clusters_index);
   fChain->SetBranchAddress("_ReconstructedJets_clusters.collectionID", &_ReconstructedJets_clusters_collectionID, &b__ReconstructedJets_clusters_collectionID);
   fChain->SetBranchAddress("_ReconstructedJets_tracks", &_ReconstructedJets_tracks_, &b__ReconstructedJets_tracks_);
   fChain->SetBranchAddress("_ReconstructedJets_tracks.index", &_ReconstructedJets_tracks_index, &b__ReconstructedJets_tracks_index);
   fChain->SetBranchAddress("_ReconstructedJets_tracks.collectionID", &_ReconstructedJets_tracks_collectionID, &b__ReconstructedJets_tracks_collectionID);
   fChain->SetBranchAddress("_ReconstructedJets_particles", &_ReconstructedJets_particles_, &b__ReconstructedJets_particles_);
   fChain->SetBranchAddress("_ReconstructedJets_particles.index", &_ReconstructedJets_particles_index, &b__ReconstructedJets_particles_index);
   fChain->SetBranchAddress("_ReconstructedJets_particles.collectionID", &_ReconstructedJets_particles_collectionID, &b__ReconstructedJets_particles_collectionID);
   fChain->SetBranchAddress("_ReconstructedJets_particleIDs", &_ReconstructedJets_particleIDs_, &b__ReconstructedJets_particleIDs_);
   fChain->SetBranchAddress("_ReconstructedJets_particleIDs.index", &_ReconstructedJets_particleIDs_index, &b__ReconstructedJets_particleIDs_index);
   fChain->SetBranchAddress("_ReconstructedJets_particleIDs.collectionID", &_ReconstructedJets_particleIDs_collectionID, &b__ReconstructedJets_particleIDs_collectionID);
   fChain->SetBranchAddress("_ReconstructedJets_startVertex", &_ReconstructedJets_startVertex_, &b__ReconstructedJets_startVertex_);
   fChain->SetBranchAddress("_ReconstructedJets_startVertex.index", _ReconstructedJets_startVertex_index, &b__ReconstructedJets_startVertex_index);
   fChain->SetBranchAddress("_ReconstructedJets_startVertex.collectionID", _ReconstructedJets_startVertex_collectionID, &b__ReconstructedJets_startVertex_collectionID);
   fChain->SetBranchAddress("_ReconstructedJets_particleIDUsed", &_ReconstructedJets_particleIDUsed_, &b__ReconstructedJets_particleIDUsed_);
   fChain->SetBranchAddress("_ReconstructedJets_particleIDUsed.index", _ReconstructedJets_particleIDUsed_index, &b__ReconstructedJets_particleIDUsed_index);
   fChain->SetBranchAddress("_ReconstructedJets_particleIDUsed.collectionID", _ReconstructedJets_particleIDUsed_collectionID, &b__ReconstructedJets_particleIDUsed_collectionID);
   fChain->SetBranchAddress("ReconstructedParticleAssociations", &ReconstructedParticleAssociations_, &b_ReconstructedParticleAssociations_);
   fChain->SetBranchAddress("ReconstructedParticleAssociations.simID", ReconstructedParticleAssociations_simID, &b_ReconstructedParticleAssociations_simID);
   fChain->SetBranchAddress("ReconstructedParticleAssociations.recID", ReconstructedParticleAssociations_recID, &b_ReconstructedParticleAssociations_recID);
   fChain->SetBranchAddress("ReconstructedParticleAssociations.weight", ReconstructedParticleAssociations_weight, &b_ReconstructedParticleAssociations_weight);
   fChain->SetBranchAddress("_ReconstructedParticleAssociations_rec", &_ReconstructedParticleAssociations_rec_, &b__ReconstructedParticleAssociations_rec_);
   fChain->SetBranchAddress("_ReconstructedParticleAssociations_rec.index", _ReconstructedParticleAssociations_rec_index, &b__ReconstructedParticleAssociations_rec_index);
   fChain->SetBranchAddress("_ReconstructedParticleAssociations_rec.collectionID", _ReconstructedParticleAssociations_rec_collectionID, &b__ReconstructedParticleAssociations_rec_collectionID);
   fChain->SetBranchAddress("_ReconstructedParticleAssociations_sim", &_ReconstructedParticleAssociations_sim_, &b__ReconstructedParticleAssociations_sim_);
   fChain->SetBranchAddress("_ReconstructedParticleAssociations_sim.index", _ReconstructedParticleAssociations_sim_index, &b__ReconstructedParticleAssociations_sim_index);
   fChain->SetBranchAddress("_ReconstructedParticleAssociations_sim.collectionID", _ReconstructedParticleAssociations_sim_collectionID, &b__ReconstructedParticleAssociations_sim_collectionID);
   fChain->SetBranchAddress("ReconstructedParticles", &ReconstructedParticles_, &b_ReconstructedParticles_);
   fChain->SetBranchAddress("ReconstructedParticles.type", ReconstructedParticles_type, &b_ReconstructedParticles_type);
   fChain->SetBranchAddress("ReconstructedParticles.energy", ReconstructedParticles_energy, &b_ReconstructedParticles_energy);
   fChain->SetBranchAddress("ReconstructedParticles.momentum.x", ReconstructedParticles_momentum_x, &b_ReconstructedParticles_momentum_x);
   fChain->SetBranchAddress("ReconstructedParticles.momentum.y", ReconstructedParticles_momentum_y, &b_ReconstructedParticles_momentum_y);
   fChain->SetBranchAddress("ReconstructedParticles.momentum.z", ReconstructedParticles_momentum_z, &b_ReconstructedParticles_momentum_z);
   fChain->SetBranchAddress("ReconstructedParticles.referencePoint.x", ReconstructedParticles_referencePoint_x, &b_ReconstructedParticles_referencePoint_x);
   fChain->SetBranchAddress("ReconstructedParticles.referencePoint.y", ReconstructedParticles_referencePoint_y, &b_ReconstructedParticles_referencePoint_y);
   fChain->SetBranchAddress("ReconstructedParticles.referencePoint.z", ReconstructedParticles_referencePoint_z, &b_ReconstructedParticles_referencePoint_z);
   fChain->SetBranchAddress("ReconstructedParticles.charge", ReconstructedParticles_charge, &b_ReconstructedParticles_charge);
   fChain->SetBranchAddress("ReconstructedParticles.mass", ReconstructedParticles_mass, &b_ReconstructedParticles_mass);
   fChain->SetBranchAddress("ReconstructedParticles.goodnessOfPID", ReconstructedParticles_goodnessOfPID, &b_ReconstructedParticles_goodnessOfPID);
   fChain->SetBranchAddress("ReconstructedParticles.covMatrix.xx", ReconstructedParticles_covMatrix_xx, &b_ReconstructedParticles_covMatrix_xx);
   fChain->SetBranchAddress("ReconstructedParticles.covMatrix.yy", ReconstructedParticles_covMatrix_yy, &b_ReconstructedParticles_covMatrix_yy);
   fChain->SetBranchAddress("ReconstructedParticles.covMatrix.zz", ReconstructedParticles_covMatrix_zz, &b_ReconstructedParticles_covMatrix_zz);
   fChain->SetBranchAddress("ReconstructedParticles.covMatrix.tt", ReconstructedParticles_covMatrix_tt, &b_ReconstructedParticles_covMatrix_tt);
   fChain->SetBranchAddress("ReconstructedParticles.covMatrix.xy", ReconstructedParticles_covMatrix_xy, &b_ReconstructedParticles_covMatrix_xy);
   fChain->SetBranchAddress("ReconstructedParticles.covMatrix.xz", ReconstructedParticles_covMatrix_xz, &b_ReconstructedParticles_covMatrix_xz);
   fChain->SetBranchAddress("ReconstructedParticles.covMatrix.xt", ReconstructedParticles_covMatrix_xt, &b_ReconstructedParticles_covMatrix_xt);
   fChain->SetBranchAddress("ReconstructedParticles.covMatrix.yz", ReconstructedParticles_covMatrix_yz, &b_ReconstructedParticles_covMatrix_yz);
   fChain->SetBranchAddress("ReconstructedParticles.covMatrix.yt", ReconstructedParticles_covMatrix_yt, &b_ReconstructedParticles_covMatrix_yt);
   fChain->SetBranchAddress("ReconstructedParticles.covMatrix.zt", ReconstructedParticles_covMatrix_zt, &b_ReconstructedParticles_covMatrix_zt);
   fChain->SetBranchAddress("ReconstructedParticles.PDG", ReconstructedParticles_PDG, &b_ReconstructedParticles_PDG);
   fChain->SetBranchAddress("ReconstructedParticles.clusters_begin", ReconstructedParticles_clusters_begin, &b_ReconstructedParticles_clusters_begin);
   fChain->SetBranchAddress("ReconstructedParticles.clusters_end", ReconstructedParticles_clusters_end, &b_ReconstructedParticles_clusters_end);
   fChain->SetBranchAddress("ReconstructedParticles.tracks_begin", ReconstructedParticles_tracks_begin, &b_ReconstructedParticles_tracks_begin);
   fChain->SetBranchAddress("ReconstructedParticles.tracks_end", ReconstructedParticles_tracks_end, &b_ReconstructedParticles_tracks_end);
   fChain->SetBranchAddress("ReconstructedParticles.particles_begin", ReconstructedParticles_particles_begin, &b_ReconstructedParticles_particles_begin);
   fChain->SetBranchAddress("ReconstructedParticles.particles_end", ReconstructedParticles_particles_end, &b_ReconstructedParticles_particles_end);
   fChain->SetBranchAddress("ReconstructedParticles.particleIDs_begin", ReconstructedParticles_particleIDs_begin, &b_ReconstructedParticles_particleIDs_begin);
   fChain->SetBranchAddress("ReconstructedParticles.particleIDs_end", ReconstructedParticles_particleIDs_end, &b_ReconstructedParticles_particleIDs_end);
   fChain->SetBranchAddress("_ReconstructedParticles_clusters", &_ReconstructedParticles_clusters_, &b__ReconstructedParticles_clusters_);
   fChain->SetBranchAddress("_ReconstructedParticles_clusters.index", _ReconstructedParticles_clusters_index, &b__ReconstructedParticles_clusters_index);
   fChain->SetBranchAddress("_ReconstructedParticles_clusters.collectionID", _ReconstructedParticles_clusters_collectionID, &b__ReconstructedParticles_clusters_collectionID);
   fChain->SetBranchAddress("_ReconstructedParticles_tracks", &_ReconstructedParticles_tracks_, &b__ReconstructedParticles_tracks_);
   fChain->SetBranchAddress("_ReconstructedParticles_tracks.index", &_ReconstructedParticles_tracks_index, &b__ReconstructedParticles_tracks_index);
   fChain->SetBranchAddress("_ReconstructedParticles_tracks.collectionID", &_ReconstructedParticles_tracks_collectionID, &b__ReconstructedParticles_tracks_collectionID);
   fChain->SetBranchAddress("_ReconstructedParticles_particles", &_ReconstructedParticles_particles_, &b__ReconstructedParticles_particles_);
   fChain->SetBranchAddress("_ReconstructedParticles_particles.index", &_ReconstructedParticles_particles_index, &b__ReconstructedParticles_particles_index);
   fChain->SetBranchAddress("_ReconstructedParticles_particles.collectionID", &_ReconstructedParticles_particles_collectionID, &b__ReconstructedParticles_particles_collectionID);
   fChain->SetBranchAddress("_ReconstructedParticles_particleIDs", &_ReconstructedParticles_particleIDs_, &b__ReconstructedParticles_particleIDs_);
   fChain->SetBranchAddress("_ReconstructedParticles_particleIDs.index", _ReconstructedParticles_particleIDs_index, &b__ReconstructedParticles_particleIDs_index);
   fChain->SetBranchAddress("_ReconstructedParticles_particleIDs.collectionID", _ReconstructedParticles_particleIDs_collectionID, &b__ReconstructedParticles_particleIDs_collectionID);
   fChain->SetBranchAddress("_ReconstructedParticles_startVertex", &_ReconstructedParticles_startVertex_, &b__ReconstructedParticles_startVertex_);
   fChain->SetBranchAddress("_ReconstructedParticles_startVertex.index", _ReconstructedParticles_startVertex_index, &b__ReconstructedParticles_startVertex_index);
   fChain->SetBranchAddress("_ReconstructedParticles_startVertex.collectionID", _ReconstructedParticles_startVertex_collectionID, &b__ReconstructedParticles_startVertex_collectionID);
   fChain->SetBranchAddress("_ReconstructedParticles_particleIDUsed", &_ReconstructedParticles_particleIDUsed_, &b__ReconstructedParticles_particleIDUsed_);
   fChain->SetBranchAddress("_ReconstructedParticles_particleIDUsed.index", _ReconstructedParticles_particleIDUsed_index, &b__ReconstructedParticles_particleIDUsed_index);
   fChain->SetBranchAddress("_ReconstructedParticles_particleIDUsed.collectionID", _ReconstructedParticles_particleIDUsed_collectionID, &b__ReconstructedParticles_particleIDUsed_collectionID);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticleAssociations", &ReconstructedSeededChargedParticleAssociations_, &b_ReconstructedSeededChargedParticleAssociations_);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticleAssociations.simID", ReconstructedSeededChargedParticleAssociations_simID, &b_ReconstructedSeededChargedParticleAssociations_simID);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticleAssociations.recID", ReconstructedSeededChargedParticleAssociations_recID, &b_ReconstructedSeededChargedParticleAssociations_recID);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticleAssociations.weight", ReconstructedSeededChargedParticleAssociations_weight, &b_ReconstructedSeededChargedParticleAssociations_weight);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticleAssociations_rec", &_ReconstructedSeededChargedParticleAssociations_rec_, &b__ReconstructedSeededChargedParticleAssociations_rec_);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticleAssociations_rec.index", _ReconstructedSeededChargedParticleAssociations_rec_index, &b__ReconstructedSeededChargedParticleAssociations_rec_index);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticleAssociations_rec.collectionID", _ReconstructedSeededChargedParticleAssociations_rec_collectionID, &b__ReconstructedSeededChargedParticleAssociations_rec_collectionID);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticleAssociations_sim", &_ReconstructedSeededChargedParticleAssociations_sim_, &b__ReconstructedSeededChargedParticleAssociations_sim_);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticleAssociations_sim.index", _ReconstructedSeededChargedParticleAssociations_sim_index, &b__ReconstructedSeededChargedParticleAssociations_sim_index);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticleAssociations_sim.collectionID", _ReconstructedSeededChargedParticleAssociations_sim_collectionID, &b__ReconstructedSeededChargedParticleAssociations_sim_collectionID);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles", &ReconstructedSeededChargedParticles_, &b_ReconstructedSeededChargedParticles_);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.type", ReconstructedSeededChargedParticles_type, &b_ReconstructedSeededChargedParticles_type);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.energy", ReconstructedSeededChargedParticles_energy, &b_ReconstructedSeededChargedParticles_energy);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.momentum.x", ReconstructedSeededChargedParticles_momentum_x, &b_ReconstructedSeededChargedParticles_momentum_x);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.momentum.y", ReconstructedSeededChargedParticles_momentum_y, &b_ReconstructedSeededChargedParticles_momentum_y);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.momentum.z", ReconstructedSeededChargedParticles_momentum_z, &b_ReconstructedSeededChargedParticles_momentum_z);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.referencePoint.x", ReconstructedSeededChargedParticles_referencePoint_x, &b_ReconstructedSeededChargedParticles_referencePoint_x);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.referencePoint.y", ReconstructedSeededChargedParticles_referencePoint_y, &b_ReconstructedSeededChargedParticles_referencePoint_y);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.referencePoint.z", ReconstructedSeededChargedParticles_referencePoint_z, &b_ReconstructedSeededChargedParticles_referencePoint_z);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.charge", ReconstructedSeededChargedParticles_charge, &b_ReconstructedSeededChargedParticles_charge);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.mass", ReconstructedSeededChargedParticles_mass, &b_ReconstructedSeededChargedParticles_mass);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.goodnessOfPID", ReconstructedSeededChargedParticles_goodnessOfPID, &b_ReconstructedSeededChargedParticles_goodnessOfPID);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.covMatrix.xx", ReconstructedSeededChargedParticles_covMatrix_xx, &b_ReconstructedSeededChargedParticles_covMatrix_xx);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.covMatrix.yy", ReconstructedSeededChargedParticles_covMatrix_yy, &b_ReconstructedSeededChargedParticles_covMatrix_yy);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.covMatrix.zz", ReconstructedSeededChargedParticles_covMatrix_zz, &b_ReconstructedSeededChargedParticles_covMatrix_zz);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.covMatrix.tt", ReconstructedSeededChargedParticles_covMatrix_tt, &b_ReconstructedSeededChargedParticles_covMatrix_tt);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.covMatrix.xy", ReconstructedSeededChargedParticles_covMatrix_xy, &b_ReconstructedSeededChargedParticles_covMatrix_xy);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.covMatrix.xz", ReconstructedSeededChargedParticles_covMatrix_xz, &b_ReconstructedSeededChargedParticles_covMatrix_xz);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.covMatrix.xt", ReconstructedSeededChargedParticles_covMatrix_xt, &b_ReconstructedSeededChargedParticles_covMatrix_xt);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.covMatrix.yz", ReconstructedSeededChargedParticles_covMatrix_yz, &b_ReconstructedSeededChargedParticles_covMatrix_yz);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.covMatrix.yt", ReconstructedSeededChargedParticles_covMatrix_yt, &b_ReconstructedSeededChargedParticles_covMatrix_yt);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.covMatrix.zt", ReconstructedSeededChargedParticles_covMatrix_zt, &b_ReconstructedSeededChargedParticles_covMatrix_zt);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.PDG", ReconstructedSeededChargedParticles_PDG, &b_ReconstructedSeededChargedParticles_PDG);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.clusters_begin", ReconstructedSeededChargedParticles_clusters_begin, &b_ReconstructedSeededChargedParticles_clusters_begin);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.clusters_end", ReconstructedSeededChargedParticles_clusters_end, &b_ReconstructedSeededChargedParticles_clusters_end);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.tracks_begin", ReconstructedSeededChargedParticles_tracks_begin, &b_ReconstructedSeededChargedParticles_tracks_begin);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.tracks_end", ReconstructedSeededChargedParticles_tracks_end, &b_ReconstructedSeededChargedParticles_tracks_end);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.particles_begin", ReconstructedSeededChargedParticles_particles_begin, &b_ReconstructedSeededChargedParticles_particles_begin);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.particles_end", ReconstructedSeededChargedParticles_particles_end, &b_ReconstructedSeededChargedParticles_particles_end);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.particleIDs_begin", ReconstructedSeededChargedParticles_particleIDs_begin, &b_ReconstructedSeededChargedParticles_particleIDs_begin);
   fChain->SetBranchAddress("ReconstructedSeededChargedParticles.particleIDs_end", ReconstructedSeededChargedParticles_particleIDs_end, &b_ReconstructedSeededChargedParticles_particleIDs_end);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticles_clusters", &_ReconstructedSeededChargedParticles_clusters_, &b__ReconstructedSeededChargedParticles_clusters_);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticles_clusters.index", &_ReconstructedSeededChargedParticles_clusters_index, &b__ReconstructedSeededChargedParticles_clusters_index);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticles_clusters.collectionID", &_ReconstructedSeededChargedParticles_clusters_collectionID, &b__ReconstructedSeededChargedParticles_clusters_collectionID);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticles_tracks", &_ReconstructedSeededChargedParticles_tracks_, &b__ReconstructedSeededChargedParticles_tracks_);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticles_tracks.index", &_ReconstructedSeededChargedParticles_tracks_index, &b__ReconstructedSeededChargedParticles_tracks_index);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticles_tracks.collectionID", &_ReconstructedSeededChargedParticles_tracks_collectionID, &b__ReconstructedSeededChargedParticles_tracks_collectionID);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticles_particles", &_ReconstructedSeededChargedParticles_particles_, &b__ReconstructedSeededChargedParticles_particles_);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticles_particles.index", &_ReconstructedSeededChargedParticles_particles_index, &b__ReconstructedSeededChargedParticles_particles_index);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticles_particles.collectionID", &_ReconstructedSeededChargedParticles_particles_collectionID, &b__ReconstructedSeededChargedParticles_particles_collectionID);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticles_particleIDs", &_ReconstructedSeededChargedParticles_particleIDs_, &b__ReconstructedSeededChargedParticles_particleIDs_);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticles_particleIDs.index", _ReconstructedSeededChargedParticles_particleIDs_index, &b__ReconstructedSeededChargedParticles_particleIDs_index);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticles_particleIDs.collectionID", _ReconstructedSeededChargedParticles_particleIDs_collectionID, &b__ReconstructedSeededChargedParticles_particleIDs_collectionID);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticles_startVertex", &_ReconstructedSeededChargedParticles_startVertex_, &b__ReconstructedSeededChargedParticles_startVertex_);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticles_startVertex.index", _ReconstructedSeededChargedParticles_startVertex_index, &b__ReconstructedSeededChargedParticles_startVertex_index);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticles_startVertex.collectionID", _ReconstructedSeededChargedParticles_startVertex_collectionID, &b__ReconstructedSeededChargedParticles_startVertex_collectionID);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticles_particleIDUsed", &_ReconstructedSeededChargedParticles_particleIDUsed_, &b__ReconstructedSeededChargedParticles_particleIDUsed_);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticles_particleIDUsed.index", _ReconstructedSeededChargedParticles_particleIDUsed_index, &b__ReconstructedSeededChargedParticles_particleIDUsed_index);
   fChain->SetBranchAddress("_ReconstructedSeededChargedParticles_particleIDUsed.collectionID", _ReconstructedSeededChargedParticles_particleIDUsed_collectionID, &b__ReconstructedSeededChargedParticles_particleIDUsed_collectionID);
   fChain->SetBranchAddress("SiBarrelTrackerRecHits", &SiBarrelTrackerRecHits_, &b_SiBarrelTrackerRecHits_);
   fChain->SetBranchAddress("SiBarrelTrackerRecHits.cellID", SiBarrelTrackerRecHits_cellID, &b_SiBarrelTrackerRecHits_cellID);
   fChain->SetBranchAddress("SiBarrelTrackerRecHits.position.x", SiBarrelTrackerRecHits_position_x, &b_SiBarrelTrackerRecHits_position_x);
   fChain->SetBranchAddress("SiBarrelTrackerRecHits.position.y", SiBarrelTrackerRecHits_position_y, &b_SiBarrelTrackerRecHits_position_y);
   fChain->SetBranchAddress("SiBarrelTrackerRecHits.position.z", SiBarrelTrackerRecHits_position_z, &b_SiBarrelTrackerRecHits_position_z);
   fChain->SetBranchAddress("SiBarrelTrackerRecHits.positionError.xx", SiBarrelTrackerRecHits_positionError_xx, &b_SiBarrelTrackerRecHits_positionError_xx);
   fChain->SetBranchAddress("SiBarrelTrackerRecHits.positionError.yy", SiBarrelTrackerRecHits_positionError_yy, &b_SiBarrelTrackerRecHits_positionError_yy);
   fChain->SetBranchAddress("SiBarrelTrackerRecHits.positionError.zz", SiBarrelTrackerRecHits_positionError_zz, &b_SiBarrelTrackerRecHits_positionError_zz);
   fChain->SetBranchAddress("SiBarrelTrackerRecHits.time", SiBarrelTrackerRecHits_time, &b_SiBarrelTrackerRecHits_time);
   fChain->SetBranchAddress("SiBarrelTrackerRecHits.timeError", SiBarrelTrackerRecHits_timeError, &b_SiBarrelTrackerRecHits_timeError);
   fChain->SetBranchAddress("SiBarrelTrackerRecHits.edep", SiBarrelTrackerRecHits_edep, &b_SiBarrelTrackerRecHits_edep);
   fChain->SetBranchAddress("SiBarrelTrackerRecHits.edepError", SiBarrelTrackerRecHits_edepError, &b_SiBarrelTrackerRecHits_edepError);
   fChain->SetBranchAddress("SiBarrelVertexRecHits", &SiBarrelVertexRecHits_, &b_SiBarrelVertexRecHits_);
   fChain->SetBranchAddress("SiBarrelVertexRecHits.cellID", SiBarrelVertexRecHits_cellID, &b_SiBarrelVertexRecHits_cellID);
   fChain->SetBranchAddress("SiBarrelVertexRecHits.position.x", SiBarrelVertexRecHits_position_x, &b_SiBarrelVertexRecHits_position_x);
   fChain->SetBranchAddress("SiBarrelVertexRecHits.position.y", SiBarrelVertexRecHits_position_y, &b_SiBarrelVertexRecHits_position_y);
   fChain->SetBranchAddress("SiBarrelVertexRecHits.position.z", SiBarrelVertexRecHits_position_z, &b_SiBarrelVertexRecHits_position_z);
   fChain->SetBranchAddress("SiBarrelVertexRecHits.positionError.xx", SiBarrelVertexRecHits_positionError_xx, &b_SiBarrelVertexRecHits_positionError_xx);
   fChain->SetBranchAddress("SiBarrelVertexRecHits.positionError.yy", SiBarrelVertexRecHits_positionError_yy, &b_SiBarrelVertexRecHits_positionError_yy);
   fChain->SetBranchAddress("SiBarrelVertexRecHits.positionError.zz", SiBarrelVertexRecHits_positionError_zz, &b_SiBarrelVertexRecHits_positionError_zz);
   fChain->SetBranchAddress("SiBarrelVertexRecHits.time", SiBarrelVertexRecHits_time, &b_SiBarrelVertexRecHits_time);
   fChain->SetBranchAddress("SiBarrelVertexRecHits.timeError", SiBarrelVertexRecHits_timeError, &b_SiBarrelVertexRecHits_timeError);
   fChain->SetBranchAddress("SiBarrelVertexRecHits.edep", SiBarrelVertexRecHits_edep, &b_SiBarrelVertexRecHits_edep);
   fChain->SetBranchAddress("SiBarrelVertexRecHits.edepError", SiBarrelVertexRecHits_edepError, &b_SiBarrelVertexRecHits_edepError);
   fChain->SetBranchAddress("SiEndcapTrackerRecHits", &SiEndcapTrackerRecHits_, &b_SiEndcapTrackerRecHits_);
   fChain->SetBranchAddress("SiEndcapTrackerRecHits.cellID", SiEndcapTrackerRecHits_cellID, &b_SiEndcapTrackerRecHits_cellID);
   fChain->SetBranchAddress("SiEndcapTrackerRecHits.position.x", SiEndcapTrackerRecHits_position_x, &b_SiEndcapTrackerRecHits_position_x);
   fChain->SetBranchAddress("SiEndcapTrackerRecHits.position.y", SiEndcapTrackerRecHits_position_y, &b_SiEndcapTrackerRecHits_position_y);
   fChain->SetBranchAddress("SiEndcapTrackerRecHits.position.z", SiEndcapTrackerRecHits_position_z, &b_SiEndcapTrackerRecHits_position_z);
   fChain->SetBranchAddress("SiEndcapTrackerRecHits.positionError.xx", SiEndcapTrackerRecHits_positionError_xx, &b_SiEndcapTrackerRecHits_positionError_xx);
   fChain->SetBranchAddress("SiEndcapTrackerRecHits.positionError.yy", SiEndcapTrackerRecHits_positionError_yy, &b_SiEndcapTrackerRecHits_positionError_yy);
   fChain->SetBranchAddress("SiEndcapTrackerRecHits.positionError.zz", SiEndcapTrackerRecHits_positionError_zz, &b_SiEndcapTrackerRecHits_positionError_zz);
   fChain->SetBranchAddress("SiEndcapTrackerRecHits.time", SiEndcapTrackerRecHits_time, &b_SiEndcapTrackerRecHits_time);
   fChain->SetBranchAddress("SiEndcapTrackerRecHits.timeError", SiEndcapTrackerRecHits_timeError, &b_SiEndcapTrackerRecHits_timeError);
   fChain->SetBranchAddress("SiEndcapTrackerRecHits.edep", SiEndcapTrackerRecHits_edep, &b_SiEndcapTrackerRecHits_edep);
   fChain->SetBranchAddress("SiEndcapTrackerRecHits.edepError", SiEndcapTrackerRecHits_edepError, &b_SiEndcapTrackerRecHits_edepError);
   fChain->SetBranchAddress("TaggerTrackerRawHits", &TaggerTrackerRawHits_, &b_TaggerTrackerRawHits_);
   fChain->SetBranchAddress("TaggerTrackerRawHits.cellID", TaggerTrackerRawHits_cellID, &b_TaggerTrackerRawHits_cellID);
   fChain->SetBranchAddress("TaggerTrackerRawHits.charge", TaggerTrackerRawHits_charge, &b_TaggerTrackerRawHits_charge);
   fChain->SetBranchAddress("TaggerTrackerRawHits.timeStamp", TaggerTrackerRawHits_timeStamp, &b_TaggerTrackerRawHits_timeStamp);
   fChain->SetBranchAddress("TOFBarrelRecHit", &TOFBarrelRecHit_, &b_TOFBarrelRecHit_);
   fChain->SetBranchAddress("TOFBarrelRecHit.cellID", TOFBarrelRecHit_cellID, &b_TOFBarrelRecHit_cellID);
   fChain->SetBranchAddress("TOFBarrelRecHit.position.x", TOFBarrelRecHit_position_x, &b_TOFBarrelRecHit_position_x);
   fChain->SetBranchAddress("TOFBarrelRecHit.position.y", TOFBarrelRecHit_position_y, &b_TOFBarrelRecHit_position_y);
   fChain->SetBranchAddress("TOFBarrelRecHit.position.z", TOFBarrelRecHit_position_z, &b_TOFBarrelRecHit_position_z);
   fChain->SetBranchAddress("TOFBarrelRecHit.positionError.xx", TOFBarrelRecHit_positionError_xx, &b_TOFBarrelRecHit_positionError_xx);
   fChain->SetBranchAddress("TOFBarrelRecHit.positionError.yy", TOFBarrelRecHit_positionError_yy, &b_TOFBarrelRecHit_positionError_yy);
   fChain->SetBranchAddress("TOFBarrelRecHit.positionError.zz", TOFBarrelRecHit_positionError_zz, &b_TOFBarrelRecHit_positionError_zz);
   fChain->SetBranchAddress("TOFBarrelRecHit.time", TOFBarrelRecHit_time, &b_TOFBarrelRecHit_time);
   fChain->SetBranchAddress("TOFBarrelRecHit.timeError", TOFBarrelRecHit_timeError, &b_TOFBarrelRecHit_timeError);
   fChain->SetBranchAddress("TOFBarrelRecHit.edep", TOFBarrelRecHit_edep, &b_TOFBarrelRecHit_edep);
   fChain->SetBranchAddress("TOFBarrelRecHit.edepError", TOFBarrelRecHit_edepError, &b_TOFBarrelRecHit_edepError);
   fChain->SetBranchAddress("TOFEndcapRecHits", &TOFEndcapRecHits_, &b_TOFEndcapRecHits_);
   fChain->SetBranchAddress("TOFEndcapRecHits.cellID", TOFEndcapRecHits_cellID, &b_TOFEndcapRecHits_cellID);
   fChain->SetBranchAddress("TOFEndcapRecHits.position.x", TOFEndcapRecHits_position_x, &b_TOFEndcapRecHits_position_x);
   fChain->SetBranchAddress("TOFEndcapRecHits.position.y", TOFEndcapRecHits_position_y, &b_TOFEndcapRecHits_position_y);
   fChain->SetBranchAddress("TOFEndcapRecHits.position.z", TOFEndcapRecHits_position_z, &b_TOFEndcapRecHits_position_z);
   fChain->SetBranchAddress("TOFEndcapRecHits.positionError.xx", TOFEndcapRecHits_positionError_xx, &b_TOFEndcapRecHits_positionError_xx);
   fChain->SetBranchAddress("TOFEndcapRecHits.positionError.yy", TOFEndcapRecHits_positionError_yy, &b_TOFEndcapRecHits_positionError_yy);
   fChain->SetBranchAddress("TOFEndcapRecHits.positionError.zz", TOFEndcapRecHits_positionError_zz, &b_TOFEndcapRecHits_positionError_zz);
   fChain->SetBranchAddress("TOFEndcapRecHits.time", TOFEndcapRecHits_time, &b_TOFEndcapRecHits_time);
   fChain->SetBranchAddress("TOFEndcapRecHits.timeError", TOFEndcapRecHits_timeError, &b_TOFEndcapRecHits_timeError);
   fChain->SetBranchAddress("TOFEndcapRecHits.edep", TOFEndcapRecHits_edep, &b_TOFEndcapRecHits_edep);
   fChain->SetBranchAddress("TOFEndcapRecHits.edepError", TOFEndcapRecHits_edepError, &b_TOFEndcapRecHits_edepError);
   fChain->SetBranchAddress("ZDCEcalClusterAssociations", &ZDCEcalClusterAssociations_, &b_ZDCEcalClusterAssociations_);
   fChain->SetBranchAddress("ZDCEcalClusterAssociations.simID", ZDCEcalClusterAssociations_simID, &b_ZDCEcalClusterAssociations_simID);
   fChain->SetBranchAddress("ZDCEcalClusterAssociations.recID", ZDCEcalClusterAssociations_recID, &b_ZDCEcalClusterAssociations_recID);
   fChain->SetBranchAddress("ZDCEcalClusterAssociations.weight", ZDCEcalClusterAssociations_weight, &b_ZDCEcalClusterAssociations_weight);
   fChain->SetBranchAddress("_ZDCEcalClusterAssociations_rec", &_ZDCEcalClusterAssociations_rec_, &b__ZDCEcalClusterAssociations_rec_);
   fChain->SetBranchAddress("_ZDCEcalClusterAssociations_rec.index", _ZDCEcalClusterAssociations_rec_index, &b__ZDCEcalClusterAssociations_rec_index);
   fChain->SetBranchAddress("_ZDCEcalClusterAssociations_rec.collectionID", _ZDCEcalClusterAssociations_rec_collectionID, &b__ZDCEcalClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_ZDCEcalClusterAssociations_sim", &_ZDCEcalClusterAssociations_sim_, &b__ZDCEcalClusterAssociations_sim_);
   fChain->SetBranchAddress("_ZDCEcalClusterAssociations_sim.index", _ZDCEcalClusterAssociations_sim_index, &b__ZDCEcalClusterAssociations_sim_index);
   fChain->SetBranchAddress("_ZDCEcalClusterAssociations_sim.collectionID", _ZDCEcalClusterAssociations_sim_collectionID, &b__ZDCEcalClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("ZDCEcalClusters", &ZDCEcalClusters_, &b_ZDCEcalClusters_);
   fChain->SetBranchAddress("ZDCEcalClusters.type", ZDCEcalClusters_type, &b_ZDCEcalClusters_type);
   fChain->SetBranchAddress("ZDCEcalClusters.energy", ZDCEcalClusters_energy, &b_ZDCEcalClusters_energy);
   fChain->SetBranchAddress("ZDCEcalClusters.energyError", ZDCEcalClusters_energyError, &b_ZDCEcalClusters_energyError);
   fChain->SetBranchAddress("ZDCEcalClusters.time", ZDCEcalClusters_time, &b_ZDCEcalClusters_time);
   fChain->SetBranchAddress("ZDCEcalClusters.timeError", ZDCEcalClusters_timeError, &b_ZDCEcalClusters_timeError);
   fChain->SetBranchAddress("ZDCEcalClusters.nhits", ZDCEcalClusters_nhits, &b_ZDCEcalClusters_nhits);
   fChain->SetBranchAddress("ZDCEcalClusters.position.x", ZDCEcalClusters_position_x, &b_ZDCEcalClusters_position_x);
   fChain->SetBranchAddress("ZDCEcalClusters.position.y", ZDCEcalClusters_position_y, &b_ZDCEcalClusters_position_y);
   fChain->SetBranchAddress("ZDCEcalClusters.position.z", ZDCEcalClusters_position_z, &b_ZDCEcalClusters_position_z);
   fChain->SetBranchAddress("ZDCEcalClusters.positionError.xx", ZDCEcalClusters_positionError_xx, &b_ZDCEcalClusters_positionError_xx);
   fChain->SetBranchAddress("ZDCEcalClusters.positionError.yy", ZDCEcalClusters_positionError_yy, &b_ZDCEcalClusters_positionError_yy);
   fChain->SetBranchAddress("ZDCEcalClusters.positionError.zz", ZDCEcalClusters_positionError_zz, &b_ZDCEcalClusters_positionError_zz);
   fChain->SetBranchAddress("ZDCEcalClusters.positionError.xy", ZDCEcalClusters_positionError_xy, &b_ZDCEcalClusters_positionError_xy);
   fChain->SetBranchAddress("ZDCEcalClusters.positionError.xz", ZDCEcalClusters_positionError_xz, &b_ZDCEcalClusters_positionError_xz);
   fChain->SetBranchAddress("ZDCEcalClusters.positionError.yz", ZDCEcalClusters_positionError_yz, &b_ZDCEcalClusters_positionError_yz);
   fChain->SetBranchAddress("ZDCEcalClusters.intrinsicTheta", ZDCEcalClusters_intrinsicTheta, &b_ZDCEcalClusters_intrinsicTheta);
   fChain->SetBranchAddress("ZDCEcalClusters.intrinsicPhi", ZDCEcalClusters_intrinsicPhi, &b_ZDCEcalClusters_intrinsicPhi);
   fChain->SetBranchAddress("ZDCEcalClusters.intrinsicDirectionError.xx", ZDCEcalClusters_intrinsicDirectionError_xx, &b_ZDCEcalClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("ZDCEcalClusters.intrinsicDirectionError.yy", ZDCEcalClusters_intrinsicDirectionError_yy, &b_ZDCEcalClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("ZDCEcalClusters.intrinsicDirectionError.xy", ZDCEcalClusters_intrinsicDirectionError_xy, &b_ZDCEcalClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("ZDCEcalClusters.shapeParameters_begin", ZDCEcalClusters_shapeParameters_begin, &b_ZDCEcalClusters_shapeParameters_begin);
   fChain->SetBranchAddress("ZDCEcalClusters.shapeParameters_end", ZDCEcalClusters_shapeParameters_end, &b_ZDCEcalClusters_shapeParameters_end);
   fChain->SetBranchAddress("ZDCEcalClusters.hitContributions_begin", ZDCEcalClusters_hitContributions_begin, &b_ZDCEcalClusters_hitContributions_begin);
   fChain->SetBranchAddress("ZDCEcalClusters.hitContributions_end", ZDCEcalClusters_hitContributions_end, &b_ZDCEcalClusters_hitContributions_end);
   fChain->SetBranchAddress("ZDCEcalClusters.subdetectorEnergies_begin", ZDCEcalClusters_subdetectorEnergies_begin, &b_ZDCEcalClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("ZDCEcalClusters.subdetectorEnergies_end", ZDCEcalClusters_subdetectorEnergies_end, &b_ZDCEcalClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("ZDCEcalClusters.clusters_begin", ZDCEcalClusters_clusters_begin, &b_ZDCEcalClusters_clusters_begin);
   fChain->SetBranchAddress("ZDCEcalClusters.clusters_end", ZDCEcalClusters_clusters_end, &b_ZDCEcalClusters_clusters_end);
   fChain->SetBranchAddress("ZDCEcalClusters.hits_begin", ZDCEcalClusters_hits_begin, &b_ZDCEcalClusters_hits_begin);
   fChain->SetBranchAddress("ZDCEcalClusters.hits_end", ZDCEcalClusters_hits_end, &b_ZDCEcalClusters_hits_end);
   fChain->SetBranchAddress("ZDCEcalClusters.particleIDs_begin", ZDCEcalClusters_particleIDs_begin, &b_ZDCEcalClusters_particleIDs_begin);
   fChain->SetBranchAddress("ZDCEcalClusters.particleIDs_end", ZDCEcalClusters_particleIDs_end, &b_ZDCEcalClusters_particleIDs_end);
   fChain->SetBranchAddress("_ZDCEcalClusters_clusters", &_ZDCEcalClusters_clusters_, &b__ZDCEcalClusters_clusters_);
   fChain->SetBranchAddress("_ZDCEcalClusters_clusters.index", &_ZDCEcalClusters_clusters_index, &b__ZDCEcalClusters_clusters_index);
   fChain->SetBranchAddress("_ZDCEcalClusters_clusters.collectionID", &_ZDCEcalClusters_clusters_collectionID, &b__ZDCEcalClusters_clusters_collectionID);
   fChain->SetBranchAddress("_ZDCEcalClusters_hits", &_ZDCEcalClusters_hits_, &b__ZDCEcalClusters_hits_);
   fChain->SetBranchAddress("_ZDCEcalClusters_hits.index", &_ZDCEcalClusters_hits_index, &b__ZDCEcalClusters_hits_index);
   fChain->SetBranchAddress("_ZDCEcalClusters_hits.collectionID", &_ZDCEcalClusters_hits_collectionID, &b__ZDCEcalClusters_hits_collectionID);
   fChain->SetBranchAddress("_ZDCEcalClusters_particleIDs", &_ZDCEcalClusters_particleIDs_, &b__ZDCEcalClusters_particleIDs_);
   fChain->SetBranchAddress("_ZDCEcalClusters_particleIDs.index", &_ZDCEcalClusters_particleIDs_index, &b__ZDCEcalClusters_particleIDs_index);
   fChain->SetBranchAddress("_ZDCEcalClusters_particleIDs.collectionID", &_ZDCEcalClusters_particleIDs_collectionID, &b__ZDCEcalClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_ZDCEcalClusters_shapeParameters", &_ZDCEcalClusters_shapeParameters, &b__ZDCEcalClusters_shapeParameters);
   fChain->SetBranchAddress("_ZDCEcalClusters_hitContributions", &_ZDCEcalClusters_hitContributions, &b__ZDCEcalClusters_hitContributions);
   fChain->SetBranchAddress("_ZDCEcalClusters_subdetectorEnergies", &_ZDCEcalClusters_subdetectorEnergies, &b__ZDCEcalClusters_subdetectorEnergies);
   fChain->SetBranchAddress("ZDCEcalRawHits", &ZDCEcalRawHits_, &b_ZDCEcalRawHits_);
   fChain->SetBranchAddress("ZDCEcalRawHits.cellID", ZDCEcalRawHits_cellID, &b_ZDCEcalRawHits_cellID);
   fChain->SetBranchAddress("ZDCEcalRawHits.amplitude", ZDCEcalRawHits_amplitude, &b_ZDCEcalRawHits_amplitude);
   fChain->SetBranchAddress("ZDCEcalRawHits.timeStamp", ZDCEcalRawHits_timeStamp, &b_ZDCEcalRawHits_timeStamp);
   fChain->SetBranchAddress("ZDCEcalRecHits", &ZDCEcalRecHits_, &b_ZDCEcalRecHits_);
   fChain->SetBranchAddress("ZDCEcalRecHits.cellID", ZDCEcalRecHits_cellID, &b_ZDCEcalRecHits_cellID);
   fChain->SetBranchAddress("ZDCEcalRecHits.energy", ZDCEcalRecHits_energy, &b_ZDCEcalRecHits_energy);
   fChain->SetBranchAddress("ZDCEcalRecHits.energyError", ZDCEcalRecHits_energyError, &b_ZDCEcalRecHits_energyError);
   fChain->SetBranchAddress("ZDCEcalRecHits.time", ZDCEcalRecHits_time, &b_ZDCEcalRecHits_time);
   fChain->SetBranchAddress("ZDCEcalRecHits.timeError", ZDCEcalRecHits_timeError, &b_ZDCEcalRecHits_timeError);
   fChain->SetBranchAddress("ZDCEcalRecHits.position.x", ZDCEcalRecHits_position_x, &b_ZDCEcalRecHits_position_x);
   fChain->SetBranchAddress("ZDCEcalRecHits.position.y", ZDCEcalRecHits_position_y, &b_ZDCEcalRecHits_position_y);
   fChain->SetBranchAddress("ZDCEcalRecHits.position.z", ZDCEcalRecHits_position_z, &b_ZDCEcalRecHits_position_z);
   fChain->SetBranchAddress("ZDCEcalRecHits.dimension.x", ZDCEcalRecHits_dimension_x, &b_ZDCEcalRecHits_dimension_x);
   fChain->SetBranchAddress("ZDCEcalRecHits.dimension.y", ZDCEcalRecHits_dimension_y, &b_ZDCEcalRecHits_dimension_y);
   fChain->SetBranchAddress("ZDCEcalRecHits.dimension.z", ZDCEcalRecHits_dimension_z, &b_ZDCEcalRecHits_dimension_z);
   fChain->SetBranchAddress("ZDCEcalRecHits.sector", ZDCEcalRecHits_sector, &b_ZDCEcalRecHits_sector);
   fChain->SetBranchAddress("ZDCEcalRecHits.layer", ZDCEcalRecHits_layer, &b_ZDCEcalRecHits_layer);
   fChain->SetBranchAddress("ZDCEcalRecHits.local.x", ZDCEcalRecHits_local_x, &b_ZDCEcalRecHits_local_x);
   fChain->SetBranchAddress("ZDCEcalRecHits.local.y", ZDCEcalRecHits_local_y, &b_ZDCEcalRecHits_local_y);
   fChain->SetBranchAddress("ZDCEcalRecHits.local.z", ZDCEcalRecHits_local_z, &b_ZDCEcalRecHits_local_z);
   fChain->SetBranchAddress("ZDCEcalTruthClusterAssociations", &ZDCEcalTruthClusterAssociations_, &b_ZDCEcalTruthClusterAssociations_);
   fChain->SetBranchAddress("ZDCEcalTruthClusterAssociations.simID", ZDCEcalTruthClusterAssociations_simID, &b_ZDCEcalTruthClusterAssociations_simID);
   fChain->SetBranchAddress("ZDCEcalTruthClusterAssociations.recID", ZDCEcalTruthClusterAssociations_recID, &b_ZDCEcalTruthClusterAssociations_recID);
   fChain->SetBranchAddress("ZDCEcalTruthClusterAssociations.weight", ZDCEcalTruthClusterAssociations_weight, &b_ZDCEcalTruthClusterAssociations_weight);
   fChain->SetBranchAddress("_ZDCEcalTruthClusterAssociations_rec", &_ZDCEcalTruthClusterAssociations_rec_, &b__ZDCEcalTruthClusterAssociations_rec_);
   fChain->SetBranchAddress("_ZDCEcalTruthClusterAssociations_rec.index", _ZDCEcalTruthClusterAssociations_rec_index, &b__ZDCEcalTruthClusterAssociations_rec_index);
   fChain->SetBranchAddress("_ZDCEcalTruthClusterAssociations_rec.collectionID", _ZDCEcalTruthClusterAssociations_rec_collectionID, &b__ZDCEcalTruthClusterAssociations_rec_collectionID);
   fChain->SetBranchAddress("_ZDCEcalTruthClusterAssociations_sim", &_ZDCEcalTruthClusterAssociations_sim_, &b__ZDCEcalTruthClusterAssociations_sim_);
   fChain->SetBranchAddress("_ZDCEcalTruthClusterAssociations_sim.index", _ZDCEcalTruthClusterAssociations_sim_index, &b__ZDCEcalTruthClusterAssociations_sim_index);
   fChain->SetBranchAddress("_ZDCEcalTruthClusterAssociations_sim.collectionID", _ZDCEcalTruthClusterAssociations_sim_collectionID, &b__ZDCEcalTruthClusterAssociations_sim_collectionID);
   fChain->SetBranchAddress("ZDCEcalTruthClusters", &ZDCEcalTruthClusters_, &b_ZDCEcalTruthClusters_);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.type", ZDCEcalTruthClusters_type, &b_ZDCEcalTruthClusters_type);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.energy", ZDCEcalTruthClusters_energy, &b_ZDCEcalTruthClusters_energy);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.energyError", ZDCEcalTruthClusters_energyError, &b_ZDCEcalTruthClusters_energyError);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.time", ZDCEcalTruthClusters_time, &b_ZDCEcalTruthClusters_time);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.timeError", ZDCEcalTruthClusters_timeError, &b_ZDCEcalTruthClusters_timeError);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.nhits", ZDCEcalTruthClusters_nhits, &b_ZDCEcalTruthClusters_nhits);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.position.x", ZDCEcalTruthClusters_position_x, &b_ZDCEcalTruthClusters_position_x);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.position.y", ZDCEcalTruthClusters_position_y, &b_ZDCEcalTruthClusters_position_y);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.position.z", ZDCEcalTruthClusters_position_z, &b_ZDCEcalTruthClusters_position_z);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.positionError.xx", ZDCEcalTruthClusters_positionError_xx, &b_ZDCEcalTruthClusters_positionError_xx);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.positionError.yy", ZDCEcalTruthClusters_positionError_yy, &b_ZDCEcalTruthClusters_positionError_yy);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.positionError.zz", ZDCEcalTruthClusters_positionError_zz, &b_ZDCEcalTruthClusters_positionError_zz);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.positionError.xy", ZDCEcalTruthClusters_positionError_xy, &b_ZDCEcalTruthClusters_positionError_xy);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.positionError.xz", ZDCEcalTruthClusters_positionError_xz, &b_ZDCEcalTruthClusters_positionError_xz);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.positionError.yz", ZDCEcalTruthClusters_positionError_yz, &b_ZDCEcalTruthClusters_positionError_yz);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.intrinsicTheta", ZDCEcalTruthClusters_intrinsicTheta, &b_ZDCEcalTruthClusters_intrinsicTheta);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.intrinsicPhi", ZDCEcalTruthClusters_intrinsicPhi, &b_ZDCEcalTruthClusters_intrinsicPhi);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.intrinsicDirectionError.xx", ZDCEcalTruthClusters_intrinsicDirectionError_xx, &b_ZDCEcalTruthClusters_intrinsicDirectionError_xx);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.intrinsicDirectionError.yy", ZDCEcalTruthClusters_intrinsicDirectionError_yy, &b_ZDCEcalTruthClusters_intrinsicDirectionError_yy);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.intrinsicDirectionError.xy", ZDCEcalTruthClusters_intrinsicDirectionError_xy, &b_ZDCEcalTruthClusters_intrinsicDirectionError_xy);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.shapeParameters_begin", ZDCEcalTruthClusters_shapeParameters_begin, &b_ZDCEcalTruthClusters_shapeParameters_begin);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.shapeParameters_end", ZDCEcalTruthClusters_shapeParameters_end, &b_ZDCEcalTruthClusters_shapeParameters_end);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.hitContributions_begin", ZDCEcalTruthClusters_hitContributions_begin, &b_ZDCEcalTruthClusters_hitContributions_begin);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.hitContributions_end", ZDCEcalTruthClusters_hitContributions_end, &b_ZDCEcalTruthClusters_hitContributions_end);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.subdetectorEnergies_begin", ZDCEcalTruthClusters_subdetectorEnergies_begin, &b_ZDCEcalTruthClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.subdetectorEnergies_end", ZDCEcalTruthClusters_subdetectorEnergies_end, &b_ZDCEcalTruthClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.clusters_begin", ZDCEcalTruthClusters_clusters_begin, &b_ZDCEcalTruthClusters_clusters_begin);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.clusters_end", ZDCEcalTruthClusters_clusters_end, &b_ZDCEcalTruthClusters_clusters_end);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.hits_begin", ZDCEcalTruthClusters_hits_begin, &b_ZDCEcalTruthClusters_hits_begin);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.hits_end", ZDCEcalTruthClusters_hits_end, &b_ZDCEcalTruthClusters_hits_end);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.particleIDs_begin", ZDCEcalTruthClusters_particleIDs_begin, &b_ZDCEcalTruthClusters_particleIDs_begin);
   fChain->SetBranchAddress("ZDCEcalTruthClusters.particleIDs_end", ZDCEcalTruthClusters_particleIDs_end, &b_ZDCEcalTruthClusters_particleIDs_end);
   fChain->SetBranchAddress("_ZDCEcalTruthClusters_clusters", &_ZDCEcalTruthClusters_clusters_, &b__ZDCEcalTruthClusters_clusters_);
   fChain->SetBranchAddress("_ZDCEcalTruthClusters_clusters.index", &_ZDCEcalTruthClusters_clusters_index, &b__ZDCEcalTruthClusters_clusters_index);
   fChain->SetBranchAddress("_ZDCEcalTruthClusters_clusters.collectionID", &_ZDCEcalTruthClusters_clusters_collectionID, &b__ZDCEcalTruthClusters_clusters_collectionID);
   fChain->SetBranchAddress("_ZDCEcalTruthClusters_hits", &_ZDCEcalTruthClusters_hits_, &b__ZDCEcalTruthClusters_hits_);
   fChain->SetBranchAddress("_ZDCEcalTruthClusters_hits.index", &_ZDCEcalTruthClusters_hits_index, &b__ZDCEcalTruthClusters_hits_index);
   fChain->SetBranchAddress("_ZDCEcalTruthClusters_hits.collectionID", &_ZDCEcalTruthClusters_hits_collectionID, &b__ZDCEcalTruthClusters_hits_collectionID);
   fChain->SetBranchAddress("_ZDCEcalTruthClusters_particleIDs", &_ZDCEcalTruthClusters_particleIDs_, &b__ZDCEcalTruthClusters_particleIDs_);
   fChain->SetBranchAddress("_ZDCEcalTruthClusters_particleIDs.index", &_ZDCEcalTruthClusters_particleIDs_index, &b__ZDCEcalTruthClusters_particleIDs_index);
   fChain->SetBranchAddress("_ZDCEcalTruthClusters_particleIDs.collectionID", &_ZDCEcalTruthClusters_particleIDs_collectionID, &b__ZDCEcalTruthClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_ZDCEcalTruthClusters_shapeParameters", &_ZDCEcalTruthClusters_shapeParameters, &b__ZDCEcalTruthClusters_shapeParameters);
   fChain->SetBranchAddress("_ZDCEcalTruthClusters_hitContributions", &_ZDCEcalTruthClusters_hitContributions, &b__ZDCEcalTruthClusters_hitContributions);
   fChain->SetBranchAddress("_ZDCEcalTruthClusters_subdetectorEnergies", &_ZDCEcalTruthClusters_subdetectorEnergies, &b__ZDCEcalTruthClusters_subdetectorEnergies);
   fChain->SetBranchAddress("_intMap", &_intMap_, &b_PARAMETERS__intMap_);
   fChain->SetBranchAddress("_intMap.first", &_intMap_first, &b__intMap_first);
   fChain->SetBranchAddress("_intMap.second", &_intMap_second, &b__intMap_second);
   fChain->SetBranchAddress("_floatMap", &_floatMap_, &b_PARAMETERS__floatMap_);
   fChain->SetBranchAddress("_floatMap.first", &_floatMap_first, &b__floatMap_first);
   fChain->SetBranchAddress("_floatMap.second", &_floatMap_second, &b__floatMap_second);
   fChain->SetBranchAddress("_stringMap", &_stringMap_, &b_PARAMETERS__stringMap_);
   fChain->SetBranchAddress("_stringMap.first", _stringMap_first, &b__stringMap_first);
   fChain->SetBranchAddress("_stringMap.second", _stringMap_second, &b__stringMap_second);
   fChain->SetBranchAddress("_doubleMap", &_doubleMap_, &b_PARAMETERS__doubleMap_);
   fChain->SetBranchAddress("_doubleMap.first", _doubleMap_first, &b__doubleMap_first);
   fChain->SetBranchAddress("_doubleMap.second", _doubleMap_second, &b__doubleMap_second);
   Notify();
}

Bool_t DIS::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void DIS::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t DIS::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef DIS_cxx

// --- CMAKE generated variables for your plugin

#include "pluginstructures.h"

#ifndef _plugindescription_h
#define _plugindescription_h

#define QUOTE(name) #name
#define STR(macro) QUOTE(macro)
#define AU_COCOA_VIEWFACTORY_STRING STR(AU_COCOA_VIEWFACTORY_NAME)
#define AU_COCOA_VIEW_STRING STR(AU_COCOA_VIEW_NAME)

// --- AU Plugin Cocoa View Names (flat namespace)
#define AU_COCOA_VIEWFACTORY_NAME AUCocoaViewFactory_67F4DAB0BC0A41AFB3273CBD6BDB8E53
#define AU_COCOA_VIEW_NAME AUCocoaView_67F4DAB0BC0A41AFB3273CBD6BDB8E53

// --- BUNDLE IDs (MacOS Only)
const char* kAAXBundleID = "wisefx.aax.HelloBiquad.bundleID";
const char* kAUBundleID = "wisefx.au.HelloBiquad.bundleID";
const char* kVST3BundleID = "wisefx.vst3.HelloBiquad.bundleID";

// --- Plugin Names
const char* kPluginName = "HelloBiquad";
const char* kShortPluginName = "HelloBiquad";
const char* kAUBundleName = "HelloBiquad";
const char* kAAXBundleName = "HelloBiquad";
const char* kVSTBundleName = "HelloBiquad";

// --- bundle name helper
inline static const char* getPluginDescBundleName()
{
#ifdef AUPLUGIN
	return kAUBundleName;
#endif

#ifdef AAXPLUGIN
	return kAAXBundleName;
#endif

#ifdef VSTPLUGIN
	return kVSTBundleName;
#endif

	// --- should never get here
	return kPluginName;
}

// --- Plugin Type
const pluginType kPluginType = pluginType::kFXPlugin;

// --- VST3 UUID
const char* kVSTFUID = "{67F4DAB0-BC0A-41AF-B327-3CBD6BDB8E53}";

// --- 4-char codes
const int32_t kFourCharCode = 'nRdW';
const int32_t kAAXProductID = 'HWaJ';
const int32_t kManufacturerID = 'WISE';

// --- Vendor information
const char* kVendorName = "WiseFX";
const char* kVendorURL = "www.wisefx.com";
const char* kVendorEmail = "john@wisefx.com";

// --- Plugin Options
const bool kProcessFrames = true;
const uint32_t kBlockSize = DEFAULT_AUDIO_BLOCK_SIZE;
const bool kWantSidechain = false;
const uint32_t kLatencyInSamples = 0;
const double kTailTimeMsec = 0.000;
const bool kVSTInfiniteTail = false;
const bool kVSTSAA = false;
const uint32_t kVST3SAAGranularity = 1;
const uint32_t kAAXCategory = 0;

#endif



#pragma once

#include <queue>
#include <Camera.h>
#include <VimbaSystem.h>

using namespace AVT::VmbAPI;

class AVCamera
{
public:
	AVCamera();
	~AVCamera();
	
	void SetID(std::string id);
	std::string GetID();

	double GetExposure();
	double GetAmplifierGain();
	
	int SetExposure(double _exposure);
	int SetAmplifierGain(double _ampgain);

	bool IsOpened();
	bool IsStreaming();
	bool IsRecording();

	void StartStreamThread();
	void StopStreamThread();
	

private:
	bool is_opened;
	bool is_streaming;
	bool is_recording;

	std::string camera_id;

	double current_exposure;
	double current_ampgain;
	VimbaSystem& vimba;
	CameraPtr camera_ptr;
	FeaturePtr feature_ptr;
};

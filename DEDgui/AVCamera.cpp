#include "AVCamera.h"

AVCamera::AVCamera()
{
	this->is_opened = false;
	this->is_recording = false;
	this->is_streaming = false;
	this->current_ampgain = 0.0;
	this->current_exposure = 0.0;
}

AVCamera::~AVCamera()
{

}

// Getters and Setters
void AVCamera::SetID(std::string id)
{
	this->camera_id = id;
}

std::string AVCamera::GetID()
{
	return std::string();
}

double AVCamera::GetExposure()
{
	return this->current_exposure;
}

double AVCamera::GetAmplifierGain()
{
	return this->current_ampgain;
}

int AVCamera::SetExposure(double _exposure)
{
	if (this->is_opened)
	{
		// Set the exposure time, and then readback 
		// for setting the internal variable.
		this->camera_ptr->GetFeatureByName("ExposureTime",
			this->feature_ptr);
		this->feature_ptr->SetValue(_exposure);
		this->camera_ptr->GetFeatureByName("ExposureTime",
			this->feature_ptr);
		this->feature_ptr->GetValue(this->current_exposure);
		return 0;
	}
	this->current_exposure = 0.0;
	return -1;
}

int AVCamera::SetAmplifierGain(double _ampgain)
{
	if (this->is_opened)
	{
		this->camera_ptr->GetFeatureByName("Gain",
			this->feature_ptr);
		this->feature_ptr->SetValue(_ampgain);
		this->camera_ptr->GetFeatureByName("Gain",
			this->feature_ptr);
		this->feature_ptr->GetValue(this->current_ampgain);
		return 0;
	}
	this->current_ampgain = 0.0;
	return -1;
}

bool AVCamera::IsOpened()
{
	return this->is_opened;
}

bool AVCamera::IsStreaming()
{
	return this->is_streaming;
}

bool AVCamera::IsRecording()
{
	return this->is_recording;
}

// Functions

void AVCamera::StartStreamThread()
{
	if (!VmbErrorSuccess == this->vimba.OpenCameraByID(this->GetID().c_str(),
		VmbAccessModeFull, this->camera_ptr))
	{
		this->camera_ptr->StartContinuousImageAcquisition()
		return;
	}

}

void AVCamera::StopStreamThread()
{
	return;
}
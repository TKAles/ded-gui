#include "CameraSystem.h"

CameraSystem::CameraSystem()
{
	this->vision_instance.Startup();
}

/*
	SearchForCameras - Looks for any attached Allied Vision Cameras and populates
					   the list box with their IDs.
*/
int CameraSystem::SearchForCameras()
{
	CameraPtrVector _found_cameras;
	if (VmbErrorSuccess == this->vision_instance.GetCameras(_found_cameras))
	{
		for(auto& current_cam : _found_cameras)
		{
			std::string _camid;
			if (VmbErrorSuccess == current_cam->GetID(_camid))
			{
				this->FoundIDs.push_back(_camid);
				this->AvailableCameras.push_back(AVCamera());
			}
			this->AvailableCameras.back().SetID(_camid);
		}
		return 0;
	}
	else {
		return -1;
	}
}

CameraSystem::~CameraSystem()
{
	this->vision_instance.Shutdown();
}

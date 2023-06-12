#pragma once
#include "AVCamera.h"

class CameraSystem
{
public:
	CameraSystem();
	~CameraSystem();

	std::vector<AVCamera> AvailableCameras;
	std::vector<std::string> FoundIDs;
	int SearchForCameras();

	
private:
	VimbaSystem& vision_instance = VimbaSystem::GetInstance();

};


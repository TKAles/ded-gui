#pragma once
#include "IFrameObserver.h"

using namespace AVT;
using namespace AVT::VmbAPI;

AVFrameObserver(AVT::VmbAPI::CameraPtr pCamera) :
	IFrameObserver(pCamera) {}

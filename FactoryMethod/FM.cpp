#include <iostream>

#include "HiringManager.h"
#include "IInterviewer.h"
#include "OtherManager.h"

#include "CommunityExecutive.h"
#include "Application.h"
#include "Developer.h"

int main()
{
    HiringManager* devManager = new OtherManager<Developer>();
    devManager->takeInterview();

    HiringManager* marketingManager = new OtherManager<CommunityExecutive>();
    marketingManager->takeInterview();

    HiringManager* appManager = new OtherManager<Application>();
    appManager->takeInterview();

	return 0;
}
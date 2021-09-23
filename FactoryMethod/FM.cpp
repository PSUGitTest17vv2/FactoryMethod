#include <iostream>

#include "HiringManager.h"
#include "IInterviewer.h"
#include "OtherManager.h"

#include "Developer.h"
#include "CommunityExecutive.h"

int main()
{
    HiringManager* devManager = new OtherManager<Developer>();
    devManager->takeInterview();

    HiringManager* marketingManager = new OtherManager<CommunityExecutive>();
    marketingManager->takeInterview();

	return 0;
}
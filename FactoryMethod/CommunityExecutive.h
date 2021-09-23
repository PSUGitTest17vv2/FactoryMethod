#pragma once
#ifndef COMMUNITYEXECUTIVE_H_
#define COMMUNITYEXECUTIVE_H_

#include "IInterviewer.h"
#include <iostream>

class CommunityExecutive : public IInterviewer
{
public:
    void askQuestions() override {
        std::cout << "Asking about community building!" << std::endl;
    }
};

#endif // !COMMUNITYEXECUTIVE_H_

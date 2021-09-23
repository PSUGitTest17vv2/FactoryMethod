#pragma once
#ifndef APPLICATION_H_
#define APPLICATION_H_

#include "IInterviewer.h"
#include <iostream>

class Application : public IInterviewer
{
public:
    void askQuestions() override {
        std::cout << "Asking about app development!" << std::endl;
    }
};

#endif // !APPLICATION_H_

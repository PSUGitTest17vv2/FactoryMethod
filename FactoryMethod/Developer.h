#pragma once
#ifndef DEVELOPER_H_
#define DEVELOPER_H_

#include "IInterviewer.h"
#include <iostream>

class Developer : public IInterviewer
{
public:
    void askQuestions() override {
        std::cout << "Asking about design patterns!" << std::endl;
    }
};

#endif // !DEVELOPER_H_

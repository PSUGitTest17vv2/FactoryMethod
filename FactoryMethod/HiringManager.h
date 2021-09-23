#pragma once
#ifndef HIRINGMANAGER_H_
#define HIRINGMANAGER_H_

#include "IInterviewer.h"

class HiringManager
{
public:
    void takeInterview() {
        IInterviewer* interviewer = this->makeInterviewer();
        interviewer->askQuestions();
    }

protected:
    virtual IInterviewer* makeInterviewer() = 0;
};

#endif // !HIRINGMANAGER_H_

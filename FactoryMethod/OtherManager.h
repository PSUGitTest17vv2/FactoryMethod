#pragma once
#ifndef OTHERMANAGER_H_
#define OTHERMANAGER_H_

#include "IInterviewer.h"
#include "HiringManager.h"

template <typename Interviewer>
class OtherManager : public HiringManager {
protected:
    IInterviewer* makeInterviewer() override {
        return new Interviewer();
    }
};

#endif // !OTHERMANAGER_H_

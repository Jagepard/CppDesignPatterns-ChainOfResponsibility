#pragma once
#include <iostream>

class HandlerInterface
{
    protected:
        int priority;
    public:
        virtual void execute() = 0;
        virtual int getPriority();
};

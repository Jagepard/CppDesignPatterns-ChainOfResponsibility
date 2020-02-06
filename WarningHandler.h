#pragma once
#include "HandlerInterface.h"

class WarningHandler : public HandlerInterface
{
    public:
        virtual void execute() override; // Унаследовано через HandlerInterface
};

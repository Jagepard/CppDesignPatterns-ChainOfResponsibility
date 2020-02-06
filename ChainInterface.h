#pragma once
#include "HandlerInterface.h"

class ChainInterface
{
    public:
        virtual void execute() = 0;
        virtual void addToChain(HandlerInterface* handler) = 0;
};

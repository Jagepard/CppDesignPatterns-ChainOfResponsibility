#pragma once
#include "HandlerInterface.h"

class ChainInterface
{
    public:
        virtual void execute(int handlerPriority) = 0;
        virtual void addToChain(HandlerInterface* handler) = 0;
};

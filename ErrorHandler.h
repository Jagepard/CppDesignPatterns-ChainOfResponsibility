#pragma once
#include "HandlerInterface.h"

class ErrorHandler : public HandlerInterface
{
    public:
        virtual void execute() override;
        ErrorHandler(int handlerPriority);
};

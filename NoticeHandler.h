#pragma once
#include "HandlerInterface.h"

class NoticeHandler : public HandlerInterface
{
    public:
        virtual void execute() override;
        NoticeHandler(int handlerPriority);
};

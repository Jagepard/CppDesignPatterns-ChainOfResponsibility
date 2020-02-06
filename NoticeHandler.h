#pragma once
#include "HandlerInterface.h"

class NoticeHandler : public HandlerInterface
{
    public:
        virtual void execute() override; // Унаследовано через HandlerInterface
};

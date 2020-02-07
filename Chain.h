#pragma once
#include <map>
#include "ChainInterface.h"

class Chain : public ChainInterface
{
    private:
        std::map<int, HandlerInterface*> chain;
    public:
        virtual void execute(int handlerName) override;
        virtual void addToChain(HandlerInterface *handler) override;
};

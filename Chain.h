#pragma once
#include <map>
#include <string>
#include "ChainInterface.h"

class Chain : public ChainInterface
{
    private:
        std::map<std::string, HandlerInterface*> chain;
    // Унаследовано через ChainInterface
    public:
        virtual void execute() override;
        virtual void addToChain(HandlerInterface* handler) override;
};

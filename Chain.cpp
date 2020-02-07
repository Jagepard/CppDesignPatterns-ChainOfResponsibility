#include <iostream>
#include "Chain.h"

void Chain::execute(int handlerPriority)
{
    try {
        if (chain.size() == 0) {
            throw "The chain is empty";
        }
    }
    catch (const char* exception) 
    {
        std::cerr << exception << std::endl;
    }

    try {
        if (chain.find(handlerPriority) != chain.end()) {
            for (std::pair<int, HandlerInterface*> element : chain)
            {
                element.second->execute();

                if (element.first == handlerPriority) {
                    return;
                }
            }
        }

        throw "Handler does not exist in the chain";
    }
    catch (const char* exception)
    {
        std::cerr << exception << std::endl;
    }
}

void Chain::addToChain(HandlerInterface *handler)
{
    int handlerPriority = handler->getPriority();

    try {
        if (chain.find(handlerPriority) != chain.end()) {
            throw "Handler already exists";
        }
    } catch (const char* exception)
    {
        std::cerr << handlerPriority << ": " << exception << std::endl;
    }

    chain.insert(std::make_pair(handlerPriority, handler));
}

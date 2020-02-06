#include <iostream>
#include <string>
#include "Chain.h"

void Chain::execute()
{
    /*
    for (std::map<int, MyClass>::iterator it = Map.begin(); it != Map.end(); ++it)
    {
        it->second.Method();
    }
    */
}

void Chain::addToChain(HandlerInterface* handler)
{
    std::string handlerName = typeid(&handler).name();

    std::cout << handlerName << std::endl;

    handler->execute();


    try {
        if (chain.find(handlerName) != chain.end()) {
            throw "Handler already exists";
        }
    } catch (const char* exception) // обработчик исключений типа const char*
    {
        std::cerr << handlerName << ": " << exception << std::endl;
    }

    chain.insert(std::make_pair(handlerName, handler));

    /*
    std::cout << handlerName << std::endl;

    std::map<std::string, Scene*> Scenes;

    Scenes.insert(std::make_pair("Scene_Branding", new handler));

    chain.insert(std::make_pair(handlerName, handler));*/
}

#include <iostream>
#include "WarningHandler.h"

void WarningHandler::execute()
{
    std::cout << typeid(*this).name() << std::endl;
}

WarningHandler::WarningHandler(int handlerPriority)
{
    priority = handlerPriority;
}

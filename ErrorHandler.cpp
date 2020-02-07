#include <iostream>
#include "ErrorHandler.h"

void ErrorHandler::execute()
{
    std::cout << typeid(*this).name() << std::endl;
}

ErrorHandler::ErrorHandler(int handlerPriority)
{
    priority = handlerPriority;
}

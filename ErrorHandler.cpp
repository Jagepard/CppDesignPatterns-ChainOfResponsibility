#include <iostream>
#include "ErrorHandler.h"

void ErrorHandler::execute()
{
    std::cout << typeid(ErrorHandler).name() << std::endl;
}

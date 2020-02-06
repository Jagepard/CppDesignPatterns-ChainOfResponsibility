#include <iostream>
#include "WarningHandler.h"

void WarningHandler::execute()
{
    std::cout << typeid(WarningHandler).name() << std::endl;
}

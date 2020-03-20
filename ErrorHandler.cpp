/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include <iostream>
#include "ErrorHandler.h"

void ErrorHandler::execute()
{
    std::cout << typeid(*this).name() << std::endl;
}

ErrorHandler::ErrorHandler(int handlerPriority)
{
    _priority = handlerPriority;
}

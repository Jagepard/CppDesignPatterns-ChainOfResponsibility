/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include <iostream>
#include "WarningHandler.h"

void WarningHandler::execute()
{
    std::cout << typeid(*this).name() << std::endl;
}

WarningHandler::WarningHandler(int handlerPriority)
{
    _priority = handlerPriority;
}

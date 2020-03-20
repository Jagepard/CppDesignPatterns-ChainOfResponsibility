/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include <iostream>
#include "NoticeHandler.h"

void NoticeHandler::execute()
{
    std::cout << typeid(*this).name() << std::endl;
}

NoticeHandler::NoticeHandler(int handlerPriority)
{
    _priority = handlerPriority;
}

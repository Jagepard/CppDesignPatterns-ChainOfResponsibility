#include <iostream>
#include "NoticeHandler.h"

void NoticeHandler::execute()
{
    std::cout << typeid(*this).name() << std::endl;
}

NoticeHandler::NoticeHandler(int handlerPriority)
{
    priority = handlerPriority;
}

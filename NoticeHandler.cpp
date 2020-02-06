#include <iostream>
#include "NoticeHandler.h"

void NoticeHandler::execute()
{
    std::cout << typeid(NoticeHandler).name() << std::endl;
}

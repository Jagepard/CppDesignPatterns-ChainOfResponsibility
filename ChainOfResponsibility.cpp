#include <iostream>
#include "NoticeHandler.h"
#include "WarningHandler.h"
#include "ErrorHandler.h"
#include "Chain.h"

int main()
{
    Chain chain;
    NoticeHandler notice(1);
    WarningHandler warning(2);
    ErrorHandler error(3);

    chain.addToChain(&notice);
    chain.addToChain(&warning);
    chain.addToChain(&error);

    chain.execute(1);
    chain.execute(2);
    chain.execute(3);
}

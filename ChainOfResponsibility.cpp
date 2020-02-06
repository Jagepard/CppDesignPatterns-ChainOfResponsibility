#include <iostream>
#include "NoticeHandler.h"
#include "WarningHandler.h"
#include "ErrorHandler.h"
#include "Chain.h"

int main()
{
    Chain chain;

    chain.addToChain(new NoticeHandler);
    chain.addToChain(new WarningHandler);
    chain.addToChain(new ErrorHandler);
}

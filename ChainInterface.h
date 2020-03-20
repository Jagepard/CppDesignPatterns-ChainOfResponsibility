#pragma once

/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include "HandlerInterface.h"

class ChainInterface
{
    public:
        virtual void execute(int handlerPriority) = 0;
        virtual void addToChain(HandlerInterface* handler) = 0;
};

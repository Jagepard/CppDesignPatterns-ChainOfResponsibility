#pragma once

/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include "ChainInterface.h"

class AbstractHandler : ChainInterface
{
    protected:
        AbstractHandler *_nextHandler;
    public:
        AbstractHandler *setNext(AbstractHandler *nextHandler);
        virtual void execute(std::string request) override;
};

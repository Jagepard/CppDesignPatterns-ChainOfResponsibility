#pragma once

/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include "HandlerInterface.h"

class ErrorHandler : public HandlerInterface
{
    public:
        virtual void execute() override;
        ErrorHandler(int handlerPriority);
};

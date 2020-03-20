#pragma once

/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include "HandlerInterface.h"

class WarningHandler : public HandlerInterface
{
    public:
        virtual void execute() override;
        WarningHandler(int handlerPriority);
};

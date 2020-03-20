#pragma once

/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include "HandlerInterface.h"

class NoticeHandler : public HandlerInterface
{
    public:
        virtual void execute() override;
        NoticeHandler(int handlerPriority);
};

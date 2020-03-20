#pragma once

/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include <iostream>

class HandlerInterface
{
    protected:
        int _priority;
    public:
        virtual void execute() = 0;
        virtual int getPriority();
};

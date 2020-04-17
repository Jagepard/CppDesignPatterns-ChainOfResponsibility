#pragma once

/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include <iostream>

class ChainInterface
{
    public:
        virtual void execute(std::string request) = 0;
};

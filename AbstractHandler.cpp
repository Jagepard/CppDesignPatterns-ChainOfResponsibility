/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include "AbstractHandler.h"
#include <iostream>

AbstractHandler* AbstractHandler::setNext(AbstractHandler* nextHandler)
{
    this->_nextHandler = nextHandler;
    return nextHandler;
}

void AbstractHandler::execute(std::string request)
{
    if (request == typeid(*this).name()) {
        std::cout << typeid(*this).name() << std::endl;
        return;
    }

    if (&_nextHandler == nullptr) {
        throw request + " does not exist in the chain";
    }

    _nextHandler->execute(request);
}

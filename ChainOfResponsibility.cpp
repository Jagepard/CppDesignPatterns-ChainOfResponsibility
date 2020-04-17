/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include "NoticeHandler.h"
#include "WarningHandler.h"
#include "ErrorHandler.h"

int main()
{
    NoticeHandler notice;
    WarningHandler warning;
    ErrorHandler error;

    notice.setNext(&warning)->setNext(&error);
    notice.execute(typeid(notice).name());
    notice.execute(typeid(warning).name());
    notice.execute(typeid(error).name());
}

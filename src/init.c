#include <logger.h>

void bindLogger(void (*func) (const char* str)) {

    logger = func;

}

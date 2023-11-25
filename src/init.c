#include <logger.h>

void bindLogger(void (*func) (const char* str)) {

    logger(func);

}

loggerfunc logger(void (*func) (const char* str)) {
    static void (*logfunc) (const char* str);
    if (func != NULL) {
        logfunc = func;
    }
    return logfunc;
}

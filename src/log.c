#include <logger.h>

void logInfo(const char* str) {

    logger(NULL)(str);

}
void logDebug(const char* str) {

    #ifdef DEBUG
        logger(NULL)(str);
    #endif

}
void logWarning(const char* str) {

    const char* fstr;

    sprintf(fstr, "Warning: %s", str);

    logger(NULL)(fstr);

}
void logError(int code, const char* str) {

    const char* fstr;
    sprintf(fstr, "Error: %d, %s", code, str);

    logger(NULL)(fstr);

}
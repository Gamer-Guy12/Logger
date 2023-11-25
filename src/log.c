#include <logger.h>

void logInfo(const char* str) {

    (*logger)(str);

}
void logDebug(const char* str) {

    #ifdef DEBUG
        (*logger)(str);
    #endif

}
void logWarning(const char* str) {

    const char* fstr;

    sprintf(fstr, "Warning: %s", str);

    (*logger)(fstr);

}
void logError(int code, const char* str) {

    const char* fstr;
    sprintf(fstr, "Error: %d, %s", code, str);

    (*logger)(fstr);

}
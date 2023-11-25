#include <defaults.h>

void fileLog(const char* str) {

    static FILE* file = NULL;
    const char* dir = "logs";
    time_t ctime;
    time(&ctime);

    if (file == NULL) {
        const char* name;

        sprintf(name, "%slog_%ld.txt", dir, (long)ctime);
    }

}

void cmdLog(const char* str) {

    printf("%s\n", str);

}
#include <defaults.h>

void fileLog(const char* str) {

    static FILE* file = NULL;
    const char* dir = "logs";
    static time_t ctime;
    if (ctime == NULL) {
        time(&ctime);

    }

    const char* name;

    sprintf(name, "%s/log_%ld.txt", dir, (long)ctime);
    file = fopen(name, "a");

    fprintf(file, "%s\n", str);
    fclose(file);

}

void cmdLog(const char* str) {

    printf("%s\n", str);

}
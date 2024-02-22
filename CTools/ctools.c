#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include "./ctools.h"

#define on if
#define elif else if
#define mainEntry int main()

typedef char *str, *string, character;
typedef int num, number;

int noError() {
    return 0;
}

int error() {
    return 1;
}

void put(enum DataType type, ...) {
    va_list args;
    va_start(args, type);

    switch (type) {
        case INT:
            printf("%d\n", va_arg(args, int));
            break;
        case FLOAT:
            printf("%.2f\n", (float)va_arg(args, double));
            break;
        case DOUBLE:
            printf("%.2lf\n", va_arg(args, double));
            break;
        case CHAR:
            printf("%c\n", (char)va_arg(args, int));
            break;
        case STRING:
            printf("%s\n", va_arg(args, char *));
            break;
        case LONG:
            printf("%ld\n", va_arg(args, long));
            break;
        case BOOL:
            printf("%d\n", va_arg(args, int));
            break;
        case STR:
            printf("%s\n", va_arg(args, char *));
            break;
        default:
            printf("Unsupported type\n");
    }

    va_end(args);
}
#ifndef CTOOLS_H
#define CTOOLS_H

#include <stdarg.h>
#include <stdbool.h>

#define on if
#define elif else if
#define mainEntry int main()

typedef char *str, *string, character;
typedef int num, number;

enum DataType {
    INT,
    FLOAT,
    DOUBLE,
    CHAR,
    STRING,
    LONG,
    BOOL,
    STR
};

void put(enum DataType type, ...);
int noError();
int error();

#endif
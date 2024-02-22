#include <stdio.h>
#include "./CTools/ctools.c"

mainEntry {
    string x = "Hello, world!";
    put(STRING, x);
    noError();
}
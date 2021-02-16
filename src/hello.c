#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// hello return a heap allocated string containing the name appended 
// to "hello " and followed by "!".
char *hello(char *name) {
    char *buf = malloc(7+strlen(name));
    sprintf(buf, "hello %s!", name);
    return buf;
}

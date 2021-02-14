#include <stdio.h>

#ifndef __has_builtin
#define __has_builtin(x) 0
#endif

#if __has_builtin (addition)
#define addition_fix_y(x) addition(x, 10)
#endif

int addition(int x, int y) {
    return x + y;
}

// typedef unsigned long size_t;
// type is an integer value from 0 to 3.
// size_t __builtin_object_size(void * ptr, int type);

int main() {

    printf("addition_fix_y(20) = %d\n", addition_fix_y(20));
    return 0;
}
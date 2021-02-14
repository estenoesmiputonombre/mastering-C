#include <stdio.h>
#include "library.h"

#define BUFFSIZE 4096
#define SUM(a, b) (a + b)

// Preprocessing is where the macros are expanded. Conditional compilation and inclusion of header files.
// preprocessing is achieved with the command: gcc -E {files here...}
int main() {

    printf("This is the buffer size: %d\n", BUFFSIZE);

    printf("1 + 2 = %d\n", SUM(1, 2));

    printf("2 * 3 = %d\n", multiply(2, 3));

    return 0;
}
#include <stdio.h>

int main() {
    int *pc, c;
    c = 5;
    pc = &c; // pc points to C

    printf("var: %p\n", pc);

    return 0;
}

// printf formatters: 
// %p - pointer, %d/%i - int, %s - string, %u - unsigned, %f - float, %c - character
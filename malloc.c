// Why do we need malloc and free?

// On Windows, the typical maximum size for a stack is 1MB, whereas it is 8MB on a typical modern Linux, although those values are adjustable in various ways. 
// If the sum of your stack variables (including low-level overhead such as return addresses, stack-based arguments, return value placeholders and alignment bytes) 
// in the entire call stack exceeds that limit, you get a stack overflow, which typically takes down your program without any chance at recovery.

// If I run ulimit -a and check stack size I get:
// stack size (kbytes, -s) 8192


int main() {

    int *x = malloc(sizeof(int));
    *x = 10;
}
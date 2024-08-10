// How to get my kilobyte limit
// ulimit -s
// 8192

#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;

    // kilobyte is 1024 bytes
    char x1[4000*1024];
    std::fill(x1, x1+1000, '0');

    std::cout << "1 bytes per char. 4000 kilobytes\n";

    char x2[4000*1024];
    std::fill(x2, x2+1000, '0');

    std::cout << "8000 kb of char stored\n";

    // If we do this again I get a segfault on my machine. 8000kb is near da limit.
    // int x3[200*1000];
    // std::fill(x3, x3+1000, 0);

    return 0;
}


#include <stdio.h>

int main() {
    // pointer is a variable
    // pointer take memory address not value
    // A variable that store the address of another variable
    
    int x = 10;
    printf("%d\n", x);
    
    // pointer
    int* p = &x;
    printf("%p\n", p); // 0x7ffef2027f4c

    // dereference
    printf("%d\n", *p); // 10

    *p = 500; // value assign by dereference
    printf("%d\n", *p); // 500
    printf("%d\n", x); // 500

    return 0;
}
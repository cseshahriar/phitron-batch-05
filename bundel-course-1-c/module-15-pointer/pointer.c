#include <stdio.h>
// pointer is other var memory address
// dereference: dereference krle value paojay 

int main() {
    int x = 10; // variable
    printf("x %d\n", x);

    int * ptr = &x; // take  x var address, it's a pointer
    printf("ptr %p\n", ptr);
    printf("ptr %d\n", *ptr); // dereference
    
    // x = 50
    *ptr = 50; // dereference

    printf("x %d\n", x);

    int * ptr2 = ptr; // (or &x)
    *ptr2 = 100;
    printf("ptr %p\n", ptr2);
    printf("x %d\n", x);

    return 0;
}

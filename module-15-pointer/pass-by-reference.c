#include <stdio.h>

void fun(int* p) {
    *p = 50; // call by value
    printf("x %d in fun \n", *p);
    printf("x %p in fun addr \n", p);
}

void fun2(int *y) {
    printf("y ar address fun2 %p\n", y);
    printf("main y value inside fun2 %d\n", *y);
    *y = 500; // dereference
}

int main() {
    // pass by reference
    int x = 10;
    fun(&x);
    printf("x %d in main\n", x);
    printf("x %p in main addr \n", x);

    // call by reference
    int y = 100;
    printf("y ar address main %p\n", &x);
    fun2(&y);

    return 0;
}

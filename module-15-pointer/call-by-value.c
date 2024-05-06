#include <stdio.h>

void fun(int x) {
    x = 100;
}

void fun2(int y) {
    y = 200;
    printf("fun2 y ar value %d\n", y);
}

int main() {
    // pass by value
    int x = 10;
    fun(x);
    x = 200;
    printf("%d\n", x);

    // call by value
    int y = 10;
    // printf("Main y ar value %d\n", y);
    fun2(y); // pass value
    printf("Main y ar value %d\n", y);
    return 0;
}
#include <stdio.h>

void fun() {
    printf("Hello world\n");
    fun(); // infinity
}

int main() {
    fun();
    return 0;
}
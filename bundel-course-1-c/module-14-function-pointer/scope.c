#include <stdio.h>
// global scope
int s = 200;

void fun(void) {
    int s = 100;  // local scope
    printf("fun %d\n", s);
}

int main() {
    fun();
    printf("main %d\n", s); // 200 
    return 0;
}
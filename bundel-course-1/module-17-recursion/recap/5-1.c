#include <stdio.h>

void fun(int i) {
    if(i == 0) return; // stop or base case
    printf("%d\n", i);
    fun(i - 1); // infinity
}

int main() {
    fun(5); // start
    return 0;
}
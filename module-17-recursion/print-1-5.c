#include <stdio.h>

void fun(int i) {
    if(i == 6) return;
    printf("%d\n", i); // 1, 2, 3, 4, 5
    fun(i + 1); 
    // firs add call stack then one by one release from top
}

int main() {
    fun(1);
    return 0;
}
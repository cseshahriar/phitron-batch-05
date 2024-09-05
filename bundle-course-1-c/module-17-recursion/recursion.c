#include <stdio.h>
// call sell
void fun() {
    printf("Hello\n");
    fun();
    // infinity
}

int main() {
    fun();    
    return 0;
}
#include <stdio.h>

void fun(int i, int n) {
    if(i == n+1) return;
    fun(i+1, n);
    if(i != 1) {
        printf("%d ", i);
    } else {
        printf("%d", i);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    fun(1, n);
    return 0;
}
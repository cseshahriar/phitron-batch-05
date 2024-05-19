#include <stdio.h>

void print_text(int i, int n) {
    if(i == n + 1) return; // base case or stop
    printf("I love Recursion\n");
    print_text(i+1, n);
}

int main() {
    int n;
    scanf("%d", &n);
    print_text(1, n);
    return 0;
}
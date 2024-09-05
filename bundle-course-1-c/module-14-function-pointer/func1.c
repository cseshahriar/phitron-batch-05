#include <stdio.h>

int sum(int x, int y) {
    int sum = x + y;
    return sum;
}

int main() {
    int result = sum(1, 2);
    printf("%d\n", result);
    return 0;
}
#include <stdio.h>

int main() {
    long int a, b, result;
    scanf("%ld %ld", &a, &b);
    result = a - b;
    if(result >= 0) {
        printf("%d\n", result);
    } else {
        printf("0\n");
    }
    return 0;
}
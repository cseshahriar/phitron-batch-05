#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    float div_a = a * 1.0;
    float div_result = div_a / b ;
    printf("%d / %d = %0.2f", a, b, div_result);
    return 0;
}
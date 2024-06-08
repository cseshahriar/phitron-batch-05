// operator is symbol, make some operation with 2 number
// +, -, *, /, %
#include <stdio.h>

int main() {
    int a = 3, b = 20, sum = 0;
    
    sum = a + b;
    printf("Sum is %d + %d: %d", a, b, sum);

    float div = b * 1.0 / a;
    printf("\ndiv of %d / %d %f", b, a, div); // result is 6  instead of 6.6
    
    int mod = a % b;
    printf("\nmod %d", mod);
    return 0;
}
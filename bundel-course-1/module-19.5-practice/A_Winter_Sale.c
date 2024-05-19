#include <stdio.h>

int main() {
    // p = discount price / (1 - discount percentage/100) 
    float x, p; // x is discount percent, p is discount amount
    scanf("%f %f", &x, &p);
    float original_price = p / (1 - x / 100);
    printf("%0.2f\n", original_price);
    return 0;
}
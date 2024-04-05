// 1-7 Why We Need to Take Input Animated
// 1-8 How to Take Input in C
#include <stdio.h>

int main() {
    float f;
    char c;
    int a, b, sum=0;
    
    printf("Please Enter values for a nd b, c, f\n");
    scanf("%d %d %c %f", &a, &b, &c, &f);
    sum = a + b;

    printf("\nsum is %d ", sum);
    printf("c is %c ", c);
    printf("f is %f \n", f);

    return 0;
}

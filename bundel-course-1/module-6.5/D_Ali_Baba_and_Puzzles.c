#include <stdio.h>
// https://www.freecodecamp.org/news/data-types-in-c-integer-floating-point-and-void-explained/
int main() {
    long long int a, b, c;
    long long int d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    if(
        (a + b * c) == d || (a + b - c) == d || 
        (a - b + c) == d || (a - b * c) == d || 
        (a * b + c) == d || (a * b - c) == d
    ) 
        printf("YES\n");
    else 
        printf("NO\n");

    return 0;
}
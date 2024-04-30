#include <stdio.h>
#include <math.h>

int main() {
    // ceil
    // floor
    // pow
    // sqrt
    // round
    // abs
    int x;
    scanf("%d", &x);
    
    int ans = ceil(x);
    printf("%d", ans); // 3.9 = 4

    ans = round(3.2);
    printf("%d", ans);

    ans = round(3.5);
    printf("%d", ans); // 4
    
    
    double ans = sqrt(x);
    printf("%lf", ans); // 4

    
    ans = pow(2,3); // 8

    return 0;
}
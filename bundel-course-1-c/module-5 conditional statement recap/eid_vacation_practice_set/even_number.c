#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, i, a, b, c, d, e, sum;
    scanf("%d", &n);
    for(i=2; i <= n; i ++) {
        sum = 0;
        a = i;
        b = a + 2;
        c = b + 2;
        d = c + 2;
        e = d + 2;
        sum = a + b + c + d + e;
        if(sum == n) 
            printf("%d %d %d %d %d", a, b, c, d,e);
    }
    return 0;
}
#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main() {

    int n, i, a, b, c, d, sum;

    scanf("%d", &n);

    for(i=1; i <= n; i ++) {
        sum = 0;
        a = i;
        b = a + 2;
        c = b + 2;
        d = c + 2;
        sum = a + b + c + d ;
        if(sum == n) 

            printf("%d %d %d %d", a, b, c, d);

    }
    return 0;
}
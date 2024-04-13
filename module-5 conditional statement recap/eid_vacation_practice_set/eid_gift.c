#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long int n;
    int m;
    scanf("%ld %d", &n, &m);
    int r = 0;
    int div = 0;
    r = n % m;
    div = n  / m;
    printf("%d %d", div, r);
    return 0;
}
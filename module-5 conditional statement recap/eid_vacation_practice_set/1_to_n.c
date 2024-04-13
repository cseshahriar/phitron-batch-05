#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int n;
    long int sum = 0;
    scanf("%ld", &n);
    if(n >=0) {
        sum = (n * (n+1)) / 2;

    }
    printf("%ld", sum);
    return 0;
}
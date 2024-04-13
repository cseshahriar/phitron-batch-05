#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long long int x;
    scanf("%lld", &x);
    long long int result = 0;
    result = x * 365;
    printf("%lld", result);
    return 0;
}
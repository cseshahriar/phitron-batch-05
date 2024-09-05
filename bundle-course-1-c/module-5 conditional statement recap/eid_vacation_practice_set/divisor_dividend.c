#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_divisor(int D, int Q, int R) {
    int divisor = (D - R) / Q;
    return divisor;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int D, Q, R;
    scanf("%d %d %d", &D, &Q, &R);
    int divisor = find_divisor(D, Q, R);
    printf("%d\n", divisor);
    return 0;
}
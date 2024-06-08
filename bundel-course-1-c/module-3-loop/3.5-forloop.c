#include <stdio.h>
// 3-5 Sum From 1 to N

int main() {
    // start, end, relation
    int i, n, sum = 0;
    scanf("%d", &n);
    for(i=0; i <= n; i++) {
        sum += i;
    }
    printf("sum is %d\n", sum);
    return 0;
}
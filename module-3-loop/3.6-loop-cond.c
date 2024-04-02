#include <stdio.h>
int main() {
    // start, end, relation
    int i, n, sum = 0;
    scanf("%d", &n);
    for(i=1; i <= n; i++) {
        if(i % 2 == 0) { // even
            sum += i;
            printf("%d - even", i);
        } else {
            printf("%d - odd", i);
        }
    }
    printf("sum is %d\n", sum);
    return 0;
}
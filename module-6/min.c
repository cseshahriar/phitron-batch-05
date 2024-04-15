#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int a, min = INT_MAX;

    for(i=1; i <= n; i++) {
        scanf("%d", &a);
        if(a < min)
            min = a;
    }
    printf("%d\n", max);
    return 0;
}
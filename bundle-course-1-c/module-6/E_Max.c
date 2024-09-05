#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int a, max = INT_MIN;
    for(i=1; i <= n; i++) {
        scanf("%d", &a);
        if(a > max)
            max = a;
    }
    printf("%d\n", max);
    return 0;
}
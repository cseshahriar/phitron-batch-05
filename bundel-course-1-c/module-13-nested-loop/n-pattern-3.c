#include <stdio.h>

int main() {
    int n, k, m = 1;
    scanf("%d", &n);
    int s = n;
    // my method
    for(int i = 1; i <= n; i++) {
        k = i;
        for(int j = 1; j <= k; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n");
    // pathan sir method
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            printf("%d ", j);
        }
        m++;
        printf("\n");
    }
    return 0;
}
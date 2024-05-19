#include <stdio.h>

int main() {
    int n, m, k=1;
    scanf("%d", &n);

    // pathan method
    for(int i = 0; i <= n; i++) {
        m = i;
        for(int j = 1; j <= m; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    // my method
    printf("\n\n");
    for(int i = 0; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            printf("*");
        }
        k++;
        printf("\n");
    }
    return 0;
}
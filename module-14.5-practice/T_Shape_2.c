#include <stdio.h>

int main() {
    int n, s, k;
    scanf("%d", &n);
    s = n - 1;  // space
    k = 1; // star

    for(int i = 1; i <= n; i++) {
        // line space print
        for(int j = 1; j <= s; j++) {
            printf(" ");
        }

        // start print
        for(int j = 1; j <= k; j++) {
            printf("*");
        }

        s--;
        k = k + 2;
        printf("\n");
    }

    return 0;
}
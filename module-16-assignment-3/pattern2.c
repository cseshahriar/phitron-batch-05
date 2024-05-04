#include <stdio.h>

int main() {
    int N, s;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) {
        s = N - i;
        for(int j = 1; j <= s; j++ ) {
            printf(" ");
        }
        for(int k = i; k >= 1; k--) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
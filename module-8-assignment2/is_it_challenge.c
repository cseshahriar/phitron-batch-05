#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if(N > 0) {
        for(int i = 1; i <= N; i++) {
            printf("%d ", i);
        }
    } else {
        int m;
        m = -1 * N; // - * - = +
        for(int i = m; i >= 1; i--) {
            printf("-%d ", i);
        }
        printf("0");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int T, N, X;
    scanf("%d", &T);

    int arr[T];

    for(int i = 0; i < T; i++ ) {
        scanf("%d", &N);
        int A[N];
        for(int j = 0; j < N; j++) {
            scanf("%d", &A[j]);
        }
        scanf("\n%d", &X);

        arr[i] = 0;
        for(int k = 0; k < N; k++) {
            if(A[k] == X) {
                arr[i] = 1;
                break;
            }
        }
    }

    for(int i = 0; i < T; i++) {
        if(arr[i] == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
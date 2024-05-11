#include <stdio.h>
#include <stdlib.h>


int main() {
    int T;
    scanf("%d", &T);
    int C[T][100];
    int n_arr[T];

    for(int t = 0; t < T; t++) {
        int N;
        scanf("%d\n", &N);
        int A[N], B[N];
        n_arr[t] = N;

        // reading input
        for(int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        // copy
        for(int i = 0; i < N; i++) {
            B[i] = A[i];
        }

        // ascending
        for(int i = 0; i < N - 1; i++) {
            for(int j = i + 1; j < N; j++) {
                if(B[i] > B[j]) {
                    int temp = B[i];
                    B[i] = B[j]; // small value shift to left
                    B[j] = temp; // big value shift to right
                }
            }
        }

        for(int i = 0; i < N; i++) {
            int value = A[i] - B[i];
            C[t][i] = value;
        }
        
    }
    
    // output
    for(int t = 0; t < T; t++) {
        int n = n_arr[t];
        for(int i = 0; i < n; i++) {
            printf("%d ", abs(C[t][i]));
        }
        printf("\n");
    }

    return 0;
}
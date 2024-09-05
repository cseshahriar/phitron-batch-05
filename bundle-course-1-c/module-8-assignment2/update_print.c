#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int size = N - 1;
    int A[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }        
    int X, V;
    scanf("%d %d", &X, &V);          
    A[X] = V;        
    for(int i = size; i >= 0; i--) {
        printf("%d ", A[i]);
    }                                                                                                                                                                                                                        
    return 0;
}
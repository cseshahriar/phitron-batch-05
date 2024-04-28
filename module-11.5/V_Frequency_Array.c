#include <stdio.h>

#define MAX_SIZE 100001

int main() {
    int N, M;
    int A[MAX_SIZE] = {0};
    
    // Read input
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        A[num]++;
    }
    
    // Print output
    for (int i = 1; i <= M; i++) {
        printf("%d\n", A[i]);
    }
    
    return 0;
}
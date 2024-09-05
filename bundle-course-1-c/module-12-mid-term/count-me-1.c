#include <stdio.h>

int main() {
    int N;
    scanf("%d\n", &N);
    int A[N];
    int countA = 0, countB = 0;

    for(int i = 0; i < N; i++) {
        long long int element;
        scanf("%lld", &element);
        A[i] = element; 
    }

    for(int i = 0; i < N; i++) {
        if(A[i] != 0) {
            if (A[i] % 2 == 0)
                countA++;
            
            if (A[i] % 3 == 0 && A[i] % 2 != 0)
                countB++;
        }
    }

    printf("%d %d\n", countA, countB);
    return 0;
}
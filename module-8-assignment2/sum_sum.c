#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int V[N];
    int unsigned_sum=0, signed_sum=0; 
    for(int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }   

    for(int i = 0; i < N; i++) {
        if(V[i] > 0) {
            unsigned_sum += V[i];
        } else {
            signed_sum += V[i];
        }
    }
    printf("%d %d", unsigned_sum, signed_sum);                                                                                                                                                                                                                                                       
    return 0;
}
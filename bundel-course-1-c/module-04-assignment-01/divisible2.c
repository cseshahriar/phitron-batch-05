#include <stdio.h>

int main() {
    int i;
    long long int N;
    scanf("%lld", &N);
    if(N >= 0) {
        for(i=1; i <= N; i++) {
            if(i % 3 == 0 && i % 7 == 0) {
                printf("%d\n", i);
            } 
        }
    }
    return 0;
}
#include <stdio.h>

int main() {
    int n, m, i;
    scanf("%d", &n);
    int even = 0, odd = 0, positive = 0, negative = 0;
    for(i=0; i < n; i++) {
        scanf("%d", &m);
        if(m % 2 == 0) {
            even += 1;
        } else {
            odd += 1;
        }
        if(m < 0 ) {
            negative += 1;
        } else if(m > 0) {
            positive += 1;
        }
    }
    
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}
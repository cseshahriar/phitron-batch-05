#include <stdio.h>

int main() {
    int N, a, b;
    scanf("%d", &N);
    if(N >= 10 && N <= 99) {
        a = N / 10;
        b = N % 10;
        if(b != 0) {
            if(a != 0 || b != 0) {
                if(a % b == 0)
                    printf("YES\n");
                else if (b % a == 0)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
        } else {
            // 10 so 0/1=0 yes
            if(b % a == 0)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int result[t];

    for(int i = 0; i < t; i++) {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long int mul_of_abc = (long long int) a * b * c;
        int num = -1;
        if(m == 0) {
            num = 0;
        } else {
            if(m % mul_of_abc == 0) {
                num = m / mul_of_abc;
            }
        }
        result[i] = num;
    }

    for(int i = 0; i < t; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}
#include <stdio.h>
// https://codeforces.com/group/MWSDmqGsZm/contest/223339
void fun(long long int n) {
    // base case
    if(n==0) return;

    long long int x = n % 10; // 1, 2, 3, 4 = 4 last digit
    fun(n/10); // remending digits
    printf("%lld ", x);
}

int main() {
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++) {
        long long int n;
        scanf("%lld", &n);
        fun(n);
        if(n==0) {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
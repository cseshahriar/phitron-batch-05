#include <stdio.h>

long long int fact(long long int n) {
    // base case
    if(n==0) {
        return 1;
    }
    long long int ans = fact(n-1);
    return ans * n;
} 

int main() {
    long long int n;
    scanf("%lld", &n);
    // 5! = 1 x 2 x 3 x 4 x 5 = 120
    long long int ans = fact(n);
    printf("%lld\n", ans);
    return 0;
}
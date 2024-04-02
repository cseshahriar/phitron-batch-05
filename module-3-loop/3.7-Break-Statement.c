#include <stdio.h>
int main() {
    // start, end, relation
    int i, n, sum = 0;
    scanf("%d", &n);
    for(i=1; i <= n; i++) {
        if(i==10)
            break; // stop
        else
        printf("i is %d\n", i);
    }
    return 0;
}
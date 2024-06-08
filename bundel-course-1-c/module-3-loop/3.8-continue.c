#include <stdio.h>
int main() {
    // start, end, relation
    int i, n, sum = 0;
    scanf("%d", &n);
    for(i=1; i <= n; i++) {
        if(i==10)
            continue; // jump or skeep
        else
            printf("i is %d\n", i);
    }
    return 0;
}
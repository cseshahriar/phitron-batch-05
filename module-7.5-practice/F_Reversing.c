#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int size = n - 1;
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = size; i >= 0; i--) {
        if(a[i] <= 10)
            printf("%d ", a[i]);
    }
    return 0;
}
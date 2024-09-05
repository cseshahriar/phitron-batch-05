#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int a[t][2];
    
    for(int i = 0; i < t; i++) {
        scanf("%d %d", &a[i][0], &a[i][1]);
    }

    for(int i = 0; i < t; i++) {
        if(a[i][0] == a[i][1]) {
            printf("Square\n");
        } else {
            printf("Rectangle\n");
        }
    }
    return 0;
}
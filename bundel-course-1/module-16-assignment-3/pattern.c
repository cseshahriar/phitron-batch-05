#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    bool toggle = true; 
    for(int i = 1; i <= ( 2 * n); i++) {
        // s number space print
        for(int j = 1; j <= s; j++) {
            printf(" ");
        }

        if(toggle) {
            toggle = false;
            for(int j = 1; j <= k; j++) {
                printf("#");
            }
        } else {
            toggle = true;
            // k number start print
            for(int j = 1; j <= k; j++) {
                printf("-");
            }
        }

        // line seshe
        if(i <= n - 1) {
            s--;
            k = k + 2; 
        } else{
            s++;
            k = k - 2;
        }

        printf("\n");
    }

    return 0;
}
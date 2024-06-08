#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);
    if(X > 999 && X <= 9999) {
        // get first digit
        int result = X / 1000;
        if(result % 2 == 0 )
            printf("EVEN");
        else
            printf("ODD");
    }
    return 0;
}
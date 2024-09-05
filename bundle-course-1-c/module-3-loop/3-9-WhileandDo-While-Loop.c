#include <stdio.h>

int main() {
    int i = 1;
    // while loop
    while(i<=5) {
        printf("%d\n", i);
        i++;
    }
    printf("\n");

    // do while
    int j = 1;
    do {
        printf("%d\n", j);
        j++;
    } while(j <= 5);

    return 0;
}
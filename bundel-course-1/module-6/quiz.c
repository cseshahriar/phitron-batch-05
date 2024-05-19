#include <stdio.h>

int main() {
    // for (int i = 10; i >= 0; i -= 2) {
    //     printf("%d ", i);
    // }

    // for (int i = 0; i <= 10; i++) {
    //     if (i % 2 == 0) {
    //         printf("%d ", i);
    //     }
    // }

    int i = 10;
    while (i >= 0) {
        printf("%d ", i);
        i -= 2;
    }

    return 0;
}
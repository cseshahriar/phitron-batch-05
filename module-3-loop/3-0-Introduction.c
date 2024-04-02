#include <stdio.h>

int main() {
    int i;
    for(i=1; i <= 20; i=i+1) {
        printf("Hello\n");
    }

    printf("\n");
    for(i=20; i >= 0; i--) {
        printf("Hello\n");
    }
    return 0;
}
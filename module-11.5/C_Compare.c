#include <stdio.h>
#include <string.h>

int main() {
    char X[21], Y[21];
    scanf("%s %s", X, Y);
    int strcmp_value = strcmp(X, Y);
    if(strcmp_value > 0) {
        printf("%s", Y);
    } else if(strcmp_value < 0) {
        printf("%s", X);
    } else {
        printf("%s", X); //  equal
    }
    return 0;
}
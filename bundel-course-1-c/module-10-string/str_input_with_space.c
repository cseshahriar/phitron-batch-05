#include <stdio.h>
#include <string.h>

int main() {
    // solution
    char b[100];
    // fgets(b, sizeof(b), stdin); // string input with space, no enter
    fgets(b, 19, stdin); // string input with space, no enter
    a[17] = "\0"; // null for enter or new line
    printf("%s", b);

    return 0;
}
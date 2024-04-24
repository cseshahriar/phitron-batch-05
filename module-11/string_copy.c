#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    scanf("%s %s", a, b);
    // copy by loop
    // for(int i = 0; i <= strlen(b); i++) {
    //     printf("%d", i);
    //     a[i] = b[i]; // copy
    // }

    strcpy(a, b); // copy by function
    printf("%s %s\n", a, b);
    return 0;
}
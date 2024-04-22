#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s", a);

    // manual
    int count = 0;
    for(int i = 0; a[i] != '\0'; i++) {
        count++;
    }
    printf("count %d\n", count);

    int st_len = strlen(a);
    printf("count %d\n", st_len);

    return 0;
}
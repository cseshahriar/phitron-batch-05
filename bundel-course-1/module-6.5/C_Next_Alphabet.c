#include <stdio.h>
// printf("%d", c); // asci/in value 113

int main() {
    char a;
    scanf("%c", &a);
    int int_value = 0;

    if(a >= 'a' && a <= 'z') {
        if(a == 'z') {
            int_value = 97;
            printf("%c", int_value);
        } else {
            int_value = a + 1;
            printf("%c", int_value);
        }
    }

    return 0;
}
#include <stdio.h>
// printf("%d", c); // asci/in value 113

int main() {
    char a;
    scanf("%c", &a);
    int int_value = 0;

    if(a >= 'a' && a <= 'z')
        int_value = a - 32;
    else 
        int_value = a + 32;
    
    printf("%c", int_value);
    return 0;
}
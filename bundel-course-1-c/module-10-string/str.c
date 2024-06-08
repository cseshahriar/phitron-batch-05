#include <stdio.h>

int main() {
    // char a[6] = "Rahat\0";
    char a[6] = "Rahat"; // initialize standard
    // extra 1 size for \0 or null char
    printf("%s", a);

    // \0 null char
    int size = sizeof(a) / sizeof(char);
    printf("%d\n", size);
    
    // str input
    char str_var[5];
    scanf("%s", str_var); 
    printf("%s", str_var);

    return 0;
}
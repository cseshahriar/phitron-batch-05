#include <stdio.h>

int main() {
    char a[100]. b[100];
    scanf("%s %s", a, b);
    int i = 0;
    // null check
    // while(1) {
    //     if(a[i] == '\0' && b[i] == '\0') {
    //         printf("Same\n");
    //         break;
    //     } else if(a[i] == '\0') {
    //         printf("a choto\n");
    //         break;
    //     } else if(b[i] == '\0') {
    //         printf("b choto\n");
    //         break;
    //     } 
    // }
    
    // if(a[i] == b[i]) {
    //     i++;
    // } else if(a[i] < b[i]) {
    //     printf("a choto\n");
    //     break;
    // } else {
    //     printf("b choto\n");
    //     break;
    // }


    // with function
    int v = strcmp(a, b); // compare
    printf("%d", v);

    if(v < 0) {
        printf("A is smaller\n");
    } else if(v > 0) {
        printf("B is smaller\n");
    } else {
        printf("Same\n");
    }

    return 0;
}
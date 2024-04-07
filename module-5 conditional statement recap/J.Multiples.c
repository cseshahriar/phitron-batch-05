#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    // my way solved
    // if(a > b) {
    //     int div_result = a / b;
    //     if(b*div_result == a) {
    //         printf("Multiples");
    //     }else {
    //         printf("No Multiples");
    //     }
    // } else{
    //     int div_result = b / a;
    //     if(div_result * a == b) {
    //         printf("Multiples");
    //     }else {
    //         printf("No Multiples");
    //     }
    // }

    // better solution
    if(a % b == 0) {
        printf("Multiples\n");
    } else if(b % a == 0) {
        printf("Multiples\n");
    } else {
        printf("No Multiples\n");
    }
    return 0;
}
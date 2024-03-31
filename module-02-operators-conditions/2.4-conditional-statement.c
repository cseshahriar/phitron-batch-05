// conditional statement
// If Else Ladder
#include <stdio.h>

int main() {
    int tk;
    scanf("%d", &tk);
    if(tk >= 100) {
        printf("Burger Khabo");
    }
    else if(tk >= 50) {
        printf("Fuska Khabo");
    } 
    else if(tk >= 20) {
        printf("Ice cream Khabo");
    }
    else {
        printf("Sharadin kicho Khabo na");
    }
    return 0;
}
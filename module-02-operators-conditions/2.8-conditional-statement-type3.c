#include <stdio.h>

int main() {
    int tk;
    scanf("%d", &tk);

    if(tk >= 5000 ) {
        printf("cox's bazar jabo");
        // nested
        if(tk >= 10000) 
            printf("Saint martin jabo");
        else 
            printf("Return back");
    } else 
        printf("No where will go");
    
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char S[1000];
    scanf("%s", S);
    int strLength = strlen(S);

    char rev_s[1000];
    
    int position = 0;
    for(int i = strLength - 1; i >= 0; i--) {
        rev_s[position] = S[i];
        position++;
    }

    bool is_same = true;
    for(int i = 0; i < strLength; i++) {
        if(S[i] != rev_s[i]) {
            is_same = false; 
        }
    }

    if(is_same) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
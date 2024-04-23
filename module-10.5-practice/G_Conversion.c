#include <stdio.h>
#include <string.h>

int main() {
    char S[100001];  
    scanf("%s", S);  
    int strLength = strlen(S);

    for(int i = 0; i < strLength; i++) {
        if(S[i] == ',') {
            printf(" ");
            continue;
        }

        if (S[i] >= 'a' && S[i] <= 'z') {
            printf("%c", S[i] - 32);
        }
        else if (S[i] >= 'A' && S[i] <= 'Z') {
            printf("%c", S[i] + 32);
        }
    }
    return 0;
}
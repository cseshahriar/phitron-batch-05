#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        char S[100];
        scanf("%s", S);
        int strLength = strlen(S);

        if(strLength <= 10) {
            printf("%s\n", S);
        } else {
            printf("%c%d%c\n", S[0],strLength-2,S[strLength-1]);
        }
    }
    return 0;
}
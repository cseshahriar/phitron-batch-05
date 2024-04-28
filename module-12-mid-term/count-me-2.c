# solved
#include <stdio.h>
#include <string.h>

int main() {
    char S[100001];
    scanf("%s", S);
    int cnt = 0;
    int stringLength = strlen(S);

    for(int i = 0; i < stringLength; i++) {
        char letter = S[i];
        if(letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u') {
            cnt = cnt + 1;
            printf("%c %d\n", S[i], cnt);
        }
    } 
    printf("%d\n", cnt);
    return 0;
}
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 26 

int main() {
    char S[10001];
    int count[MAX_SIZE] = {0};
    scanf("%s", S);
    int len = strlen(S);
    for (int i = 0; i < len; i++) {
        count[S[i] - 'a']++;
    }
    for (int i = 0; i < MAX_SIZE; i++) {
        if (count[i] > 0) {
            printf("%c - %d\n", 'a' + i, count[i]);
        }
    }
    return 0;
}
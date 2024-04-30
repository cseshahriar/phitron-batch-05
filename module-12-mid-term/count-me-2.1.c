#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    int capitaArr[T * 2];
    int smaillArr[T * 2];
    int digitArr[T * 2];

    for(int i = 0; i < T; i++) {
        int capital = 0, small = 0, digit = 0;
        char S[10001];
        scanf("%s", S);
        int stringLength = strlen(S);

        for(int i = 0; i < stringLength; i++) {
            char letter = S[i];
            if(letter >= 'A' && letter <= 'Z') {
                capital++;
            } else if (letter >= 'a' && letter <= 'z') {
                small++;
            } else {
                digit++;
            }
        }
        capitaArr[i] = capital;
        smaillArr[i] = small;
        digitArr[i] = digit;
    }

    for(int i = 0; i < T; i++) {
        printf("%d %d %d\n", capitaArr[i], smaillArr[i], digitArr[i]);
    }
    return 0;
}

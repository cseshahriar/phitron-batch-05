#include <stdio.h>
#include <string.h>


int main() {
    int T;
    scanf("%d", &T);
    int counts[1000][3];

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
        counts[i][0] = capital;
        counts[i][1] = small;
        counts[i][2] = digit;
    }
    for(int i = 0; i < T; i++) {
        printf("%d %d %d\n",  counts[i][0],  counts[i][1],  counts[i][2]);
    }
    return 0;
}
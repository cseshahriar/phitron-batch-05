#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char str[]) {
    int len = strlen(str);
    int middle = len / 2;
    for(int i = 0; i < middle; i++) {
        int rev_char_position = len - i - 1; // 7 - 0 - 1 = 6 last char for i 0
        if(str[i] != str[rev_char_position]) {
            return false;
        }
    }
    return true;
}

int main() {
    char S[1001];
    scanf("%s", S);
    bool result = is_palindrome(S);
    if(result == true) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    return 0;
}
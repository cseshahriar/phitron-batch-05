#include <stdio.h>
#include <string.h>

#define MAX_SIZE 26 // Assuming only lowercase English letters

int main() {
    char S[1000];
    int count[MAX_SIZE] = {0};

    // Read input
    scanf("%s", S);

    // Count occurrences
    int len = strlen(S);
    for (int i = 0; i < len; i++) {
        count[S[i] - 'a']++;
    }

    // Print output in ascending order
    for (int i = 0; i < MAX_SIZE; i++) {
        if (count[i] > 0) {
            printf("%c - %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}
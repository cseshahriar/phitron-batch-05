#include <bits/stdc++.h>

using namespace std;

int main() {
    char s[100000];
    while (cin.getline(s, 100000)) {
        int length = strlen(s);
        sort(s, s + length);

        // Remove spaces from the string
        int j = 0;
        for (int i = 0; i < length; ++i) {
            if (s[i] != ' ') {
                s[j++] = s[i]; // space shift to right
                // s[1] = s[0] if space found at s[0]
            }
        }
        s[j] = '\0'; // null terminate

        cout << s << endl;
    }
    return 0;
}
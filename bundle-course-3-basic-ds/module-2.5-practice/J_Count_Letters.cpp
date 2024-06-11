#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> letter_count(26, 0);
    for(char letter: s) {
        letter_count[letter - 'a']++; // frequency count
    }
    for(int i=0; i < 26; i++) {
        if(letter_count[i] > 0) {
            cout << (char)('a' + i) << " : " << letter_count[i] << endl;
        }
    }
    return 0;
}
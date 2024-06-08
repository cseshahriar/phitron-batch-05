#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    getchar();
    stringstream ss(s);
    string word;
    int word_count = 0;
    int flag = 0;
    while(ss >> word) {
        reverse(word.begin(), word.end());
        if(flag) {
            cout << " ";
        }
        flag = 1;
        cout << word;
    }
    return 0;
}
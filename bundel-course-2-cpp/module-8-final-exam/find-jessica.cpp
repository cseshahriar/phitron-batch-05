#include <bits/stdc++.h>
using namespace std;

bool isMatch(string word) {
    return word == "Jessica";
}

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    int flag = 0;
    while (ss >> word) {
        if (isMatch(word)) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
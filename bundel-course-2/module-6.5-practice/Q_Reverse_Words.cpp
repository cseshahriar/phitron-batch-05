// #include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <algorithm> // for reverse
#include <string> // for string

using namespace std;

int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int word_count = 0;
    while(ss >> word) {
        reverse(word.begin(), word.end());
        cout << word << " ";
    }
    return 0;
}
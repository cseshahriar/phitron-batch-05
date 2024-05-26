#include <bits/stdc++.h>
// word print and word count
using namespace std;

int main() {
    string s;
    getline(cin, s);
    stringstream ss(s); // word separated
    string word;
    int word_count = 0;
    // jacce 
    while(ss >> word) { // jotokkon ss not empty give a word to word
        cout << word << endl;
        word_count++;
    }
    cout << word_count << endl;
    return 0;
}
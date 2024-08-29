#include <bits/stdc++.h>
using namespace std;

// I love cricket. He loves cricket. they love cricket. we love footbal
int main() {
    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);

    map<string, int> mp;

    while(ss >> word) {
        mp[word]++;
    }
    for(auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " :  " << it->second << endl;
    }
    return 0;
}
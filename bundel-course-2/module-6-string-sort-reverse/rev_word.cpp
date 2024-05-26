#include <bits/stdc++.h>
using namespace std;

void print_asc(stringstream & ss) { // & mane source change hole op change
    string word;
    if(ss >> word) {
        cout << word << endl;
        print_asc(ss);
    }

}

// reverse
void print_desc(stringstream & ss) { // & mane source change hole op change
    string word;
    if(ss >> word) {
        print_desc(ss);
        cout << word << endl;
    }

}

int main() {
    string s;
    getline(cin, s); // space
    stringstream ss(s);
    // print_asc(ss); // recursion
    // cout << endl;
    print_desc(ss); // recursion

    // string current_word;
    // while(ss >> current_word) {
    //     cout << current_word;
    // }
    return 0;
}
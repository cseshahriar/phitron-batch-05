#include <iostream>
#include <sstream>
#include <algorithm> // for reverse
#include <string> // for string

// word count
using namespace std;

int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int word_count = 0;
    while(ss >> word) {
        int flag = 0;
        for(char ch:word) {
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                flag = 1;
            }
        }
        if(flag == 1)
            word_count++;
    }
    cout << word_count << endl;
    return 0;
}

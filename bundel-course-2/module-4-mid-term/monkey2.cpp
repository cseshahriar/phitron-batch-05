#include <bits/stdc++.h>

using namespace std;

int main() {
    char s[100001];
    while(cin.getline(s, 100001)) {
        int str_len = strlen(s);
        sort(s, s + str_len);
        for(int i  = 0; i < str_len; i++) {
            if(s[i] != ' ')
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
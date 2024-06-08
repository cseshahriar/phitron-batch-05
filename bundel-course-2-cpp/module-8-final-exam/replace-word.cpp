#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        getchar();
        string s, x;
        cin >> s >> x;
        while(s.find(x) != -1)
        {     
            int t = s.find(x);
            s.replace(t, x.size(), "#");
        }
        cout << s << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
// https://docs.google.com/document/d/1MoFcjywdG9vqa6MNfvnave15W4DE0wYpX5uzNsXno6w/edit

int main() {
    string s;
    cin >> s;
    cout << "size " << s.size() << endl;   // ***      //  returns the size of the string.
    cout << "max_size " << s.max_size() << endl; //  returns the maximum size that string can hold.
    cout << "capacity " << s.capacity() << endl; //  returns current available capacity of the string.
    
    
    if(s.empty() == true) {
        cout << "empty" << endl;
    }  else {
        cout << "not empty" << endl;
    }

    // clear
    s = "text";
    s.clear();
    cout << s << endl;
    
    s.resize(2);     //  change the size of the string.
    cout << s << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    string a = "Hello";
    string b = " World";

    // add char
    a.push_back('A'); // increase size and insert, one char no space
    cout << a << endl;
    a.pop_back(); // remove char
    cout << a << endl;
    
    // add string 
    a.assign("ABCDefgh"); // replace
    cout << a << endl;

    // a.erase(1, 2); // 2 starting, and hou much 
    // cout << "erase " << a << endl;

    // a.replace(3, 2, "bb");
    // cout << "replace " << a << endl;

    a.replace(4, 0, "bb"); // add value middle
    cout << "replace " << a << endl;

    string c = "HelloWorld";
    c.insert(5, " Shahriar ");
    cout << "insert " << c << endl;

    // a += b; // concat
    a.append(b); // append
    cout << b << endl;


    return 0;
}
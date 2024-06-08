#include <iostream>
using namespace std;
// digit 48 - 57
// alpha small 97 - 122 
// a;pha big 65 - 90

int main() {
    char X;
    cin >> X;    
    int n = int(X);
    if(n >= 'A' &&  X <= 'Z') {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if(X >= 'a' && X <= 'z') {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    } else if(n >= 48 && n <= 57) {
        cout << "IS DIGIT" << endl;
    }
    return 0;
}
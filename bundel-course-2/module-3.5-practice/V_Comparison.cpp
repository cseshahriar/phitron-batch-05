#include <iostream>
using namespace std;

int main() {
    int a, b;
    char s;
    cin >> a;
    cin >> s;
    cin >> b;
    if(s == '>') {
        if(a > b) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    } else if(s == '<') {
           if(a < b) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    } else if(s == '=') {
           if(a == b) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}
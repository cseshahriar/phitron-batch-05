#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    // ternary operator
    (x % 2) == 0 ? cout << "Even" << endl : cout << "Odd" << endl;
 }
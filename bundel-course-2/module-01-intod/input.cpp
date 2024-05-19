#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    cout << "Hello World" << endl;
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    
    char c;
    cin >> c;
    cout << c << endl;
    int ascii = c;
    cout << ascii << endl;

    // char to int
    int intc = int(c);
    cout << intc << endl;

    // type cast
    // long long int to int
    long long int d  = (long long int) a;
    cout << d << endl;
    // char to int

    // float/double to int
    return 0;
}
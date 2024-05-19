#include <iostream>
#include <iomanip> // io manipulation

using namespace std;

int main() {
    // set precision
    double c;
    cin >> c;
    cout << fixed << setprecision(2) << c << endl;

    return 0;
}
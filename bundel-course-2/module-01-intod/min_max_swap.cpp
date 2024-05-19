#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

void my_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    cin >>  a >> b;
    // int min_value = min(a, b);
    int min_value = min({a, b, 7, 8});
    cout << "min value " << min_value << endl;

    // int max_value = max(a, b);
    int max_value = max({a, b, 7 , 8});
    cout << "max value " << max_value << endl;

    // my_swap(&a, &b);
    // cout << a << " " << b << endl;

    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}
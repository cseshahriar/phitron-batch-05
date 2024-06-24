#include <bits/stdc++.h>
using namespace std;

void func(int * &pr) { // pr and ptr are same
    // *pr = 20; // de reference
    pr = NULL;
    // de reference na korle kono change hoyna
}

int main() {
    int val = 10;
    int *ptr = &val;

    func(ptr);
    cout << val << endl;
    cout << *ptr << endl; // de reference

    return 0;
}
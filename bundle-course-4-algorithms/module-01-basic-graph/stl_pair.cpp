#include <bits/stdc++.h>
using namespace std;

class Pair { // manual pair class
    public:
        int first, second;
        void make_pair(int a, int b) {
            first = a;
            second = b;
        }
};

int main() {
    // manual pair
    // Pair p;
    // p.make_pair(10, 20);

    // stl
    pair<string, int> p; // stl pair class
    // p.first = "Shahriar";
    // p.second = 30;
    p = make_pair("Shahriar", 20);
    cout << p.first << " " << p.second << endl;
    return 0;
}
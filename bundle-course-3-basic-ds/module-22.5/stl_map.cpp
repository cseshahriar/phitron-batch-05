#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> mp;

    mp.insert({"shahriar", 75}); // O(logN)
    mp.insert({"nurjahan", 85});
    mp.insert({"ayesha", 90});
    cout << mp["shahriar"] << endl;

    if(mp.count("ayesha")) {
        cout << "Ase" << endl;
    } else {
        cout << "nai" << endl; // o(logN)
    }
    return 0;
}
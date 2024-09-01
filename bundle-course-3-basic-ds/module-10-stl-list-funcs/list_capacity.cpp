#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> myList = {10, 20, 30};
    cout << " size " << myList.size() << endl;
    cout << " max size " << myList.max_size() << endl;

    for(int val: myList) {
        cout << val << " ";
    }
    cout << endl;
    myList.clear();

    for(int val: myList) {
        cout << val << " ";
    }
    cout << endl;
    cout << " max size " << myList.size() << endl;
    myList.resize(2);
    cout << " max size " << myList.size() << endl;
    return 0;
}
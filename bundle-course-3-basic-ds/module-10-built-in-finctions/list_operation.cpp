#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> myList = {20, 40, 30, 10, 50, 10, 10};
    for(int val: myList) {
        cout << val << " ";
    }
    cout << endl;
    
    // myList.remove(10); // unique also
    for(int val: myList) {
        cout << val << " ";
    }
    cout << endl;

    // myList.sort(); // asc
    // myList.sort(greater<int>()); // reverse
    myList.unique();
    myList.reverse();
    
    for(int val: myList) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
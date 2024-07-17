#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> myList = {10, 20, 30};
    list<int> myList2;
    list<int> myList3 = {100, 200, 300};
    vector<int> v = {5, 6, 7};
    // myList2 = myList;
    myList2.assign(myList.begin(), myList.end());

    for(int val: myList2) {
        cout << val << " ";
    }
    cout << endl;

    myList2.push_front(100); // head
    myList2.push_back(200); // tail
    myList2.erase(next(myList2.begin(), 2)); // pos 2 erase

    for(int val: myList2) {
        cout << val << " ";
    }
    cout << endl;

    myList2.pop_back();
    myList2.pop_front();

    for(int val: myList2) {
        cout << val << " ";
    }
    cout << endl;

    // insert at position
    // myList2.insert(next(myList2.begin(), 0), 500); // head 
    myList2.insert(next(myList2.begin(), 2), 500); // at pos
    // myList2.insert(next(myList2.begin(), 3), {200, 300, 400}); // multi value
    myList2.insert(next(myList2.begin(), 3), myList3.begin(), myList3.end()); // multi value insert
    myList2.insert(next(myList2.begin(), 3), v.begin(), v.end()); // multi value insert

    replace(myList2.begin(), myList2.end(), 500, 600); // replace value

    for(int val: myList2) {
        cout << val << " ";
    }
    cout << endl;

    auto it = find(myList2.begin(), myList2.end(), 1000);
    if(it == myList2.end()) {
        cout << "not found" << endl;
    } else {
        cout << " find " << *it << endl;
    }
    return 0;
}

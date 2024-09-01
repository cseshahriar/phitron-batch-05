#include <bits/stdc++.h>
using namespace std;

void print_list(list<int> &lst) {
    for(int val: lst) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    list<int> myList;
    int n;
    cin >> n;
    
    // insert at tail
    for(int i =0; i < n; i++) {
        int x;
        cin >> x;
        myList.push_back(x); // tail
    }
    // print 
    for(auto it=myList.begin(); it!=myList.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // pop head
    myList.pop_front();
    print_list(myList);

    // inset at head 
    myList.push_front(1000);
    print_list(myList);

    // remove at tail 
    myList.pop_back();
    print_list(myList);

    list<int> myList2 = {1,2,3,4};

    // insert at position, start 0 and 2 gor samne jao
    // myList.insert(next(myList.begin(), 2), 100); // 2 no index
    myList.insert(next(myList.begin(), 2), {4, 5, 6}); // 2 no index
    myList.insert(next(myList.begin(), 2), myList2.begin(), myList2.end()); // 2 no index
    print_list(myList);

    // remove at position
    myList.erase(next(myList.begin(), 3)); // 3rd index remove
    print_list(myList);

    // copy
    // myList = myList;
    // myList2.assign(myList.begin(), myList.end());

    // find
    auto it = find(myList.begin(), myList.end(), 5);
    if(it == myList.end()) {
        cout << "Not found " << *it << endl;
    } else {
        cout << "found " << *it << endl;
    }

    list<int> myList3 = {1, 5, 2, 4, 6, 3, 6, 5, 7, 100, 8};
    print_list(myList3);

    // remove 
    myList3.remove(100);
    print_list(myList3);

    // sort
    myList3.sort();
    print_list(myList3);

    myList3.sort(greater<int>());
    print_list(myList3);
    
    // reverse
    myList3.reverse();
    print_list(myList3);

    // uniq
    myList3.unique();
    print_list(myList3);

    // access 
    cout << myList3.front() << endl;
    cout << myList3.back() << endl;
    return 0;
}
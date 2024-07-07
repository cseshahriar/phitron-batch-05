#include <bits/stdc++.h>
using namespace std;

int main() {
    // list<int> my_list;
    // list<int> my_list(10);
    // list<int> my_list(10, 5); // all el init 5
    list<int> my_list2 = {1, 2, 3, 4, 5};
    // list<int> my_list(my_list2);

    // int a[5] = {1, 2, 3, 4, 5};
    // list<int> my_list(a, a+5);

    vector<int> v = {1, 2, 3, 4, 5};
    list<int> my_list(v.begin(), v.end());

    cout << " list size " << my_list.size() << endl;
    cout << " first el " << my_list.front() << endl;

    // iterator loop
    for(auto it=my_list.begin(); it != my_list.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    for(int val: my_list) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}

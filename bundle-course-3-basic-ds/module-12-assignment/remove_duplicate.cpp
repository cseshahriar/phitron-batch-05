#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> my_list;
    int val;
    while (true)
    {
        cin >> val;
        if(val == -1) {
            break;
        }
        my_list.push_back(val);
    }
    my_list.sort();
    my_list.unique();
    for(auto val: my_list) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
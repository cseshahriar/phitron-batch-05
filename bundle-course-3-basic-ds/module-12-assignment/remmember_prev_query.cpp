#include <bits/stdc++.h>
using namespace std;
// not solved
void print_normal(list<long long int> my_list) {
    cout << "L -> ";
    for (auto it = my_list.begin(); it != my_list.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

void print_reverse(list<long long int> my_list) {
    cout << "R -> ";
    for(auto it = my_list.rbegin(); it != my_list.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    list<long long int> my_list;
    int q;
    cin >> q;

    while (q--) {
        int x;
        long long int v;
        cin >> x >> v;
        my_list.insert(next(my_list.begin(), x), v);
        print_normal(my_list);
        print_reverse(my_list);
    }
    return 0;
}

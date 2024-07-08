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
    list<long long int> new_list(my_list);
    new_list.reverse();
    cout << "R -> ";
    for (auto it = new_list.begin(); it != new_list.end(); ++it) {
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
        if(x == 0) {
            my_list.push_front(v);
        } else if (x == 1) {
            my_list.push_back(v);
        }
        else if(x == 2) {
            // del el at index V
            long long int my_list_size;
            my_list_size = my_list.size();
            if (v >= 0 && v < my_list_size) {
                auto it = my_list.begin();
                advance(it, v);
                my_list.erase(it);
            } 
        }
        print_normal(my_list);
        print_reverse(my_list);
    }
    return 0;
}
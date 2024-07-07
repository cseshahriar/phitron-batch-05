#include <bits/stdc++.h>
using namespace std;

void show_list(list<int> g) {
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}

int main() {
    list<int> my_list{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(auto i: my_list) {
        cout << i << " ";
    }
    cout << endl;
    show_list(my_list);

    my_list.pop_front();
    show_list(my_list);

    my_list.pop_back();
    show_list(my_list);

    my_list.reverse();
    show_list(my_list);

    my_list.sort();
    show_list(my_list);

    my_list.push_front(55);
    show_list(my_list);

    my_list.push_back(99);
    show_list(my_list);

    my_list.insert(my_list.begin(), 100);
    show_list(my_list);

    my_list.erase(my_list.begin());
    show_list(my_list);

    my_list.remove(55);
    show_list(my_list);
    cout << my_list.size() << endl;

    return 0;
}
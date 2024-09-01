#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int x) {
    v.push_back(x);
    int cur_index = v.size() - 1;
    while(cur_index != 0) { // log(n)
        int parent_index = (cur_index - 1) / 2;
        if (v[parent_index] > v[cur_index]) {
            swap(v[parent_index], v[cur_index]);
        } else {
            break;
        }
        cur_index = parent_index;
    }
}

// whow comples it ?
void del_heap(vector<int> &v) {
    v[0] = v[v.size() - 1]; // last el store
    v.pop_back();  // last el del
    int current = 0;
    while(true) {
        int left_index = current * 2 + 1;
        int right_index = current * 2 + 2;
        int last_index = v.size() - 1;
        if(left_index <= last_index && right_index <= last_index) {
            // doutai ace
            if(v[left_index] <= v[right_index] && v[left_index] < v[current]) {
                swap(v[left_index], v[current]);
                current = left_index;
            } else if(v[right_index] <= v[left_index] && v[right_index] < v[current]) {
                swap(v[right_index], v[current]);
                current = right_index;
            } else {
                break;
            }
        } else if(left_index <= last_index) {
            // left ace
            if(v[left_index] < v[current]) {
                swap(v[left_index], v[current]);
                current = left_index;
            } else {
                break;
            }
        } else if(right_index <= last_index) {
            // right ace
            if(v[right_index] < v[current]) {
                swap(v[right_index], v[current]);
                current = right_index;
            } else {
                break;
            }
        } else {
            break;
        }
    }
}

void print_heap(vector<int> v) {
    // output
    for(int val: v) cout << val << " ";
    cout << endl;
}

int main() { // n log(N)
    // lon(n)
    vector<int> v;

    // reading inputs
    int n;
    cin >> n;
    for(int i=0; i < n; i++) { // n
        int x;
        cin >> x;
        insert_heap(v, x);
    }

    // output
    print_heap(v);

    del_heap(v);

    // output
    print_heap(v);
    return 0;
}
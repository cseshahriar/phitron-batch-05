#include <bits/stdc++.h>
using namespace std;

bool containDuplicate(vector<int>& nums, int x) {
    int counter = 0;
    for(int i=0; i <= nums.size(); i++) {
        if(nums[i] == x) counter++;
    }
    if(counter > 1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) { // o(n)
        cin >> a[i];
    }
    int x;
    cin >> x;
    bool duplicate = containDuplicate(a, x); // o(n)
    if(duplicate == true) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
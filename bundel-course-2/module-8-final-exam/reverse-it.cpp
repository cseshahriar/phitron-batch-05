#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string nm;
        int cls;
        char s;
        int id;
};

int main() {
    int n;
    cin >> n;
    Student arr[n];
    for(int i = 0; i < n; i++) {
        cin.ignore();
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id; 
    }
    // first el to last el swap
    for (int i = 0; i < n / 2; i++) { // first half to last half comparision
        if (i != n - i - 1) {  // first el and last el 
            swap(arr[i].s, arr[n - i - 1].s);
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << endl; 
    }
    return 0;
}
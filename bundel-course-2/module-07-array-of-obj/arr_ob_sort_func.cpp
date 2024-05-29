#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int marks;
};

bool cmp(Student a, Student b) {
    // if(a.marks <= b.marks) return true;
    // else return false;
    // return a.marks <= b.marks; // smallest
    if(a.marks == b.marks) {
        return a.roll < b.roll;
    } else {
        return a.marks > b.marks; // biggest
    }
}

int main() {
    int n;
    cin >> n;
    Student arr[n]; // static
    for(int i = 0; i < n; i++) {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks; 
    }
    sort(arr, arr + n, cmp); // asc sort
    for(int i = 0; i < n; i++) {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl; 
    }
    return 0;
}
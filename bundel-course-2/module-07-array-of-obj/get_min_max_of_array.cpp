#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int marks;
};

int main() {
    int n;
    cin >> n;
    Student arr[n]; // static
    for(int i = 0; i < n; i++) {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks; 
    }
    
    Student min;
    min.marks = INT_MAX;
    
    Student max;
    max.marks = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i].marks < min.marks) {
            min = arr[i];
        }

        if(arr[i].marks > max.marks) {
            max = arr[i];
        }
    }
    cout << "min marks " << min.marks << endl; 
    cout << "max marks " << max.marks << endl; 
    return 0;
}
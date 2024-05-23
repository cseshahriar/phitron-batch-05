#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        int cls;
        int roll;
        double cgpa;
        // constructor
        Student(int cls, int roll, double cgpa) {
            this->cls = cls;
            this->roll = roll;
            this->cgpa = cgpa;
        }
};

int main() {
    Student a(29, 9, 5.0);
    Student b(29, 9, 5.0);

    cout << a.cls << " " << a.roll << " " << a.cgpa << endl;
    cout << b.cls << " " << b.roll << " " << b.cgpa << endl;
    return 0;
}
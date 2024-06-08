#include <iostream>
using namespace std;

class Student {
    public:
        char name[100];
        int roll;
        double cgpa;
};

int main() {
    Student a, b;
    cin >> a.name >> a.roll >> a.cgpa;
    cin >> b.name >> b.roll >> b.cgpa;

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;
    return 0;
}
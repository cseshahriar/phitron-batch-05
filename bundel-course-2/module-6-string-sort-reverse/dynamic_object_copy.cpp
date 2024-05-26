#include <bits/stdc++.h>
using namespace std;


class Person {
    // this is object pointer
    public:
        string name;
        int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void set_name(string name) {
        this->name = name;
    }
    void get_name() {
        cout << this->name << endl;
    }

    void set_age(int age) {
        this->age = age;
    }
    void get_age() {
        cout << this->age << endl;
    }
};

int main() {
    // dynamic object
    Person *p1 = new Person("Shosen1", 28);
    Person *p2 = new Person("Shosen2", 29);
    // p1 = p2; // copy
    
    // p1->name = p2->name;
    // p1->age = p2->age;
    *p1 = *p2; // copy
    cout << p1->name << p1->age << endl; 
    cout << p2->name << p2->age << endl; 
    return 0;
}
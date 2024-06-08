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
    // static object
    Person shosen("Shosen", 29);
    shosen.get_name();
    shosen.get_age();
    return 0;
}
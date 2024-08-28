#include <bits/stdc++.h>
using namespace std;
/**
 * 3
Shahriar 30 86
Nurjahan 22 87
Ayesha 1 90
*/
class Student {
    public:
        string name;
        int roll;
        int marks;
        Student(string name, int roll, int marks) {
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }
};

// Comparator to sort students by marks in descending order
class cmp {
    public:
        bool operator()(Student a, Student b) {
            if(a.marks <= b.marks) {
                return true;
            } else if(a.marks < b.marks) {
                return false;
            } else {
                if(a.roll > b.roll) {
                    return true;
                } else {
                    return false;
                }
            }
        }
};

int main() {
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < n; i++) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }

    while (!pq.empty()) {
        // Output student details
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();  // Don't forget to pop after processing
    }

    return 0;
}
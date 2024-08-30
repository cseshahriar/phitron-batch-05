#include <bits/stdc++.h>
using namespace std;

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

        // For priority_queue to work properly with our custom comparator
        bool operator<(const Student& other) const {
            if (marks != other.marks) {
                return marks < other.marks; // Higher marks should come first
            }
            return roll > other.roll; // Lower roll number should come first
        }
};

class cmp {
    public:
        bool operator()(const Student& a, const Student& b) {
            if (a.marks != b.marks) {
                return a.marks < b.marks; // Higher marks come first
            }
            return a.roll > b.roll; // Lower roll number comes first in case of a tie
        }
};

int main() {
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < n; ++i) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student student(name, roll, marks);
        pq.push(student);
    }

    int q;
    cin >> q;

    while (q--) {
        int command;
        cin >> command;

        if (command == 0) {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student new_student(name, roll, marks);
            pq.push(new_student);
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        } else if (command == 1) {
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        } else if (command == 2) {
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                pq.pop();
                if (pq.empty()) {
                    cout << "Empty" << endl;
                } else {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
            }
        }
    }

    return 0;
}

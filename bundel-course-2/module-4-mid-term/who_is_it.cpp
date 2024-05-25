#include <bits/stdc++.h>

using namespace std;

class Student {
public:
    int id;
    char name[101];
    char section;
    double total_marks;

    Student(int id, char name[101], char section, double total_marks) {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->total_marks = total_marks;
    }
    // cout << id << " " << name << " " << section << " " << total_marks << endl;
    
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        Student students[3] = {
            Student(0, "", 'A', 0), 
            Student(0, "", 'A', 0),
            Student(0, "", 'A', 0)
        };

        for (int j = 0; j < 3; j++) {
            int id;
            string name;
            char section;
            double total_marks;
            cin >> id >> name >> section >> total_marks;
            students[j] = Student(id, name, section, total_marks);
        }

        // Find the student with the highest total marks, and in case of tie, the student with the smaller ID
        Student* best_student = &students[0];
        for (int j = 1; j < 3; j++) {
            if (students[j].total_marks > best_student->total_marks ||
                (students[j].total_marks == best_student->total_marks && students[j].id < best_student->id)) {
                best_student = &students[j];
            }
        }

        best_student->printDetails();
    }

    return 0;
}
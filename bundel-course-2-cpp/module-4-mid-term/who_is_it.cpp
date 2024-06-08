#include <bits/stdc++.h>

using namespace std;

class Student {
    public:
        int std_id;
        char name[101];
        char section;
        double total_marks;

    Student(int std_id, const char* name, char section, double total_marks) {
        this->std_id = std_id;
        strcpy(this->name, name);
        this->section = section;
        this->total_marks = total_marks;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        Student best_student = Student(0, "", 'A', -1); // init
        for (int i = 0; i < 3; i++) {
            int std_id;
            char name[101];
            char section;
            double total_marks;
            cin >> std_id >> name >> section >> total_marks;
            Student current_student = Student(std_id, name, section, total_marks);

            if (current_student.total_marks > best_student.total_marks) {
                best_student = current_student;
            }
        }
        cout << best_student.std_id << " " << best_student.name << " " << best_student.section << " " << best_student.total_marks << endl;
    }
    return 0;
}
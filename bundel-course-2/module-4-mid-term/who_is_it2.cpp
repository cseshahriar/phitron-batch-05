#include <bits/stdc++.h>

using namespace std;

class Student {
public:
    int std_id;
    char name[101];
    char section;
    double total_marks;

    Student() {}

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
        int arr_roll[3];
        char arr_name[3][101];
        char arr_section[3];
        double arr_marks[3];

        for (int j = 0; j < 3; j++) {
            int std_id;
            char name[101];
            char section;
            double total_marks;

            cin >> std_id;
            cin.ignore(); // Ignore the newline character after std_id
            cin.getline(name, 101); // Read the name as a string
            cin >> section >> total_marks;

            arr_roll[j] = std_id;
            strcpy(arr_name[j], name);
            arr_section[j] = section;
            arr_marks[j] = total_marks;
        }

        // Find the best student
        int best_id = arr_roll[0];
        char best_name[101];
        strcpy(best_name, arr_name[0]);
        char best_section = arr_section[0];
        double best_total_marks = arr_marks[0];

        for (int j = 1; j < 3; j++) {
            if (arr_marks[j] > best_total_marks || 
                (arr_marks[j] == best_total_marks && arr_roll[j] < best_id)) {
                best_id = arr_roll[j];
                strcpy(best_name, arr_name[j]);
                best_section = arr_section[j];
                best_total_marks = arr_marks[j];
            }
        }

        cout << best_id << " " << best_name << " " << best_section << " " << best_total_marks << endl;
    }
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int en_no;
    int num_subjects;
    int* marks;
    float gpa;
};

int main() {
    Student stdntrecord;

    cout << "Enter student name: ";
    getline(cin, stdntrecord.name);

    cout << "Enter enrollment number: ";
    cin >> stdntrecord.en_no;

    cout << "Enter number of subjects: ";
    cin >> stdntrecord.num_subjects;

    stdntrecord.marks = new int[stdntrecord.num_subjects];

    int total_marks = 0;
    for (int i = 0; i < stdntrecord.num_subjects; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> stdntrecord.marks[i];
        total_marks += stdntrecord.marks[i];
    }

    stdntrecord.gpa = total_marks / stdntrecord.num_subjects;

    cout << "\nStudent record:\n";
    cout << "Name: " << stdntrecord.name << endl;
    cout << "Enrollment Number: " << stdntrecord.en_no << endl;
    cout << "GPA: " << stdntrecord.gpa << endl;

    delete[] stdntrecord.marks;

    return 0;
}

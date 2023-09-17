#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int age;
    string grade_level;
    int id;
    float gpa;

    // Constructor
    Student(string stdName, int stdAge, string stdGl, int stdId, float stdGpa) {
        name = stdName;
        age = stdAge;
        grade_level = stdGl;
        id = stdId;
        gpa = stdGpa;
    }
};

vector<Student> students;

void add_student() {
    string name, grade_level;
    int age, id;
    float gpa;

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter student age: ";
    cin >> age;
    cout << "Enter student grade level: ";
    cin >> grade_level;
    cout << "Enter student ID: ";
    cin >> id;
    cout << "Enter student GPA: ";
    cin >> gpa;

    students.push_back(Student(name, age, grade_level, id, gpa));
}

void print_students() {
    cout << "Student List:" << endl;
    cout << "---------------------" << endl;
    for (int i = 0; i < students.size(); i++) {
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Grade Level: " << students[i].grade_level << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "GPA: " << students[i].gpa << endl;
        cout << "---------------------" << endl;
    }
}

void search_students() {
    int id;
    bool found = false;

    cout << "Enter student ID to search for: ";
    cin >> id;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            cout << "Student Found:" << endl;
            cout << "---------------------" << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Grade Level: " << students[i].grade_level << endl;
            cout << "ID: " << students[i].id << endl;
            cout << "GPA: " << students[i].gpa << endl;
            cout << "---------------------" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found." << endl;
    }
}

int main() {
    int choice;

    while (true) {
        cout << endl << "Student Management System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Print Student List" << endl;
        cout << "3. Search for Student" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                add_student();
                break;
            case 2:
                print_students();
                break;
            case 3:
                search_students();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}

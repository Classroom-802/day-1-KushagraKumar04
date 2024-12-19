#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int rollNumber;
    string name;

public:
    void setDetails(int roll, string studentName) {
        rollNumber = roll;
        name = studentName;
    }

    void displayDetails() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }
};

class Result : public Student {
private:
    int marks[3];
    int total;
    float percentage;

public:
    void setMarks(int m1, int m2, int m3) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        total = m1 + m2 + m3;
        percentage = (total / 300.0) * 100;
    }

    void displayResult() {
        displayDetails();
        cout << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result student;
    int roll, m1, m2, m3;
    string studentName;

    cin >> roll;
    cin.ignore();
    getline(cin, studentName);
    cin >> m1 >> m2 >> m3;

    student.setDetails(roll, studentName);
    student.setMarks(m1, m2, m3);
    student.displayResult();

    return 0;
}

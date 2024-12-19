#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float salary;

public:
    void setID(int empID) {
        id = empID;
    }

    void setName(string empName) {
        name = empName;
    }

    void setSalary(float empSalary) {
        salary = empSalary;
    }

    int getID() {
        return id;
    }

    string getName() {
        return name;
    }

    float getSalary() {
        return salary;
    }

    void displayDetails() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;
    int id;
    string name;
    float salary;

    cin >> id;
    cin.ignore();
    getline(cin, name);
    cin >> salary;

    emp.setID(id);
    emp.setName(name);
    emp.setSalary(salary);

    emp.displayDetails();

    return 0;
}

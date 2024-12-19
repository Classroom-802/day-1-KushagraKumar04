#include <iostream>
using namespace std;

int calculateSalary(int stipend) {
    return stipend;
}

int calculateSalary(int baseSalary, int bonuses) {
    return baseSalary + bonuses;
}

int calculateSalary(int baseSalary, int bonuses, int incentives) {
    return baseSalary + bonuses + incentives;
}

int main() {
    int stipend, baseSalary, bonuses, incentives;

    cin >> stipend;
    cout << "Intern Salary: " << calculateSalary(stipend) << endl;

    cin >> baseSalary >> bonuses;
    cout << "Employee Salary: " << calculateSalary(baseSalary, bonuses) << endl;

    cin >> baseSalary >> bonuses >> incentives;
    cout << "Manager Salary: " << calculateSalary(baseSalary, bonuses, incentives) << endl;

    return 0;
}

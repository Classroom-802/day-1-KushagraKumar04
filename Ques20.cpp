#include <iostream>
#include <iomanip>
using namespace std;

class Account {
protected:
    double balance;

public:
    Account(double b) : balance(b) {}
    virtual void calculateInterest() = 0;
};

class SavingsAccount : public Account {
private:
    double rate, time;

public:
    SavingsAccount(double b, double r, double t) : Account(b), rate(r), time(t) {}
    void calculateInterest() override {
        double interest = (balance * rate * time) / 100;
        cout << "Savings Account Interest: " << interest << endl;
    }
};

class CurrentAccount : public Account {
private:
    double fee;

public:
    CurrentAccount(double b, double f) : Account(b), fee(f) {}
    void calculateInterest() override {
        balance -= fee;
        cout << "Balance after fee deduction: " << balance << endl;
    }
};

int main() {
    int type;
    cin >> type;

    if (type == 1) {
        double balance, rate, time;
        cin >> balance >> rate >> time;
        SavingsAccount savings(balance, rate, time);
        savings.calculateInterest();
    } else if (type == 2) {
        double balance, fee;
        cin >> balance >> fee;
        CurrentAccount current(balance, fee);
        current.calculateInterest();
    } else {
        cout << "Invalid account type." << endl;
    }

    return 0;
}

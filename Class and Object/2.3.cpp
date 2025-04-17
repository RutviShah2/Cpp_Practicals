#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:
    BankAccount() {
        name = "Unnamed";
        accountNumber = 0;
        balance = 0.0;
    }

    BankAccount(string accName, int accNo, double initialBalance) {
        name = accName;
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient funds in account: " << accountNumber << endl;
        }
    }

    void showDetails() {
        cout << "Account Holder: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs" << balance << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    BankAccount a1;
    BankAccount a2("Rutvi Shah", 1001, 5000.0);
    BankAccount a3("Poojan Shah", 1002, 2500.0);

    a1.showDetails();
    a2.showDetails();
    a3.showDetails();

    a2.deposit(1500.0);
    a3.withdraw(3000.0);
    a3.deposit(800.0);
    a1.deposit(200.0);
    a1.withdraw(100.0);

    a1.showDetails();
    a2.showDetails();
    a3.showDetails();

    return 0;
}

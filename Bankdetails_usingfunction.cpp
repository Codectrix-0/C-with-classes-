#include <iostream>
using namespace std;

class Bank {
private:
    int accNo;
    string name;
    float balance;

public:

    // create account
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accNo;

        cin.ignore();   // for full name input
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // deposit money
    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance = balance+ amount;
        cout << "Amount Deposited Successfully\n";
    }

    // withdraw money
    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if(amount > balance)
            cout << "Insufficient Balance!\n";
        else {
            balance -= amount;
            cout << "Amount Withdrawn Successfully\n";
        }
    }

    // display account details
    void display() {
        cout << "\n--- Account Details ---\n";
        cout << "Account No: " << accNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Bank b1;   // object

    int choice;

    b1.createAccount();

    do {
        cout << "\n\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: b1.deposit(); break;
            case 2: b1.withdraw(); break;
            case 3: b1.display(); break;
            case 4: cout << "Thank you!\n"; break;
            default: cout << "Invalid choice\n";
        }

    } while(choice != 4);

    return 0;
}

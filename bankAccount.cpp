#include<iostream>
#include <iomanip>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double accountBalance;

public:
    void captureDetails() {
        cout << "Enter Account Number: "<<endl;
        cin >> accountNumber;
       
        cout << "Enter Account Holder Name: "<<endl;
        cin>>accountHolderName;

        cout << "Enter Opening Balance: "<<endl;
        cin >> accountBalance;

       
               }
    
    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Deposit failed: amount must be positive."<<endl;
            return;
        }
        accountBalance += amount;
        cout << "Deposit successful: +" << fixed << setprecision(2)
             << amount << endl;
    }


    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Withdrawal failed: amount must be positive."<<endl;
            return;
        }
        if (amount > accountBalance) {
            cout << "Withdrawal failed: insufficient funds. "
                 << "Available balance  is   " << fixed << setprecision(2)
                 << accountBalance << endl;
            return;
        }
       accountBalance -= amount;
        cout << "Withdrawal successful: " << fixed << setprecision(2)
             << amount << endl;
    }

    void display() const {
        cout << "\n ACCOUNT DETAILS \n";
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolderName << endl;
        cout << "Balance        : " << fixed << setprecision(2)<< accountBalance << endl;
        
    }
};

int main() {
    BankAccount money;

    cout << "Enter Customer Details "<<endl;
    money.captureDetails();

    double dep;
    cout << " Enter amount to deposit: "<<endl;
    cin >> dep;
    money.deposit(dep);

    double wd;
    cout << "Enter amount to withdraw: "<<endl;
    cin >> wd;
    money.withdraw(wd);

       money.display();

}

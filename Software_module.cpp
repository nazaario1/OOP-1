// A C++ Software module that accept and display customer details

#include <iostream>
#include <string>
using namespace std;

int main() {
    string mobileNumber, name, DoB, billingAddress, city, residencePhone;
    double amount;

    do {
        cout << "Enter Mobile Number (max 12): ";
        getline(cin, mobileNumber);
        if (mobileNumber.length() > 12)
            cout << "Long! Maximum is 12 characters." << endl;
    } while (mobileNumber.length() > 12);

    do {
        cout << "Enter Name (max 25): ";
        getline(cin, name);
        if (name.length() > 25)
            cout << "Long! Maximum is 25 characters." << endl;
    } while (name.length() > 25);

    do {
        cout << "Enter Date of Birth (10 characters): ";
        getline(cin, DoB);
        if (DoB.length() != 10)
            cout << "Must be exactly 10 characters." << endl;
    } while (DoB.length() != 10);

    do {
        cout << "Enter Billing Address (25 characters): ";
        getline(cin, billingAddress);
        if (billingAddress.length() > 25)
            cout << "Long! Maximum is 25 characters." << endl;
    } while (billingAddress.length() > 25);

    do {
        cout << "Enter City (max 20): ";
        getline(cin, city);
        if (city.length() > 20)
            cout << "Long! Maximum is 20 characters." << endl;
    } while (city.length() > 20);

    do {
        cout << "Enter Residence Phone (10 characters): ";
        getline(cin, residencePhone);
        if (residencePhone.length() != 10)
            cout << "Must be exactly 10 characters." << endl;
    } while (residencePhone.length() != 10);

    cout << "Enter Amount: ";
    cin >> amount;

    cout << "\nCustomer Details" << endl;
    cout << "Mobile: " << mobileNumber << endl;
    cout << "Name: " << name << endl;
    cout << "Date of Birth: " << DoB << endl;
    cout << "Billing Address: " <<billingAddress << endl;
    cout << "City: " << city << endl;
    cout << "Residence Phone: " << residencePhone << endl;
    cout << "Amount: " << amount << endl;

    return 0;
}
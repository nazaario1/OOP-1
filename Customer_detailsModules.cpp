#include <iostream>
using namespace std;

int main() {
    char mobile[13];
    char name[26];
    char dob[11];
    char address[26];
    char city[21];
    char phone[11];
    double amount;

    cout << "Enter mobile number (max 12): ";
    cin.getline(mobile, 13);

    cout << "Enter name (max 25): ";
    cin.getline(name, 26);

    cout << "Enter date of birth (10 characters): ";
    cin.getline(dob, 11);

    cout << "Enter billing address (25 characters): ";
    cin.getline(address, 26);

    cout << "Enter city (max 20): ";
    cin.getline(city, 21);

    cout << "Enter residence phone (10 characters): ";
    cin.getline(phone, 11);

    cout << "Enter amount: ";
    cin >> amount;

    cout << "\nCustomer Details" << endl;
    cout << "Mobile: " << mobile << endl;
    cout << "Name: " << name << endl;
    cout << "Date of Birth: " << dob << endl;
    cout << "Address: " << address << endl;
    cout << "City: " << city << endl;
    cout << "Residence Phone: " << phone << endl;
    cout << "Amount: " << amount << endl;

    return 0;
}
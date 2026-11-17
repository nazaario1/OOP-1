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

    cout << "Enter mobile number: ";
    cin >> mobile;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter date of birth: ";
    cin >> dob;

    cout << "Enter billing address: ";
    cin >> address;

    cout << "Enter city: ";
    cin >> city;

    cout << "Enter residence phone: ";
    cin >> phone;

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
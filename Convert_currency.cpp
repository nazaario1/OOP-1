//Convert currency
#include<iostream>
#include<iomanip> // for setprecision
using namespace std;
class UNIVERSITY
{
public:
double amount;
//Parameterized constructor for entering an amount in KSH
UNIVERSITY(int kshAmount)
{
amount = kshAmount;
}
// Default constructor
UNIVERSITY()
{
// Prompt the user to enter an amount in Kenyan Shillings (KSH)
cout << "Enter an amount in Kenyan Shillings (KSH): ";
cin >> amount;
}
// Function to display the converted amount
void displayAmount()
{
amount /= 152.41; // amount=amount/152.41
// Set precision to two decimal places
cout << fixed << setprecision(2);
cout << "Amount in USD: " << amount << endl;
}
// Destructor
~UNIVERSITY()
{
cout << "Destructor called. Object with amount " << amount << " is being destroyed." << endl;
}
};
int main()
{
// Create a UNIVERSITY object using the default constructor
class UNIVERSITY bcs;
// Display the converted amount in USD
bcs.displayAmount();
// The destructor will be called when the object goes out of scope
return 0;
}


// This program uses a constructor to initialize a value and then calculates its square
#include<iostream>
using namespace std;
class UNIVERSITY
{
public:
int x; // Variable declaration
UNIVERSITY() // Default constructor
{
x = 5; // Initialize value
}
int answer() // Function to compute square
{
cout <<"Square="<<x*x<<endl;
}
};
int main()
{
UNIVERSITY bbit; // Create object (calls constructor)
bbit.answer();// Display result
}
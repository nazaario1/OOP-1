//Using a Class (Function inside the class):
#include <iostream>
using namespace std;
int sum(int a, int b); //function prototype
class ZETECH
{
public:
 int sum(int a, int b) // member function
 {
 return a + b;
 }
};
int main()
{
 int a, b, result;
 ZETECH calc; // create object of class ZETECH
 cout << "Enter the two numbers to be added: ";
 cin >> a >> b;
 result = calc.sum(a, b); // call class function
 cout << "\nSum of the two numbers: " << result << endl;
}
#include<iostream>
using namespace std;
class ZETECH
{
	public:
		int sum();
		
		
		
};

int ZETECH::sum()
{
	int a, b, result;
	result =a+b;
	
}
int main()
{
 int a, b, result;
 ZETECH calc; // create object of class ZETECH
 cout << "Enter the two numbers to be added: ";
 cin >> a >> b;
 result = calc.sum(a,b); // call class function
 cout << "\nSum of the two numbers: " << result << endl;
}
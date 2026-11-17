/*
This program demonstrates the use of a parameterised constructor to calculate the sum of two numbers.
*/
#include<iostream>
using namespace std;
class UNIVERSITY
{
public:
int a, b; // Variables to store two numbers
// Parameterised constructor
UNIVERSITY(int x, int y)
{
a = x; // Assign first value
b = y; // Assign second value
}
// Function to calculate and display sum
void Display()
{
cout << "Sum = " << a + b << endl;
}
};
int main()
{
int x, y;
cout << "Enter value for a: ";
cin >> x;
cout << "Enter value for b: ";
cin >> y;
// Object created using parameterised constructor
class UNIVERSITY student(x, y);
student.Display();
return 0;
}
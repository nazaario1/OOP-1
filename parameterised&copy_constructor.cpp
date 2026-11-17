/*
This program demonstrates the use of a parameterised constructor and a copy constructor
to calculate the sum of two numbers.
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
a = x;
b = y;
}
// Function to calculate and display sum
void display()
{
cout << "Sum = " << a + b << endl;
}
};
int main()
{
// Object using parameterised constructor
class UNIVERSITY student(8, 5);
student.display();
}
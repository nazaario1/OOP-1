/*
Demonstrates parameterised and copy constructors in C++
and calculates the cube of a side using objects of the class UNIVERSITY
*/
#include <iostream>
using namespace std;
class UNIVERSITY
{
public:
int side;
// Parameterised Constructor
UNIVERSITY(int x)
{
side = x;
}
// Copy Constructor
UNIVERSITY(const UNIVERSITY &oop)
{
side = oop.side;
}
// Function to compute and display cube
void display()
{
cout << "Cube = " << side * side * side << endl;
}
};
int main()
{
int x;
cout << "Enter the side length of the cube: ";
cin >> x;
// Object using parameterised constructor
class UNIVERSITY bse(x);
// Copy constructor
class UNIVERSITY bseCopy = bse;
cout << "Original Object: ";
bse.display();
cout << "Copied Object: ";
bseCopy.display();
return 0;
}
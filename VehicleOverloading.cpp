// 2.	Write a program using an overloaded function named registration to read unit code, coursework score / 30 and exam scores / 70 for 2 units. 
//The program should then return the unit code and overall score / 100 for the specified units.
#include<iostream>
#include<string.h>
using namespace std;
class ZETECH
{
	public:
		// First overloaded function (unit code first)
		void registration(string unit, int coursework, int exam)
		{
			int total = coursework + exam;
			cout<<"MEMBER FUNCTION 1"<<endl;
			cout<<"Unit Code = "<<unit<<endl;
			cout<<"Coursework Score (/30) = "<<coursework<<endl;
			cout<<"Exam Score (/70) = "<<exam<<endl;
			cout<<"Overall Score (/100) = "<<total<<endl;
		}

		// Second overloaded function (exam first)
		void registration(int exam, int coursework, string unit)
		{
			int total = coursework + exam;
			cout<<"MEMBER FUNCTION 2"<<endl;
			cout<<"Unit Code = "<<unit<<endl;
			cout<<"Coursework Score (/30) = "<<coursework<<endl;
			cout<<"Exam Score (/70) = "<<exam<<endl;
			cout<<"Overall Score (/100) = "<<total<<endl;
		}
};

int main()
{
	class ZETECH ICT;
	string unit1, unit2;
	int cw1, cw2, exam1, exam2;
	// Input for Unit 1
	cout<<"Enter Unit 1 Code: ";
	cin>>unit1;
	cout<<"Enter Coursework Score (/30): ";
	cin>>cw1;
	cout<<"Enter Exam Score (/70): ";
	cin>>exam1;
	// Input for Unit 2
	cout<<"Enter Unit 2 Code: ";
	cin>>unit2;
	cout<<"Enter Coursework Score (/30): ";
	cin>>cw2;
	cout<<"Enter Exam Score (/70): ";
	cin>>exam2;
	cout<<"\nRESULTS\n";
	// Calling overloaded functions
	ICT.registration(unit1, cw1, exam1);
	ICT.registration(exam2, cw2, unit2);
}
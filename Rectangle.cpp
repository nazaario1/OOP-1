#include<iostream>
using namespace std;
class SHAPE
{
	public:
		int Base,Height;
		void capture()
		{
			Base=8;
			Height=10;
			
		}
};

class triangle:SHAPE
{
	public:
		void Area()
		{
			capture();
			cout<<"Area="<<0.5*Base*Height<<endl;
			
		}
		
};

class Rectangle: SHAPE
{
	public:
		void Area()
		{
			capture();
			cout<<"Area="<<Base*Height<<endl;
			
		}
		
};

int main()
{
	class triangle firgure1;
	class triangle firgure2;
	
	firgure1.Area();
	firgure2.Area();
	
	
}
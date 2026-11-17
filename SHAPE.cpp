#include<iostream>
using namespace std;
class SHAPE
{
	public:
		int Base,Height;
		void capture()
		{
			Base=4;
			Height=5;
			
		}
};

class TRI: public SHAPE
{
	public:
		void Area()
		{
			capture();
			cout<<"Area="<<0.5*Base*Height<<endl;
			
		}
		
};

class REC: public SHAPE
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
	class TRI firgure1;
	class REC firgure2;
	
	firgure1.Area();
	firgure2.Area();
	
	
}
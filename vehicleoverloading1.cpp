#include<iostream>
#include<string>
using namespace std;

class VEHICLE
{
	string PREMIUM(string name1, string name2)
	{
		cout<<"The car owner name1 "<<endl;
		cout<<"The car owner name2 "<<endl;
		cout<<"The insurance Premium as at 12% "<<endl;
		
	}
	
	double PREMIUM(double carPrice1, double carPrice2){
		cout<<"The car price 1 "<<endl;
		cout<<"The car price 2 "<<endl;
		
	}
};
int main(){
	VEHICLE Details;
	string name1, name2;
	double carPrice1, carPrice2, insurance1,insurance2;
	
	cout<<"Enter Name of Car Owner 1  "<<endl;
	cin>>name1;
	
	cout<<"Enter Name of Car Owner 2  "<<endl;
	cin>>name2;
	
	
	cout<<"Enter The Car Price 1  "<<endl;
	cin>>carPrice1;
	cout<<"Enter The Car Price   "<<endl;
	cin>>carPrice2;
	
	 insurance1=0.12*carPrice1;
	 insurance2=0.12*carPrice2;
	 cout<<"The car owner name  "<<name1<<"\nThe Car Price \n"<<carPrice1<<"\nThe insurance \n"<<insurance1<<endl;
	 cout<<"The car owner name  "<<name2<<"\nThe Car Price \n"<<carPrice2<<"\nThe insurance \n"<<insurance2<<endl;
	 
	 
	 Details.PREMIUM(string name1, string name2)
	 Details.PREMIUM(double carPrice1, double carPrice2)
	 }
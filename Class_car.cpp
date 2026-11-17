#include<iostream>
#include<string>
using namespace std;
class CAR
{
private:
string brand,model;
float price;
int mileage;
public:
CAR(string b,string m, float p, int ml)
{
brand=b;
model=m;
price=p;
mileage=ml;	
}
void display()
{
cout<<"Brand="<<brand<<endl;	
cout<<"model="<<model<<endl;
cout<<"price="<<price<<endl;
cout<<"mileage="<<mileage<<endl;
}
void drive(int distance)
{
mileage=mileage+distance;
cout<<"Updated mileage="<<mileage<<endl;	
}
};
main()
{
CAR car("Toyota","Corolla",20000,5000);
cout<<"Original Car details \n";car.display();
cout<<"\n After driving 150 miles \n";car.drive(150);
cout<<"\n After driving 300 miles \n";car.drive(300);
return 0;
}
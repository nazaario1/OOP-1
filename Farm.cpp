//iNHERITANCE
#include<iostream>
using namespace std;
class FARM
{
	public:
		string Name, Location;
		double Size_In_Acres;
		
		void RegisterFarm()
		{
			cout<<"Enter Farm Name   "<<endl;
			cin>>Name;
			cout<<"Enter Farm Location  "<<endl;
			cin>>Location;
			cout<<"Enter Farm Size In Actres"<<endl;
			cin>>Size_In_Acres;
			}
			
		voiid DisplayDetails()
		{
			cout<<"Farm Name:"<<Name<<endl;
			cout<<"Farm Location:"<<Location<<endl;
			cout<<"Farm Size In Acres:"<<Size_In_Acres<<endl;
			
		}
};
class DAIRY_FARM:public FARM
{
public:
    int Number_of_Cows;
    double Milk_Per_Day, Price_Per_Litre, Income;
    void ComputeIncome()
    {
        RegisterFarm();
        cout<<"Enter Number_of_Cows=";
        cin>>Number_of_Cows;
        cout<<"Enter Milk_Per_Day=";
        cin>>Milk_Per_Day;
        cout<<"Enter Price_Per_Litre=";
        cin>>Price_Per_Litre;
        Income=Milk_Per_Day*Price_Per_Litre;
        cout<<"\n OUTPUT \n";
        DisplayDetails();
        cout<<"Number_of_Cows="<<Number_of_Cows<<endl;
        cout<<"Milk_Per_Day="<<Milk_Per_Day<<endl;
        cout<<"Price_Per_Litre="<<Price_Per_Litre<<endl;
        cout<<"Total Income Per Day="<<Income<<endl;
    }
    void DisplayProduction()
    {
        cout<<"Number of Cows="<<Number_of_Cows<<endl;
        cout<<"Milk Produced Per Day="<<Milk_Per_Day<<endl;
        cout<<"Price Per Litre="<<Price_Per_Litre<<endl;
        cout<<"Total Income Per Day="<<Income<<endl;
    }
};
main()
{
    class DAIRY_FARM farm;
    farm.ComputeIncome();
}
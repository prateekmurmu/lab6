//Tax Rate Calculation using Functions 
#include<iostream>
using namespace std;
	//Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
	void returnvalue(int &a,int &b,double &c)
		{
		cout<<"Input your UnitCost "<<endl;
		cin>>a;
		cout<<"Input your UnitsPurchase "<<endl;
		cin>>b;
		cout<<"Input your TaxRate "<<endl;
		cin>>c;
		
	}
	//Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
	void returnsTaxandDue(int a,int b,double c,int &d,int &e)	
		{
		d=a*b*c;
		e=(a*b)+d;
	}
	//Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.
	void returnbyformat(int a,int b,int c,int d,int e)
		{
		cout<<"Your Unit Purchase is "<<a<<", Your Unit Cost is "<<b<<" ,Your TaxRate is "<<c<<" ,Your Saletax is "<<d<<" ,Your Total Due is "<<e<<endl;
	}
	//Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.
	int main()
	{
	int unitCost, unitsPurch, salesTax, totalDue;
	double taxRate;
	returnvalue(unitCost,unitsPurch,taxRate);
	cout<<"your unitCst is "<<unitCost<<endl;
	cout<<"your units is "<<unitsPurch<<endl;	
	cout<<"your taxRt is "<<taxRate<<endl;
	
	returnsTaxandDue(unitCost,unitsPurch,taxRate,salesTax, totalDue);
	
	returnbyformat(unitCost,unitsPurch,taxRate,salesTax, totalDue);
}

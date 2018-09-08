#include <iostream>
using namespace std;
	//ask for integer
	void askuser(int &a, int &b)
		{
		cout<<"enter two numbers"<<endl;
		cin>>a;
		cin>>b;
	}
	//fuction for sum
	int sum(int c, int d)
		{
		int A;
		A=c+d;
		return A;
	}
	//function for minimum
	int min(int a,int b)
		{
		if(a<b)
			{
			return a;
		}
		else
			{	
			return b;
		}
	}
//main function
int main(){
	int n1,n2;
	//ask user for integers
	askuser(n1,n2);
	//sum the numbers
	sum(n1,n2);
	cout<<"sum of your numbers are "<<sum(n1,n2)<<endl;
	//find the minimum
	min(n1,n2);
	cout<<max(n1,n2)<<" is minimum."<<endl;
}

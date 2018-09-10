//MINIMUM 
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
	void sum(int c, int d,int &A)
		{
		A=c+d;
	}
	//function for minimum//(By Reference)the function that finds the minimum  of the numbers should be void, 

	void min(int a,int b,int &B)//and takes a third, pass by reference parameter; then puts the minimum  in that.
		{
		if(a<b)
			{
			B=a;
		}
		else
			{	
			B=b;
		}
	}

//main function
int main(){
	int n1,n2,n3,n4;
	//ask user for integers
	askuser(n1,n2);
	//sum the numbers
	sum(n1,n2,n3);
	cout<<"sum of your numbers are "<<n3<<endl;
	//minimum 
	min(n1,n2,n4);
	cout<<n4<<" is minimum."<<endl;//call by reference
}

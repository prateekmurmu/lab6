//MINIMUM 

#include <iostream>
using namespace std;
	//ask for integer The program should ask the user for two numbers
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
	//function for minimum//(By Value) Write a program with a function that takes two int parameters, finds the min, then returns the minimum.
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
	//find the minimum//call the function with the numbers as arguments, and tell the user the minimum.
	min(n1,n2);
	cout<<min(n1,n2)<<" is minimum."<<endl;
}

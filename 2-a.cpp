//SUM

#include <iostream>
using namespace std;
	
	//ask for integer//(By Value) Write a program with a function that takes two int parameters,
void askuser(int &a, int &b)//  The program should ask the user for two numbers, 
		{
		cout<<"enter two numbers"<<endl;
		cin>>a;
		cin>>b;
	}
	//fuction for sum//adds them together, then returns the sum.
	int sum(int c, int d)
		{
		int A;
		A=c+d;
		return A;
	}
//main function
int main(){
	int n1,n2;
	//ask user for integers
	askuser(n1,n2);
	//sum the numbers
	sum(n1,n2);
	//then call the function with the numbers as arguments, and tell the user the sum.
	cout<<"sum of your numbers are "<<sum(n1,n2)<<endl;
}

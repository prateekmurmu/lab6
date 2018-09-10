//MAXIMUM
#include <iostream>
using namespace std;
	

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
	//function for maximum//(By Reference) the function that finds the maximum should be void,
	void max(int a,int b,int &B)//ask for integerand takes a third, pass by reference parameter; then puts the maximum in that.
		{
		if(a>b)
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
	cout<<"sum of your numbers are "<<n3<<endl;//call by reference
	max(n1,n2,n4);
	cout<<n4<<" is maximum."<<endl;//call by reference
}

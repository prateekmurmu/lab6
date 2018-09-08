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
//main function
int main(){
	int n1,n2,n3;
	//ask user for integers
	askuser(n1,n2);
	//sum the numbers
	sum(n1,n2,n3);
	cout<<"sum of your numbers are "<<n3<<endl;
}

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
//main function
int main(){
	int n1,n2;
	//ask user for integers
	askuser(n1,n2);
	//sum the numbers
	sum(n1,n2);
	cout<<"sum of your numbers are "<<sum(n1,n2)<<endl;
}

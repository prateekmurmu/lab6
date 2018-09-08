#include <iostream>
using namespace std;
	
	//fuction for sum
	int sum(int c, int d)
		{
		int A;
		A=c+d;
		return A;
	}
	//function for maximum
	int max(int a,int b)
		{
		if(a>b)
			{
			return a;
		}
		else
			{	
			return b;
		}
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
	int n1,n2,n3,N;
	//ask for integer
	cout<<"enter two numbers"<<endl;
	cin>>n1;
	cin>>n2;
	//asking which operation does the user wants
	cout<<"1.Find the sum."<<endl;
	cout<<"2.Find the maximum."<<endl;
	cout<<"3.Find the minimum."<<endl;
	cout<<"enter the number of the function you want to use ."<<endl;
	cin>>N;
	//applying condition
	if(N==1)
		{
		//sum the numbers
		sum(n1,n2);
		cout<<"sum of your numbers are "<<sum(n1,n2)<<endl;
	}
	else if(N==2)
		{
		//find the maximum
		max(n1,n2);
		cout<<max(n1,n2)<<" is maximum."<<endl;
	}
	else if(N==3)
		{
		//find the minimum
		min(n1,n2);
		cout<<min(n1,n2)<<" is minimum."<<endl;
	}
	else
		{
		cout<<"you rntered an invalid input"<<endl;
	}
	return 0;
}

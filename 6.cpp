//Sum of even and odd

#include <iostream>
#include<cmath>
using namespace std;
	//ask for integer
	void askuser(int &a, int &b)
		{
		cout<<"enter two numbers"<<endl;
		cin>>a;
		cin>>b;
	}
	//Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop)
	int sumEvenNumbers(int a,int b,int &sum)
		{
		sum=0;
		for(int c=a;c<b;++c)
			{
			if(c!=a)
				{
				if(c%2==0)
					{
					sum=sum+c;
				}
			}
		}
	return sum ;
	}
	//Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop)
	int sumOddNumbers(int a,int b,int &sum)
		{
		sum=0;
		for(int c=a;c<b;c++)
			{
			if(c!=a)
				{
				if(c%2 !=0)
					{
					sum=sum+c;
				}
			}
		}
	return sum ;
	}
	//Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop)
	int sumSquareOddNumbers(int a,int b,int &sum)
		{
		sum=0;
		int c=a;
		while(c<b)
			{
			if(c!=a)
				{
				if(c%2 !=0)
					{
					int square=pow(c,2);
					sum=sum+square;
				}
			}
		++c;
		}
	return sum ;
	}
	//Write a function that outputs the sum of the square of the even numbers between firstNum and secondNum. (use while loop)
	int sumSquareEvenNumbers(int a,int b,int &sum)
		{
		sum=0;
		int c=a;
		while(c<b)
			{
			if(c!=a)
				{
				if(c%2==0)
					{
					int square=pow(c,2);
					sum=sum+square;
				}
			}
		++c;
		}
	return sum ;
	}
	
//main function
int main(){
	int n1,n2,sumEven,n3,sumOdd,sumSquareEven,sumSquareOdd;
	//ask user for integers
	askuser(n1,n2);
	//sumof even numbers// create a user-defined function called sumEvenNumbers()
	sumEven= sumEvenNumbers(n1,n2,n3);
	//Use call-by-value
	cout<<sumEven<<" is the sum of all even number between "<<n1<<" and "<<n2<<endl;
	// create a user-defined function called sumOddNumbers().
	sumOdd= sumOddNumbers(n1,n2,n3);
	// Use call-by-value
	cout<<sumOdd<<" is the sum of all odd number between "<<n1<<" and "<<n2<<endl;
	//create a user-defined function called sumSquareOddNumbers(). 
	sumSquareOdd= sumSquareOddNumbers(n1,n2,n3);
	//Use call-by-value
	cout<<sumSquareOdd<<" is the sum square of all odd number between "<<n1<<" and "<<n2<<endl;
	//create a user-defined function called sumSquareEvenNumbers() 
	sumSquareEven= sumSquareEvenNumbers(n1,n2,n3);
	//Use call-by-value
	cout<<sumSquareEven<<" is the sum square of all even number between "<<n1<<" and "<<n2<<endl;
}

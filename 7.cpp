//UpperCase and LowerCase

#include<iostream>
using namespace std;

//Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
	 //ASCII value of lowercase char a to z ranges from 97 to 122
	//ASCII value of uppercase char A to Z ranges from 65 to 92
	//As the difference is 32 between the lower and upper case charachter ,we are adding or subtracting to change the case of the number.
	char toUpper(char a)
		{
		char b;
		if (a>93);
			{
			b=a-32;
		}
	return b;
	}
//Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
	char toLower(char a)
		{
		char b;		
		if (a<93);
			{
			b=(a+32);
		}
	return b;
	}
//Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa. 
int main()
	{
	char x;
	cout<<"Type a upper case or lower case character "<<endl;
	cin>>x;
	toUpper(x);
	toLower(x);	
	// If the user enters a lower case character, it should automatically detect it 
	if(x>93)
		{
		cout<<"You typed "<<x<<" which is in lower case.Its upper case form is "<< toUpper(x)<<endl;
	}
	else
		{
		cout<<"You typed "<<x<<" which is in  upper case.Its lower case form is "<<toLower(x)<<endl;
	}

}


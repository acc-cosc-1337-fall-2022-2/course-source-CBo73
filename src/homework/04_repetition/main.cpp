//write include statements
#include <iostream>
#include "dna.h"

//write using statements
using std::cout;
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int choice;
	int num;
	int num1;
	int num2;
	int exprogram = 0;
	
	do
	{
		cout <<"\n1) for Factorial\n2) for Greatest Common Divisor\n3) for Exit\n";
		
		cin >> choice;

		if (choice == 1)
		{
			cout<<"Please enter a positive integer"<<"\n";
			cin>>num;
			cout<<"The Factorial of your number is: "<<factorial(num)<<"\n";

		}
		if (choice == 2)
		{
			cout<<"Please enter the first integer for GCD"<<"\n";
			cin>>num1;
			cout<<"Please enter the second integer for GCD"<<"\n";
			cin>>num2; 
			cout<<"The GCD of these numbers is: "<<gcd(num1,num2)<<"\n";

		}

		else if (choice == 3)
		{
			cout<<"Are you sure you would like to quit? Press 0 to continue or 1 to exit"<<"\n";
			cin>>exprogram;

		}
	} 
	while (exprogram == 0);

	cout<<"\nTake Care!\n";
		
	return 0;
}
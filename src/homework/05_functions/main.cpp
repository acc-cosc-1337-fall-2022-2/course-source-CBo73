#include <iostream>
#include "func.h"

using std::cout;
using std::cin;

/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	int choice;
	int exprogram = 0;
	double gc_content;
	string dna_complement;
	string dna;

	do
	{
		cout<<"\n1) for Get GC Content\n2) for Get DNA Complement\n3) for Exit\n";
		cin>>choice;

		if (choice == 1)
		{
			cout<<"\nPlease enter the DNA string\n";
			cin>>dna;
			gc_content = get_gc_content(dna);
			cout<<"\nThe GC content is: "<<gc_content<<"\n";


		}

		else if (choice == 2)
		{
			cout<<"\nPlease enter the DNA string\n";
			cin>>dna;
			dna_complement = get_dna_complement(dna);
			cout<<"\nThe DNA content is: "<<dna_complement<<"\n";

		}

		else
		{
			cout<<"\nAre you sure you would like to quit? Press 0 to continue or 1 to exit"<<"\n";
			cin>>exprogram;
		}

	}
	while(exprogram == 0);

	cout<<"\nHave a Good Day!\n";

	return 0;
}
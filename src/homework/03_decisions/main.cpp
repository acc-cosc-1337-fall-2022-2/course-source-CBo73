//write include statements
#include "decisions.h"
#include<iostream>

using std::cout;
using std::cin;
using std::string;

int main() 
{
	int choice;
	int grade;
	string result;

	cout<<"1. Letter Grade Using if"<<"\n"<<"2. Letter Grade Using switch"<<"\n"<<"3. Exit"<<"\n";
	cin>>choice;

	switch(choice)
	{
		case 1:
			cout<<"IFELSEIF: Please enter how many percentage points earned Ex: 92"<<"\n";
			cin>>grade;
			result = get_letter_grade_using_if(grade);
			cout<<result<<"\n";
			break;
		case 2:
			cout<<"SWTICH: Please enter how many percentage points earned Ex: 92"<<"\n";
			cin>>grade;
			result = get_letter_grade_using_switch(grade);
			cout<<result<<"\n";
			break;
		case 3:
			cout<<"Have a good day!";
			break;
	}

	return 0;
}
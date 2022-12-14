//write include statements
#include<iostream>
#include<hwexpressions.h>

//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	cout<<"What is the meal amount?: "<<"\n";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"What is the tip rate? Ex. 5% = 0.05: "<<"\n";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount,tip_rate);

	total = (tip_amount+tax_amount+meal_amount);

	cout<<"Meal Amount: "<<meal_amount<<"\n";
	cout<<"Sales Tax: "<<tax_amount<<"\n";
	cout<<"Tip Amount: "<<tip_amount<<"\n";
	cout<<"Total: "<<total<<"\n";

	return 0;
}

#include<iostream>

using namespace std;

int main()
{
	float interest;
	float showint;
	int year;
	float deposit;
	float total;
	int i = 0;
	cout<<endl<< "enter the amount invested: ";
	cin>>deposit;
	
	cout<<"enter the annual interest rate: ";
	cin>>interest;

	cout<<"enter the duration of the deposit: ";
	cin>>year;

	cout<<"Year\tInterest\tNew Total"<<endl;
	while (i < year)
	{
		++i;
	
		showint = interest * deposit;
		deposit += showint;


		cout<<i<<"\t"<<showint<<"\t"<<deposit<<endl;


	}
	return 0;
}
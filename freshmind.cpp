#include<iostream>

using namespace std;

int main()
{
	//take input
	int number = 1;
	int work;
	cout<<endl;

	//code to stop when zero is input using while
	while(true)
	{
		cout<<"input a number: ";
		cin>>number;
		if (number == 0)
			break;
		work=number;
		cout<<"factorial of "<<number;
		while (number > 1)
		{
			work *= --number;
		}
		cout<<" is "<<work<<endl;
		
	}
	cout<<"good bye!"<<endl;
	//code to calculate factorial
	



	return 0;
}
#include<iostream>

using namespace std;

int main()
{
	//take input for factorialing and work
	int fact;
	int work;
	cout<<endl<<"enter a number for factorial calculation";
	cin>>fact;
	work=fact;
	cout<<fact<<"! is ";

	//using do while decrement number and multiply it by running number
	do
	{
		fact--;
		work *= fact;


	}while (fact>1);
	
	cout<<work<<endl;


	return 0;
}
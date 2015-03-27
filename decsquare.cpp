#include<iostream>

using namespace std;

int main()
{
	int number;
	//bool borg = true;
	cout<<endl<<"enter a number: ";
	cin>>number;
	cout<<"number \t square"<<endl;
	
	while (number>0)
	{
		cout<<number<<"\t"<<(number*number)<<endl;
		number--;

		//if(number == 0)
		//	borg = false;
	
	
	}




	return 0;
}
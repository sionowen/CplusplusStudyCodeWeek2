#include<iostream>

using namespace std;

int main()
{
	//declare two ints
	int term;
	double sum = 0;
	cout<<endl<<"enter a positive integer :";
	cin>>term;
	
	//for loop that tests i for less than term and adds i to sum before rerunning
	for (int i = 0; i <= term ; i++)
	{
		sum = sum + i;
		
	}

	cout<<"the sum of the first "<<term<<" numbers is "<<sum<<endl;



	return 0;
}
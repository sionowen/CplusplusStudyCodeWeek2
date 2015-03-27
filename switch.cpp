#include<iostream>

using namespace std;

int main()
{
	//declare int dice
	int dice = 0;

	//take input for dice
	cout<<endl<<"Pick a number between 1 and 12 and you may win a prize! ";
	cin>>dice;

	//Do a switch
	switch ( dice )
	{
		case 7:
			cout<<" Congragulations! you won a C++ Book! ";
			break;
		
		case 11:
			cout<<" You won a Java Book ";
			break;

		case 12:
			cout<<"You lose ";
			break;

		default:
			cout<<"You suck!";
			break;

	}

	cout<<endl;



	return 0;
}
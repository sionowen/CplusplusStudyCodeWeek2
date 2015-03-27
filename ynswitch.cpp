#include<iostream>

using namespace std;

int main()
{
	//take input
	char user;
	cout<<endl<<" please enter Y or N";
	cin>>user;

	switch(user)
	{
	case 'Y':
	case 'y':
		cout<<" you responded positive";
		break;
	case 'N':
	case 'n':
		cout<<" you responded negative";
		break;
	default:
		cout<<" you did not respond correctly";
	}
	cout<<endl;
	return 0;
}
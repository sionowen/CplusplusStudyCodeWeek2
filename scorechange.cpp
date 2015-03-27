#include<iostream>

using namespace std;

int main()
{
	int score;
	cout<<endl<<"enter your test score out of 100";
	cin>>score;
	
	switch(score/10)
	{
	case 10:
	case 9:
		cout<<"you got an A";
		break;
	case 8:
		cout<<"you got an B";
		break;
	case 7:
		cout<<"you got an C";
		break;
	case 6:
		cout<<"you got an D";
		break;
	default:
		cout<<"you got an F";
		break;
}



	return 0;
}
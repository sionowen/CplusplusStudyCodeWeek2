#include<iostream>


using namespace std;


int main()
{
	int month;
	int year;
	int day;

	//take input for month day and year
	cout<<endl<<"enter month, day and year (mm:dd:yyyy) ";
	cin>>month>>day>>year;

	switch (month)
	{
		case 1:
		cout<<"January";
		break;

		case 2:
		cout<<"February";
		break;	

		case 3:
		cout<<"March";
		break;

		case 4:
		cout<<"April";
		break;

		case 5:
		cout<<"May";
		break;

		case 6:
		cout<<"June";
		break;

		default:
		cout<<"you didnt enter a month";
		break;
	}
	cout<<" "<<day<<", "<<year<<endl;


	return 0;
}
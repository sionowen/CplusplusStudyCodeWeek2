#include<iostream>


using namespace std;


int main()
{
	char first;
	char second;
	cout<<endl<<"input y or n :";
	cin>>first;
	cout<<endl<<"input y or n :";
	cin>>second;
	if ((first == 'y') &&(second == 'y'))
		cout<<"both inputs are y"<<endl;

	else if ((first== 'n') && (second== 'n'))
		cout<<"both inputs are n"<<endl;

	else
		cout<<"one is y and one isn't";
	return 0;
}
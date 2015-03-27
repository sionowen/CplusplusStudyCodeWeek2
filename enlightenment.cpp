#include<iostream>

using namespace std;

int main()
{
	//declare char
	char ans;
	
	cout<<endl<<" do you seek enlightenment? (Y/n): ";
	cin>>ans;

	//write logic statement
	if (ans == 'Y' || ans == 'y')
		cout<<" Then do not ask for it! "<<endl;
	else
		cout<<" thats cool "<<endl;
	return 0;
}
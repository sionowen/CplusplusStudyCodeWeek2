#include<iostream>


using namespace std;


int main()
{
	//take input for char
	char letter;

	cout<<endl<<" please input an uppercase letter :";
	cin>>letter;
	
	//test for caps using operators
	if ((letter <= 'Z') && (letter >= 'A'))
		cout<<"this is a capitol letter"<<endl;
	else
		cout<<"this is not a capitol letter"<<endl;




	return 0;
}
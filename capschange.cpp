#include<iostream>

using namespace std;

int main()
{
	//take char
	char letter;

	cout<<endl<<" enter an upper case letter: ";
	cin>>letter;
	
	//run test for uppercase
	if ((letter <= 'Z') && (letter >= 'A'))
	{
		cout<<"You entered an upper case ";
		letter = tolower(letter);
		cout<<letter;
	}
	else
		cout<<"I told you UPPER CASE LETTERS ONLY!!! ";

	cout<<endl;

	return 0;
}
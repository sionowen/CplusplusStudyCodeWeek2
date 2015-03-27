#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char str[256];

	cout<<endl<<"enter your name : ";
	cin.getline(str,256);
	
	cout<<"the length of your name is :"<<strlen(str)<<endl;






	return 0;
}
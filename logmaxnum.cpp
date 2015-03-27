#include<iostream>

using namespace std;

int main()
{
	//take three inputs
	int a;
	int b;
	int c;
	
	cout<<endl<<"enter three unique integers : ";
	cin>>a>>b>>c;
	cout<<"the largest of the three integers is : ";

	//test for the largest int
	if ((a>=b) && (a>=c))
		cout<<a;
	else if ((b>=a) && (b>=c))
		cout<<b;
	else
		cout<<c;
	cout<<endl;
	return 0;
}
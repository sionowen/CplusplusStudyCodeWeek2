#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int num;
	double ans;
	cout<<endl<<"Enter a number : ";
	cin>>num;

	cout<<"Number\tSquare Root";


	for (int i = 0; i <= num; i++)
	{
		cout<<i<<"\t"<<sqrt(i)<<endl;
		
		
	}




	return 0;
}
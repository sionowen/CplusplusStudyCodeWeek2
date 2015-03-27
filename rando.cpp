#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	cout<<endl;
	srand(time(NULL));
	for (int i = 0; i <= 5; ++i)
	{
		cout<<"random number "<<i<<": "<<rand() %20 <<endl;
	
	}



	return 0;
}
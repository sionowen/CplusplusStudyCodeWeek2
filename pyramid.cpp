#include<iostream>

using namespace std;

int main()
{
	int user;
	cout<<endl<<"im gonna try to make a pyramid";
	cin>>user;
	int space = user;
	for (int i = 1; i <= user; i++)
	{
	//loop to calculate spaces for print
		--space;
		for(int a = 0; a < space; a++)
			cout<<" ";
		
		//calculate stars for print
		int stardub = (i*2)-1;
		for (int b = 0;b < stardub; ++b)
			cout<<"*";
		cout<<endl;
		
	
	
	
	}





	return 0;
}
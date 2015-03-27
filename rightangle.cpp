#include<iostream>

using namespace std;

int main()
{
	int user;
	int space = 0;
	cout<<endl<<" enter a number and I will make a right angle triangle out of it :";
	cin>>user;
	for(user; user > 0; --user)
	{	

		for(int a = space; a> 0; --a)
			cout<<" ";
		++space;
		for(int i=user;i > 0;--i)
			{
			cout<<"*";
						
			}
		cout<<endl;
		
	}


	return 0;
}
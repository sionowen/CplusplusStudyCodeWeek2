#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<endl<<"enter a positive integer :";
	cin>>n;
	int work;
	work = (n*n*n);
	cout<<"the sum of the first "<<n<<" cubes is ";
	for (int i=0; n > i;)
	{
		--n;
		work += (n*n*n);		

	}
	cout<<work<<endl;


	return 0;
}
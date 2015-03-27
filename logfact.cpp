#include<iostream>

using namespace std;

int main()
{
	//take and declare inputs from user for factor
	int d;
	int n;

	cout<<endl<<"enter two positive integers :";
	cin>>d>>n;
	//test to see which number is larger
	


	//run a code with logical operators to test for being a factor and output results
	if ((d > n) && (n > 0) && (d % n == 0))
		cout<<n<<" is a factor of "<<d<<endl;
	else
		cout<<n<<" is not a factor of "<<d<<endl;


	return 0;
}
#include<iostream>
#include<math.h>
using namespace std;

long funct(long a,long b,long c)
{
	return (b * b-4 * a * c);
}
float f(float x, float y)
{
	return sqrt(x * x + y * y);
}
float g(float x, float y, float z)
{
	return sqrt(x * x + y * y + z * z);
}
float h(float x, float y)
{
	return x * exp(y-5);
}
int cube(int x)
{
	return x*x*x;
}
char grade(int x)
{
	switch(x/10)
	{
	case 10:
	case 9:
	return 'a';
	case 8:
	return 'b';
	case 7:
	return 'c';
	case 6:
	return 'd';
	default:
	return 'f';
	}	
}

int main()
{
	int z;
	/* cout<<endl<<funct(3,4,5)<<endl;
	cout<<f(3,4)<<endl;
	cout<<g(5,6,7)<<endl;
	cout<<h(10,11)<<endl;
	cout<<cube(10)<<endl;
	*/
	cout<<endl<<"enter your grade :";
	cin>>z;
	cout<<"your grade is "<<grade(z)<<endl;
	return 0;
}
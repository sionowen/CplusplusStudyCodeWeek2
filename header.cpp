#include<iostream>

using namespace std;

void header();
float avg(int,int);

int main()
{
	int math;
	int science;
	cout<<endl<<"enter math and science grades";
	cin>>math>>science;
	header();
	cout<<math<<"\t"<<science<<"\t";
	cout<<avg(math,science)<<endl;

	return 0;
}

void header()
{
	cout<<"math\tScience\tAverage"<<endl;
}


float avg(int num1 , int num2)
{

	return (num1 + num2)/2;
	
}


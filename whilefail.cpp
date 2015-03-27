#include<iostream>

using namespace std;

int main()
{
	bool blorg;
	blorg = true;
	int max = -10000000;
	int num;
	int min = 10000000;
	cout<<endl;
	
	for(;blorg;)
	{
		cout<<"enter a number: ";
		cin>>num;

		if (num == 0)
			blorg = false;
		if(blorg)
		{
			if (num < min)
				min=num;
			if (num > max)
				max=num;
		}


	}

	cout<<"minimum is "<<min<<endl;
	cout<<"maximum is "<<max<<endl;




	return 0;
}
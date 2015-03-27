#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	const int DATEFACTOR = -5700;
	double carbon;
	double ans;
	cout<<endl<<"enter the carbon remaining";
	cin>>carbon;
	
	ans = DATEFACTOR * log(carbon)/log(2);
	
	cout<<"age of artifact in years : "<<ans<<endl;




	return 0;
}
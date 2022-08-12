#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int n,rem;
	long long int sum=0;
	long long int a=0;
	cin>>n;
	long long int orignum;
	orignum=n;
	while(n!=0)
	{
		rem=n%10;
		a=a+1;
		n=n/10;
	}
	int f =orignum;
	while(orignum!=0)
	{
		rem=orignum%10;
		sum=sum+pow(rem,a);
		orignum=orignum/10;

	}
    
	if(sum==f)
	{
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}

}
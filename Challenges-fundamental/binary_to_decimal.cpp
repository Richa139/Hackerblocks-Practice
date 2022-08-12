#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int rem,sum=0,p=1;

	while(n>0)
	{
       rem=n%10;
       sum=sum+rem*p;
       n=n/10;
       p=p*2;

	}
	cout<<sum<<endl;
}
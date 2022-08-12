#include<iostream>
using namespace std;
int main()
{
	int num,temp,i=1,sum=0,rem;
	cin>>num;
	temp=num;
	while(temp!=0)
	{
        rem=temp%8;
        sum=sum+i*rem;
        i=i*10;
        temp=temp/8;
	}
	cout<<sum;
}
#include<iostream>
using namespace std;
int main()
{
	int n,rem;
	cin>>n;
	int a=0;
	int digits;
	cin>>digits;
	while(n>0)
	{rem=n%10;
       
	if(rem==digits)
	{
       a=a+1;
       
   }
   n=n/10;
       

}
cout<<a<<endl;

}
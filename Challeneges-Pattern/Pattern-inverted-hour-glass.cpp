#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<j<<" ";
		}
      for(int space=2;space<4*i;space++)
	  {
	  	cout<<" ";
			  }
			  for(int j=i;j<=n;j++)
			  {
			  	cout<<j<<" ";
				}		
		cout<<endl;
	}
	for(int i=n;i>=0;i--)
	{
		cout<<i<<" ";
	}
	for(int j=1;j<=n;j++)
	{
		cout<<j<<" ";
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<j<<" ";
		}
		   for(int space=2;space<4*i;space++)
	  {
	  	cout<<" ";
			  }
			  for(int j=i;j<=n;j++)
			  {
			  	cout<<j<<" ";
					  }		
		
		cout<<endl;
	}
}

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
    int i,j;
    
    for( i=1;i<=n;i++)
    {
    	for(int space=n-i;space>=1;space--)
    	{
    		cout<<" ";
		}
    	for(j=1;j<=n;j++)
    	{
    		if(i==1 or i==n or j==1 or j==n )
    		{
    			cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
			cout<<endl;
		
	}
 
}

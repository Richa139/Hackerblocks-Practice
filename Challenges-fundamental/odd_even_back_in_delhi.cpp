#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int no;
	
	for(int i=1;i<=n;i++)
	{
		cin>>no;
		int sum=0;
	    int s=0;
       
	while(no>0){
         int m=no%10;
         if(m%2==0)
         {
         	 sum=sum+m;
         }
         else 
         {
            s=s+m;
         }
         no=no/10;
	}


	if(sum%4==0 || s%3==0 )
	{
		cout<<"Yes"<<endl;
	}
	
	else 
	{
		cout<<"No"<<endl;
	}
   }
}
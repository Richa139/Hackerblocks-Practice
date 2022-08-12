#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int terms;
    for (int i =1; i<=n;i++)
    {
       terms=3*i+2;
       if(terms%m!=0)
       {
       	  cout<<terms<<endl;
       }
       else n++; 
      
    }
    } 
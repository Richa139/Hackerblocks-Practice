#include<iostream>
using namespace std;
int main()
{
	int f=0;
	int n;
	int k;
	cin>>f>>n>>k;
	int c;
     
    while(f<=n)
    {
    	c=(f-32)*5/9;
    	cout<<f<<" "<<c<<endl;
    	f=f+k;
    }
    cout<<endl;
}
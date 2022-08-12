#include<iostream>
using namespace std;
int main() {
	int  n;
	cin>>n;
	int start; 
	cin>>start;
	n--;
	int increase = 0;
	while(n--)
	{
		int no; 
		cin>>no;
		if((no<start && increase==0) || (no>start && increase==1))
			start = no;
		else if(no>start && increase==0)
		{
			start = no;
			increase =1;
		}
		else
		{
			cout<<"false\n";
			return 0;
		}
	}
	cout<<"true";
}
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int b,c,a;
	cin>>a;
    cin>>b;
    cin>>c;
     int d,x,m,y;
	d=(b*b - 4*a*c);
	x= (-b+sqrt(d))/2*a; 
	y=(-b-sqrt(d))/2*a;
	

    if(d==0)
    {
    	cout<<"Real and Equal"<<endl<<y<<" "<<x;
    }
    else if(d>0)
    {
    	cout<<"Real and Distinct"<<endl<<y<<" "<<x;
    }
    else
    {
    	cout<<"Imaginary";
    }
    
}
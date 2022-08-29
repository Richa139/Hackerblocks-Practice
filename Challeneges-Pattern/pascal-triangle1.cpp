#include<iostream>
using namespace std;
int main(){
    int n;
  cin>>n;
  int i,j;
      //work for each row
        for(i=1;i<=n;i++){
            int num=1;   //starting number

            //work for spaces
            for(int spaces =1;spaces<=(n-i+1);spaces++)
                  cout<<" ";

            for(j=1;j<=i;j++){
                if(j==1)
                   cout<<j<<" ";
                else
                {
                    num=num*(i-j+1)/(j-1);      // updating number
                    cout<<num<<" ";
                }
            }
		
            cout<<("\n");
        }
    
	}

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int n,p,q;
    cin>>n;
    if(n==0||n==1||n==2){
        cout<<"-1"<<endl;
    }
    
        else if(n%2==0){
            p=((n*n)/4)+1;
            q=((n*n)/4)-1;
            cout<<q<<" "<<p<<endl;

        }
        else if(n%2!=0){
             p=(((n*n)+1)/2);
            q=(((n*n)-1)/2);
            cout<<q<<" "<<p<<endl;

        }
        else{
            cout<<"-1"<<endl;
        }

      return 0;
}
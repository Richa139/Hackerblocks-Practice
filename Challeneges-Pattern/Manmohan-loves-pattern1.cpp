#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    cout<<1<<endl;
    for(int i=2;i<=n;i++){
       if(i%2==0){
            cout<<1;
            for(int j=2;j<i;j++){
                cout<<0;
            }
            cout<<1;
    cout<<endl;

        }
         else{
            for(int j=1;j<=i;j++){
                cout<<1;
            }
        cout<<endl;
        }
        
    }
}

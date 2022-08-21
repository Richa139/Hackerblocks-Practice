#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int z=2*n-3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=1;j<=z;j++){
            cout<<" "<<" ";
        }
        if(i==n){
            for(int i=n-1;i>=1;i--){
                cout<<i<<" ";
            }
        }
        else{
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
        z=z-2;
    }
    }
}

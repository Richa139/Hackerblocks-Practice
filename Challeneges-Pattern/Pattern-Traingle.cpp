#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int j;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
         cout<<" "<<" ";
         }
        for( j=i;j<=i*2-1;j++){
           cout<<j<<" ";
        }
        for( j=i*2-2;j>=i;j--){
           cout<<j<<" ";
        }
        cout<<endl;
    }
}


#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a=0;
    int b=0;
    int c=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
      a=b;
      b=c;
      c=a+b;
      cout<<a<<" ";  
        }
        cout<<endl;
    }
}

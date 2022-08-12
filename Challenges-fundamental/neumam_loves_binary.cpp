#include<iostream>
using namespace std;
int main()
{
	int m;
	cin>>m;
	int n,rem,sum=0,p=1;
	for(int i=1;i<=m;i++){
		sum=0,p=1;
	cin>>n;
	while(n>0)
	{
       rem=n%10;
       sum=sum+rem*p;
       n=n/10;
       p=p*2;

	}
	cout<<sum<<endl;
}
}

// import java.util.Scanner;
// public class Main {
// public static void main(String args[]) {
// Scanner scn =new Scanner(System.in);
// int m=scn.nextInt();
// while(m>0){
// int num=scn.nextInt();
// int res=binarytodecimal(num);
// System.out.println(res);
// m--;
// }
// }
// public static int binarytodecimal(int n){
//     int ans=0,mul=1;
//     while(n!=0){
//         int rem=n%10;
//         ans=ans+(rem*mul);
//         n=n/10;
//         mul=mul*2;
//     }
//     return ans;
// }
// }
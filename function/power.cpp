#include<iostream>
using namespace std;
// int power(int a , int b)
// {
//     cin>>a>>b;
//  int ans =1;
//  for (int i=1;i<=b;i++){
//      ans = ans*a;
//  }
//  return ans;
// }
int power()
{
    int a , b;
    cin>>a>>b;
 int ans =1;
 for (int i=1;i<=b;i++){
     ans = ans*a;
 }
 return ans;
}
int main()
{
    int a;
    int b;
    // int ans = power(a,b);
    // cout<<"Answer is: "<<ans;
    int ans = power();
    cout<<"Answer is :"<<ans;   
return 0;
}
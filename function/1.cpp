#include<iostream>
#include<math.h>
using namespace std;
int bits(){
    int n , k ;
    int ans =0;
    int answ =0;
    int i=0;
cin >>n>>k;
while (n!=0 || k!=0){
    int bit = n & 1;
    int bits = k & 1;
     ans = (bit * pow(10,i))+ans;
     answ = (bits * pow(10,i))+answ;
    n = n>>1;
    k = k>>1;
i++;
}

cout << ans<<endl;
cout << answ<<endl;
int count=0;
while(ans!=0){
    if (ans%10 == 1)
    {
       count++;
    }
   ans = ans/10; 
}
while(answ>0){
    if (answ%10 == 1)
    {
       count++;
    }
   answ = answ/10; 
}
cout<<count;
return 0;
}
int main()
{
bits();
    
return 0;
}
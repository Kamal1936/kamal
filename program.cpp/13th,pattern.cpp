#include<iostream>
using namespace std;
int main()
{
   int n , count = 1;
   cout<<"Enter the value of n :";
   cin>>n;
   int i=1;
   while  (i<=n){
       int j = 1;
       while(j<=n){
           cout << count << " ";
           count++;
           j++;
       }
      cout <<endl;
      i++; 
   }
return 0;
}
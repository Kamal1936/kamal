#include<iostream>
using namespace std;
int main()
{
    int n , i=1 , sum = 0 ;
    cout <<"Enter the value of n :"<<endl;
    cin >>n;
    while (i<=n){
        sum = sum+i;
     
        i++;
    }
       cout << "Answer is  :" <<sum ;
return 0;
}
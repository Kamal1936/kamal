#include<iostream>
using namespace std;
int main()
{
    int n , i=2 , sum =0;
    cout<<"Enter the value of n :";
    cin >> n ;
    while (i<=n){
        sum = sum +i;
        i=i+2;
    }
    cout << "Answer is :  " << sum;
return 0;
}
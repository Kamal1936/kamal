#include<iostream>
using namespace std;
int fibbonaci() {
        int n , first = 0, second = 1 , next ;
    cout<<"Enter the postion of number where you ant to print the series"<<endl;
    cin>>n;
        for(int i=0;i<=n;i++){
            cout<<first<<endl;
            next=first+second;
            first=second;
            second=next;
        }
        return 0;
    }
int main()
{
 
    cout<<"Your fibbonaci series is";
    cout<<fibbonaci()<<endl;
   
return 0;
}
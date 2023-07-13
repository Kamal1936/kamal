#include<iostream>
using namespace std;
int main()
{
    int n ,i=1,j=1 ;
    cout <<" Enter the value of n : "<<endl;
    cin>>n;

    while(i<=n){
       
        while(j<=n){
            cout << "*";
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
}
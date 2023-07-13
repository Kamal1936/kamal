#include<iostream>
using namespace std;
int main()
{
    int n;
     char ch='A';
    cout<<"Enter the value of n:";
    cin>>n;
    int row=1;
    while (row<=n){
        int col=1;
       
        while(col<=row){
            cout<<ch;
            ch++;
           col++; 
        }
        cout<<endl;
        row++;
    }
return 0;
}
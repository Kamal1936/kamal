#include<iostream>
using namespace std;
int main()
{
    int n ,i=2;
    cout << "Enter the value of n :";
    cin >>n;
    while(i<n){
        if(n%i==0){
            cout<< "Not Prime for"<< i<<endl;
        }
        else {
            cout<<"Prime for"<<i<< endl;
        }
         i++;
    }

return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a , b;
    cout<<"Enter the value of a "<<endl; 
    cin>>a;
    cout<<"Enter the value of b "<<endl; 
    cin>>b;
if(a>b){
    cout<<"A is greater  number"<<endl;
}
else if  (a==b){
    cout<< "A and B  is equal"<<endl;
}
else {
    cout<<"B is greater number"<<endl;
}
return 0;
}
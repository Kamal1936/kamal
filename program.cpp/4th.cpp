#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the value of ch :";
    cin>>ch;
    if (ch>=65 && ch<=90 ) {
        
        cout <<"This is upper case";
    }
    else if(ch>=97 && ch<=122){
        cout <<"This is lower case";
    }
    else {
        cout <<"this is numeric";
    }
   
return 0;
}
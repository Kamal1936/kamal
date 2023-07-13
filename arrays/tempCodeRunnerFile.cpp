#include<iostream>
using namespace std;
void printarr(int arr[],int size){
    cout<<"printing of Array"<<endl;
    for (int i=0;i<size;i++){
      cout<<arr[i]<<" ";
     
    }
     cout<<"Printing DONE.."<<endl;
}
int main()
{
    int arr[10]={3,5,6,7,7,8,5,4,3,2} ,n=10;
    printarr( arr,n);
    int arrsize;
    arrsize = sizeof(arr)/sizeof(int);
    cout <<"size od array is :"<< arrsize << endl;
    int arr1[12]={2,5,6,7} ,m=12;
    printarr( arr1,m);
    int arr2[15]={1,4,7,9,5} ,j=15;
    printarr( arr2,j);

return 0;
}
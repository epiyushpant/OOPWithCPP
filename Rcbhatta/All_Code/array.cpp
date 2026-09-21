
/*--------------Array-------------*/
/*
Array is the collection of elements of the same data type that are
stored sequentially in memory

* The index of the array always stats with 0
* ex  arr[3]  = {10,20,30}
* Array store elements contiguously in memory
* 
*/
#include<iostream>
using namespace std;
int main(){
    int a[5];
    cout<<"Enter the element"<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
        cout<<"The output array are:";
      for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    
}
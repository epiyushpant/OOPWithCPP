/* Type casting is  no thing but process of changing a variable from one data type to another*/

// int a =10;
// float b = (float)a;
#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
   int a=10;
   double b = 3.14;
   char c = 'A';
//    cout<<typeid(a).name()<<endl;
//    cout<<typeid(b).name()<<endl;
//    cout<<typeid(c).name()<<endl;

//implicit
double a1 =a;
int b1 = b;
cout<<a1<<endl;
cout<<b1;

//explicit
double a2 = (double)a;

}
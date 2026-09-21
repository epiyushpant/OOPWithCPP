/*------Nested class---------- */
/*
A class which is declared or contain inside another class called
nested class.

Syntax 
    class class_name{
    
    Public: 
     Class class_name2{    //member variable
     // data Member

     Public:
     member function
     };
    };

*/
#include<iostream>
using namespace std;
class A{
    public:
    class B  // member variable of class A
    {
                int a,b;
                public:
                void input()    // member function of class B
                {
                    cout<<"Enter Two numbers";
                    cin>>a>>b;
                }
                void show(){
                    cout<<a<<" "<<b<<endl;
                }
    };
};
int main(){
    A::B obj;
    obj.input();
    obj.show();
}
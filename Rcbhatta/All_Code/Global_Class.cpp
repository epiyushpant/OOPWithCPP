/*-------------A class which is declared outside of all the function as a block------*/

/*
Syntax : 
        Class class_name{
        //data member
        //
        public: 
        member function
        };
        class class_name : public base_class{
        
        
        };

*/
#include<iostream>
using namespace std;
 
class A{
    protected:
    int a,b;
    public:
    void input(){
        cout<<"Enter Two Numvber";
        cin>>a>>b;
    }
    void show(){
        cout<<a<<" "<<b;
    }
     };
    class B : public A{
        public:
        void display(){
            cout<<a<<" "<<b; 
        }
    };

 int main(){
    A obj;
    B obj2;
    obj2.input();
    obj2.show();
    obj2.display();
 }
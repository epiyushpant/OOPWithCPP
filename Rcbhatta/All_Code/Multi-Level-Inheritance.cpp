/*----------Multi-Level Inheritance---------*/
/*
        A class which contain only one  base class and have a dericed class 
        and derived next another derived class form existing derived class


        Syntax
        class base{
        member of base class
        } 
        class derive1: public base{
        member of derived 1
        }
        class derive2: public derive1{
        member of derive2 class
        }

*/
#include<iostream>
using namespace std;
class base{
        protected: 
        int a;
        public:
        void input(){
                cout<<"Enter value of base class";
                cin>>a;
        }
       /* void show(){
                cout<<"a = "<<a<<endl;
        }*/
};
class derive1 : public base
{
protected: 
int b;
public:
void input1(){
        cout<<"Enter value of derived class";
        cin>>b;
}
void show1()
{
        cout<<"b = "<<b<<endl;
}
 void show(){
                cout<<"a = "<<a<<endl;
        }
};
class derived2 : public derive1
{
        private:
        int c;
        public:
        void input2(){
                cout<<"Enter value of derived 2 class";
                cin>>c;
        }
        void show2(){
                cout<<"A = "<<a<<" B = "<<b<<"C "<<c;
        }
};
int main(){
  derived2 obj;
   obj.input();
   obj.show();  
  obj.input1();
   obj.show1();   
   obj.input2();
   obj.show2();
}
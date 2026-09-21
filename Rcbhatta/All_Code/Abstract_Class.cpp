/*-----------------Abstract Class--------------*/
/*
A class which contain at least one pure virtual function
we can't deckare the object of abstract class.

// syntax
        class A {
            public:
            virtual void show() = 0;
        };

/* -------------------------{pure virtual functionj--------
pure virtual function are virtual functions which heve no defination.
they start with virtual keyword and end with equal to zero

- if we don't override the pure virtual function in derive class then 
derive class also becomes abstract class.

- we can't chenge the signature of pure virtual function.

*/
#include<iostream>
using namespace std;
class A 
{
    public:
    virtual void show() = 0;
    void display(){
        cout<<" Hi I am base class"<<endl;
    }
};
class B : public A {
    public: 
    void show(){
        cout<<"I am derived class";
    }
};
int main()
{
    A *pt;
    B ob;
    pt = &ob;
    pt->show();
    ob.display();
    ob.show();
}
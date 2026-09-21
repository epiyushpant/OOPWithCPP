/*----------------------Hybrid Inheritance----------------*/
/*
    it is the combination of more than one type of inheritance is called
    hybrid inheritance.

    Syntax
    Class A {
    member of balse class
    };
    class B : virtua;  public A
    {
    member of class b
    };
    class C : virtual public A{
    
    member of class};

    class D : public A


*/
#include<iostream>
using namespace std;
class A
{
int n;
public: 
void input(){
    cout<<"Enter number ";
    cin>>n;
}
    void show(){
        cout<<n<<endl;
    }
};
class B : virtual public A {

};
 class C : virtual public A{

};
class D :public B, public C{

};
int main()
{
    A ob; B ob1; C ob2; D ob3;
    ob.input();
    ob.show();
    ob1.input();
    ob1.show();
    ob2.input();
    ob2.show();
    ob3.input();
    ob3.show();
}
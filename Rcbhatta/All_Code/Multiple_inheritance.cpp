/*------------------Multiple inheritiance------------------*/
/*
A class which contain more base class and only one derived class is
called multiple inheritance.

        Syntax
        class base1{
        member of class base1
        }
        class base2{
        member of class2
        }
        class derive : private base1,base2{
        member of derive class
        }
*/
#include<iostream>
using namespace std;
class base1{
  //  private:
  public:
    int a,b,c;
    public:
    void input(){
        cout<<"Enter the value of a,b";
        cin>>a>>b;
    }
    void show(){
        c=a+b;
        cout<<"Sum : "<<c<<endl;
    }
};
class Base2{
    private:
    int a,b,c;
    public:
    void input1(){
        cout<<"Enter the value of base2";
        cin>>a>>b;
    }
    void show1(){
        c= a-b;
        cout<<"Subtraction "<<c<<endl;
    }
};
class Derived : public base1,public Base2
{
private:
int a,b,c;
public:
void input3(){
    cout<<"Enter the value of derived class";
    cin>>a>>b;
}
void show3(){
c= a*b;
cout<<"Multiplication "<<c<<endl;

}
};
int main(){
   /* base1 ob;
    ob.input();
    ob.show();
    Base2 ob1;
    ob1.input1();
    ob1.show1();  */
    Derived ob3;
    ob3.input();
    ob3.show();
    
    ob3.input1();
    ob3.show1();
    ob3.input3();
    ob3.show3();
}
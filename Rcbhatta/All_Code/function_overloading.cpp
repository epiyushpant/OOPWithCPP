/*------------Function overloading-----------------*/
/*
    whenever a program contains more than one function with same name different
    types of parameters called function overloading. we can use as a class or without class

    //syntax
    class class_name{
    public:
    void add()
    {
    }
    void add(int a)
    {
    }
    };


*/
#include<iostream>
using namespace std;
class A{
    int num1 =20, num2 =10;
    public:
   void fun(){
      int sum = num1+num2;
      cout<<"Addition "<<sum<<endl;
    }
    void fun(int a, int b)
    {
        int subtract = a-b;
        cout<<"Subtraction"<<subtract;
    }
};
int main(){
    A ob;
    ob.fun();
    ob.fun(10,20);
    return 0;
}
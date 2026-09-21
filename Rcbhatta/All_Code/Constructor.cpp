/*--------------Constructor--------------*/
/*
Constructor is a special member function of class which is used to create and 
initialize the objects.

features :
    * A constructor can only have one access modifier, which is public.
    * A constructor is never inheritance and overriden.
    * Each and every c++ class has constructor either it is provided by compiler by
    default or explecitrly created.

*/
/*#include<iostream>
using namespace std;
class A{
    public: 
    int a;
   A(){
        a= 100;

    }
    void show(){
        cout<<a;
    }
};
int main()
{
A obj;
obj.show();
}
*/

/*----------------------DEFAULT CONSTRUCTOR--------------------*/
/*
A constructor that accepts no parameters is called default constructor.

Syantax :
    Class_name(){
    // code
    }




*/
/*#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A()
    {
        a =100;
        cout<<a;
    }
};
int main()
{
    A obj;
    
}
    */

    /*-----------------PARAMETERIZED CONSTRUCTOR--------------*/
    /*
    A constructor that accept or recieve parameter is called parametirized 
    constructor.

    Syntax  ;
        Class_name(Parameter1,paramerer2)
            {
            
            //code
            }
    */
 /*  #include<iostream>
   using namespace std;
   class A
{
    private:
    int a,b;
    public:
    A(int x, int y)
    {
        a =x;
        b = y;
    }
    void show(){
        cout<<a<<" "<<b;
    }
};
int main()

{
A obj(10,20);
obj.show();
}
*/

/*-------------------------Copy Constructor/----------------*/
/*
A constructor that is used to copy or initialize the value of one object
into another object is called copy constructor.
*/
/*
Syntax 
        class_name(class_name &ref)
        {
        //code;
        }

*/
/*#include<iostream>
using namespace std;
class A{
    private:
    int a,b;
    public:
    A(int x, int y)
    {
        a =x;
        b= y;
    }
    A(A &ref)
    {
        a=ref.a;
        b=ref.b;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    A ob(20,285);
    A obj1 = ob;
    ob.show();
    obj1.show();

}
    */
  /* #include<iostream>
   using namespace std;
   class test
   {
    private: 
        int a,b;
    public:
        test(){
            cout<<"Enter two numbers";
            cin>>a>>b;
            cout<<a<<" "<<b<<endl;
        }
        test(int x, int y)
        {
            a= x;
            b=y;
            cout<<a<<" "<<b<<endl;
        }
        test(test &obj)
        {
            a = obj.a;
            b = obj.b;
            cout<<a<<" "<<b;
        }

   };
   int main()
{
    test ob, obj(10,60);
    test abj2(ob);
}
    */

    /*-----------------Constructor and Destructor-------------*/
    /* Constructor
    - it allocated memory to an object
    - The name of constructor is the sane name as the class name
    - It is being automatically called of hte time of object declaration.
    - we can pass argument through constructor
    - we can create multiple constructor in a class.
    - constructor can be overloaded
    - Have Various type default, parameter, copy
    - class_name (arg)
    {
    
    }
    */
   /*
   Destructor
   - It de-allocate the memory of an object;
   - The name of destructure is the same name as the class name but preceding tilde sign (~)
   -It is automatically called at the time of object termination
   - we doesn't pass any argument through destructure.
   - only one destructor allows in a class
   - cannot overload possible
   -There is no any type of destructure-
   -
   ~ class_name()
   
   */
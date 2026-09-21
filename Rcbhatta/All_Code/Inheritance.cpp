/*
What is inheritance ? full explaination.
-> Inheritance allows a class to inherit the properties and
behavior from another class.


Types of inheritance:
1. Single inherirance
2. Multiple Inheritance
3. Multilevel Inheritance
4. Hierarchial Inheritance
5. Hybrid inheritance

    Ex 
    class base
    {
        data 
        +   
        function add()
    };
     class derived: public base
     {
        add ();
        sub();
     }


*/

#include<iostream>
using namespace std;
class Father
{
    protected :
    string surname="Bhatta";

};
class Son1: Father {
    string name = "Ramchandra";
    public:
    void show(){
        cout<<name<<" "<<surname<<endl;
    }
};
class Son2: Father{
    string name = "Pradip";
    public:
      void show(){
        cout<<name<<" "<<surname<<endl;
    }
};
main(){
    Son1 s1;
    Son2 s2;
    s1.show();
    s2.show();
}
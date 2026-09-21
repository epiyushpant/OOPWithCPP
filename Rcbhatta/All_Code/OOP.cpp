/*-------------------OOP---------------*/
/*
OOP (Object oriented programming) is a programming approach that are based 
on class and objects which can contain data and code that manipulate that data.

Eg:
class person
{
  person; 
  name; 
  obj;         
};
*/ 

/*--------------------------Class--------------------*/
/*Class is a user define data type or bluepring that wrapped data and function into a single entity

// syntax
    class Class_name{
    data 
    function
    };
*/


/*------------------What is object---------------*/
/*
object is a concrete representation of the bluprint that is defined by the class


*/


/*------------------Featutr of OOP------*/
/*
        * Encapsulation
        * Abstraction
        * Polymorphims
        * inheritance
        * class and object
*/
#include<iostream>
using namespace std;
class Person{
    private:
    int age;
    string name;
    string address;
    public:
    void input(){
        cout<<"Enter age";
        cin>>age;
        cout<<"Enter Name";
        cin>>name;
        cout<<"Enter address";
        cin>>address;
    }
    void show(){
        cout<<endl<<"Age :"<<age<<endl<<"Name :"<<endl<<name<<endl<<"Address :"<<address<<endl;
    }

};
int main(){
    Person ankush,ankit,rohit;
    ankush.input();
    ankush.show();
    ankit.input();
    ankit.show();
    rohit.input();
    rohit.show();

}


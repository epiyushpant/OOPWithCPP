/*---------Polymorphism--------*/
/*polymorphims is concept in which an object can be treated in different ways.
it means the objects of a class can be used as object of their derriced classes


 */
/*Polymorphims

1. Static Polymophism
2. Dynamic Polymorphism

*/

/*-----------------------compaile time polymorphims----------*/
/*  
#include<iostream>
using namespace std;
void show(int age){
    cout<<age<<endl;

}
void show(string name){
    cout<<name<<endl;
    
}
void show(double salary){
    cout<<salary<<endl;
    
}
main(){
    show("Ram");
    show(24);
    show(12.025454);

}*/

/*---------------------Runtime Polymorphism----------------*/

#include<iostream>
using namespace std;
class A{
    public:
   virtual void disp(){
        cout<<"It is a class A";
    }
};
class B:public A{
 public:
    void disp(){
        cout<<"It is a class B";
    }
};
int main(){
A *ptr;
B obj;
ptr = &obj;
ptr->disp();
}
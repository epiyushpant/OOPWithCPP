/*---------------friend function-------------*/
/*
friend function is function that is declared as a friend of a class not as a member
of a class instead of  that it can access private and protected
member of class.

    //syntax friend reruen type fun_name(class &ref);

*/
/*#include<iostream>
using namespace std;
class Shaym;
class Ram {
    int money = 10;
    friend void rohit(Ram,Shaym);
};
class Shaym{
    int money = 20;
    friend void rohit(Ram,Shaym);
};
void rohit(Ram r1,Shaym s1){
    cout<<r1.money+s1.money;
}
int main(){
    Ram ob1;
     Shaym ob2;
    rohit(ob1,ob2);
}
    */



    /* friend class*/
    /*
    A friend class is special class that can access private and protected member
    of another class.

    
    
    */
   #include<iostream>
   using namespace std;
   class X {
    int a= 5;
    friend class B;
   };
   class B{
    public:
    void show(){
        X obj;
        cout<<obj.a<<endl;
    }
   };
 int main(){
  return 0;
 }
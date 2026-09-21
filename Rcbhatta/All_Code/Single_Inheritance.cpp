/* --------------------Single Inheritance---------*/
/*
A class which contain only one base class and only one
derive class is called single inheritance .

        // syntax
        class base
        {
        member of base class
        }
        class derice : public/ private/ protected
        {
        member of derived class
        };

  
*/
#include<iostream>
using namespace std;
class base
{
    protected:
    int a,b;
    public:
    void input(){
        cout<<"Enter values";
        cin>>a>>b;
    }
   /* void show()
    {
        cout<<"a: "<<a<<" "<<"b "<<b<<endl;
    }
        */
};

class derive : public base{
private:
int m,n;
public:
    void getdata(){
        cout<<"Enter value";
        cin>>m>>n;
    }
    void display(){
        cout<<"m "<<m<<" "<<"n "<<n<<endl;
        cout<<a<<b;
    }
};
int main()
{
    //base ob;
    derive ob1;
    ob1.input();
   // ob1.show();
    ob1.getdata();
    ob1.display();
}
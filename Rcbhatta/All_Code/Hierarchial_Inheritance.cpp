/*--------------Hierarchical Inheritanace-----------------*/
/*
A class which contain only one base and multiple derice class but each derice class 
can access base class is called hierarchial inheritance.

    Syntax
    class base class{
    data member
    }
    class derive1 :public base{
    data member
    }
    class derive2 : public base{
    data member
    }

    */
   #include<iostream>
   using namespace std;
   class base{
    private:
    int a,b;
    public:
    void input(){
        cout<<"Enter value of a,b";
        cin>>a>>b;
    }
    void show(){
        cout<<"SUm is "<<a+b<<endl;
    }
   };
   class derive1 : public base{
    private:
    int n1;
    public:
    void input1(){
        cout<<"Enter the value of n1";
        cin>>n1;
    }
    void show1(){
        cout<<"n1 "<<n1<<endl;
    }
   };
   class derive2 : public base{
    private:
    int n2;
    public:
    void input2(){
        cout<<"Enter the value of n2";
        cin>>n2;
    }
    void show2(){
        cout<<"N2 "<<n2;
    }
   };
   int main(){
    derive1 ob;
    derive2 ob2;
    ob.input();
    ob.show();
    ob2.input();
    ob2.show();
    ob.input1();
    ob.show1();
    ob2.input2();
    ob2.show2();
   }








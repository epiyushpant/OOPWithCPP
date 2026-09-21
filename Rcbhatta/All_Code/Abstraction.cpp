/*--------------Abstraction--------------------*/
/*
        Abstraction is the process of simplyfying complex object by focusing
        on essential fearures while hiding unnecessary details
*/
#include<iostream>
using namespace std;
class car{
    bool startEngine;
    public:
    car():startEngine(false){

    }
    void start(){
        if(startEngine){
            cout<<"Engine started"<<endl;
        }
        else {
            cout<<"Engine Off"<<endl;
        }
        //startEngine = true;
       
    }
    void drive()
    {
        if(startEngine){
            cout<<"You can Drive"<<endl;
        }
        else {
            cout<<"YOU cannot Drive";
        }
    }
};
int main()
{
    car ob;
    ob.start();
    ob.drive();
}
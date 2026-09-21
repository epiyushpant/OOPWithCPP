/*----------------Structure-------------------------*/
/*
Structure is used when we want to allow different types of datatyle into 
a single name.

Note: * Struct keyword is used to define structure

Syntax: 
        struct struct name{
        data_type 1
        data_type 2 
        };

Example:
        strucu emp{
        char name[50];
        int sal;
        };

        once structure is defined now declare variable of that type;
*/
#include<iostream>
using namespace std;
struct Emp{
    string name;
    int  Eid;
    double salary;

};

main(){
    struct Emp E;
   Emp detail[3] = {
    {"ram",10,1000},
    {"Raju",12,10200},
    {"Ganesh",19,10000}
   };
   detail[1].salary = 1500;
   for(int i = 1;i<=3;i++){
    cout<<i;
    cout<<" Name:"<<detail[i].name<<"ID :"<<detail[i].Eid<<"Salary"<<detail[i].salary<<endl;
   }
   cout<<sizeof(Emp)<<" bytes";
}
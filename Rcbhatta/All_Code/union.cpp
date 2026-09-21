/*------------Union---------------*/
/*
Union is a user defined data type that allowed you to store different
 data type in same memory location

 Note:) Union keyword is used to define union
     :) Size of union depends on the biggest member of union.

Syntax :
        union em[ {
        int age
        char name[50];
        
        };

note :) Once union is defined now declare variable of that type.

Ex union emp detail;
*/
#include<iostream>
using namespace std;
union Emp{
int Eid;
double salary;
char name;
};
int main(){
        union Emp E;
        E.Eid = 1542;
        cout<<E.Eid<<endl;
        E.salary = 1000;
        E.name = 'A';
       cout<<E.Eid<<E.salary<<endl<<E.name<<endl;
       
}

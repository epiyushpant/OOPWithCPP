/*-----------------------Local Class---------------------*/
/*
A class is declared inside a function or block is called local class.

*/

/*   
        Syntax:
        return_type function_name{
        Class Class_name{
            //body
        };  
            class_name obj
                abj.fun();
        }    
         main(){
          function_name;

         }
*/
#include<iostream>
using namespace std;
void fun(){
 class A
 {
        int a,b;
        public:
        void show(){
                cout<<"Enter the Value";
                cin>>a>>b;
                cout<<a<<ends<<b;
        }

 };
        A obj;
        obj.show();
}
int main(){
      
        fun();
}
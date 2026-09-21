/*--------------------Inline function----------------*/
/*
    If a function is inline then the compiler places the copy of the
    function code in place of the function call.
    find this can speed up the program execution

    //syntax
    inline return-type fun_name(parameter)
    {
    code
    }

*/
#include<iostream>
using namespace std;
inline int fun(int a , int b, int c)
{
    return (a>b)?((a>c)?a:c):((b>c)?b:c);
   // return a+b;
}
main(){
    int value = fun(20,30,40);
    cout<<value;
}
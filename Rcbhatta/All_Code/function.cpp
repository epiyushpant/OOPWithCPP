/*--------------Function-----------------------*/
/*
function is nothing but block of code which takes input, 
process it and produce output in the form of result.

note: function run only when it call

types : 
 1. user define function
    void add();
syntax:
return_type fun_name(paramater optional){
//
}


 2. pre-define function
    strlen()
    strcpy()

    syntax: 
    retrun_type funname(){
    
    //block of code}
*/
/* #include<iostream>
using namespace std;
void say(string name){    // function definition
    cout<<"Hello I am '"<<name<<"'"<<endl;
    puts("Hello Bhatta jii"); //print outputs
}
int main(){
   
     say("Ramchandra");
     say("Ram");
}
     */



    /*--------------Recursive Function-------------------*/
    /*
    A function that calls itself called recursive function
    
    Syntax: 
    return-type fun-name(parameter){
    
    if(base condition){
    // code
    }
    else{
    {
    functionname(parameter);
    }}}
    */

  /*#include<iostream>
    using namespace std;
    int fact(int num){
    if(num==0){
        return 1;

    }
    else{
        return num*fact(num-1);
  }
    }
     main(){
        int num;
cout<<"Enter a Number";
cin>>num;
int result =fact(num);
cout<<"The factorial of "<<num<<"is "<<result;
    }
*/

/*---------------------------------Call by value--------------*/
/* in call by value the actual value of variable can't be changed, if chane the
value of functuin paramerer it is only changed for current function

syntax : 
return-type fun-name(p1,p2){

// block of code 
}
*/
/*#include<iostream>
using namespace std;
void changeValue(int num){
    cout<<num<<endl;
 num = num+10;
 cout<<num<<endl; // print function value

}
int main(){
    int num = 106;
cout<<num<<endl; // actua; value print
changeValue(num); // print function value after calling
cout<<num<<endl; //print actual value
}
*/

/*--------------------------Call by address and Reference-------------------*/
/* Call by address 
call by address is used when you want to
modify a variable inside a function and want 
that modification persist outside the function 

syntax 
return-type function-name(*p){

// midification
}
*/
/*#include<iostream>
using namespace std;
void pass_address(int *num){
    *num = *num+10;
    cout<<"*num "<<num<<endl;
}
int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
    cout<<"Original Value "<<num<<endl;
    pass_address(&num);
    cout<<"New value"<<num<<endl;
   

}
    */

    /* --------------------------Call By Reference--------------------*/
    /*
    Reference is nothing but alias to an existing variable when you seclare a reference you create a new name for an existing
    variable and any change done un reference is treated as if were the original variable;
    
    */
 /* #include<iostream>
   using namespace std;
   int main(){
    int a = 10;
    int &name = a;
    cout<<"Name: "<<name<<endl;
     cout<<"Name: "<<a<<endl;
      cout<<"Name: "<<&name<<endl;

   }
      */
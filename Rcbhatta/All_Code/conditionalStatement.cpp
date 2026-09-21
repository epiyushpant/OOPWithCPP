/*   -----------Conditional Statement       */
/*
Conditional statement allow you make a decision based on the result of condition

Types
1. if statement
2. if else
3. if else if
4. nested if
5. switch statement
*/

/*#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
if(num!=0)
{
cout<<"Ram"<<endl;
}
else
cout<<"Hari";
}
*/


/*-------------if statement*/
/*
if statement is used when we want to test a condition 

syntax :
    if(condition)
    {
    statement
    }

*/
/*#include<iostream>
using namespace std;
int main()
{
    string signal;
    cout<<"Enter signal value: ";
    cin>>signal;
    if(signal=="red"){
        cout<<"Don't go! please stop";
    }
    if(signal=="green"){
    cout<<"Once the signal turn then you can go";
    }
}
    */



    /*----------------if else statement*/
    /*
    it is used to execute two statement either if statement or else statement fo a 
    single condition

    //syntax 

        if(condition)
        {
        
        }
    else{
    }    
    */
  /*#include<iostream>
   using namespace std;
   int main(){
    string weather;
    cout<<"Enter weather condition";
    cin>>weather;
    if(weather=="raining"){
        cout<<"You need to umbrella";

    }
    else{
        cout<<"you dont need";
    }
   }
    */

    /*---------------------else if ladder*/
    /*It is used when we have more than two condition
    
    //syntax

    if(condition){
    //statememt

    }
    else if(condition)
    {
    }
    else
    */
  /* #include<iostream>
   using namespace std;
   int main(){
    int amt;
    cout<<"Enter Amount";
    cin>>amt;
    if(amt<=10000){
        cout<<"you need to pay Tax";
    }
    else if(amt>100000&& amt<=500000){
        int tax = amt*10/100;
        cout<<"The Tax amount is"<<tax;
    }
    else if(amt>=50000&&amt<=1000000){

    
    int tax = amt*20/100;
    cout<<"The tax amount is "<<tax;

   }
   else{
    int tax= amt*40/100;
    cout<<"The tax amount is"<<tax;

   }
   return 0;

   }
   */

   /*----------------------Nested if statement*/
   /*
   whenecer we define if block inside another if block called nested if statement.

   // syntax
   if (cindition)
   {
   if(condition2){
   }
   }
   
   
  
  #include<iostream>
  using namespace std;
  int main(){
    int age;
    cout<<"Enter the age";
    cin>>age;
    if(age>=18){
        if(age>=18 && age<59){
            cout<<"YOu are elligible for the job";
        }
    else{
        cout<<"Age is not satisfied";
    }
}
else{
    cout<<"Consider as minor you can't force them to work";
}
    
  }
*/


/*-------------------Switch Statement------------*/
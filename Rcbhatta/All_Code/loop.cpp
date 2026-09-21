            /*LOOP*/
/* Loop is used to repet a block of code untill the 
given condition is true*/


/* Loop type*/
/*
while:
do-while:
for:

/*----------------------For Loop ---------------------------*/
/* For loop is used when we want to perform initinlization, condition and incerement/decrement 
in single line

for loop is most commonly used loop*/

/*Syntax 
for(initialization;condition;inc/dec){
            // statement;
}
        


*/
#include<iostream>
using namespace std;
int main(){
    int num,i;
    cout<<"Enter a number";
    cin>>num;
    for(i=1;i<=10;i++){
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
}


// */
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         cout<<i;
//         cout<<endl;
//     }
// }

/*--------------------------------------------------------------------------*/

            /* While Loop */
//While loop is used when we don't know the number if iteration in advance
/* it is also known as entry or pre-test loop*/
    
            //Syntax
    /*
            while(condition){
            }
    */
/*#include<iostream>
using namespace std;
int main(){
    int pwd=123;
    int mypwd;
    cout<<"Enter your Password : ";
    cin>>mypwd;

    while(pwd>0){
        if(pwd!=mypwd)
        {
   cout<<"Enter your Password : ";
    cin>>mypwd;
        }
        else{
            cout<<"Login Successed";
            break;
        }
    }
}
    */
/*-------------------------------------------------------------------------------------*/
                /* Do While loop*/
    /*Do while loop used when we want to execute loop  body at least once each condition is false
    
    do while loop also knows as post test or exit control loop
    
    
    Syntax

            do{
            //statement 
            }
            while(condition);
    */

/*#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter Name";
    cin>>name;
    do{
        cout<<name;
        break;
    }
    while(name!="Ram");
}
*/

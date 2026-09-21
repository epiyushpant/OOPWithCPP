/*--------------------Switch statement----------------*/
/*
Switch statement is nothing but multiple choice selection statement it means 
when we want to select any one case out of multipe case

//Syntax
Switch(exp){
    case1:
    statement;
    break;
    case2:
    statement;
    break;
    .
    .
    .
    .
    default:
    statement
}

*//*
#include<iostream>
using namespace std;
int main(){
    char value;
    int num1,num2;
    cout<<"Enter first Number:";
    cin>>num1;
    cout<<"What do you want";
    cin>>value;
    cout<<"Enter second value";
    cin>>num2;
    switch(value){
        case '+':
        cout<<"Addition:"<<num1+num2;
        break;
        case '-':
        cout<<"Subtraction "<<num1-num2;
        break;
        case '*':
        cout<<"Multiplication "<<num1*num2;
        break;
        cout<<"Division "<<num1/num2;
        default: 
        cout<<"invalid Choice";
    }
    return 0;
}
*/



/*--------------------------Jumping statement-------------*/

/*
Jumping statement is a statement that can transfer the program control to different 
part of the program

There are three jumping statement in c++

1. go to
2. break statement
3. continue
4. return 
*/


// break jump statement 
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     for(int i=0;i<10;i++){
//        if(i==5){
//      break; //continue; goto out;
//        }
//        cout<<i<<ends;
        
//     }
//     cout<<"Hi viewer ..:)";

// out: 
// cout<<"Hello Learner...";
// }



// return jumps statement
#include<iostream>
using namespace std;
int sum(){
    int a=10, b=20;
    return a+b;
}
int main(){
    cout<<sum();
}

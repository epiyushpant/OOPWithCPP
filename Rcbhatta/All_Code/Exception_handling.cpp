/*-------------------------Exception Handling--------------*/
/*
An Exception handling is unexpected/ unwanted/abnormal situation 
that occured at runtime

* How to handle :-
c++ provides a try-catch block for
handling exception

** Syntax :- 

        try{
        // put risky code that might throw an exception
        }
        catch(exception Type e){
        // code to handle the exception
        }
*/
/* #include<iostream>
#include<stdexcept>   //class file of exception 
using namespace std;
main(){
        double bal = 0;
       
        try{
                double amt;
                //deposit
                cout<<"Enter Deposit Amount";
                cin>>amt;
                if(amt<=0){
                throw invalid_argument("Invalid Deposit");                                  // cout<<"Invalid Deposit"<<endl;
                }
                bal = bal+amt;
                cout<<"Available Amount"<<bal<<endl;
                cout<<"Enter Withsraw amount";
                cin>>amt;
                if(amt<=0){
                 throw invalid_argument("Invalid Withdraw Amount");                                                                       //    cout<<"Invalid Withdraw amount"<<endl;
                }
                if(amt>bal){
                 throw runtime_error("Insufficient Fund");                     cout<<"Insufficient Fund"<<endl;
                }
                bal = bal - amt;
                cout<<"Available Balance"<<bal;
        }
        
        catch(exception& e){
                cout<<e.what();   // display cout content

        }
}
        */

        #include<iostream>
        #include<stdexcept>
        using namespace std;
        main(){
                
                try{
                        int a,b;
                        cout<<"Enter Two number";
                        cin>>a>>b;
                        if(b==0){
                                throw invalid_argument("number is not divided by Zero");
                        }
                         int c = a/b;   //runtime error
                                cout<<"Result :"<<c;
                }
                catch(exception& e){
                        cout<<e.what();
                }
               
                
        }
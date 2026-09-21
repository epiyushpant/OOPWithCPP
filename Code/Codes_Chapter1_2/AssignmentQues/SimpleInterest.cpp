// #include <iostream>
// using namespace std;
 
// int main() {
//     float principal, time, rate;
//     float SimpleInterest; 

//     cout << "Enter prinicpal amount : ";
//     cin >> principal; 

//     cout << "Enter time : ";
//     cin >> time;

//     cout << "Enter rate : ";
//     cin >> rate;

//     SimpleInterest  = (principal * time * rate) /100;

//     cout << "Simple Interest is " << SimpleInterest;
//     return 0;
// }

#include<iostream>
using namespace std;
int simple(int p,int t,int r){
   return (p*t*r)/100;
    
}
int main(){
    int p,t,r,interest;
    cout<<"Enter prt";
    cin>>p>>t>>r;
    interest = simple(p,t,r);
    cout<<"interest is"<<interest;
}
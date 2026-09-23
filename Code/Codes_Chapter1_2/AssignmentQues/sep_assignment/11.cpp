/*Write a C++ program to demonstrate a friend function. */
#include <iostream> 
using namespace std; 

class Account 
{ 
private: 
float balance; 
public: 

Account(float b) 
{ 
balance = b; 
} 

friend void showBalance(Account a); 
}; 


void showBalance(Account a) 
{ 
cout << "Account balance = " << a.balance; 
} 

int main() 
{ 
float b; 

cout << "Enter account balance: "; 
cin >> b; 

Account acc(b); 
showBalance(acc); 
return 0; 

} 
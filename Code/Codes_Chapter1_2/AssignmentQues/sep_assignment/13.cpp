/*Write a C++ program to demonstrate the execution sequence of constructors in base and derived classes.*/
#include <iostream> 
using namespace std; 

class Base 
{ 
public: 
Base() 

{ 
cout << "Base class constructor called." << endl; 
} 
}; 

class Derived : public Base 
{ 
public: 
Derived() 
{ 
cout << "Derived class constructor called." << endl; 
} 
}; 

int main() 
{ 
Derived d; 
return 0; 

} 
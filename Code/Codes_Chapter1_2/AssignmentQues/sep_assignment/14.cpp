/*14. Write a C++ program to demonstrate different modes of inheritance. */
#include <iostream> 
using namespace std; 

class Base 
{ 
public: 
int x; 

Base() 
{ 
x = 10; 
} 
}; 

class PublicDerived : public Base 
{ 
public: 
void show() 
{ 
cout << "Public inheritance, x = " << x << endl; 
} 
}; 

class PrivateDerived : private Base 
{ 
public: 
void show() 
{ 
cout << "Private inheritance, x = " << x << endl; 
} 
}; 

class ProtectedDerived : protected Base 
{ 
public: 
void show() 
{ 
cout << "Protected inheritance, x = " << x << endl; 
} 
}; 

int main() 
{ 
PublicDerived p; 
PrivateDerived pr; 
ProtectedDerived prot; 

p.show(); 
pr.show(); 
prot.show(); 
return 0; 

} 

 

 
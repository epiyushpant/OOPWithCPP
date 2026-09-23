/*17. Write a C++ program to demonstrate relational operator overloading. */
#include <iostream> 
using namespace std; 

class Number 
{ 
public: 

int value; 
Number(int v) 
{ 
value = v; 
} 

bool operator==(Number n) 

{
return value == n.value; 
} 
}; 

int main() 
{ 
Number n1(10), n2(10); 

if(n1 == n2) 
cout << "Both numbers are equal."; 
else 
cout << "Numbers are not equal."; 
return 0; 

} 

 
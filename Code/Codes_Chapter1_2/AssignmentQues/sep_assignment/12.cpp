/*12. Write a C++ program to demonstrate a static data member. */
#include <iostream> 
using namespace std; 

class Counter 
{ 
public: 
static int count; 
Counter() 
{ 
count++; 
} 
}; 

int Counter::count = 0; 
int main() 

{ 
Counter c1, c2, c3; 
cout << "Number of objects created = " << Counter::count; 
return 0; 

} 

 
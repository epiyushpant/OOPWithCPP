/*18. Write a C++ program to demonstrate unary operator overloading. */
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
void operator-() { 
    value = -value; 
    } 

void display() 
{ cout << "Value = " << value << endl; 
    } 
}; 
int main() 
{ 
Number n(5); 
cout << "Before: "; 
n.display(); 

-n; 
cout << "After unary minus: "; 

n.display(); 

return 0; 

} 
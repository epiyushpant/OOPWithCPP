/*19. Write a C++ program to demonstrate the use of namespaces. */
#include <iostream> 
using namespace std; 
namespace First 

{ 
void greet() { 
cout << "Hello from First namespace." << endl; 
    } 
} 

namespace Second 
{ void greet() { 
    cout << "Hello from Second namespace." << endl; 
    } 
} 

int main() 
{ 
First::greet(); 
Second::greet(); 

return 0; 

} 
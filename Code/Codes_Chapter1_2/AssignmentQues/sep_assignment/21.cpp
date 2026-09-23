/*Write a C++ program to find the maximum of two values using a function template. */
#include <iostream> 
using namespace std; 
template <class T> 

T maximum(T a, T b) 
{ 
return (a > b) ? a : b; 
} 

int main() 
{ 
int a, b; 
float c, d; 

cout << "Enter two integers: "; 

cin >> a >> b; 

cout << "Maximum = " << maximum(a, b) << endl; 

cout << "Enter two floating point numbers: "; 

cin >> c >> d; 

cout << "Maximum = " << maximum(c, d) << endl; 

return 0; 

} 
/*Write a C++ program to perform addition using a function template.*/
#include <iostream> 
using namespace std; 

template <class T> 

T add(T a, T b) 
{ 
return a + b; 
} 

int main() 

{ 
int a, b; 
float c, d; 

cout << "Enter two integers: "; 

cin >> a >> b; 

cout << "Sum = " << add(a, b) << endl; 

cout << "Enter two floating point numbers: "; 

cin >> c >> d; 
cout << "Sum = " << add(c, d) << endl; 

return 0; 
}
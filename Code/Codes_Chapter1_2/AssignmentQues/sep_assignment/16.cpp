/*16. Write a C++ program to demonstrate arithmetic operator overloading. */
#include <iostream> 
using namespace std; 
class Complex 

{ 
public: 
int real, imag; 

Complex() 
{ 
real = 0; 
imag = 0; 
} 
Complex(int r, int i) 
{ 
real = r; 
imag = i; 
} 
Complex operator+(Complex c) 
{ 
Complex temp; 

temp.real = real + c.real; 
temp.imag = imag + c.imag; 

return temp; 
} 

void display() 
{ 
cout << real << " + " << imag << "i" << endl; 
} 
}; 

int main() 
{ 

Complex c1(2, 3), c2(4, 5); 

Complex c3; 
c3 = c1 + c2; 

cout << "Sum = "; 

c3.display(); 

return 0; 
} 
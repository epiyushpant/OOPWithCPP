/*Write a C++ program to demonstrate constructor overloading.*/
#include <iostream> 
using namespace std; 

class Box 
{ 
int length, width; 
public: 
Box() 
{ 
length = 0; 
width = 0; 
cout << "Default constructor called." << endl; 
} 

Box(int l, int w) 
{ 
length = l;
width = w; 
cout << "Parameterized constructor called." << endl; 
} 

void display() 
{
cout << "Length = " << length << ", Width = " << width << endl; 
} 
}; 

int main() 
{ 
Box b1; 
Box b2(5, 3); 

b1.display(); 
b2.display(); 

return 0; 

} 
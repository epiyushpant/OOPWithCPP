/*Write a C++ program to demonstrate method overriding*/
#include <iostream> 
using namespace std; 

class Shape 
{ 
public: 
virtual void draw() 
{ 
cout << "Drawing a shape." << endl; 
} 

}; 

class Circle : public Shape 
{ 
public: 
void draw() 
{ 
cout << "Drawing a circle." << endl; 
} 
}; 

int main() 
{ 
Shape *s; 
Circle c; 

s = &c; 
s->draw(); 

return 0; 
} 
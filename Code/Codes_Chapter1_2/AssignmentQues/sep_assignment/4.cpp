/*Write a C++ program to calculate the area of a circle, rectangle, and square using method overloading. */
#include <iostream> 
using namespace std; 

float area(float radius) 
{ 
return 3.14 * radius * radius; 
} 

float area(float length, float width) 
{ 
return length * width; 
} 

float area(int side) 
{ 
return side * side; 
} 

int main() 
{ 
float radius, length, width; 
int side; 
cout << "Enter radius of circle: "; 
cin >> radius;
cout << "Area of circle = " << area(radius) << endl; 

cout << "Enter length and width of rectangle: "; 
cin >> length >> width; 
cout << "Area of rectangle = " << area(length, width) << endl; 

cout << "Enter side of square: "; 
cin >> side; 
cout << "Area of square = " << area(side) << endl; 

return 0; 

} 
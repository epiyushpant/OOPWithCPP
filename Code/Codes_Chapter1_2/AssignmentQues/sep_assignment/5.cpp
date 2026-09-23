/*Write a C++ program to swap two numbers using pass by value.*/
#include <iostream> 
using namespace std; 
void swapValue(int a, int b) 

{ 
int temp = a; 
a = b; 
b = temp; 

cout << "Inside function: a = " << a << ", b = " << b << endl; 
} 
int main() 

{ 

int x, y; 

cout << "Enter two numbers: "; 
cin >> x >> y; 

cout << "Before swap: x = " << x << ", y = " << y << endl; 

swapValue(x, y); 

cout << "After swap (pass by value): x = " << x << ", y = " << y << endl; 
return 0; 

} 
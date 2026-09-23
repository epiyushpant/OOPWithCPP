/*Write a C++ program to input a number and print its reverse.*/
#include <iostream> 

using namespace std; 
int main() 
{ 
int num, remainder, reverse = 0; 
cout << "Enter a number: "; 
cin >> num; 
int original = num; 

while(num != 0) 
{ 
remainder = num % 10; 
reverse = reverse * 10 + remainder; 
num = num / 10; 
} 

cout << "Reverse of " << original << " = " << reverse; 
return 0; 

} 
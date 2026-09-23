//7.Write a C++ program to swap two numbers without using a third variable.

#include <iostream>
using namespace std;

int main(){
	int a, b;
	
	cout << "Enter two numbers: ";
	cin >> a >> b;
	
	cout << "Before swapping: " <<endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	// Swapping without third variable
	a = a + b;
	b = a - b;
	a = a - b;
	
	cout <<"After swapping: " <<endl;
	cout <<"a = " << a << endl;
	cout <<"b = " << b << endl;
	
	return 0;
}

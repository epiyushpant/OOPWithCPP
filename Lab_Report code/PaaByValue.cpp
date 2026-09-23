//Write a C++ program to swap two numbers using pass by value.

#include <iostream>
using namespace std;

void swapNumber(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	cout << "After swapping inside funtion: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int main(){
	int a, b;
	
	cout << "Enter two number: ";
	cin >> a >> b;
	
	cout << "Before swapping: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	swapNumber(a, b);
	
	cout << "After function call: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	return 0;
}

//6.Write a C++ program to swap two numbers using pass by reference.

#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main(){
	int a, b;
	
	cout << "Enter two numbers: ";
	cin >> a >> b;
	
	cout << "Before swapping: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	swapNumbers(a, b);
	
	cout << "After swapping: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	return 0;
}

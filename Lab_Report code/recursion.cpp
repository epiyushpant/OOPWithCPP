// 3.Write a C++ program to find the factorial of a number using recursion.

#include <iostream>
using namespace std;

// Recursive function
int factorial(int n){
	if(n == 0 || n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}

int main(){
	int n;
	cout << "Enter a number: ";
	cin >> n;
	
	cout << "Factorial of " << n << " = " << factorial(n);
	
	return 0;
}


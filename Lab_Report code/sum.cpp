//2. Write a C++ program to find the sum of numbers from 1 to n.

#include<iostream>
using namespace std;

int main(){
	int n,i, sum = 0;
	
	cout <<"Enter the value of n: ";
	cin >> n;
	
	for(i = 1; i <= n; i++){
		sum = sum + i;
	}
	
	cout << "Sum of numbers from 1 to " << n << " = " << sum;
	
	return 0;
}

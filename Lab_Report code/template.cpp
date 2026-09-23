// 20.Write a C++ program to perform addition using a function template.

#include <iostream>
using namespace std;

// Function template
template <class T>
T add(T a, T b){
	return a + b;
}

int main(){
	int a, b;
	float x, y;
	
	cout <<"Enter two integer: ";
	cin >> a >> b;
	cout <<"Sum = " << add(a, b) << endl;
	
	cout <<"Enter two decimal numbers: ";
	cin >> x >> y;
	cout << "Sum = " << add(x,y) << endl;
	
	return 0;
}

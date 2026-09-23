// 16.Write a C++ program to demonstrate arithmetic operator overloading.

#include <iostream>
using namespace std;

class Number{
	private:
		int value;
	public:
		Number(int v){
			value = v;
		}
		// Overloading + operator
		Number operator + (Number n){
			return Number(value + n.value);
		}
		void display(){
			cout << "Sum = " << value << endl;
		}
};
int main(){
	Number n1(10);
	Number n2(20);
	
	Number n3 = n1 + n2;
	
	n3.display();
	
	return 0;
}

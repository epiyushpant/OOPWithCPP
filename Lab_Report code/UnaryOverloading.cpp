// 18.Write a C++ program to demonstrate unary operator overloading.

#include <iostream>
using namespace std;

class Number {
	private:
		int value;
	public:
		Number(int v){
			value = v;
		}
		// Overloading unary -- operator
		void operator --(){
			value = --value;
		}
		void display(){
			cout <<"value = " << value <<endl;
		}
};

int main(){
	Number n(10);
	--n;
	cout << "Before applying unary --(n-1) operator: "<<endl;
	n.display();
	
	return 0;
}

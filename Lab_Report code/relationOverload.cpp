//17.Write a C++ program to demonstrate relational operator overloading.

#include <iostream>
using namespace std;

class Number{
	private:
		int value;
	public:
		Number(int v){
			value = v;
		}
		// Overloading > operator
		bool operator > (const Number& n) {
			return value > n.value;
		}
};
int main(){
	Number n1(50);
	Number n2(30);
	
	if(n1 > n2)
		cout <<"n1 is greater than n2.";
	else
		cout <<"n1 is not greater than n2.";
		
	
	return 0;
}

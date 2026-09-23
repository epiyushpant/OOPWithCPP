// 19.Write a C++ program to demonstrate the use of namespaces.

#include <iostream>
using namespace std;

//First namespace
namespace First {
	void display(){
		cout << "This is First namespace." <<endl;
	}
}
// Second namespace
namespace Second {
	void display(){
		cout << "This is Second namespace." <<endl;
	}
}
int main(){
	First::display();
	Second::display();
	
	return 0;
}

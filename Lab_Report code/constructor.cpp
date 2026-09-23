//13.Write a C++ program to demonstrate the execution sequence of constructors in base
// and derived classes.

#include <iostream>
using namespace std;

class Base{
	public:
		Base(){
			cout << "Base class constructor executed." << endl;
		}
};
class Derived : public Base{
	public:
		Derived(){
			cout <<"Derived clas constructor executed." << endl;
		}
};

int main(){
	Derived d;
	
	return 0;
}

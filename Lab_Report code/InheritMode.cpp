//14.Write a C++ program to demonstrate different modes of inheritance.

#include<iostream>
using namespace std;

class Base{
	public:
		int publicData = 10;
	protected:
		int protectedData = 20;
	private:
		int privatedData = 30;
};
// Public inheritance
class PublicDerived : public Base {
	public:
		void display(){
			cout << "Public Inheritance: " << endl;
			cout << "Public Data = " << publicData << endl;
			cout << "Protected Data = " << protectedData << endl;
		}
};
// Protected inheritance
class ProtectedDerived : protected Base{
	public:
		void display(){
			cout << "Protected Inheritance: "<< endl;
			cout << "Public Data = " << publicData << endl;
			cout << "Protected Data = " << protectedData << endl;
		}
};
// Private inheritance
class PrivatedDerived : private Base{
	public:
		void display(){
			cout <<"Private Inheritance: " <<endl;
			cout <<"Public Data = " <<publicData << endl;
			cout <<"Protected Data = " <<protectedData << endl;
		}
};
int main(){
	PublicDerived p1;
	ProtectedDerived p2;
	PrivatedDerived p3;
	
	p1.display();
	p2.display();
	p3.display();
	
	return 0;
}







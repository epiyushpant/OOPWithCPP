//15.Write a C++ program to demonstrate method overriding.

#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void sound(){
			cout << "Animal Makes Sound." << endl;
		}
};
class Dog : public Animal {
	public:
		void sound(){
			cout <<"Dog Barks. " <<endl;
		}
};

int main(){
	Animal* a;
	Dog d;
	a = &d;
	a ->sound();
		
	return 0;
}

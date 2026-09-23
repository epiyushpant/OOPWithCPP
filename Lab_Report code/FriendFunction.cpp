//11. Write a C++ program to demonstrate a friend function.

#include <iostream>
using namespace std;

class Student {
	private:
		int marks;
	public:
		Student(){
			marks = 85;
		}
		// Friend Function declaration
		friend void display(Student s);
};
// Friend function definition
void display(Student s){
	cout << "Student Marks = " << s.marks;
}
int main(){
	Student s;
	
	display(s);
	
	return 0;
}

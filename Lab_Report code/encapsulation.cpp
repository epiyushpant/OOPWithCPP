//10.Write a C++ program to demonstrate encapsulation.

#include <iostream>
using namespace std;

class Student{
	private:
		int marks;
	public:
		// Setter function
		void setMarks(int m){
			marks = m;
		}
		// Getter function
		int getMarks(){
			return marks;
		}
};
int main(){
	Student s;
	
	s.setMarks(75);
	
	cout << "Student Marks = " << s.getMarks();
	
	return 0;
	
}

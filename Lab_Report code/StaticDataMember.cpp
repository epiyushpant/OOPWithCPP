//12.Write a C++ program to demonstrate a static data member.

#include <iostream>
using namespace std;

class Student {
	private:
		int id;
		static int count;
	public:
		Student(int i){
			id = i;
			count++;
		}
		void display(){
			cout <<"Student ID: " << id << endl;
		}
		static void displayCount(){
			cout << "Total Students: " << count << endl;
		}
};
// Definition of static data member
int Student::count = 0;

int main(){
	Student s1(101);
	Student s2(102);
	Student s3(103);
	
	s1.display();
	s2.display();
	s3.display();
	
	return 0;
}

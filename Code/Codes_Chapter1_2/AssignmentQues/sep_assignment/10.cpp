/*Write a C++ program to demonstrate encapsulation. */
#include <iostream> 
using namespace std; 
class Student 

{ 
private: 
int rollNo; 
float marks; 

public: 
void setData(int r, float m) 
{ rollNo = r; 
marks = m; 
} 
void showData() 
{ 
cout << "Roll No: " << rollNo << endl; 
cout << "Marks: " << marks << endl; 
} 
}; 

int main() 
{ 
Student s1; 
int r; 
float m; 

cout << "Enter roll number: "; 
cin >> r; 
cout << "Enter marks: "; 
cin >> m; 

s1.setData(r, m); 
s1.showData(); 
return 0; 

} 
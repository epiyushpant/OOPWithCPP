#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;

public:

    // Default constructor
    Student()
    {
        roll = 0;
        name = "Unknown";
    }

    // Parameterized constructor with one argument
    Student(int r)
    {
        roll = r;
        name = "Unknown";
    }

    // Parameterized constructor with two arguments
    Student(int r, string n)
    {
        roll = r;
        name = n;
    }

    // Function to display student details
    void display()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    // Calling default constructor
    Student s1;

    // Calling constructor with one argument
    Student s2(101);

    // Calling constructor with two arguments
    Student s3(102, "Ram");

    cout << "Student 1:" << endl;
    s1.display();

    cout << "\nStudent 2:" << endl;
    s2.display();

    cout << "\nStudent 3:" << endl;
    s3.display();

    return 0;
}

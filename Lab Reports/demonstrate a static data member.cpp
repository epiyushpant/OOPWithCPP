#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;

public:
    // Static data member
    static int count;

    // Constructor
    Student(int r)
    {
        rollNo = r;
        count++;
    }

    // Function to display roll number
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
    }
};

// Initialize static data member
int Student::count = 0;

int main()
{
    // Create objects
    Student s1(101);
    Student s2(102);
    Student s3(103);

    // Display student details
    s1.display();
    s2.display();
    s3.display();

    // Display number of objects created
    cout << "Total Students: " << Student::count << endl;

    return 0;
}

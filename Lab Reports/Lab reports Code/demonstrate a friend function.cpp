#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    // Function to set marks
    void setMarks(int m)
    {
        marks = m;
    }

    // Declare friend function
    friend void displayMarks(Student s);
};

// Friend function
void displayMarks(Student s)
{
    // Friend function can access private data
    cout << "Marks = " << s.marks << endl;
}

int main()
{
    Student s;

    // Set marks
    s.setMarks(85);

    // Call friend function
    displayMarks(s);

    return 0;
}

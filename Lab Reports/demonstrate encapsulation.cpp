#include <iostream>
using namespace std;

class Student
{
private:
    // Private data members
    int rollNo;
    string name;

public:
    // Setter function to set values
    void setData(int r, string n)
    {
        rollNo = r;
        name = n;
    }

    // Getter function to display values
    void getData()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s;

    // Set student data
    s.setData(101, "Ram");

    // Display student data
    s.getData();

    return 0;
}

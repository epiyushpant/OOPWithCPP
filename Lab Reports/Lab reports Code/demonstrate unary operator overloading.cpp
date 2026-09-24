#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    // Constructor
    Number(int v)
    {
        value = v;
    }

    // Overload unary ++ operator
    void operator++()
    {
        ++value;
    }

    // Function to display value
    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    // Create an object
    Number n(10);

    // Display original value
    cout << "Before increment:" << endl;
    n.display();

    // Call overloaded ++ operator
    ++n;

    // Display value after increment
    cout << "After increment:" << endl;
    n.display();

    return 0;
}

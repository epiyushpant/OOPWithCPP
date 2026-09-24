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

    // Overload + operator
    Number operator+(Number n)
    {
        return Number(value + n.value);
    }

    // Function to display value
    void display()
    {
        cout << "Result = " << value << endl;
    }
};

int main()
{
    // Create two objects
    Number n1(10);
    Number n2(20);

    // Add two objects using overloaded + operator
    Number n3 = n1 + n2;

    // Display result
    n3.display();

    return 0;
}

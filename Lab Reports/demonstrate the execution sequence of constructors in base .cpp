#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    // Base class constructor
    Base()
    {
        cout << "Base class constructor executed." << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    // Derived class constructor
    Derived()
    {
        cout << "Derived class constructor executed." << endl;
    }
};

int main()
{
    // Create an object of derived class
    Derived obj;

    return 0;
}

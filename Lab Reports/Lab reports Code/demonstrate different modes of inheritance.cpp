#include <iostream>
using namespace std;

class Base
{
public:
    int a = 10;

protected:
    int b = 20;

private:
    int c = 30;
};

// Public inheritance
class PublicDerived : public Base
{
public:
    void display()
    {
        cout << "Public Inheritance: " << a << " " << b << endl;
    }
};

// Protected inheritance
class ProtectedDerived : protected Base
{
public:
    void display()
    {
        cout << "Protected Inheritance: " << a << " " << b << endl;
    }
};

// Private inheritance
class PrivateDerived : private Base
{
public:
    void display()
    {
        cout << "Private Inheritance: " << a << " " << b << endl;
    }
};

int main()
{
    PublicDerived obj1;
    ProtectedDerived obj2;
    PrivateDerived obj3;

    // Display values
    obj1.display();
    obj2.display();
    obj3.display();

    // Public member can be accessed directly
    cout << "Public member: " << obj1.a << endl;

    return 0;
}

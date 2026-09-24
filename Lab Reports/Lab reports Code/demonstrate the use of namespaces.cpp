#include <iostream>
using namespace std;

// First namespace
namespace First
{
    int value = 10;

    void display()
    {
        cout << "Value from First namespace = " << value << endl;
    }
}

// Second namespace
namespace Second
{
    int value = 20;

    void display()
    {
        cout << "Value from Second namespace = " << value << endl;
    }
}

int main()
{
    // Access members using namespace name
    First::display();
    Second::display();

    return 0;
}

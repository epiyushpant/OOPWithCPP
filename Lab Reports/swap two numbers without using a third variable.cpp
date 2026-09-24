#include <iostream>
using namespace std;

int main()
{
    int a, b;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Display numbers before swapping
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swap without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display numbers after swapping
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}

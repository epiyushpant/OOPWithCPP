#include <iostream>
using namespace std;

// Function template for addition
template <class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    int a, b;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Call function template
    cout << "Sum = " << add(a, b) << endl;

    return 0;
}

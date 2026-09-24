#include <iostream>
using namespace std;

// Function to swap two numbers using pass by value
void swap(int a, int b)
{
    int temp;

    // Swap the values
    temp = a;
    a = b;
    b = temp;

    cout << "Inside function: a = " << a << ", b = " << b << endl;
}

int main()
{
    int a, b;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Display before swapping
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Function call
    swap(a, b);

    // Display after swapping
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}

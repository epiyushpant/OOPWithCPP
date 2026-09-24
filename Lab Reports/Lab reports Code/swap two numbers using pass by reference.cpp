#include <iostream>
using namespace std;

// Function to swap two numbers using pass by reference
void swap(int &a, int &b)
{
    int temp;

    // Swap the values
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Display values before swapping
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Call the function
    swap(a, b);

    // Display values after swapping
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}

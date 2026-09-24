#include <iostream>
using namespace std;

int main()
{
    int a, b;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try
    {
        // Check for division by zero
        if (b == 0)
        {
            // Throw an exception
            throw b;
        }

        cout << "Result = " << a / b << endl;
    }

    catch (int x)
    {
        // Handle the exception
        cout << "Error: Cannot divide by zero." << endl;
    }

    return 0;
}

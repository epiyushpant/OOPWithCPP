#include <iostream>
using namespace std;

// Function template to find maximum
template <class T>
T maximum(T a, T b)
{
    // Compare two values
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;

    // Input two values
    cout << "Enter two values: ";
    cin >> a >> b;

    // Display maximum value
    cout << "Maximum = " << maximum(a, b) << endl;

    return 0;
}

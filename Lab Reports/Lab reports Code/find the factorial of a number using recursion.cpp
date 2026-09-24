#include <iostream>
using namespace std;

// Function to find factorial using recursion
int factorial(int n)
{
    // Base condition
    if (n == 0 || n == 1)
        return 1;

    // Recursive call
    return n * factorial(n - 1);
}

int main()
{
    int n;

    // Input a number
    cout << "Enter a number: ";
    cin >> n;

    // Display the factorial
    cout << "Factorial of " << n << " = " << factorial(n);

    return 0;
}

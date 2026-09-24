#include <iostream>
using namespace std;

int main()
{
    int n, reverse = 0, remainder;

    // Input a number
    cout << "Enter a number: ";
    cin >> n;

    // Find the reverse of the number
    while (n != 0)
    {
        // Get the last digit
        remainder = n % 10;

        // Add the digit to the reverse
        reverse = reverse * 10 + remainder;

        // Remove the last digit
        n = n / 10;
    }

    // Display the reversed number
    cout << "Reverse = " << reverse;

    return 0;
}

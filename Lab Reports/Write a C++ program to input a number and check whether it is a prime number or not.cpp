#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    
    cout << "Enter a number: ";
    cin >> n;

    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        isPrime = false;
    }
    else {
        // Check whether the number is divisible by any number
        // from 2 up to n/2
        for (int i = 2; i <= n / 2; i++) {

            // If n is exactly divisible by i,
            // then n is not a prime number
            if (n % i == 0) {
                isPrime = false;
                break;  // Stop checking further
            }
        }
    }

    if (isPrime) {
        cout << n << " is a prime number." << endl;
    }
    else {
        cout << n << " is not a prime number." << endl;
    }

    return 0; 
}

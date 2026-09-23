#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << "Maximum is: " << num1 << endl;
    }
    else {
        cout << "Maximum is: " << num2 << endl;
    }

    return 0;
}
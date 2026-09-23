// 21.Write a C++ program to find the maximum of two values using a function template.

#include <iostream>
using namespace std;

// Function template
template <class T>
T maximum(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a, b;
    float x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Maximum = " << maximum(a, b) << endl;

    cout << "Enter two decimal numbers: ";
    cin >> x >> y;
    cout << "Maximum = " << maximum(x, y) << endl;

    return 0;
}

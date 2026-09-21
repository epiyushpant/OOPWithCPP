#include <iostream>
using namespace std; 

void swapByValue(int a, int b) {
    cout << "Before swap (Pass by Value : Address): &a = " << &a << ", &b = " << &b << std::endl;
    cout << "Before Swap Inside function (Pass by Value): a = " << a << ", b = " << b << std::endl;

    // Swap the values of a and b
    int temp = a;
    a = b;
    b = temp;

    cout << "After swap Inside function (Pass by Value): a = " << a << ", b = " << b << std::endl;
    cout << "After swap Inside function (Pass by Value : Address): &a = " << &a << ", &b = " << &b << std::endl;
}

int main() {
    int x = 5, y = 10;
    cout << "Before function call: x = " << x << ", y = " << y << std::endl; //5 10 
    cout << "Before function call (Address ): &x = " << &x << ", &y = " << &y << std::endl; // 01d 01c

    // Call the function to swap values by value
    swapByValue(x, y);

    cout << "After function call: x = " << x << ", y = " << y << std::endl;  //10 5
    cout << "After function call: &x = " << &x << ", &y = " << &y << std::endl;   // 01d   01c
    return 0;
}





#include <iostream>
using namespace std;

float area(float r)
{
    return 3.14 * r * r;
}

// alculating area of rectangle
int area(int l, int b)
{
    return l * b;
}

// calculating area of square
int area(int s)
{
    return s * s;
}

int main()
{
    float r;
    int l, b, s;

    // Input radius of circle
    cout << "Enter radius of circle: ";
    cin >> r;

    // Input length and breadth of rectangle
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;

    // Input side of square
    cout << "Enter side of square: ";
    cin >> s;

    // Display areas
    cout << "Area of Circle = " << area(r) << endl;
    cout << "Area of Rectangle = " << area(l, b) << endl;
    cout << "Area of Square = " << area(s) << endl;

    return 0;
}

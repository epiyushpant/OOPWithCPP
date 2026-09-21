#include <iostream>
using namespace std; 
void swapByReference(int &a, int &b) {
    cout << "Before swap (Pass by Reference : Address): &a = " << &a << ", &b = " << &b << std::endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside function (Pass by reference): a = " << a << ", b = " << b << std::endl;
    cout << "Inside function (Pass by reference : Address ): a = " << &a << ", b = " << &b << std::endl;
}

int main() {
    int x = 5, y = 10;
    cout << "Before function call: x = " << x << ", &y = " << y << std::endl;
    cout << "Before function call: &x = " << &x << ", &y = " << &y << std::endl;
   
    // Call the function to swap values by reference

    swapByReference(x, y);
    cout << "After function call: x = " << x << ", y = " << y << std::endl;
    return 0;
}

// #include<iostream>
// using namespace std;
// void reference(int &x,int &y){
//     int temp = x;
//     x = y;
//     y= temp;
// }
// int main(){
//     int a=10,b=20;
//     reference(a,b);
//     cout<<a<<" "<<b;
// }



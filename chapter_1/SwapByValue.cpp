#include <iostream>
using namespace std;

void swapByValue(int a, int b){
    cout << "Address of a: " << &a <<", Address of b: " <<&b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout <<"Inside function (Pass by value): a = " << a <<", b = " << b <<endl;
}

int main(){
    int x = 5, y =10;

    cout << "Before function call: x = " << x <<", y = " << y << endl;

    swapByValue(x,y);
    cout << "After function call: x = " << x <<", y = " << y << endl;

    return 0;
}
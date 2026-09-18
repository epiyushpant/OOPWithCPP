#include <iostream>
using namespace std;

void swapByReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

    cout <<"Address of a: " << &a <<", Address of b:" << &b << endl;    
    cout <<"Inside function (Pass by reference): a = " << a <<", b = " << b <<endl; 
    cout <<"Note: The values of a and b are swapped inside" << "the function, and this affects the original variables."<<endl;

}

int main(){
    int x = 5, y =10;

    cout << "Before function call: x = " << x <<", y = " << y << endl;
    cout <<"Address of x: " << &x <<", Address of y: " << &y << endl;

    swapByReference(x,y);
    cout << "After function call: x = " << x <<", y = " << y << endl;

    cout <<"Note: The values of x and y are swapped " << "outside the function as well." << endl;

    return 0;
}

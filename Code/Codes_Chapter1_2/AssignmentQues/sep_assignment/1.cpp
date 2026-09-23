/*Write a C++ program to input a number and check whether it is a prime number or not*/
#include <iostream>
using namespace std;

int main()
{   int num, i;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;

    for(i = 1; i <= num; i++){
        if(num % i == 0)
        { count++;
        }
    }
    if(count == 2)
        cout << num << " is a prime number.";
    else
        cout << num << " is not a prime number.";
    return 0;
}

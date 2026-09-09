/*
#include <iostream>

int main() {
    int n, sum = 0;

    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;  // Adding each number to the total sum
    }

    std::cout << "Sum of numbers from 1 to " << n << " is: " << sum << "\n";
    return 0;
}
*/

#include <iostream>
int main(){
    int n, sub, fin = 0;
    std::cout<<"if you enter the number will be subracted from 1 to n turn by turn and the result will be printed\n";
    std::cout<<"enter a number from 1 to: ";
    std::cin >> n;
    std::cout<<"enter the number which you want to be subracted from: ";
    std::cin>> sub;
    for (int i=1; i<=n; i++){
        fin = sub - i;
    }
    std:: cout<<"the number"<< sub<<" is subracted from 1 to "<< n << "\n And the result is "<<fin <<"\n";
    return 0;
}
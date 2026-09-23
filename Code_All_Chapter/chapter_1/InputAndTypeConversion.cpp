#include<iostream>
using namespace std;

int main(){
    string inputStr;
    int number;
    double decimalValue;
    float floatValue;
    char grade;

    cout <<"Enter a number as string: ";
    cint >> inputStr;

    number = stoi(inputStr);

    cout <<"Enter a decimal number: ";
    cin >> decimalValue;

    int truncated = int(decimalValue);
    int truncated2 = static_cast>(decimalValue);

    floatValue = number;

    cout <<"Enter your grade(A/B/C): ";
    cin >> grade;

    int asciValue = int(grade);

    cout <<"\n-----Output--------\n";
    cout <<"String input converted to int: " << number <<endl;
    cout <<"Decimal number entered: " << decimalValue <<endl;
    cout <<"Truncated (old cast): " << truncated <<endl;
    cout <<"Implicit int to float conversion: " << floatValue <<endl;
    cout <<"Grade: " << grade <<", ASCII: " << asciValue <<endl;

    return 0;
}
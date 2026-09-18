#include <iostream>
using namespace std;

int main(){
    float principal, time, rate;
    float SimpleInterest;

    cout <<"Enter principal amount: ";
    cin >> principal;

    cout <<"Enter time: ";
    cin >> time;

    cout <<"Enter rate: ";
    cin >> rate;
    
    SimpleInterest = (principal * time * rate) / 100;
    cout <<"Simple Interest is: "<< SimpleInterest <<endl;

    return 0;
}
#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    double height;
};

int main() {
    Person p1;
    p1.name = "Jenish";
    p1.age = 25;
    p1.height = 5.7;

    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Height: " << p1.height <<"feet" << endl;

    return 0;
}
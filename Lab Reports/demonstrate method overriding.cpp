#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    // Method in base class
    void sound()
    {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    // Overriding the sound() method
    void sound()
    {
        cout << "Dog barks." << endl;
    }
};

int main()
{
    Animal a;
    Dog d;

    // Call base class method
    a.sound();

    // Call overridden method
    d.sound();

    return 0;
}

#include <iostream>
using namespace std;

// ---------------- COMPOSITION ----------------

class Engine {
public:
    Engine() {
        cout << "Engine created\n";
    }

    ~Engine() {
        cout << "Engine destroyed\n";
    }
};

class Car {
private:
    Engine engine;   // Composition: Car owns the Engine

public:
    Car() {
        cout << "Car created\n";
    }

    ~Car() {
        cout << "Car destroyed\n";
    }
};


// ---------------- AGGREGATION ----------------

class Driver {
public:
    Driver() {
        cout << "Driver created\n";
    }

    ~Driver() {
        cout << "Driver destroyed\n";
    }
};

class Taxi {
private:
    Driver* driver;   // Aggregation: Taxi does NOT own the Driver

public:
    Taxi(Driver* d) {
        driver = d;
        cout << "Taxi created\n";
    }

    ~Taxi() {
        cout << "Taxi destroyed\n";
        // We do NOT delete driver here
    }
};


// ---------------- MAIN ----------------

int main() {

    cout << "----- COMPOSITION -----\n";

    {
        Car c; // here the Car object is created, which in turn creates the Engine object
        // here we can see constructor chaining: first Engine is created, then Car is created
    }

    cout << "\n----- AGGREGATION -----\n";

    Driver d; //here the Driver object is created, which exists independently of the Taxi object 

    {
        Taxi t(&d);

    }
    // here we can see that the Driver object is not destroyed when the Taxi object is destroyed, because the Driver object exists independently of the Taxi object

    cout << "\nEnd of main\n";
}

/* 

Composition: "Car has an Engine, and the Engine belongs to the Car. When the Car is destroyed, its Engine is also destroyed."

Aggregation: "Taxi has a Driver, but the Driver can exist independently of the Taxi. Destroying the Taxi does not destroy the Driver."

One important detail: aggregation does not require a pointer specifically. The important idea is that the contained object's lifetime is independent of the containing object.


Composition	                    Aggregation
Engine engine;	                Driver* driver;
Object is contained inside	    Object exists separately
Strong ownership	            Weak/loose relationship
Lifetimes are tied	            Lifetimes are independent
Destroying Car destroys Engine	Destroying Taxi does not destroy Driver


*/
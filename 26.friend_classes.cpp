// This program demonstrates:
// 1. Creating two classes: Engine and Car
// 2. Making Car a friend class of Engine
// 3. Accessing private data of Engine through Car

#include <iostream>
using namespace std;

// =========================
// Engine Class
// =========================
class Engine {
private:
    int horsepower; // private member

public:
    // Constructor to set engine power
    Engine(int hp) {
        horsepower = hp;
    }

    // Declare Car as a friend class
    friend class Car;
};

// =========================
// Car Class
// =========================
class Car {
public:
    // Function can access Engine's private data because Car is a friend class
    void showEnginePower(Engine e) {
        cout << "Engine Horsepower: " << e.horsepower << " HP" << endl;
    }
};

// =========================
// Main Function
// =========================
int main() {
    Engine e1(200); // create Engine object
    Car c1;         // create Car object

    c1.showEnginePower(e1); // Car accesses Engine's private data

    return 0;
}

#include <iostream>
using namespace std;

class Engine {
private:
    int horsepower;

public:
    Engine(int hp) {
        horsepower = hp;
    }

    // Declare Car as a friend class
    friend class Car;
};

class Car {
public:
    void showEnginePower(Engine e) {
        // Car can access Engine's private data because it's a friend class
        cout << "Engine Horsepower: " << e.horsepower << " HP" << endl;
    }
};

int main() {
    Engine e1(200);
    Car c1;

    c1.showEnginePower(e1);

    return 0;
}

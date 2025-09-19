/*
    This program demonstrates **abstract classes and pure virtual functions**:

    1. `Shape` is an abstract base class with pure virtual functions `area()` and `draw()`.
    2. Derived classes `Circle` and `Rectangle` implement the pure virtual functions.
    3. You **cannot create objects** of an abstract class.
    4. A base class pointer can point to derived class objects and call the correct functions at runtime.
*/

#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual void area() = 0;   // Pure virtual function
    virtual void draw() = 0;   // Pure virtual function
};

// Derived class: Circle
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}

    void area() override {
        cout << "Circle Area = " << 3.14 * radius * radius << endl;
    }

    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void area() override {
        cout << "Rectangle Area = " << length * width << endl;
    }

    void draw() override {
        cout << "Drawing a Rectangle." << endl;
    }
};

int main() {
    Shape* shapePtr;  // Pointer to base class

    Circle c(5);
    Rectangle r(4, 6);

    // Base pointer points to Circle
    shapePtr = &c;
    shapePtr->area();
    shapePtr->draw();

    cout << "-----------------------------" << endl;

    // Base pointer points to Rectangle
    shapePtr = &r;
    shapePtr->area();
    shapePtr->draw();

    return 0;
}

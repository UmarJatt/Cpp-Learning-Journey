/*
    This program demonstrates **runtime polymorphism with shapes**:

    1. Base class `Shape` has a virtual function `area()`.
    2. Derived classes `Circle`, `Rectangle`, and `Triangle` override `area()`.
    3. A base class pointer can point to any derived class object.
    4. At runtime, the correct `area()` function is called depending on the object.
*/

#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void area() {  // Virtual function
        cout << "Generic shape area." << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void area() override {  // Override base class function
        cout << "Circle Area = " << 3.14 * radius * radius << endl;
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
};

// Derived class: Triangle
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void area() override {
        cout << "Triangle Area = " << 0.5 * base * height << endl;
    }
};

int main() {
    Shape* shapePtr;  // Base class pointer

    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(3, 7);

    // Pointer points to Circle
    shapePtr = &c;
    shapePtr->area();  // Calls Circle's area()

    // Pointer points to Rectangle
    shapePtr = &r;
    shapePtr->area();  // Calls Rectangle's area()

    // Pointer points to Triangle
    shapePtr = &t;
    shapePtr->area();  // Calls Triangle's area()

    return 0;
}

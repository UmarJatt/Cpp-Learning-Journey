#include <iostream>
using namespace std;

// Base Class
class Shape {
public:
    // Virtual function → to be overridden in derived classes
    virtual void area() {
        cout << "Generic shape area." << endl;
    }
};

// Derived Class 1
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void area() override {
        cout << "Circle Area = " << 3.14 * radius * radius << endl;
    }
};

// Derived Class 2
class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    void area() override {
        cout << "Rectangle Area = " << length * width << endl;
    }
};

// Derived Class 3
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void area() override {
        cout << "Triangle Area = " << 0.5 * base * height << endl;
    }
};

int main() {
    // Base class pointer
    Shape* shapePtr;

    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(3, 7);

    // Pointing to Circle
    shapePtr = &c;
    shapePtr->area();

    // Pointing to Rectangle
    shapePtr = &r;
    shapePtr->area();

    // Pointing to Triangle
    shapePtr = &t;
    shapePtr->area();

    return 0;
}

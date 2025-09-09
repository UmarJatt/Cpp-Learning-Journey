#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    // Pure virtual function → makes this class abstract
    virtual void area() = 0;  
    virtual void draw() = 0;  
};

// Derived Class 1
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

// Derived Class 2
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
    // Shape s; ❌ Not allowed → Shape is abstract (cannot create object)

    Shape* shapePtr;  // Base class pointer

    Circle c(5);
    Rectangle r(4, 6);

    shapePtr = &c;
    shapePtr->area();
    shapePtr->draw();

    cout << "-----------------------------" << endl;

    shapePtr = &r;
    shapePtr->area();
    shapePtr->draw();

    return 0;
}

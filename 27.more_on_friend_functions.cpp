/*
Program: Friend Functions and Operator Overloading in C++
Description:
This program demonstrates the use of friend functions in C++. 
1. A friend function can access private members of a class even though it is not a member function.
2. Operator overloading allows us to define custom behavior for operators like << for user-defined classes.
3. The program also shows how a single friend function can access private members of two different classes at the same time (Square and Rectangle).
*/

#include <iostream>
using namespace std;

// =========================
// Complex Class
// =========================
class Complex {
private:
    int real, imag;  // private data members

public:
    Complex(int r = 0, int i = 0) { real = r; imag = i; }

    // Friend function to add two Complex numbers
    friend Complex add(Complex c1, Complex c2);

    // Friend function to overload << operator for printing
    friend ostream& operator<<(ostream &out, Complex &c);
};

// Add two Complex numbers
Complex add(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

// Overload << to print Complex numbers
ostream& operator<<(ostream &out, Complex &c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

// =========================
// Square and Rectangle Classes
// =========================
class Rectangle; // forward declaration for friend function

class Square {
private:
    int side;

public:
    Square(int s) { side = s; }

    // Friend function for comparing areas with Rectangle
    friend void compareArea(Square s, Rectangle r);
};

class Rectangle {
private:
    int length, width;

public:
    Rectangle(int l, int w) { length = l; width = w; }

    // Friend function shared with Square
    friend void compareArea(Square s, Rectangle r);
};

// Friend function accessing private members of both classes
void compareArea(Square s, Rectangle r) {
    int areaSquare = s.side * s.side;
    int areaRectangle = r.length * r.width;

    if (areaSquare > areaRectangle)
        cout << "Square has larger area." << endl;
    else if (areaSquare < areaRectangle)
        cout << "Rectangle has larger area." << endl;
    else
        cout << "Both have equal area." << endl;
}

// =========================
// Main Function
// =========================
int main() {
    // Example 1: Adding Complex numbers
    Complex c1(3, 4), c2(1, 2);
    Complex sum = add(c1, c2);
    cout << "Sum of Complex numbers: " << sum << endl;

    // Example 2: Comparing areas of Square and Rectangle
    Square s(5);
    Rectangle r(4, 6);
    compareArea(s, r);

    return 0;
}

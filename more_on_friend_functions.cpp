#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Declare friend function for addition
    friend Complex add(Complex c1, Complex c2);

    // Friend function for operator overloading
    friend ostream& operator<<(ostream &out, Complex &c);
};

// Friend function to add two Complex numbers
Complex add(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

// Friend function to overload << operator
ostream& operator<<(ostream &out, Complex &c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

// Friend function with two different classes
class Rectangle; // forward declaration

class Square {
private:
    int side;

public:
    Square(int s) { side = s; }

    // Friend function for comparing areas
    friend void compareArea(Square s, Rectangle r);
};

class Rectangle {
private:
    int length, width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Friend function shared with Square
    friend void compareArea(Square s, Rectangle r);
};

// Friend function accessing private members of both classes
void compareArea(Square s, Rectangle r) {
    int areaSquare = s.side * s.side;
    int areaRectangle = r.length * r.width;

    if (areaSquare > areaRectangle)
        cout << "Square has larger area.\n";
    else if (areaSquare < areaRectangle)
        cout << "Rectangle has larger area.\n";
    else
        cout << "Both have equal area.\n";
}

int main() {
    // Example 1: Adding Complex numbers
    Complex c1(3, 4), c2(1, 2);
    Complex sum = add(c1, c2);

    cout << "Sum of Complex numbers: " << sum << endl;

    // Example 2: Comparing Square and Rectangle areas
    Square s(5);
    Rectangle r(4, 6);
    compareArea(s, r);

    return 0;
}

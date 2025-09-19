// This program demonstrates:
// 1. Creating a class with private members
// 2. Using a friend function to access private data
// 3. Calculating area of a box

#include <iostream>
using namespace std;

// =========================
// Class Definition
// =========================
class Box {
private:
    int length;  // private member
    int width;   // private member

public:
    // Constructor to initialize Box dimensions
    Box(int l, int w) {
        length = l;
        width = w;
    }

    // Friend function declaration
    friend int calculateArea(Box b);
};

// =========================
// Friend Function
// =========================
// This function is not a member of the class, 
// but it can access private members of Box
int calculateArea(Box b) {
    return b.length * b.width;
}

int main() {
    // Create Box object
    Box b1(10, 5);

    // Use friend function to calculate area
    cout << "Area of Box: " << calculateArea(b1) << endl;

    return 0; // end of program
}

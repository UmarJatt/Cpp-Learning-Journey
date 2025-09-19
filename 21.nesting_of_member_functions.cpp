// This program demonstrates:
// 1. Private and public member functions
// 2. Public function calling a private function
// 3. Encapsulation

#include <iostream>
using namespace std;

// =========================
// Class Definition
// =========================
class Number {
private:
    int n; // private data member

    // Private helper function: checks if the number is positive
    bool isPositive() {
        return n > 0;
    }

public:
    // Setter function: sets the value of n
    void setNumber(int x) {
        n = x;
    }

    // Public function: uses private function to check number
    void checkNumber() {
        if (isPositive())
            cout << n << " is Positive." << endl;
        else
            cout << n << " is Zero or Negative." << endl;
    }
};

int main() {

    Number num;

    // Test with positive number
    num.setNumber(10);
    num.checkNumber();

    // Test with negative number
    num.setNumber(-5);
    num.checkNumber();

    return 0; // end of program
}

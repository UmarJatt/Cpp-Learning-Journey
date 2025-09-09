#include <iostream>
using namespace std;

class Number {
private:
    int n;

    // Private helper function
    bool isPositive() {
        return n > 0;
    }

public:
    void setNumber(int x) {
        n = x;
    }

    // Public function calls another member function
    void checkNumber() {
        if (isPositive())
            cout << n << " is Positive." << endl;
        else
            cout << n << " is Zero or Negative." << endl;
    }
};

int main() {
    Number num;
    num.setNumber(10);
    num.checkNumber();

    num.setNumber(-5);
    num.checkNumber();

    return 0;
}

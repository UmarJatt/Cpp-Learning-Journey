#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;

public:
    Box(int l, int w) {
        length = l;
        width = w;
    }

    // Declaring friend function
    friend int calculateArea(Box b);
};

// Friend function (not a member, but has access to private data)
int calculateArea(Box b) {
    return b.length * b.width;
}

int main() {
    Box b1(10, 5);

    // Friend function can access private members
    cout << "Area of Box: " << calculateArea(b1) << endl;

    return 0;
}

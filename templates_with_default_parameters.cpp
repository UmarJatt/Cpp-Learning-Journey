#include <iostream>
using namespace std;

// Function template with default type parameters
template <typename T1 = int, typename T2 = double>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) : first(a), second(b) {}
    void show() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

// Function template with default type parameters
template <typename T1 = int, typename T2 = double>
T1 multiply(T1 a, T2 b) {
    return a * b;
}

int main() {
    // ✅ Class template with default parameters
    Pair<> p1(5, 2.5);        // uses default types: int, double
    Pair<string, int> p2("Umar", 19); // override default types

    p1.show();
    p2.show();

    cout << "-----------------------------" << endl;

    // ✅ Function template with default parameters
    cout << "Multiply default types: " << multiply(5, 2.5) << endl;
    cout << "Multiply overridden types: " << multiply<long, float>(1000, 2.5f) << endl;

    return 0;
}

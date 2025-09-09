#include <iostream>
using namespace std;

// Function template with multiple parameters
template <typename T1, typename T2>
void display(T1 a, T2 b) {
    cout << "First value: " << a << ", Second value: " << b << endl;
}

// Class template with multiple parameters
template <class T1, class T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) : first(a), second(b) {}
    void show() {
        cout << "Pair: " << first << " and " << second << endl;
    }
};

int main() {
    // ✅ Function template example
    display(10, 3.14);        // int + double
    display("Hello", 100);    // string + int

    cout << "-----------------------------" << endl;

    // ✅ Class template example
    Pair<int, double> p1(5, 2.5);
    Pair<string, int> p2("Umar", 19);

    p1.show();
    p2.show();

    return 0;
}

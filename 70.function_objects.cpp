/*
    This program demonstrates the use of:
    1️⃣ Function objects (functors)
    2️⃣ Applying functors with STL algorithms

    Steps:
    - Create a functor class with overloaded operator()
    - Use it like a regular function
    - Apply it to a vector using std::transform
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 1️⃣ Functor class (function object)
class MultiplyByTwo {
public:
    // Overload () operator to multiply a number by 2
    int operator()(int x) const {
        return x * 2;
    }
};

int main() {
    // Using functor directly
    MultiplyByTwo multiply;
    cout << "5 multiplied by 2 using functor: " << multiply(5) << endl;

    // Using functor with STL algorithm
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> result(v.size());  // create vector to store results

    // Apply MultiplyByTwo functor to each element
    transform(v.begin(), v.end(), result.begin(), MultiplyByTwo());

    // Display original vector
    cout << "Original vector: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Display transformed vector
    cout << "Transformed vector (x*2): ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}

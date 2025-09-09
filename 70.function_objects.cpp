#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 1️⃣ Function object (functor)
class MultiplyByTwo {
public:
    int operator()(int x) const { // overload operator()
        return x * 2;
    }
};

int main() {
    // Using function object
    MultiplyByTwo multiply;
    cout << "Multiply 5 by 2 using functor: " << multiply(5) << endl;

    // Using function object with STL algorithms
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> result(v.size());

    transform(v.begin(), v.end(), result.begin(), MultiplyByTwo());

    cout << "Original vector: ";
    for (int x : v) cout << x << " ";
    cout << "\nTransformed vector (x*2): ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 1️⃣ Create a vector
    vector<int> v = {5, 2, 8, 1};

    // 2️⃣ Add elements
    v.push_back(10);   // add at the end
    v.insert(v.begin() + 2, 7); // insert 7 at index 2

    // 3️⃣ Remove elements
    v.pop_back();      // remove last element
    v.erase(v.begin()); // remove first element

    // 4️⃣ Access elements
    cout << "Vector elements: ";
    for (int x : v) cout << x << " ";
    cout << endl;
    cout << "First element: " << v.front() << ", Last element: " << v.back() << endl;

    // 5️⃣ Size and capacity
    cout << "Vector size: " << v.size() << ", capacity: " << v.capacity() << endl;

    // 6️⃣ Sort vector
    sort(v.begin(), v.end());
    cout << "Sorted vector: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 7️⃣ Clear vector
    v.clear();
    cout << "Vector cleared. Size now: " << v.size() << endl;

    return 0;
}

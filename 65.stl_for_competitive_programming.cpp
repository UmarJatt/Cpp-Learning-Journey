#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    // 1️⃣ Vector → Dynamic array
    vector<int> v = {5, 2, 9, 1};
    v.push_back(7); // add element
    sort(v.begin(), v.end()); // sort vector
    cout << "Vector elements: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 2️⃣ Set → unique sorted elements
    set<int> s = {3, 1, 4, 1, 5};
    s.insert(2);
    cout << "Set elements: ";
    for (int x : s) cout << x << " ";
    cout << endl;

    // 3️⃣ Map → key-value pair
    map<string, int> mp;
    mp["Alice"] = 10;
    mp["Bob"] = 20;
    mp["Charlie"] = 30;
    cout << "Map elements:\n";
    for (auto pair : mp) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // 4️⃣ Some useful algorithms
    int arr[] = {10, 20, 5, 15};
    sort(arr, arr+4); // sort array
    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    // binary search
    if (binary_search(arr, arr+4, 15)) {
        cout << "15 found in array" << endl;
    } else {
        cout << "15 not found in array" << endl;
    }

    return 0;
}

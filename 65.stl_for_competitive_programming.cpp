/*
    This program demonstrates some commonly used STL containers and algorithms in C++.

    1️⃣ Vector → Dynamic array that can grow in size
    2️⃣ Set → Stores unique elements in sorted order
    3️⃣ Map → Stores key-value pairs
    4️⃣ Algorithms → Functions like sort, binary_search

    It shows how to use these containers and perform basic operations.
*/

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm> // for sort, binary_search
using namespace std;

int main() {
    // 1️⃣ Vector example
    vector<int> v = {5, 2, 9, 1};
    v.push_back(7);            // Add element at the end
    sort(v.begin(), v.end());  // Sort elements in ascending order

    cout << "Vector elements: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // 2️⃣ Set example (unique and sorted elements automatically)
    set<int> s = {3, 1, 4, 1, 5}; // duplicate 1 is ignored
    s.insert(2);                  // add another element

    cout << "Set elements: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;

    // 3️⃣ Map example (key-value pair)
    map<string, int> mp;
    mp["Alice"] = 10;
    mp["Bob"] = 20;
    mp["Charlie"] = 30;

    cout << "Map elements:\n";
    for (auto pair : mp) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // 4️⃣ Using algorithms on array
    int arr[] = {10, 20, 5, 15};
    sort(arr, arr + 4); // sort array

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    // Binary search in sorted array
    if (binary_search(arr, arr + 4, 15)) {
        cout << "15 found in array" << endl;
    } else {
        cout << "15 not found in array" << endl;
    }

    return 0;
}

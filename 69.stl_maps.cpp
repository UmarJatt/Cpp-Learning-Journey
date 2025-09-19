/*
    This program demonstrates how to use a C++ map (associative container):

    1️⃣ Create a map
    2️⃣ Insert elements (using [] or insert)
    3️⃣ Access elements
    4️⃣ Iterate through the map
    5️⃣ Find elements
    6️⃣ Remove elements
    7️⃣ Check map size
*/

#include <iostream>
#include <map>
using namespace std;

int main() {
    // 1️⃣ Create a map with string keys and int values
    map<string, int> scores;

    // 2️⃣ Insert elements
    scores["Alice"] = 95;             // insert using []
    scores["Bob"] = 85;               // insert using []
    scores.insert({"Charlie", 75});   // insert using pair

    // 3️⃣ Access element
    cout << "Alice's score: " << scores["Alice"] << endl;

    // 4️⃣ Iterate through map
    cout << "All scores:\n";
    for (auto pair : scores) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // 5️⃣ Find element
    if (scores.find("Bob") != scores.end()) {
        cout << "Bob found with score: " << scores["Bob"] << endl;
    }

    // 6️⃣ Remove element
    scores.erase("Charlie");
    cout << "After removing Charlie:\n";
    for (auto pair : scores) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // 7️⃣ Map size
    cout << "Map size: " << scores.size() << endl;

    return 0;
}

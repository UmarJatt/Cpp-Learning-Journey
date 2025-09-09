#include <iostream>
#include <map>
using namespace std;

int main() {
    // 1️⃣ Create a map
    map<string, int> scores;

    // 2️⃣ Insert elements
    scores["Alice"] = 95;
    scores["Bob"] = 85;
    scores.insert({"Charlie", 75});

    // 3️⃣ Access elements
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
    cout << "After erasing Charlie:\n";
    for (auto pair : scores) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // 7️⃣ Map size
    cout << "Map size: " << scores.size() << endl;

    return 0;
}

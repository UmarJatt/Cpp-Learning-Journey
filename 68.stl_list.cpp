#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    // 1️⃣ Create a list
    list<int> lst = {10, 20, 30, 40};

    // 2️⃣ Add elements
    lst.push_back(50);   // add at end
    lst.push_front(5);   // add at beginning
    auto it = lst.begin();
    advance(it, 2);      // move iterator to 3rd position
    lst.insert(it, 15);  // insert 15 at 3rd position

    // 3️⃣ Remove elements
    lst.pop_back();       // remove last element
    lst.pop_front();      // remove first element
    lst.remove(20);       // remove element with value 20

    // 4️⃣ Access elements (iterate using for-each)
    cout << "List elements: ";
    for (int x : lst) cout << x << " ";
    cout << endl;

    // 5️⃣ Size of list
    cout << "List size: " << lst.size() << endl;

    // 6️⃣ Sort list
    lst.sort();
    cout << "Sorted list: ";
    for (int x : lst) cout << x << " ";
    cout << endl;

    // 7️⃣ Reverse list
    lst.reverse();
    cout << "Reversed list: ";
    for (int x : lst) cout << x << " ";
    cout << endl;

    // 8️⃣ Clear list
    lst.clear();
    cout << "List cleared. Size now: " << lst.size() << endl;

    return 0;
}

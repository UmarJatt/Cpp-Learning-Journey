#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
using namespace std;

int main() {
    // 1️⃣ Vector → Dynamic array
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    cout << "Vector elements: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 2️⃣ Deque → Double-ended queue
    deque<int> dq = {10, 20, 30};
    dq.push_front(5);
    dq.push_back(35);
    cout << "Deque elements: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // 3️⃣ List → Doubly linked list
    list<int> lst = {100, 200, 300};
    lst.push_back(400);
    lst.push_front(50);
    cout << "List elements: ";
    for (int x : lst) cout << x << " ";
    cout << endl;

    // 4️⃣ Set → Unique sorted elements
    set<int> s = {5, 1, 3, 5};
    s.insert(2);
    cout << "Set elements: ";
    for (int x : s) cout << x << " ";
    cout << endl;

    // 5️⃣ Map → Key-value pairs
    map<string, int> mp;
    mp["Alice"] = 25;
    mp["Bob"] = 30;
    cout << "Map elements:\n";
    for (auto p : mp) cout << p.first << " -> " << p.second << endl;

    // 6️⃣ Stack → LIFO
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "Stack top: " << st.top() << endl;
    st.pop();
    cout << "Stack top after pop: " << st.top() << endl;

    // 7️⃣ Queue → FIFO
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Queue front: " << q.front() << ", back: " << q.back() << endl;
    q.pop();
    cout << "Queue front after pop: " << q.front() << endl;

    // 8️⃣ Priority Queue → Max-heap by default
    priority_queue<int> pq;
    pq.push(50);
    pq.push(20);
    pq.push(70);
    cout << "Priority Queue top: " << pq.top() << endl;

    return 0;
}

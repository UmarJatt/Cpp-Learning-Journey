#include <iostream>
using namespace std;

class Person {
private:
    int age; // private: accessible only inside class

public:
    string name; // public: accessible from outside

    // Setter function (to set private data)
    void setAge(int a) {
        age = a;
    }

    // Getter function (to access private data)
    int getAge() {
        return age;
    }
};

int main() {
    Person p1;

    // Public member can be accessed directly
    p1.name = "Umar";
    cout << "Name: " << p1.name << endl;

    // Private member cannot be accessed directly
    // p1.age = 20; ❌ (not allowed)

    // Accessing private member via public methods
    p1.setAge(20);
    cout << "Age: " << p1.getAge() << endl;

    return 0;
}

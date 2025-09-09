#include <iostream>
using namespace std;

int main() {
    // =========================
    // Sequence Structure
    // =========================
    cout << "===== Sequence Example =====" << endl;
    int a = 5, b = 10;
    int sum = a + b;
    cout << "Sum of " << a << " and " << b << " is " << sum << endl;

    // =========================
    // Selection Structure
    // =========================
    cout << "\n===== Selection Example =====" << endl;
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << num << " is positive." << endl;
    } else if (num < 0) {
        cout << num << " is negative." << endl;
    } else {
        cout << "Number is zero." << endl;
    }

    // Switch case example
    int choice;
    cout << "Enter choice (1-3): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "You selected 1" << endl;
            break;
        case 2:
            cout << "You selected 2" << endl;
            break;
        case 3:
            cout << "You selected 3" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    // =========================
    // Loop Structures
    // =========================
    cout << "\n===== Loop Examples =====" << endl;

    // For loop
    cout << "For loop (1 to 5): ";
    for(int i=1; i<=5; i++)
        cout << i << " ";
    cout << endl;

    // While loop
    cout << "While loop (1 to 5): ";
    int j = 1;
    while(j <= 5) {
        cout << j << " ";
        j++;
    }
    cout << endl;

    // Do-while loop
    cout << "Do-while loop (1 to 5): ";
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while(k <= 5);
    cout << endl;

    return 0;
}

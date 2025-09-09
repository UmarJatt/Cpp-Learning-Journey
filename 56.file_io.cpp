#include <iostream>
#include <fstream>  // for file handling
using namespace std;

int main() {
    string line;

    // 1️⃣ Writing to a file
    ofstream outFile("example.txt"); // creates/opens file
    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
    outFile << "Hello, this is a C++ File I/O example.\n";
    outFile << "Line 2: Writing to file using ofstream.\n";
    outFile.close();
    cout << "Data written to file successfully." << endl;

    // 2️⃣ Appending to a file
    ofstream appendFile("example.txt", ios::app); // ios::app → append mode
    appendFile << "Line 3: Appending more data.\n";
    appendFile.close();
    cout << "Data appended successfully." << endl;

    // 3️⃣ Reading from a file
    ifstream inFile("example.txt");
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }
    cout << "\nReading data from file:" << endl;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}

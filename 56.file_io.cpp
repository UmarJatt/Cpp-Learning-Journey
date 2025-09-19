/*
    This program demonstrates **basic file handling in C++**:

    1. Writing to a file using ofstream.
    2. Appending more data to the same file.
    3. Reading data from the file using ifstream.

    It shows how to:
    - Create or open a file
    - Write and append data
    - Read the file line by line
*/

#include <iostream>
#include <fstream>  // for file handling
using namespace std;

int main() {
    string line;

    // 1️⃣ Writing to a file
    ofstream outFile("example.txt"); // create/open file
    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
    outFile << "Hello, this is a C++ File I/O example.\n";
    outFile << "Line 2: Writing to file using ofstream.\n";
    outFile.close();  // always close file after writing
    cout << "Data written to file successfully." << endl;

    // 2️⃣ Appending to a file
    ofstream appendFile("example.txt", ios::app); // open in append mode
    if (!appendFile) {
        cout << "Error opening file for appending!" << endl;
        return 1;
    }
    appendFile << "Line 3: Appending more data.\n";
    appendFile.close();
    cout << "Data appended successfully." << endl;

    // 3️⃣ Reading from a file
    ifstream inFile("example.txt"); // open file for reading
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }
    cout << "\nReading data from file:" << endl;
    while (getline(inFile, line)) {  // read line by line
        cout << line << endl;
    }
    inFile.close();

    return 0;
}

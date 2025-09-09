#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string line;

    // Writing data to file using open()
    ofstream outFile;
    outFile.open("data.txt"); // explicitly opening file
    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
    outFile << "Line 1: Hello, Umar!\n";
    outFile << "Line 2: Learning open() and eof().\n";
    outFile << "Line 3: File handling in C++ is fun!\n";
    outFile.close();

    // Reading data using open() and eof()
    ifstream inFile;
    inFile.open("data.txt"); // explicitly opening file
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\nReading file using eof() function:\n";
    while (!inFile.eof()) {   // loop until End Of File
        getline(inFile, line);
        if (!line.empty()) {
            cout << line << endl;
        }
    }

    inFile.close();
    return 0;
}

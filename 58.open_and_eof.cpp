/*
    This program demonstrates simple file handling in C++:

    1. Writing multiple lines to a file using ofstream.
    2. Reading the file line by line using ifstream.

    It shows how to:
    - Create and write to a file
    - Read the contents of the file
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string text;

    // 1️⃣ Writing to a file
    ofstream outFile("notes.txt");  // create and open file for writing
    if (!outFile) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    outFile << "This is line 1 written to file.\n";
    outFile << "This is line 2 written to file.\n";
    outFile.close();  // always close file after writing
    cout << "Data written successfully." << endl;

    // 2️⃣ Reading from the same file
    ifstream inFile("notes.txt");  // open file for reading
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\nReading file contents:" << endl;
    while (getline(inFile, text)) {  // read file line by line
        cout << text << endl;
    }
    inFile.close();  // close file after reading

    return 0;
}

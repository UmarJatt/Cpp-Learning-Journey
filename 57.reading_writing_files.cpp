/*
    This program shows **basic file handling in C++**:

    1. Writing multiple lines to a file using ofstream.
    2. Reading the contents of the file using ifstream.
    3. Printing the file content line by line to the console.
*/

#include <iostream>
#include <fstream>  // Required for file operations
using namespace std;

int main() {
    string text;

    // 1️⃣ Writing data to a file
    ofstream outFile("notes.txt"); // Create or open the file
    if (!outFile) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    // Writing two lines to the file
    outFile << "This is line 1 written to file.\n";
    outFile << "This is line 2 written to file.\n";

    outFile.close();  // Always close the file after writing
    cout << "Data written successfully." << endl;

    // 2️⃣ Reading data from the same file
    ifstream inFile("notes.txt");  // Open file for reading
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\nReading file contents:" << endl;
    while (getline(inFile, text)) {  // Read file line by line
        cout << text << endl;
    }

    inFile.close();  // Close the file after reading

    return 0;
}

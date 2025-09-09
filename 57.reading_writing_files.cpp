#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string text;

    // 1️⃣ Writing to a file
    ofstream outFile("notes.txt");
    if (!outFile) {
        cout << "Error creating file!" << endl;
        return 1;
    }
    outFile << "This is line 1 written to file.\n";
    outFile << "This is line 2 written to file.\n";
    outFile.close();
    cout << "Data written successfully." << endl;

    // 2️⃣ Reading from the same file
    ifstream inFile("notes.txt");
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\nReading file contents:" << endl;
    while (getline(inFile, text)) {
        cout << text << endl;
    }
    inFile.close();

    return 0;
}

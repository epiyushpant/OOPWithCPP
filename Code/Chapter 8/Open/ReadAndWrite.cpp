#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
int main() {
    ofstream outFile;
    outFile.open("data.txt", ios::out);

    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    outFile << "Hello C++\n";
    outFile << "This is written in one file.\n";
    outFile.close();

    ifstream inFile;
    inFile.open("data.txt", ios::in);

    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    string line;
    cout << "File contents:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}
*/

int main() {
    fstream file;
    file.open("data.txt", ios::in | ios::out | ios::trunc);

    if (!file) {
        cout << "Error opening file for reading and writing!" << endl;
        return 1;
    }

    file << "Hello C++\n";
    file << "This is written in one file.\n";
    file.flush();
    file.seekg(0);

    string line;
    cout << "File contents:\n";
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();

    return 0;
}

/*

Here it is important because the program switches from writing to reading:


flush() finishes sending the written data to the file.
seekg(0) moves the reading position back to the beginning.
flush() does not close the file; the same fstream remains available for reading and writing.

*/
// Small practice variation: example adjusted for practice.
//Writing to a file using constructor in C++

#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream outFile("output.txt [Practice]");  // Opens file for writing
    if (!outFile) {
        cout << "Error opening file!";
        return 1;
    }

    outFile << "This is written using constructor.\n";
    outFile.close();
    return 0;
}



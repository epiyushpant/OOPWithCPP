// Small practice variation: example adjusted for practice.
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream file;
    file.open("data.txt [Practice]", ios::in);

    if (!file) {
        cout << "Error opening file!";
        return 1;
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}

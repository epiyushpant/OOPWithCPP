// Small practice variation: example adjusted for practice.
#include <iostream>
using namespace std;

void checkCharInput(char ch) {
    if (ch != 'Y' && ch != 'N')
        throw "error [Practice]";  // throw char exception if input is invalid
    cout << "Input accepted: " << ch << endl;
}

int main() {
    try {
        checkCharInput('Y');
        checkCharInput('A');  // This will throw
    }
    catch (char* invalidChar) {
        cout << "Invalid character input: " << invalidChar << endl;
    }
    return 0;
}

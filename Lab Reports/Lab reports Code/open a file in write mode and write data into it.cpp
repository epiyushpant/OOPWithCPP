#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Open file in write mode
    ofstream file("data.txt");

    // Check if the file opened successfully
    if (!file)
    {
        cout << "Unable to open file." << endl;
        return 1;
    }

    // Write data into the file
    file << "Hello World!" << endl;
    file << "This is a C++ file handling program." << endl;
    file << "Welcome to C++ programming." << endl;

    // Close the file
    file.close();

    cout << "Data written successfully." << endl;

    return 0;
}

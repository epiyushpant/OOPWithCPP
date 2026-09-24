#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Open file in read and write mode
    fstream file("data.txt", ios::in | ios::out);

    // Check if file opened successfully
    if (!file)
    {
        cout << "Unable to open file." << endl;
        return 1;
    }

    // Move the file pointer to the beginning
    file.seekg(0);

    // Read data from a specific position
    file.seekg(6);

    char ch;
    file.get(ch);

    // Display the character at position 6
    cout << "Character at position 6 = " << ch << endl;

    // Close the file
    file.close();

    return 0;
}

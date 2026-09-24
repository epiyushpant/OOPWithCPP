#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;

    // Open the file in read mode
    ifstream file("data.txt");

    // Check if the file opened successfully
    if (!file)
    {
        cout << "Unable to open file." << endl;
        return 1;
    }

    // Read the file line by line
    while (getline(file, line))
    {
        // Display each line
        cout << line << endl;
    }

    // Close the file
    file.close();

    return 0;
}

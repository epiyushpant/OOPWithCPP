// 23. Write a C++ program to open a file in write mode and write data into it.

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream file;
	
	// Open file in write mode
	file.open("data.txt");
	
	// Check if file opened successfully
	if(!file){
		cout << "Unable to open file." << endl;
		return 1;
	}
	
	// Write data into the file
	file <<"Name: Jenish" << endl;
	file << "Course: BICTE" << endl;
	file << "Semester: Second" << endl;
	
	// Close the file
	file.close();
	
	cout << "Data written successfully.";
	
	return 0;
}

// 22.Write a C++ program to open a file in read mode and display its contents.

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream file;
	string line;
	
	// Open file in read mode
	file.open("data.txt");
	
	// Check if file opend successfully
	if(!file){
		cout << "Unable to open file." << endl;
		return 1;
	}
	
	// Read and display file contents
	while (getline(file, line)){
		cout << line << endl;
	}
	
	// Close the file
	file.close();
	
	return 0;
}

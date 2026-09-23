// 24.Write a C++ program to demonstrate random access file handling and explain how it
//differs from sequential access.

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	fstream file;
	
	// Open file for reading and writing
	file.open("data.txt", ios::in | ios::out | ios::trunc);
	
	if(!file){
		cout <<"Unable to open file." << endl;
		return 1;
	}
	
	// Write data into the file
	file << "MAHENDRA_RATNA_CAMPUS";
	
	// Move read pointer to position 5
	file.seekg(5);
	
	char ch;
	file.get(ch);
	
	cout <<"Character at position 5 = " << ch << endl;
	
	// Close the file
	file.close();
	
	return 0;
}

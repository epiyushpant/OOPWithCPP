/*-----------String-------------------*/
/*
string is nothing but sequence of characters. In simple when letters are written
in sequence considered as a string

// Example
 "Ramchandra"

 1. String index start always with 0
 2. The last character of string is null(\0)

 c++ provide pre-defined function to manipulate string
 <string.h> header file
 1.  stelen()
 2. strrev()
 3. strcpy()
 4. strcat()
5. strcmp()
6.getline() (string input function)
7. push_back  to add more string on previous string
8. pop_back  : to remove the adding string from previous string
*/
#include<iostream>
// #include<string.h>
// #include<algorithm>
using namespace std;
int main(){
    //char myName[20];      // fixed size, mutable , ending string index nul character
    // cout<<"Enter you full name: ";
    // cin>>myName;
    // cout<<"Your name is "<<myName<<endl;
    // gets(myName);
    // puts(myName);
    //string Address;      // Dynamic , immutable 
    // cout<<"Enter Your full Address:";
    // getline(cin,Address);
    // cout<<"Full Address:"<<Address;
/* string myaddress="Learn Coding";
cout<<"original address :"<<myaddress<<endl;
myaddress.push_back('mm'); // push c
cout<<"The update address:"<<myaddress<<endl;
myaddress.pop_back();
cout<<"PoP value"<<myaddress;
*/

/*char name[] = "ramchandra";
char name2[] = "Bhatta";
int i = strlen(name);
cout<<i<<endl;
strcpy(name,name2);
cout<<name<<endl;
cout<<""<<strrev(name2);
int l = strlen(name2);
cout<<""<<l<<endl;
strcat(name,name2);
cout<<""<<name<<endl;
*/

// string name="Ankush";
// string name2="Bhatta";
// cout<<name.length();
// name.replace(0,6,"Ramchan"); //replace the name 
// cout<<""<<name;
// name.append(name2);      //join from object
// cout<<name;

// string name = "Ramchandra Bhatta";
// reverse(name.begin(),name.end());
// cout<<name;
string name = "Ramchandra";
cout<<"My name is"<<name;
}
#include <iostream>
using namespace std;

class Patient{
    public:
    string name;
    int age;
    string address;
    
    Patient(string n, int a, string add){
        name = n; age = a; address = add;
    }

    void display(){
        cout<< name <<" is "<<age<< " lives in "<< address;
    }
};

int main(){
    Patient p("ram", 23 , "kathmandu ");
    Patient p1("hari", 33, "pokhara ");

    p.display();
    p1.display();

    return 0;
}
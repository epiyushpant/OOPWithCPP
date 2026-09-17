#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    string address;
    void display(){
        cout<<name<<" age is "<< age << endl;
    }
};

int main(){
    Student s1; s1.name ="ram", s1.age = 24;
    Student s2; s2.name = "hari", s2.age = 23;

    s1.display();
    s2.display();
    
    return 0;
}
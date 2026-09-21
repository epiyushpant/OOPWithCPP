/*--------------Encapsulation-------------*/
/*
Encapsulation means binding data and method within a class
providing control over the accessibility and it prevents external cose from directly
modifying the internal data of an object.



Example
Class Person :
{

private:
data
public:
funtcion()
{
}
};
*/

/**/
#include <iostream>
using namespace std;
class Encap
{
private:
    int age;
    void show(){
        cout<<"Ramchandra";
    }

public:
    string name;
    void setValue(int a){
        age =a;
        cout<<age<<endl;
        show();
    }
};
int main()
{
    Encap E;
    E.name = "Ram";
    E.setValue(23);
    cout <<E.name;
}
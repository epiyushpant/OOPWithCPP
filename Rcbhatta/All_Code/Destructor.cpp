/*-----------------------Destructor----------------*/
/*
Destructor is a special member function that is executed automatically. When an
object is destroy that has been creaded by the constructor
- Destructor are used to de-allocate the memory that has been allocated the 
object by the constructor.
-   A destructor declaration should always being with the tilde(~)
sign


*/
#include<iostream>
using namespace std;
class test
{
   int n;
    public:
    test()
    {
        int n =20;
        cout<<n<<endl;
    }

    ~test()
    {
cout<<"Object Des"<<endl;
cout<<n<<endl;

    }
};
int main(){
    test ob,ob1;
}
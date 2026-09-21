/*---------Function Overriding------------*/
/*Whenever we write function in base and derived class in such a way 
that function name parameter must be same called function overriding*/

/*
        Syntax
        class Class_Name
        {
        void fun(){
        }
        };
        class class_name : public base_ class
        {
        void fun()
        {
        }
        }
*/
        #include<iostream>
        using namespace std;
        class A
        {
            private:
            public:
           virtual void fun(){
                cout<<"Ramchandra";
            }
        };
         class B: public A
        {
            public:
            void fun(){
                cout<<"Hari";
            }
        };
        main(){
          A *p;
          B ob;
          p = &ob;
          p->fun();

          //  ob.A::fun();

            return 0;
        }


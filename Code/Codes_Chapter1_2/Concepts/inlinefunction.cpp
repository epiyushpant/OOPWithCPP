// #include<iostream>
// using namespace std;
// inline int fun(int a, int b){
//     return a+b;
// }
// int main(){
//    int sum=  fun(10,30);
//    cout<<sum;
// }


        /* Inline function*/
        #include<iostream>
        using namespace std;
    inline int fun(int a, int b,int c){
        return (a>b)?((a>c)?a:c):((b>c)?b:c); // a>b ?b>a ? true : false
    }
    int main(){
       int value = fun(10,20,30);
       cout<<value;
    }
// Pointer is a data type which hold the address of other data type.
// the "&" operator is called "address off" operator, and the "*" operator is called "value at" dereference operator.
#include<iostream>
using namespace std;
int main(){
    int a=3;
    int* b;
    b = &a;
    // & ---> (address off) operator
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;
    // * ---> (value at) dereference operator
    cout<<"the value at address b is "<<*b<<endl;

    //pointer to pointer
    int** c = &b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value at address value_at(value_at(c)) is "<<**c<<endl;
return 0;
} 
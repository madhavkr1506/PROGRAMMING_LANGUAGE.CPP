#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // ******** Constants in c++ *******
    int a=34;
    char c='a';
    cout<<"the value of a was "<<a<<endl;
    cout<<"the value of c was "<<c<<endl;
    a=45;
    c='b';
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of a is "<<c<<endl;

    // const int a=34;
    // const char c='a';
    // cout<<"the value of a was "<<a<<endl;
    // cout<<"the value of c was "<<c<<endl;
    // a=45;
    // c='b';
    // cout<<"the value of a is "<<a<<endl;
    // cout<<"the value of a is "<<c<<endl;
    // this will through an error because value of a and c is constant and it will not updated.

    // *********** Manipulators ***********
    int a=3, b=78, c=1233;
    cout<<"the value of a is : "<<a<<endl;
    cout<<"the value of b is : "<<b<<endl;
    cout<<"the value of c is : "<<c<<endl;
    cout<<"the value of a is : "<<setw(4)<<a<<endl;
    cout<<"the value of b is : "<<setw(4)<<b<<endl;
    cout<<"the value of c is : "<<setw(4)<<c<<endl;

    // ********* operator precedence ***********
    int a=3,b=4;
    int c=a*5+b;
    cout<<c;
    /* precedence order with associativity=> 
    1. ::               left to right
    2. type() type{}    left to right
       a()              left to right
       a[]              left to right
       . ->             left to right
    3. ++a --a          right to left
       +a -a            right to left
       ! ~              right to left
       (type)           right to left
       *a               right to left
       &a               right to left
       sizeof           right to left
       co_await         right to left
       new new[]        right to left
       delete delete[]  right to left
    4. .* ->*           left to right
    5. a*b a/b a%b      left to right
    6. a+b a-b          left to right
    7. << >>            left to right
    8. <=>              left to right
    9. < <= > >=        left to right
    10. == !=           left to right
    11. a&b             left to right
    12. ^               left to right
    13. |               left to right
    14. &&              left to right
    15. ||              left to right
    16. a?b:c           right to left
        throw           right to left
        co_yield        right to left
        =               right to left
        += -=           right to left
        *= /= %=        right to left
        <<= >>=         right to left
        &= ^= |=        right to left
    17. ,               left to right
    */  
return 0;
}
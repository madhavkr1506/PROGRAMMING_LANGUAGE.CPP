/* function are the main part of top down structured programming. we can break the code into small pieces and make functions of that code.
function helps us to reuse code easily.
function prototype : the function prototype is the template of the function which tells the details of the function e.g(name, parameters)
to the compiler. function prototypes helps us to define a function after the function call.
formal parameters => the variable which are declared in the function are called a formal parameter.
actual parameter => the values which are passed to the function are called actual parameter.
*/
#include<iostream>
using namespace std;
// function prototype
// type function-name (arguments);
// int sum (int a, int b); //---> acceptable
// int sum (int a, b); //---> not acceptable
int sum (int, int); //---> acceptable
// void g(void); //---> acceptable
void g(); //---> acceptable

int main(){
    int num1, num2;
    cout<<"enter first number = "<<endl;
    cin>>num1;
    cout<<"enter second number = "<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"the sum is "<<sum(num1, num2);
    g();
return 0;
}
int sum(int a, int b){
    // formal parameters a and b will be taking values from actual parameters num1 and num2.
    int c = a + b;
    return c;
}
void g(){
    cout<<"\nhello, good morning";
}
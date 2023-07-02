/*Precedence of local variable is more and over the global variable. (Variable with same name)*/
#include<iostream>
using namespace std;
int global=10;
void sum(){
    int a;
    cout<<global;
}
int main(){
    int global=9;
    // sum();
    cout<<global;
return 0;
}
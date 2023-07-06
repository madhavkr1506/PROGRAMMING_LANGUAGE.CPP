// c++ program to assign data to members of a structure variable and display it.
// Structure is a collection of variables of different data types under a single name. it is similar to a class in thet, both holds a collection 
// of data of different data types.
// the struct keyword defines a structure type followed by an identifier (name of the structure ). then, inside curly braces we can declare one or 
// more members of that structure.
// the member of structure variable is accessed using a dot (.) operator.

#include<iostream>
using namespace std;
struct person{
    char name[50];
    int age;
    float salary;
};
int main(){
    person p1;
    cout<<"enter full name = ";
    cin.get(p1.name,50);
    cout<<"enter age = ";
    cin>>p1.age;
    cout<<"enter salary = ";
    cin>>p1.salary;
    cout<<"***************displaying information************"<<endl;
    cout<<"name : "<<p1.name<<endl;
    cout<<"age : "<<p1.age<<endl;
    cout<<"salary : "<<p1.salary<<endl;
return 0;
}
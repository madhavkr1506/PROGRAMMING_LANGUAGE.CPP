#include<iostream>
using namespace std;
typedef struct employee{
    int eId;
    char favChar;
    float salary;
}ep;

union money{
    int rice;
    char car;
    float pounds;
};


int main(){
    // enum Meal{ Breakfast, lunch, dinner};
    // Meal m1 = lunch;
    // cout<<(m1 == 2);
    // cout<<Breakfast;
    // cout<<lunch;
    // cout<<dinner;
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car;

    // ep harry;
    // struct employee shubham;
    // struct employee rohandas;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"the value is "<<harry.eId<<endl;
    // cout<<"the value is "<<harry.favChar<<endl;
    // cout<<"the value is "<<harry.salary<<endl;
return 0;
}

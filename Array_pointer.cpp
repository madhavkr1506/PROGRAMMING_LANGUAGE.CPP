/* An arry is a collection of items which are of the similar type stored in the contiguous memory location.
sometimes, a simple variable is not enough to hold all the data.
for example, let say we want to store the marks of 2500 students; initializing 2500 different variable for this task is not feasible.
to solve this problem we can define an array with size 2500 that can hold the marks of all the students.
for example int marks[2500]; 
*/
#include<iostream>
using namespace std;
int main(){
    // array example
    int marks[] = {45,99,89,750};
    int mathmarks[4];
    mathmarks[0] = 155;
    mathmarks[1] = 562;
    mathmarks[2] = 333;
    mathmarks[3] = 256;
    cout<<"these are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    // we can change the value of an array
    marks[2] = 77;
    cout<<"these are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    // using loop method
    for (int i=0;i<4;i++){
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    //pointers and array
    int* p = marks;
    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;
    cout<<"the value of *p is "<<*p<<endl;
    cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is "<<*(p+3)<<endl;
return 0;
}
#include<iostream>
using namespace std;
int c=21;
int main(){
    // ********* float, double, long double literals ************
    float d=34.4f;
    long double e=34.4l;
    cout<<"the value of d is "<<d<<endl;
    cout<<"the value of e is "<<e<<endl;
    cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
    //********** Built in data types ***********
    int a, b, c;
    cout<<"enter the value of a = "<<endl;
    cin>>a;
    cout<<"enter the value of b = "<<endl;
    cin>>b;
    c=a+b;
    cout<<"the sum of value a and b is "<<c<<endl;
    cout<<"the global value of c is "<<::c<<endl;

    // ********** Reference variable ************ :
    float x=3.14;
    float &y=x;
    cout<<x<<endl;
    cout<<y<<endl;

    // *********** Typecasting ***********
    int a=45;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of a is "<<(float)a<<endl;
    float b=45.66;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of b is "<<int(b)<<endl;
    int c=int(b);
    cout<<"the value of is "<<(a+b)<<endl;
    cout<<"the value of a is "<<(a+int(b))<<endl;        
    cout<<"the value of a is "<<(a+(int)b)<<endl;

return 0;
}
/* To access global value we use scope resolution operator i.e, :: */

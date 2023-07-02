#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"tell me your age = "<<endl;
    cin>>age;

    // ********* Selection control structure : if elseif---else ladder ***********
    if (age<18 && age>0){
        cout<<"you cannot come to my party"<<endl;
    }
    else if (age==18){
        cout<<"you are a kid and you will get a kid pass to the party"<<endl;
    }
    else if (age<1){
        cout<<"you are not yet born"<<endl;
    }
    else{
        cout<<"you can come to the party"<<endl;
    }

    // ********* Selection control structure : Switch case statements ***********
    switch (age){
        case 18:
        cout<<"you are a kid and you will get kid pass to the party"<<endl;
        break;
        case 22:
        cout<<"you can come to my party"<<endl;
        break;
        case 2:
        cout<<"you can not come to my party"<<endl;
        break;
        default:
        cout<<"No special cases"<<endl;
        break;
    }
return 0;
}
/* 
these are basic control structures : 
1. sequence structure 
2. selection structure
3. loop structure
*/
#include<iostream>
using namespace std;
int main(){
    // ******** for loop in c++ ********
    for (int i=0;i<40;i++){
        cout<<i<<endl;
    }
    // example of infinite for loop : 
    // for (int i=0;34<=40;i++){
    //     cout<<i<<endl;
    // }

    // ******* while loop in c++ *********
    int i=1;
    while(i<=40){
        cout<<i<<endl;
        i++;
    }
    // example of infinite while loop :
    // int i=1;
    // while(true){
    //     cout<<i<<endl;
    //     i++;
    // }

    // ******** do while loop in c++ ********
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=40);
    //example of infinite while loop :
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(true);
return 0;
}
/* There are three types of loop in c++
1. for loop
syntax of for loop :
for(initialization;condition;updation){
    loop body(c++ code);
}
2. while loop
syntax of while loop : 
while(condition)
{
    c++ statements;
    updation;
}
3. do while loop
syntax of do while loop : 
do{
    c++ statements;
    updation;
}while(condition);
*/
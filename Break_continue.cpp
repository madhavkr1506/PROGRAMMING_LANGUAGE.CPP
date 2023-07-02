#include<iostream>
using namespace std;
int main(){
    for (int i=0;i<11;i++){
        cout<<i<<endl;
        if(i==4){
            break;
        }
    }
    for (int i=0;i<11;i++){
        if(i==4){
            break;
        }
        cout<<i<<endl;
    }
    for (int i=0;i<11;i++){
        if(i==4){
            continue;
        }
        cout<<i<<endl;
    }
return 0;
}
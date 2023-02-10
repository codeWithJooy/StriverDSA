#include<iostream>
using namespace std;

void recursionOneToN(int number){
    if(number > 0){
        recursionOneToN(number-1);
        cout<<number<<endl;
        
    }
}

int main(){
    recursionOneToN(10);
    return 0;
}
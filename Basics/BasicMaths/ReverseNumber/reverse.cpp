#include<iostream>
using namespace std;

int reverseNumber(int number){
    int x=number;
    int reverse=0;
    while(x){
        reverse=reverse*10+x%10;
        x=x/10;
    }
    return reverse;
}

int main(){
    int number=12345;
    cout<<"The reverse of "<<number<<" is "<<reverseNumber(number);
    return 0;
}
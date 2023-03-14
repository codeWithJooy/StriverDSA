#include<iostream>
using namespace std;

int countDigits(int n){
    int x=n;
    int count = 0;
    while(x){
       x=x/10;
       count++;
    }
    return count;
}
int main(){
    int n=12345;
    cout<<"Total digits in "<< n <<" is "<<countDigits(n);
    return 0;
}
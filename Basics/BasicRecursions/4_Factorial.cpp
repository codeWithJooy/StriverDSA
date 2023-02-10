#include<iostream>
using namespace std;

int factorial(int num){
    if(num  > 0){
        return num * factorial(num-1);
    }
    return 1;
}
int main(){
   int number=5; 
   int data=factorial(number);
   cout<<"Factorial Of first "<<number<<" numbers is "<<data;
   return 0;
}
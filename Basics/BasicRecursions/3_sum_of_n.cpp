#include<iostream>
using namespace std;

int sumNNumbers(int num){
    if(num > 0){
        return num+sumNNumbers(num-1);
    }
    return 0;
}
int main(){
   int number=10; 
   int data=sumNNumbers(number);
   cout<<"Sum Of first "<<number<<" numbers is "<<data;
   return 0;
}
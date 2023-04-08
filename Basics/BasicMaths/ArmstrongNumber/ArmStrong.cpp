#include<iostream>
#include<cmath>
using namespace std;

int totalDigits(int num){
    int x=num;
    int count=0;
    while(x){
      x=x/10;
      count++;
    }
    return count;
}

int armstrongNumber(int number){
    int count=totalDigits(number);
    int x=number;
    int num=0;
    for(int i=0;i<count;i++){
       int temp=x%10;
       num=num+pow(temp,count);
       x=x/10;
    }
    return num;
}

int main(){
    int number=153;
    string val=(number==armstrongNumber(number))?"True":"False";
    cout<<"Number "<<number<<" is an Armstrong number ? "<<val; 
return 0;
}
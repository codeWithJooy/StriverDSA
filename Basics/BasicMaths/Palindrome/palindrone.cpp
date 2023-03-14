#include<iostream>
using namespace std;

int palindromeNumber(int number){
    int x=number;
    int reverse=0;
    while(x){
        reverse=reverse*10+x%10;
        x=x/10;
    }
    return reverse == number;
}

int main(){
    int number=12321;
    string result = palindromeNumber(number) ? "True" : "False";
    cout<<"Is "<<number<<" is a palindrome ? "<< result;
    return 0;
}
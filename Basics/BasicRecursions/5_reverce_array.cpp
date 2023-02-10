#include<iostream>
using namespace std;

void reverseArray(int arr,int start,int end){
    if(end >= start){
        reverseArray(arr,start+1,end-1);
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    }
    return;
}
int main(){
   
}
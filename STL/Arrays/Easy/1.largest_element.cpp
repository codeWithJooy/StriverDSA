#include<iostream>
using namespace std;

int largest(int arr[],int size){
  int x=arr[0];
  for(int i=1;i<size;i++){
    if(arr[i]>x){
        x=arr[i];
    }
  }
  return x;
}

int main(){
    int arr[]={8,10,5,7,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum Value is "<< largest(arr,size);
    return 0;
}
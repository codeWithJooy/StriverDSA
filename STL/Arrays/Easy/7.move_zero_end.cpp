#include<iostream>
using namespace std;

void movezerotoend(int arr[],int size){
    int i=-1;
    for(int j=0;j<size;j++){
      if(arr[j]!=0){
        i++;
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
}
int main(){
    int arr[]={1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    movezerotoend(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
    return 0;
    
}
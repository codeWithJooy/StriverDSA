#include<iostream>
using namespace std;

int sorted(int arr[],int size){
    for(int i=1;i<size;i++){
        if(arr[i] < arr[i-1])
         return 0;
    }
    return 1;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    string val=sorted(arr,size)?"True":"False";
    cout<<"The Array is Sorted "<<val;
    return 0;
}
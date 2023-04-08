#include<iostream>
using namespace std;

int removeDuplicates(int arr[],int size){
    int i=0;
    for(int j=1;j<size;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int main(){
    int arr[]={1,1,2,2,2,3,3,3,3};
    int size=sizeof(arr)/sizeof(arr[0]);

    int r=removeDuplicates(arr,size);
    cout<<"Array after removing duplicates is ";
    for(int i=0;i<r;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}
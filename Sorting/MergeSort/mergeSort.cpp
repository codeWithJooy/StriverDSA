#include<iostream>
using namespace std;

void Merge(int arr[],int l,int mid,int r){
    //Get the Size of left and Right Arrays
    int left=mid-l+1;
    int right=r-mid;

    //Define The Array
    int M[left];
    int N[right];

    //Populate The Array
    for(int i=0;i<left;i++){
        M[i]=arr[l+i];
    }
    for(int i=0;i<right;i++){
        N[i]=arr[mid+i+1];
    }

    //Declare the variables i,j,k
    int i=0;
    int j=0;
    int k=l;


    while(i<left && j<right ){
        if(M[i] < N[j]){
           arr[k]=M[i];
           i++;
        }
        else{
           arr[k]=N[j];
           j++;
        }
        k++;
    }

    while(i < left){
        arr[k]=M[i];
        k++;
        i++;
    }

    while(j < right){
        arr[k]=N[j];
        k++;
        j++;
    }
}

void MergeSort(int arr[],int l,int r){
    if(l < r){
        int mid=(l+r)/2;
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,r);
        Merge(arr,l,mid,r);
    }
}
int main(){
    int arr[] = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;

    cout << "Before Sorting Array: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout<<endl;
    MergeSort(arr, 0, n - 1);
    cout << "After Sorting Array: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    return 0;
}
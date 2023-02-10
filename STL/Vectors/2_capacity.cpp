#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> data;
    for(int i=1;i<=5;i++){
        data.push_back(i);
    }

    cout<<"Vector Size is "<<data.size()<<endl;
    cout<<"Max Items vector can hold "<<data.max_size()<<endl;
    cout<<"Total Capacity "<<data.capacity()<<endl;

    //Resizes the Vector to 4
    data.resize(4);

    //Print the Vector Datas
    for(int i=0;i<data.size();i++){
        cout<<data[i]<<endl;
    } 
    return 0;
}
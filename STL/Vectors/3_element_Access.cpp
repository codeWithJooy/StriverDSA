#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> data;

    for(int i=0;i<5;i++){
        data.push_back(i);
    }

    cout << "\nReference operator [data] : data[2] = " <<data[2]<<endl;
    cout<< "Return Value at Front "<<data.front()<<endl;
    cout<< "Return Value at End "<<data.back()<<endl;
    cout<<"Using .at at data[2] "<<data.at(2);

    return 0;
}
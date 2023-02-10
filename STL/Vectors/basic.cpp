#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> data;
    for(int i=0;i<10;i++){
        data.push_back(i);
    }
    cout<<"Output from Start to End";
    for(vector<int>::iterator it=data.begin();it!=data.end();it++){
        cout<<*it<<endl;
    }
    cout<<"Output from End to Start";
    for(vector<int>::reverse_iterator it=data.rbegin();it!=data.rend();it++){
        cout<<*it<<endl;
    }
    return 0;
}
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    //Create 5 values with value 10
    v.assign(5,10);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    //Insert Value at the End
    v.push_back(20);
    cout<<"Value At the End is "<<v[v.size() -1 ];
    return 0;

    //Remove The Last Element
    v.pop_back(); 
    cout<<"Value At the End is "<<v[v.size() -1 ];
    return 0;
}
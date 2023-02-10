#include<iostream>
#include<set>
using namespace std;

int main(){

    //create a set
    set<char> ch;
    ch.insert('G');
    ch.insert('F');
    ch.insert('G');

    set<char>::iterator it;
    for(it=ch.begin();it!=ch.end();it++){
        cout<<*it<<endl;
    }
}
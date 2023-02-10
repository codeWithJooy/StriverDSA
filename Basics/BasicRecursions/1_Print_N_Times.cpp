#include<iostream>
using namespace std;

void recursionNTimes(int n,int times){
  if(times >0){
    cout<<n<<endl;
    recursionNTimes(n,times-1);
  }
  else{
    return ;
  }
}
int main(){
  int n=10;
  int times=10;  
  cout<<"We Will print "<<n<<" "<<times<<" times.";
  recursionNTimes(n,times);
  return 0;
}
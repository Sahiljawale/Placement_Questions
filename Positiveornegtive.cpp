//Write a program to identify of the a number is positive or negative
#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  if(n<0){
    cout<<"Negative"<<endl;
  }
  else{
    cout<<"Positive"<<endl;
  }

}

int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}

//Write a program to find Number of digits in an integer
#include<bits/stdc++.h>
using namespace std;


void solve(){
  int n;
  cin>>n;
  int count=0;
  while(n!=0){
    count++;
    n/=10;
  }
  cout<<count<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}

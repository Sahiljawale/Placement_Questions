//Write a program to find Factorial of a number
#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  int Factorial=1;
  for(int i=1;i<=n;i++){
    Factorial*=i;
  }
  
  cout<<Factorial<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
//Write a CPP program to convert total no of days into years, months, days
#include<bits/stdc++.h>
using namespace std;

void solve(){
  int days,y,m;
  cin>>days;
  y=days/365;
  days=days%365;
  m=days/30;
  days=days%30;
  cout<<y<<" Years "<<m<<" Months "<<days<<" Days"<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  
  return 0;
}

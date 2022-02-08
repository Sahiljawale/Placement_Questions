//Write a program to identify if the number is Armstrong number or not

#include<bits/stdc++.h>
using namespace std;

int solve(int n){
  int res,d;
  while(n!=0){
    d=n%10;
    res+=pow(d,3);
    n/=10;
  }
  return res;
  
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,Armstrong;
    cin>>n;
    Armstrong=solve(n);
    if(n==Armstrong){
      cout<<"Armstrong"<<endl;
    }
    else{
      cout<<"Not Armstrong"<<endl;
    }
  }
  
  return 0;
}

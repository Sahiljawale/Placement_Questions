//Write a program to identify if the character is an alphabet or not

#include<bits/stdc++.h>
using namespace std;

void solve(){
  char a;
  cin>>a;
  if(isalpha(a)){
    cout<<"Is an Alphabet"<<endl;
  }
  else{
    cout<<"Not an Alphabet"<<endl;
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

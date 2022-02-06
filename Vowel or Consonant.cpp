#include<bits/stdc++.h>
using namespace std;

void solve(){
  char a;
  string s="aeiou";
  string S="AEIOU";
  cin>>a;
  bool ans=false;
  for(int i=0;i<s.size();i++){
    if (a==s[i] || a==S[i]){
      ans=true;
      break;
    }
  }
  if(ans)
    cout<<"Vowel"<<endl;
  else
    cout<<"Consonant"<<endl;

}


int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}

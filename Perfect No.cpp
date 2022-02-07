//Write a program to identify if the number is Perfect number or not

// Perfect No: a positive integer that is equal to the sum of its proper divisors. 
//The smallest perfect number is 6, which is the sum of 1, 2, and 3. Other perfect numbers are 28, 496, and 8,128.
#include<bits/stdc++.h>
using namespace std;

void solve(){
  int no,sum=0;
  cin>>no;
  for(int i=1;i<no;i++){
    int div=no%i;
    if (div==0){
      sum+=i;
    }
  }
  if(sum==no)
    cout<<"Is a Perfect Number"<<endl;
  else
    cout<<"Not a Perfect Number"<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}

//Write a program to identify if the number is Strong number or not

//Strong numbers are those numbers whose sum of factorial of each digits is equal to the original number.

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
  int Fact=1;
  for(int i=1;i<=n;i++){
    Fact*=i;
  }
  return Fact;
}

int is_strong(int no){
  int d,res;
  while(no!=0){
    d=no%10;
    res+=factorial(d);
    no/=10;
  }
  return res;
}


int main(){
  int t;
  cin>>t;
  while(t--){
    int no,Strong;
    cin>>no;
    Strong=is_strong(no);
    if(Strong==no)
      cout<<"Is Strong"<<endl;
    else
      cout<<"Not Strong"<<endl;
  }  
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int fact(int n){
  int a=1;
  while(n>0){
    a *= n;
    n --;
  }
  return a;
}

int main(){
  int n; cin>>n;
  vector<int> f(10);
  for(int i=1; i<11; i++){
    f[10-i] = fact(i);
  }
  int c=0;
  
  while(n>0){
    for(int i=0; i<10; i++){
      if(f[i]<=n){
        n -= f[i];
        //cout << n << endl;
        c ++;
        break;
      }
    }
  }
  cout << c << endl;
  return 0;
}
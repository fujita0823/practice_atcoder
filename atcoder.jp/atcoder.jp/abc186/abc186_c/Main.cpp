#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int in7(ll x, int base){
  while(x>0){
    if(x%base==7) return 1;
    else{
      x /=base;
    }
  }
  return 0;
}
  

int main(){
  ll N; cin>>N;
  unordered_set<ll> s;
  for(int i=1; i<=N; i++){
    if(in7(i,10)) s.insert(i);
    else if(in7(i,8)) s.insert(i);
  }
  cout << N-s.size() << endl;
  return 0;
}
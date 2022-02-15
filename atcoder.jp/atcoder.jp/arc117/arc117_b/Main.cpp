#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;


int main(){
  int n,t; cin>>n;
  set<int> s;
  rep(i,n){
    cin>>t;
    s.insert(t);
  }
  
  long long ans=1, d, old=0, mod=1000000007;
  for(auto itr=s.begin(); itr!=s.end(); ++itr){
    d = *itr - old;
    ans *= (d+1);
    ans %= mod;
    old = *itr;
  }
  cout << ans << endl;
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n,x; cin>>n;
  unordered_set<ll> s;
  for(ll a=2; a*a<=n; a++){
    x = a*a;
    while(x<=n){
      s.insert(x);
      x *= a;
    }
  }
  cout << n-s.size() << endl;
  return 0;
}
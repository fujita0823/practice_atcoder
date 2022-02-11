#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
  if(a==b){
    return b;
  }
  else{
    if(a>b) return gcd(b,a-b);
    else    return gcd(a,b-a);
  }
}

ll cnt(ll n, ll x, ll y, ll z){
  return n - (n/x + n/y - n/z);
}

int main(){
  ll a,b,c,d; cin>>a>>b>>c>>d;
  ll e    = (c*d)/(gcd(c,d));
  ll sumb = cnt(b  ,c,d,e);
  ll suma = cnt(a-1,c,d,e);
  cout << sumb-suma << endl;
  return 0;
}
#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
using ll = long long;

int main(){
  int n,t; cin>>n;
  vector<ll> a(n);
  cin>>a[0]; 
  rep(i,n-1){
    cin>>t;
    a[i+1] = a[i]+t;
  }
  ll x=0,max=0,amax=0;
  rep(i,n-1){
    x += a[i];
    if(x+amax>max) max=x+amax;
    if(amax<a[i]) amax = a[i];
  }
  if(a[n-1]+x>max) max=x+a[n-1];
  cout << max << endl;
  return 0;
}
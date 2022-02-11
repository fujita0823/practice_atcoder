#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
using namespace std;
using ll = long long;

int main(){
  int n; cin>>n;
  vector<ll> a(n);
  rep(i,n) cin>> a[i];
  sort(a.begin(),a.end());
  ll sum=0;
  rep(i,n){
    sum += (2*i-n+1)*a[i];
  }
  cout << sum << endl;
  return 0;
}
  
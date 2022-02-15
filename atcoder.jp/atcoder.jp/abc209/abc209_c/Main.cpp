#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n; cin>>n;
  ll mod = 1000000007;
  vector<ll> c(n);
  ll min = 1000000000;
  for(int i=0; i<n; i++){
    cin>>c[i];
  }
  sort(c.begin(),c.end());
  ll ans = 1;
  for(int i=0; i<n; i++){
    ans *= c[i] - i;
    ans = ans % mod;
  }
  cout << ans << endl;
  return 0;
}
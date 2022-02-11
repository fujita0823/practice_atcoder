#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n,m; cin>>n>>m;
  vector<int> a(n,1); int t;
  for(int i=0; i<m; i++){
    cin >> t; a[t] = 0;
  }
  vector<ll> dp(n+1,1);
  int mod = 1000000007;
  for(int i=2; i<n+1; i++){
    dp[i] = (dp[i-1]*a[i-1] + dp[i-2]*a[i-2])%mod;
  }
  ll ans = dp[n];
  cout << ans%mod << endl;  
  return 0;
}

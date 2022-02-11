#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n,k; cin>>n>>k;
  if(n<k){
    if(k-n<n) cout << k-n << endl;
    else cout << n << endl;
  }
  else{
    ll res = n%k;
    if(res<k-res) cout << res << endl;
    else cout << k-res << endl;
  }
  return 0;
}
  
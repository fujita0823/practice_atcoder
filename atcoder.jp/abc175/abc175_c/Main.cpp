#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll x,k,d;
  cin >> x>> k >> d;
  x=abs(x);
  ll res = x%d;
  if(x/d > k){
    cout << x-k*d << endl;
    return 0;
  }
  if(res < d-res){
    ll num = k-x/d;
    if(num%2==0) cout << res << endl;
    else cout << abs(res-d) << endl;
  }
  else{
    ll num = k-x/d+1;
    if(num%2==0) cout << abs(res-d) << endl;
    else cout << res << endl;
  }
  return 0;
  
}
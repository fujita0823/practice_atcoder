#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n,ans=1; cin>>n;
  for(ll a=1; a<=floor(sqrt((double)n)); a++){
    if(n%a==0) ans=a;
  }
  cout << ans+(n/ans)-2 << endl;
  return 0;
}
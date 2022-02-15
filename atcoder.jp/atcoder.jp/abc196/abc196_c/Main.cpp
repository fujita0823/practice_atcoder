#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  string n; cin>>n;
  ll ans;
  if(n.size()%2==0){
  	ll left     = stoi(n.substr(0,n.size()/2));
    ll right    = stoi(n.substr(n.size()/2,n.size()));
    if(left<=right) ans = left;
    else ans = left-1;
  }
  else{
    ans = pow(10,n.size()/2)-1;
  }
  
  cout << ans << endl;
  return 0;
}
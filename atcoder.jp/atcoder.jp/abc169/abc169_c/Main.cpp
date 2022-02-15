#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll a,b; string t; cin>>a>>t;
  b = (ll)(t[0]*100-4800 + t[2]*10-480 + t[3]-48);
  cout << a*b /100 << endl;
  return 0;
}
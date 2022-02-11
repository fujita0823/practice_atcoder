#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll bis(ll left, ll right, ll a, ll b, ll x){
  //cout << left << ": "<< right << endl;
  if(abs(left-right)<2){
    if(a*right+b*to_string(right).size() <= x) return right;
    else return left;
  }
  ll mid = (left+right)/2;
  int d= to_string(mid).size();
  if(a*mid+b*d <= x){
    return bis(mid,right,a,b,x);
  }
  else{
    return bis(left,mid,a,b,x);
  }
}

int main(){
  ll a,b,x; cin>>a>>b>>x;
  ll max = 1000000000, ans;
  ans = bis(0,max,a,b,x);
  cout << ans << endl;
  return 0;
}
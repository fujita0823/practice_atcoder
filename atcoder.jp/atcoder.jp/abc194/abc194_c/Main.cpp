#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n; cin>>n;
  ll sum=0, sum2=0, sum3=0,t;
  for(int i=0; i<n; i++){
    cin>>t;
    sum+=t; sum2+=(t*t);
    sum3+=t*t*(n-1);
  }
  //cout << sum << " " << sum2 << " " << sum3 << endl;
  t = sum*sum-sum2;
  ll ans = sum3 - t;
  cout << ans << endl;
  return 0;
}
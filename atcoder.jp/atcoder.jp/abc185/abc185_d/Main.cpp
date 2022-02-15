#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
using namespace std;
using ll = long long;

int main(){
  ll n,m; cin>>n>>m;
  
  if(m==0){
    cout << 1 << endl;
    return 0;
  }
  vector<ll> a(m),b(m+1);
  rep(i,m) cin>>a[i];
  sort(a.begin(),a.end());
  b[0] = a[0] -1 ;
  rep(i,m){
    b[i+1] = a[i+1]-a[i]-1;
  }
  b[m] = n-a[m-1];
  
  ll min=1000000000, sum=0;
  rep(i,m+1){
    if(min>b[i] && b[i]>0) min = b[i];
  }
  
  rep(i, m+1){
    if(b[i]%min==0) sum += b[i]/min;
    else            sum += b[i]/min +1 ;
  }
  
  cout << sum << endl;
  return 0;
}
  
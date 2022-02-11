#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(){
  ll n,m,k; cin>>n>>m>>k;
  vector<ll> a(n+1),b(m+1);
  int t; a[0]=0; b[0]=0;
  for(int i=1; i<n+1; i++){
    cin>>t; a[i] = a[i-1]+t;
  }
  for(int i=1; i<m+1; i++){
    cin>>t; b[i] = b[i-1]+t;
  }
  ll ans=0, j=m;
  rep(i,n+1){
    if(a[i]>k) break;
    while(b[j] > k-a[i]) j--;
    ans = max(ans,i+j);
  }
  cout<<ans<<endl;  
  return 0;
}
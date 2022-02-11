#include <bits/stdc++.h>
#define rep(i,n) for(long long i=0; i<n; i++)
using namespace std;
using ll = long long;

int main(){
  ll n,w; cin>>n>>w;
  ll size = 200000,s,t,p,fin=0;
  vector<ll> time(size,0);
  rep(i,n){
    cin>>s>>t>>p;
    time[s] += p;
    time[t] += -p;
    if(t>fin) fin=t;
  }
  rep(i,fin){
    time[i+1] += time[i];
  }
  ll max=time[0];
  
  rep(i,fin){
   // cout << time[i] << endl;
    if(max<time[i]) max=time[i];
  }
  
  if(max>w) cout << "No" << endl;
  else      cout << "Yes"<< endl;
  return 0;
}
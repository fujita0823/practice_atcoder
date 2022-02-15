#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n,max=0,max2=0,t,idx=1,idx2=1; 
  cin>>n;
  vector<ll> a(1<<n);
  for(ll i=0; i<(1<<(n-1)); i++){
    cin>>t;
    if(t>max){
      max=t;
      idx=i+1;
 //     cout << max << " "<< idx << endl;
    }
  }
  for(ll i=0; i<(1<<(n-1)); i++){
    cin>>t;
    if(t>max2){
      max2=t;
      idx2=i+1+(1<<(n-1));
    }
  }
  if(max<max2) cout << idx << endl;
  else cout << idx2 << endl;
  return 0;
}
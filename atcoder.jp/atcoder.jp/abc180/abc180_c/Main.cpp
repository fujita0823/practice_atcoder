#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void div(ll n){
  vector<ll> latter;
  for(ll a=1; a<(ll)sqrt((double)n)+1; a++){
    if(n%a==0){
      cout << a << endl;
      if(n/a != a) latter.push_back(n/a);
    }
  }
  for(ll a=latter.size(); a>0; a--){
    cout << latter[a-1] <<  endl;
  }
  return;
}

int main(){
  ll n; cin >> n;
  vector<ll> s;
  div(n);
  return 0;
}
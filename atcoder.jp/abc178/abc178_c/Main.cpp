#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n; cin >> n;
  ll ten=1,nin=2,eht=1;
  int mod = 1000000007;
  for(int i=0; i<n; i++){
    ten = (ten*10)%mod;
    nin = (nin*9 )%mod;
    eht = (eht*8 )%mod;
  }
  cout << (ten+eht-nin+mod)%mod << endl;
  return 0;
}
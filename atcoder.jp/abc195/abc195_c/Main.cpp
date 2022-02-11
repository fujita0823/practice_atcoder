#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n; cin>>n;
  ll t=n,k=0,cnt=0, triO=1;
  while(t>999){
    t /= 1000;
    triO *= 1000;
    cnt  += n + 1 - triO;
    k++;
  }
  cout << cnt << endl;
  
  return 0;
}
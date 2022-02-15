#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n,k; cin>>n>>k;
  double ans=0;
  for(int i=1; i<n+1; i++){
    ll tmp=i; double div=1.0;
    while(tmp<k){
      tmp*=2; div/=2.0;
    }
    ans += div;
  }
  cout << fixed << setprecision(15) <<  ans/(double)n << endl;
  return 0;
}
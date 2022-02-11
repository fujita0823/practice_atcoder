#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n; cin >> n;
  int N = 1000000007;
  vector<int> a(n);
  ll sum=0, ans=0;
  for(int i=0; i<n; i++){
    cin >> a[i]; 
    sum = (sum + a[i])%N;
  }
  for(int i=0; i<n-1; i++){
    sum -= a[i];
    if(sum<0) sum += N;
    ans  = (ans + (sum*a[i])%N)%N;
  }
  cout << ans << endl;
  return 0;
}
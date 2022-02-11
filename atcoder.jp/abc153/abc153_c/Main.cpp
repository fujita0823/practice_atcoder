#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n,k; cin >> n >> k;
  ll sum=0;
  vector<int> a(n);
  for(int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(),a.end());
  for(int i=0; i<n-k; i++) sum += a[i];
  cout << sum << endl;
  return 0;
}
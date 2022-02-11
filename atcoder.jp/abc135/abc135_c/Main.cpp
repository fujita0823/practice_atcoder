#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n; cin >> n;
  vector<int> a(n+1);
  for(int i=0; i<n+1; i++) cin >> a[i];
  int t; ll sum=0;
  for(int i=0; i<n; i++){
    cin >> t;
    if(t <= a[i]+a[i+1]){
      sum += t;
      if(t>a[i]) a[i+1] -= t-a[i];
    }
    else{
      sum += a[i]+a[i+1];
      a[i+1] = 0;
    }
  }
  
  cout << sum << endl;
  return 0;
}
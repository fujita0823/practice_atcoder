#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n; ll k; cin>>n>>k;
  vector<int> a(n), b(n);
  for(int i=0; i<n; i++) cin>>a[i];
  ll less = k/n;
  ll rest = k%n;
  ll border;  
  b = a;
  sort(b.begin(), b.end());
  if(rest==0) border = 0;
  else        border = b[rest-1];
  for(int i=0; i<n; i++){
    if(a[i] <= border){
      cout << less + 1 << endl;
    }
    else{
      cout << less << endl;
    }
  }
  return 0;
}
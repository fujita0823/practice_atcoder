#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k,q; cin >> n >> k >> q;
  if(k>q){
    for(int i=0; i<n; i++) cout << "Yes" << endl;
    return 0;
  }
  else{
    vector<int> a(n,k-q);
    int t;
    for(int i=0; i<q; i++){
      cin >> t;
      a[t-1]++;
    }
    for(int i=0; i<n; i++){
     // cout << a[i] << endl;
      if(a[i]>0) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }
  return 0;
}
      
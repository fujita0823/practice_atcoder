#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> a(n);
  int fst=0,scd=0;
  for(int i=0; i<n; i++){
    cin >> a[i];
    if (a[i]>fst){
      scd = fst;
      fst = a[i];
    }
    else if(a[i]>scd){
      scd = a[i];
    }
  }
  for(int i=0; i<n; i++){
    if(a[i] == fst) cout << scd << endl;
    else cout << fst << endl;
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,t; cin>>n;
  vector<int> a(n,0);
  for(int i=0; i<n-1; i++){
    cin >> t;
    a[t-1]++;
  }
  for(int i=0; i<n; i++){
    cout << a[i] << endl;
  }
  return 0;
}
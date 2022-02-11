#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m; cin>>n>>m;
  int max=1,min=n,r,l;
  for(int i=0; i<m; i++){
    cin >> l >> r;
    if(l>max) max=l;
    if(r<min) min=r;
  }
  if(min<max) cout << 0 << endl;
  else cout << min-max+1 << endl;
  return 0;
}
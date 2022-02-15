#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m,x; cin>>n>>m>>x;
  vector<int> c(n);
  vector<vector<int>> a(n,vector<int>(m));
  for(int i=0; i<n; i++){
    cin >> c[i];
    for(int j=0; j<m; j++){
      cin >> a[i][j];
    }
  }
  int min=10000000; 
  for(int i=0; i<1<<n; i++){
    int mon=0;
    vector<int> score(m,0);
    for(int j=0; j<n; j++){
      if((i&1<<j)>>j){
        mon += c[j];
        for(int k=0; k<m; k++){
          score[k] += a[j][k];
        }
      }
    }
    int fin=1;
    for(int k=0; k<m; k++){
      if(score[k]<x) fin=0;
    }
    if(fin & mon<min) min=mon;
  }
  if(min<10000000) cout << min << endl;
  else cout << -1 << endl;
  return 0;
}
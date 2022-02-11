#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
using ll = long long;
int n,m; 

ll calc(int i, int j, vector<vector<int>> a){
  ll score=0;
  rep(k,n){
    if(a[k][i]>a[k][j]) score+= a[k][i];
    else score+= a[k][j];
  }
  return score;
}
  

int main(){
  cin>>n>>m;
  vector<vector<int>> a(n,vector<int>(m));
  rep(i,n){
    rep(j,m){
      cin>>a[i][j];
    }
  }
  
  ll max=0, score;
  rep(i,m){
    for(int j=i+1; j<m; j++){
      score = calc(i,j,a);
      if(score>max) max = score;
    }
  }
  
  cout << max << endl;
  return 0;
}
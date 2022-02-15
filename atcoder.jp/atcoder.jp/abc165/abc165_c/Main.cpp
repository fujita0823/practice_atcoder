#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
using namespace std;
int N,M,qs=50,point=0;
vector<vector<int>> Q(qs,vector<int>(4));

int cont(vector<int> &A){
  int val=0;
  rep(i,qs){
    //cout << A[Q[i][1]-1] << " " << A[Q[i][0]-1] << " " <<  Q[i][2] << " " <<  Q[i][3] << endl;
    if(A[Q[i][1]-1] - A[Q[i][0]-1] == Q[i][2]) val+=Q[i][3];
  }
  return val;
}

void dfs(vector<int> &A){
  if(A.size() == 10){
    if(cont(A)>point){
      point=cont(A);
    }
    return;
  }
  
  int last = (A.empty() ? 1: A.back());
  for(int i=last; i<=M; i++){
    A.push_back(i);
    dfs(A);
    A.pop_back();
  }
}


int main(){
  int n,m,q; cin>>n>>m>>q;
  N=n; M=m; qs=q;
  rep(i,qs){
    rep(j,4) cin>>Q[i][j];
  }
  vector<int> A(0);
  dfs(A);
  cout << point << endl;
  return 0;
}
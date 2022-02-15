#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
using namespace std;
int H,W,A,B,cnt=0;

void dfs(vector<vector<int>> &used, int a, int b){
  int next_i=H, next_j=W, fin=0;
  if(a==0 && b==0){
    cnt++;
    return;
  }
  rep(i,H){
    rep(j,W){
      if(!used[i][j]){
        next_i = i; next_j = j; fin=1; break;
      }
    }
    if(fin) break;
  }
  if(next_i==H && next_j==W){
    cnt++;
    cout << "Yes" << endl;
    return;
  }
  
  if(a>0){
    if(next_j<W-1 && used[next_i][next_j+1]==0){
      used[next_i][next_j  ] = 1;
      used[next_i][next_j+1] = 1;
      a--;
      dfs(used,a,b);
      a++;
      used[next_i][next_j  ] = 0;
      used[next_i][next_j+1] = 0;
    }
    if(next_i<H-1 && used[next_i+1][next_j]==0){
      used[next_i  ][next_j] = 1;
      used[next_i+1][next_j] = 1;
      a--;
      dfs(used,a,b);
      a++;
      used[next_i  ][next_j] = 0;
      used[next_i+1][next_j] = 0;
    }
  }
  if(b>0){
      used[next_i][next_j] = 1;
      b--;
      /*
      rep(i,H){
        rep(j,W){
          if(used[i][j]) cout << '#';
          else cout << '.';
        }
        cout << endl;
      }
      */
      dfs(used,a,b);
      b++;
      used[next_i][next_j] = 0;
  }
}

int main(){
  cin>>H>>W>>A>>B;
  vector<vector<int>>used(H,vector<int>(W,0));
  dfs(used,A,B);
  cout << cnt << endl;
  return 0;
}